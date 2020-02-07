
// --------------------------------------------------------
// Generated by glux perl script (Fri Feb  7 10:09:04 2020)
// 
// Sylvain Lefebvre - 2002-2014 - Sylvain.Lefebvre@inria.fr
// --------------------------------------------------------
#if defined(_WIN32) || defined(_WIN64)
#  include <windows.h>
#endif
#ifdef __APPLE__
#  define GL_GLEXT_LEGACY
#endif

#ifndef GL_ARB_multitexture // hack due to MESA headers including GL_ARB_multitexture
#define GL_ARB_multitexture
#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif
#undef  GL_ARB_multitexture
#else
#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif
#undef  GL_ARB_multitexture
#endif

#undef  GL_GLEXT_PROTOTYPES
#if defined(_WIN32) || defined(_WIN64)
#  include "glux_glext.h"
#  include "glux_wglext.h"
#else
#ifdef __APPLE__
//#  include "glux_glext_apple.h"
#  include "glux_glext.h"
#else
#ifdef EMSCRIPTEN
#  include "glux_glext.h"
#else
#  include <GL/glx.h>
#  include "glux_glext.h"
#  include "glux_glxext.h"
#endif
#endif
#endif
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GLX_VERSION_1_4__
#define __GLUX_GLX_VERSION_1_4__

GLUX_NEW_PLUGIN(GLX_VERSION_1_4)
// --------------------------------------------------------
#if !(defined WIN32 || defined(_WIN64) || defined __APPLE__ || defined EMSCRIPTEN)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GLX_SAMPLE_BUFFERS
#    define GLX_SAMPLE_BUFFERS 100000
#  endif
#  ifndef GLX_SAMPLES
#    define GLX_SAMPLES 100001
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glXGetProcAddress
typedef __GLXextFuncPtr (APIENTRYP PFNXGLUXGETPROCADDRESSPROC) (const GLubyte *procName);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glXGetProcAddress
extern PFNXGLUXGETPROCADDRESSPROC glXGetProcAddress;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
