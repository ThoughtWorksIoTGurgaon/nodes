#include <Arduino.h>
#include <HardwareSerial.h>
#include "SoftwareSerial.h"
#include <Protocol.h>
#include <Service.h>
#include <ServiceDelegate.h>
#include <espduino.h>
#include <mqtt.h>

Protocol protocol;
extern HardwareSerial Serial;
SoftwareSerial debugPort(2, 3); // RX, TX

ESP esp(&Serial, &debugPort, 4);
MQTT mqtt(&esp);

boolean wifiConnected = false;

const char * ssid = "ITI";
const char * passkey = "";
const char * deviceName = "Neville Longbottom";
const char * mqttHost = "192.168.1.3";
int mqttPort = 1883;
const char * mqttUser = "";
const char * mqttPass = "";

const char * deviceId     = "sdFGHDjv7w6fdsF";
const char * dataTopic    = "/device/sdFGHDjv7w6fdsF/data";
const char * commandTopic = "/device/sdFGHDjv7w6fdsF/cmd";
const char * baudrate = "19200";

// Declared weak in Arduino.h to allow user redefinitions.
int atexit(void (* /*func*/ )()) { return 0; }

// Weak empty variant initialization function.
// May be redefined by variant files.
void initVariant() __attribute__((weak));
void initVariant() { }

char buffer[5];

class SwitchServiceDelegate: public ServiceDelegate {
    int pin;
    
public:
    SwitchServiceDelegate(int pin): pin(pin) {}
    
    void didWriteToCharacteristic(char id, int len, char * value) {
        if (*value == 0) digitalWrite(pin, LOW);
        else digitalWrite(pin, HIGH);
    }
    void didReadFromCharacteristic(char id, int len, char * value) {}
};

class SwitchService : public Service {
public:
    SwitchService(char * data): Service(1, data, new SwitchServiceDelegate(13)) {}
    
    int getDataSizeForCharacteristic(char id) {
        return 1;
    }
    
    int getOffsetForCharacteristic(char id) {
        return 0;
    }
    
    int getDataSize() {
        return 4;
    }
} switchService(buffer);


void wifiCb(void* response)
{
  uint32_t status;
  RESPONSE res(response);

  if(res.getArgc() == 1) {
    res.popArgs((uint8_t*)&status, 4);
    if(status == STATION_GOT_IP) {
      debugPort.println("WIFI CONNECTED");
      mqtt.connect(mqttHost, mqttPort);
      wifiConnected = true;
    } else {
      wifiConnected = false;
      mqtt.disconnect();
    }
    
  }
}

void mqttConnected(void* response)
{
  debugPort.println("Connected to Mqtt");
  mqtt.subscribe(commandTopic); //or mqtt.subscribe("topic"); /*with qos = 0*/
}

void mqttDisconnected(void* response)
{

}

void mqttData(void* response)
{
  RESPONSE res(response);

  debugPort.print("Received: topic=");
  String topic = res.popString();
  debugPort.println(topic);

  String inputString = res.popString();
  debugPort.println(inputString);

  unsigned char * data = (unsigned char *)inputString.c_str();
  
  Packet * packet = protocol.parsePacket(inputString.length(), data);
  if (packet->getType() == PacketType::Read) {
      ReadReqPacket * readRequestPacket = (ReadReqPacket *) packet;
      ReadResponsePacket * responsePacket = protocol.buildResponsePacketForReadRequest(readRequestPacket, &switchService);
      mqtt.publish(dataTopic, (char *)responsePacket->getData());
  }
}

void mqttPublished(void* response)
{

}

void setup() {
  Serial.begin(19200);
  debugPort.begin(19200);
  
  esp.enable();
  
  delay(500);
  
  esp.reset();
  
  delay(500);
  
  debugPort.println("Device Reset. Waiting for it to get ready");
  
  while(!esp.ready());
  
  debugPort.println("ARDUINO: setup mqtt client");
  if(!mqtt.begin(deviceName, mqttUser, mqttPass, 120, 1)) {
    debugPort.println("ARDUINO: fail to setup mqtt");
    while(1);
  }

  debugPort.println("ARDUINO: setup mqtt lwt");
  mqtt.lwt("/lwt", "offline", 0, 0); //or mqtt.lwt("/lwt", "offline");
  
  /*setup mqtt events */
  mqtt.connectedCb.attach(&mqttConnected);
  mqtt.disconnectedCb.attach(&mqttDisconnected);
  mqtt.publishedCb.attach(&mqttPublished);
  mqtt.dataCb.attach(&mqttData);

  /*setup wifi*/
  debugPort.println("ARDUINO: setup wifi");
  esp.wifiCb.attach(&wifiCb);

  esp.wifiConnect(ssid, passkey);

  debugPort.println("ARDUINO: system started");
  
  switchService.initialize();
}

void loop() {
  esp.process();
  if(wifiConnected) {

  }
}

int main(void)
{
    init();

    initVariant();

    #if defined(USBCON)
	USBDevice.attach();
    #endif
	
    setup();

    for (;;) {
        loop();
        if (serialEventRun) serialEventRun();
    }

    return 0;
}
 