#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=avr-ranlib
CC=avr-gcc
CCC=avr-g++
CXX=avr-g++
FC=gfortran
AS=avr-as
AR=avr-ar

# Macros
CND_PLATFORM=Avr-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/CDC.o \
	${OBJECTDIR}/HID.o \
	${OBJECTDIR}/HardwareSerial.o \
	${OBJECTDIR}/HardwareSerial0.o \
	${OBJECTDIR}/HardwareSerial1.o \
	${OBJECTDIR}/HardwareSerial2.o \
	${OBJECTDIR}/HardwareSerial3.o \
	${OBJECTDIR}/IPAddress.o \
	${OBJECTDIR}/Print.o \
	${OBJECTDIR}/Stream.o \
	${OBJECTDIR}/Tone.o \
	${OBJECTDIR}/USBCore.o \
	${OBJECTDIR}/WInterrupts.o \
	${OBJECTDIR}/WMath.o \
	${OBJECTDIR}/WString.o \
	${OBJECTDIR}/abi.o \
	${OBJECTDIR}/hooks.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/new.o \
	${OBJECTDIR}/wiring.o \
	${OBJECTDIR}/wiring_analog.o \
	${OBJECTDIR}/wiring_digital.o \
	${OBJECTDIR}/wiring_pulse.o \
	${OBJECTDIR}/wiring_pulse.o \
	${OBJECTDIR}/wiring_shift.o


# C Compiler Flags
CFLAGS=-Os -Wall -ffunction-sections -fdata-sections -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=100

# CC Compiler Flags
CCFLAGS=-Os -Wall -fno-exceptions -ffunction-sections -fdata-sections -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=100
CXXFLAGS=-Os -Wall -fno-exceptions -ffunction-sections -fdata-sections -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=100

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libarduino_lib.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libarduino_lib.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libarduino_lib.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libarduino_lib.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libarduino_lib.a

${OBJECTDIR}/CDC.o: CDC.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CDC.o CDC.cpp

${OBJECTDIR}/HID.o: HID.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HID.o HID.cpp

${OBJECTDIR}/HardwareSerial.o: HardwareSerial.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HardwareSerial.o HardwareSerial.cpp

${OBJECTDIR}/HardwareSerial0.o: HardwareSerial0.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HardwareSerial0.o HardwareSerial0.cpp

${OBJECTDIR}/HardwareSerial1.o: HardwareSerial1.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HardwareSerial1.o HardwareSerial1.cpp

${OBJECTDIR}/HardwareSerial2.o: HardwareSerial2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HardwareSerial2.o HardwareSerial2.cpp

${OBJECTDIR}/HardwareSerial3.o: HardwareSerial3.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HardwareSerial3.o HardwareSerial3.cpp

${OBJECTDIR}/IPAddress.o: IPAddress.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/IPAddress.o IPAddress.cpp

${OBJECTDIR}/Print.o: Print.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Print.o Print.cpp

${OBJECTDIR}/Stream.o: Stream.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Stream.o Stream.cpp

${OBJECTDIR}/Tone.o: Tone.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tone.o Tone.cpp

${OBJECTDIR}/USBCore.o: USBCore.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/USBCore.o USBCore.cpp

${OBJECTDIR}/WInterrupts.o: WInterrupts.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/WInterrupts.o WInterrupts.c

${OBJECTDIR}/WMath.o: WMath.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/WMath.o WMath.cpp

${OBJECTDIR}/WString.o: WString.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/WString.o WString.cpp

${OBJECTDIR}/abi.o: abi.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/abi.o abi.cpp

${OBJECTDIR}/hooks.o: hooks.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/hooks.o hooks.c

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/new.o: new.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/new.o new.cpp

${OBJECTDIR}/wiring.o: wiring.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/wiring.o wiring.c

${OBJECTDIR}/wiring_analog.o: wiring_analog.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/wiring_analog.o wiring_analog.c

${OBJECTDIR}/wiring_digital.o: wiring_digital.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/wiring_digital.o wiring_digital.c

${OBJECTDIR}/wiring_pulse.o: wiring_pulse.S 
	${MKDIR} -p ${OBJECTDIR}
	$(AS) $(ASFLAGS) -g -o ${OBJECTDIR}/wiring_pulse.o wiring_pulse.S

${OBJECTDIR}/wiring_pulse.o: wiring_pulse.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/wiring_pulse.o wiring_pulse.c

${OBJECTDIR}/wiring_shift.o: wiring_shift.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -I. -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/wiring_shift.o wiring_shift.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libarduino_lib.a

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
