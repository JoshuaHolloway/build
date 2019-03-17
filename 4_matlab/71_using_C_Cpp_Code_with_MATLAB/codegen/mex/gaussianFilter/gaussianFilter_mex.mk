MATLAB_ROOT = C:\MATLAB\R2018b
MAKEFILE = gaussianFilter_mex.mk

include gaussianFilter_mex.mki


SRC_FILES =  \
	Gaussian3x3.c \
	gaussianFilter_data.c \
	gaussianFilter_initialize.c \
	gaussianFilter_terminate.c \
	gaussianFilter.c \
	_coder_gaussianFilter_info.c \
	_coder_gaussianFilter_api.c \
	_coder_gaussianFilter_mex.c \
	gaussian3x3.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = gaussianFilter_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = 


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

SYS_INCLUDE += /I "C:\dev\build\4_matlab\71_using_C_Cpp_Code_with_MATLAB\codegen\mex\gaussianFilter"
SYS_INCLUDE += /I "C:\dev\build\4_matlab\71_using_C_Cpp_Code_with_MATLAB"
SYS_INCLUDE += /I "C:\MATLAB_Demos\Coder_Edge_Detection"
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

%.$(OBJEXT) : /%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : C:\dev\build\4_matlab\71_using_C_Cpp_Code_with_MATLAB/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : C:\dev\build\4_matlab\71_using_C_Cpp_Code_with_MATLAB\codegen\mex\gaussianFilter/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CFLAGS) "$<"



%.$(OBJEXT) : /%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : C:\dev\build\4_matlab\71_using_C_Cpp_Code_with_MATLAB/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : C:\dev\build\4_matlab\71_using_C_Cpp_Code_with_MATLAB\codegen\mex\gaussianFilter/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CC) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(LINK_FLAGS) $(OBJLIST) $(USER_LIBS) $(SYS_LIBS) @$(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

$(TARGETMT): $(TARGET)
	mt -outputresource:"$(TARGET);2" -manifest "$(TARGET).manifest"

#====================================================================

