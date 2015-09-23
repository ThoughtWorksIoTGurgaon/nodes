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
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Packet.o \
	${OBJECTDIR}/PacketBuilder.o \
	${OBJECTDIR}/Protocol.o \
	${OBJECTDIR}/ReadReqPacket.o \
	${OBJECTDIR}/tests/test_helper.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# C Compiler Flags
CFLAGS=`cppunit-config --cflags` 

# CC Compiler Flags
CCFLAGS=`cppunit-config --cflags` 
CXXFLAGS=`cppunit-config --cflags` 

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=`cppunit-config --libs`  

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libprotocol_lib.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libprotocol_lib.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libprotocol_lib.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libprotocol_lib.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libprotocol_lib.a

${OBJECTDIR}/Packet.o: Packet.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Packet.o Packet.cpp

${OBJECTDIR}/PacketBuilder.o: PacketBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PacketBuilder.o PacketBuilder.cpp

${OBJECTDIR}/Protocol.o: Protocol.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Protocol.o Protocol.cpp

${OBJECTDIR}/ReadReqPacket.o: ReadReqPacket.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ReadReqPacket.o ReadReqPacket.cpp

${OBJECTDIR}/tests/test_helper.o: tests/test_helper.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/test_helper.o tests/test_helper.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/readpackettest.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} 


${TESTDIR}/tests/readpackettest.o: tests/readpackettest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I. -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/readpackettest.o tests/readpackettest.cpp


${OBJECTDIR}/Packet_nomain.o: ${OBJECTDIR}/Packet.o Packet.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Packet.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Packet_nomain.o Packet.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Packet.o ${OBJECTDIR}/Packet_nomain.o;\
	fi

${OBJECTDIR}/PacketBuilder_nomain.o: ${OBJECTDIR}/PacketBuilder.o PacketBuilder.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/PacketBuilder.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PacketBuilder_nomain.o PacketBuilder.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/PacketBuilder.o ${OBJECTDIR}/PacketBuilder_nomain.o;\
	fi

${OBJECTDIR}/Protocol_nomain.o: ${OBJECTDIR}/Protocol.o Protocol.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Protocol.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Protocol_nomain.o Protocol.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Protocol.o ${OBJECTDIR}/Protocol_nomain.o;\
	fi

${OBJECTDIR}/ReadReqPacket_nomain.o: ${OBJECTDIR}/ReadReqPacket.o ReadReqPacket.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ReadReqPacket.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ReadReqPacket_nomain.o ReadReqPacket.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/ReadReqPacket.o ${OBJECTDIR}/ReadReqPacket_nomain.o;\
	fi

${OBJECTDIR}/tests/test_helper_nomain.o: ${OBJECTDIR}/tests/test_helper.o tests/test_helper.cpp 
	${MKDIR} -p ${OBJECTDIR}/tests
	@NMOUTPUT=`${NM} ${OBJECTDIR}/tests/test_helper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests/test_helper_nomain.o tests/test_helper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/tests/test_helper.o ${OBJECTDIR}/tests/test_helper_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libprotocol_lib.a

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
