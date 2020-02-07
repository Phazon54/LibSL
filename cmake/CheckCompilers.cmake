################################################################################
# Hides most of the ELF symbols which would have previously (and unnecessarily)
# been public. This is the case by default on Windows, but on Linux we need to
# enable the option when the compiler supports it
################################################################################
include(CheckCCompilerFlag)
include(CheckCXXCompilerFlag)

# The magic flag!
set(FLAG "-fvisibility=hidden")

# C compiler
check_c_compiler_flag("${FLAG}" C_SUPPORTS_${FLAG})
if(C_SUPPORTS_${FLAG})
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${FLAG}")
endif()

# CXX compiler
check_cxx_compiler_flag("${FLAG}" CXX_SUPPORTS_${FLAG})
if(CXX_SUPPORTS_${FLAG})
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${FLAG}")
endif()