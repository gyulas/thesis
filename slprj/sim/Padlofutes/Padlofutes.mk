# Copyright 1994-2018 The MathWorks, Inc.
#
# File    : ert_lcc64.tmf   
#
# Abstract:
#       Template makefile for building a PC-based stand-alone embedded real-time 
#       version of Simulink model using generated C code and 
#			LCC compiler Version 2.4
#
#       This makefile attempts to conform to the guidelines specified in the
#       IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make (gmake) which is located in matlabroot/bin/win64.
#
#       Note that this template is automatically customized by the build 
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#         OPT_OPTS       - Optimization options. Default is none. To enable 
#                          debugging specify as OPT_OPTS=-g4. 
#         OPTS           - User specific compile options.
#         USER_SRCS      - Additional user sources, such as files needed by
#                          S-functions.
#         USER_INCLUDES  - Additional include paths 
#                          (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#                          (For Lcc, have a '/'as file seperator before the 
#                          file name instead of a '\' . 
#                          i.e.,  d:\work\proj1/myfile.c - reqd for 'gmake')
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see ert.tlc

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = "%MATLAB%\bin\win64\gmake"
SHELL           = cmd
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = any
COMPILER_TOOL_CHAIN = lcc

# Opt in to simplified format by specifying compatible Toolchain
TOOLCHAIN_NAME = "LCC-win64 v2.4.1 | gmake (64-bit Windows)"

MAKEFILE_FILESEP = /

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS         - List of additional S-function modules.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link. 
#  NUMST               - Number of sample times
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  INTEGER_CODE        - yes (1) or no (0): Is generated code purely integer
#  MAT_FILE            - yes (1) or no (0): Should mat file logging be done,
#                        if 0, the generated code runs indefinitely
#  MULTI_INSTANCE_CODE - Is the generated code multi instantiable (1/0)?
#  SHRLIBTARGET        - Is this build intended for generation of a shared library instead 
#                        of executable (1/0)?
#  MAKEFILEBUILDER_TGT - Is this build performed by the MakefileBuilder class
#                        e.g. to create a PIL executable?
#  STANDALONE_SUPPRESS_EXE - Build the standalone target but only create object code modules 
#                            and do not build an executable

