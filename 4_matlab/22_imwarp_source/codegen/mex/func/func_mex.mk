MATLAB_ROOT = C:\MATLAB\R2018b
MAKEFILE = func_mex.mk

include func_mex.mki


SRC_FILES =  \
	func_data.c \
	func_initialize.c \
	func_terminate.c \
	func.c \
	validateattributes.c \
	det.c \
	eml_int_forloop_overflow_check.c \
	imwarp.c \
	imref2d.c \
	mrdivide_helper.c \
	warning.c \
	norm.c \
	_coder_func_info.c \
	_coder_func_api.c \
	_coder_func_mex.c \
	func_emxutil.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = func_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

BlockModules_LIBS = "$(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwippgeotrans.lib" 
SYS_LIBS = $(BlockModules_LIBS) 


#
#====================================================================
# gmake makefile fragment for building MEX functions using MSVC
# Copyright 2007-2016 The MathWorks, Inc.
#====================================================================
#
SHELL = cmd
OBJEXT = obj
CC = $(COMPILER)
LD = $(LINKER)
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLIST  = $(OBJLISTC:.cpp=.$(OBJEXT))

TARGETMT = $(TARGET).manifest
MEX = $(TARGETMT)
STRICTFP = /fp:strict

target: $(MEX)

MATLAB_INCLUDES = /I "$(MATLAB_ROOT)\simulink\include"
MATLAB_INCLUDES+= /I "$(MATLAB_ROOT)\toolbox\shared\simtargets"
SYS_INCLUDE = $(MATLAB_INCLUDES)

# Additional includes

SYS_INCLUDE += /I "C:\dev\build\4_matlab\22_imwarp\codegen\mex\func"
SYS_INCLUDE += /I "C:\dev\build\4_matlab\22_imwarp"
SYS_INCLUDE += /I ".\interface"
SYS_INCLUDE += /I "$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += /I "."

DIRECTIVES = $(MEX_FILE_NAME_WO_EXT)_mex.arf
COMP_FLAGS = $(COMPFLAGS) $(OMPFLAGS)
LINK_FLAGS = $(filter-out /export:mexFunction, $(LINKFLAGS))
LINK_FLAGS += /NODEFAULTLIB:LIBCMT
ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS) $(STRICTFP)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += $(OMPLINKFLAGS)
LINK_FLAGS += /OUT:$(TARGET)
LINK_FLAGS += 

CFLAGS = $(COMP_FLAGS)   $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS = $(COMP_FLAGS)   $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CC) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : C:\dev\build\4_matlab\22_imwarp/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : C:\dev\build\4_matlab\22_imwarp\codegen\mex\func/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CFLAGS) "$<"



%.$(OBJEXT) : C:\dev\build\4_matlab\22_imwarp/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : C:\dev\build\4_matlab\22_imwarp\codegen\mex\func/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CC) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(LINK_FLAGS) $(OBJLIST) $(USER_LIBS) $(SYS_LIBS) @$(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

$(TARGETMT): $(TARGET)
	mt -outputresource:"$(TARGET);2" -manifest "$(TARGET).manifest"

#====================================================================

