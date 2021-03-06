CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(imgui)

SET(LibSL_DIR $ENV{LIBSL_DIR})
FIND_PACKAGE(LibSL)

INCLUDE_DIRECTORIES( ${LIBSL_INCLUDE_DIR} )

INCLUDE_DIRECTORIES(../..)
LINK_DIRECTORIES(${LIBSL_BINARY_DIR}) 

IF (LIBSL_USE_GLUX)
ADD_DEFINITIONS(-DUSE_GLUX)
IF(NOT WIN32)
ADD_DEFINITIONS(-DGL_ARB_multitexture=1)  # hack due to MESA headers including ARB_multitexture
ENDIF(NOT WIN32)
ENDIF (LIBSL_USE_GLUX)

# FIND_PACKAGE(OpenGL)
ADD_DEFINITIONS(-DOPENGL)

ADD_EXECUTABLE(imgui0 imgui0.cpp)
TARGET_LINK_LIBRARIES(imgui0 LibSL LibSL_gl ${OPENGL_LIBRARIES})