MODEL                = Padlofutes
MODULES              = Padlofutes.c Padlofutes_capi.c
MAKEFILE             = Padlofutes.mk
MATLAB_ROOT          = C:/Program Files/MATLAB/R2018b
ALT_MATLAB_ROOT      = C:/PROGRA~1/MATLAB/R2018b
MATLAB_BIN           = C:/Program Files/MATLAB/R2018b/bin
ALT_MATLAB_BIN       = C:/PROGRA~1/MATLAB/R2018b/bin
MASTER_ANCHOR_DIR    = 
START_DIR            = C:/Users/gylaszlo.SCH/Documents/szakdoga/thesis
S_FUNCTIONS          = 
S_FUNCTIONS_LIB      = 
NUMST                = 1
NCSTATES             = 0
BUILDARGS            =  GENERATE_ERT_S_FUNCTION=0 GENERATE_ASAP2=0 EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 OPTS="-DMATLAB_MEX_FILE"
MULTITASKING         = 0
INTEGER_CODE         = 0
MAT_FILE             = 0
ALLOCATIONFCN        = 0
ONESTEPFCN           = 0
TERMFCN              = 1
MULTI_INSTANCE_CODE  = 0
CLASSIC_INTERFACE    = 0
MODELREFS            = 
SHARED_SRC           = ../../../slprj/sim/_sharedutils/*.c*
SHARED_SRC_DIR       = ../../../slprj/sim/_sharedutils
SHARED_BIN_DIR       = ../../../slprj/sim/_sharedutils
SHARED_LIB           = ../../../slprj/sim/_sharedutils/rtwshared.lib
SHARED_LIB_LINK      = $(subst /,\,$(SHARED_LIB))
GEN_SAMPLE_MAIN      = 0
SHRLIBTARGET         = 0
MAKEFILEBUILDER_TGT  = 0
ENABLE_SLEXEC_SSBRIDGE  = 1
STANDALONE_SUPPRESS_EXE = 0
OPTIMIZATION_FLAGS      = -DNDEBUG
ADDITIONAL_LDFLAGS      = 
DEFINES_CUSTOM          = 
SYSTEM_LIBS             = -L"C:\Program Files\MATLAB\R2018b\extern\lib\win64\microsoft" libfixedpoint.lib libmwmathutil.lib libmwipp.lib libmwsl_AsyncioQueue.lib sf_runtime.lib libmwslexec_simlog.lib libmwcoder_ToAsyncQueueTgtAppSvc.lib libmwsl_simtarget_instrumentation.lib libmwsl_simtarget_core.lib libmwstringutil.lib
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0

#--------------------------- Model and reference models -----------------------
MODELLIB                  = Padlofuteslib.lib
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = Padlofutes_ref.rsp
MODELREF_INC_PATH         = 
RELATIVE_PATH_TO_ANCHOR   = ../../..
# NONE: standalone, SIM: modelref sim, RTW: modelref coder target
MODELREF_TARGET_TYPE       = SIM
MODELREF_SFCN_SUFFIX       = _msf
ISPROTECTINGMODEL          = NOTPROTECTING
PROT_CAPIC_SUFFIX          = _capi.c
PROT_CAPIO_SUFFIX          = _capi_host.obj


#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
MATLAB_BIN := $(ALT_MATLAB_BIN)
endif

#--------------------------- Tool Specifications -------------------------------

LCC = $(MATLAB_ROOT)\sys\lcc64\lcc64
include $(MATLAB_ROOT)\rtw\c\tools\lcc64tools.mak

CMD_FILE             = $(MODEL).rsp

#------------------------------ Include Path -----------------------------------

# Additional includes 

ADD_INCLUDES = \
	-I$(START_DIR) \
	-I$(START_DIR)/slprj/sim/Padlofutes \
	-I$(START_DIR)/model/subsystems \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common \
	-I$(MATLAB_ROOT)/rtw/c/ert \
	-I$(START_DIR)/slprj/sim/_sharedutils \


# see COMPILER_INCLUDES from lcctool.mak

SHARED_INCLUDES =
ifneq ($(SHARED_SRC_DIR),)
SHARED_INCLUDES = -I$(SHARED_SRC_DIR) 
endif

INCLUDES = -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(MODELREF_INC_PATH) $(ADD_INCLUDES) \
           $(COMPILER_INCLUDES) $(USER_INCLUDES) \
           $(SHARED_INCLUDES)

#-------------------------------- C Flags --------------------------------------

# Optimization Options
OPT_OPTS = $(DEFAULT_OPT_OPTS)

# General User Options
OPTS =

# Compiler options, etc:
ifneq ($(OPTIMIZATION_FLAGS),)
CC_OPTS = $(OPTS) $(ANSI_OPTS)  $(OPTIMIZATION_FLAGS)
else
CC_OPTS = $(OPT_OPTS) $(OPTS) $(ANSI_OPTS) 
endif

CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DNUMST=$(NUMST) -DNCSTATES=$(NCSTATES) \
		  -DMAT_FILE=$(MAT_FILE) -DINTEGER_CODE=$(INTEGER_CODE) \
		  -DONESTEPFCN=$(ONESTEPFCN) -DTERMFCN=$(TERMFCN) \
		  -DHAVESTDIO -DMULTI_INSTANCE_CODE=$(MULTI_INSTANCE_CODE) \
		  -DCLASSIC_INTERFACE=$(CLASSIC_INTERFACE) \
		  -DALLOCATIONFCN=$(ALLOCATIONFCN)

ifeq ($(MODELREF_TARGET_TYPE),SIM)
CPP_REQ_DEFINES += -DMDL_REF_SIM_TGT=1 
ifneq ($(ENABLE_SLEXEC_SSBRIDGE), 0)
CPP_REQ_DEFINES += -DENABLE_SLEXEC_SSBRIDGE=$(ENABLE_SLEXEC_SSBRIDGE)
endif
else
CPP_REQ_DEFINES += -DMT=$(MULTITASKING)
endif

CPP_REQ_DEFINES += -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

CFLAGS = $(DEFAULT_CFLAGS) $(CC_OPTS) $(DEFINES_CUSTOM) $(CPP_REQ_DEFINES) $(INCLUDES) -w -noregistrylookup 

# Additional flags required for SIM target
CFLAGS += -dll -Zp8 -noregistrylookup -DLCC_WIN64

CPP_REQ_DEFINES += -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LDFLAGS = -s -L$(LIB)
else
LDFLAGS = -L$(LIB)
endif

#-------------------------- Additional Libraries ------------------------------

LIBS =


LIBS +=  $(S_FUNCTIONS_LIB)

#----------------------------- Source Files ------------------------------------
ADD_SRCS =

SRCS = $(ADD_SRCS) $(MODULES)

ifneq ($(MODELREF_TARGET_TYPE), SIM)
  SRCS  += $(S_FUNCTIONS)
endif

ifeq ($(MODELREF_TARGET_TYPE), NONE)
  ifeq ($(SHRLIBTARGET),1)
#--- Shared library target (.dll) ---
    PRODUCT            = $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL)_win32.dll
    BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -dll -o $(PRODUCT)
    BUILD_PRODUCT_TYPE = dynamically linked library
    SRCS               += lcc_dll_main.c  
  else
    ifeq ($(MAKEFILEBUILDER_TGT),1)
      PRODUCT            = $(MODEL).exe
      BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -o $(PRODUCT)
      BUILD_PRODUCT_TYPE = executable
      PREBUILT_OBJS       = $(MODULES:.c=.obj)
    else
      ifeq ($(STANDALONE_SUPPRESS_EXE),1)
#--- Build library only for top level model
        PRODUCT            = ObjectModulesOnly
        BUILD_PRODUCT_TYPE = object modules
      else
#--- Stand-alone model (.exe) ---
        PRODUCT            = $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL).exe
        BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -o $(PRODUCT)
        BUILD_PRODUCT_TYPE = executable
      endif
    endif
  endif
else
  # Model reference simulation or coder target
  PRODUCT            = $(MODELLIB)
  BUILD_PRODUCT_TYPE = library
endif

USER_SRCS =

USER_OBJS       = $(USER_SRCS:.c=.obj)
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

OBJS      = $(SRCS:.c=.obj) $(USER_OBJS)
PROT_CAPIC  = $(addsuffix $(PROT_CAPIC_SUFFIX), $(MODEL))
PROT_CAPIO  = $(addsuffix $(PROT_CAPIO_SUFFIX), $(MODEL))

SHARED_SRC := $(wildcard $(SHARED_SRC))
SHARED_OBJS_NO_PATH = $(addsuffix .obj, $(basename $(notdir $(SHARED_SRC))))
SHARED_OBJS = $(addprefix $(join $(SHARED_BIN_DIR), /), $(SHARED_OBJS_NO_PATH))
FMT_SHARED_OBJS = $(subst /,\,$(SHARED_OBJS))

DEF_FILE = $(MODEL).def

#--------------------------------- Rules ---------------------------------------
ifeq ($(MODELREF_TARGET_TYPE),NONE)
  ifeq ($(SHRLIBTARGET),1)
    $(PRODUCT) : $(OBJS) $(SHARED_LIB) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) @$(CMD_FILE) $(LOCAL_USER_OBJS) @$(MODELREF_LINK_RSPFILE) $(SHARED_LIB_LINK) $(LIBS) $(MODEL).def
#--- Comment out the next line to retain .lib and .exp files ---
	@del $(RELATIVE_PATH_TO_ANCHOR)\$(MODEL)_win32.lib $(RELATIVE_PATH_TO_ANCHOR)\$(MODEL)_win32.exp
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
  else
    ifeq ($(MAKEFILEBUILDER_TGT),1)
      $(PRODUCT) : $(PREBUILT_OBJS) $(OBJS) $(MODELLIB) $(SHARED_LIB) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) $(PREBUILT_OBJS) @$(CMD_FILE) $(LOCAL_USER_OBJS) $(MODELLIB) @$(MODELREF_LINK_RSPFILE) $(SHARED_LIB_LINK) $(LIBS)
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
    else
      ifeq ($(STANDALONE_SUPPRESS_EXE), 1)
        .PHONY: $(PRODUCT)
        $(PRODUCT) : $(OBJS) $(SHARED_LIB) $(LIBS) $(MODELREF_LINK_LIBS)
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
      else
        $(PRODUCT) : $(OBJS) $(SHARED_LIB) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) @$(CMD_FILE) $(LOCAL_USER_OBJS) @$(MODELREF_LINK_RSPFILE) $(SHARED_LIB_LINK) $(LIBS) $(SYSTEM_LIBS)
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
      endif
    endif
  endif
else
 ifeq ($(MODELREF_TARGET_TYPE),SIM)
  ifeq ($(ISPROTECTINGMODEL),PROTECTING)
  all : $(PRODUCT) $(PROT_CAPIO)
  endif
  $(PRODUCT) : $(OBJS) $(SHARED_LIB) $(LIBS)
	@if exist $(MODELLIB) del "$(MODELLIB)"
	$(LIBCMD) /out:$(MODELLIB) @$(CMD_FILE) $(LOCAL_USER_OBJS)
	@cmd /C "echo ### Created $(MODELLIB)"
  ifeq ($(ISPROTECTINGMODEL),PROTECTING)
  $(PROT_CAPIO) : $(PROT_CAPIC)
	$(CC) -c $(CFLAGS) -DHOST_CAPI_BUILD $(PROT_CAPIC) /Fo$(PROT_CAPIO)
  endif
 else
  $(PRODUCT) : $(OBJS) $(SHARED_LIB)
	@if exist $(MODELLIB) del "$(MODELLIB)"
	$(LIBCMD) /out:$(MODELLIB) @$(CMD_FILE) $(LOCAL_USER_OBJS)
	@cmd /C "echo ### Created $(MODELLIB)"
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
 endif
endif

%.obj : %.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : %.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

# compile rt_main.c or rt_malloc_main.c from rtw/c/src/common if one was not generated
ifeq ($(GEN_SAMPLE_MAIN),0)
%.obj : $(MATLAB_ROOT)/rtw/c/src/common/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<
endif

# compile lcc_dll_main.c
ifeq ($(SHRLIBTARGET),1)
%.obj : $(MATLAB_ROOT)/rtw/c/ert/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<
endif

%.obj : $(MATLAB_ROOT)/rtw/c/ert/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<



%.obj : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<



# Libraries:





#----------------------------- Dependencies ------------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw

$(SHARED_OBJS) : $(SHARED_BIN_DIR)/%.obj : $(SHARED_SRC_DIR)/%.c  
	$(CC) -c -Fo$@ $(CFLAGS) $<

$(SHARED_LIB) : $(SHARED_OBJS)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$(SHARED_LIB_LINK) $(FMT_SHARED_OBJS)
	@cmd /C "echo ### $@ Created"

