
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

#ifndef __GLUX_GL_SGIX_async__
#define __GLUX_GL_SGIX_async__

GLUX_NEW_PLUGIN(GL_SGIX_async)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_ASYNC_MARKER_SGIX
#    define GL_ASYNC_MARKER_SGIX 0x8329
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glAsyncMarkerSGIX
typedef void (APIENTRYP PFNGLUXASYNCMARKERSGIXPROC) (GLuint marker);
#endif
#ifndef __GLUX__GLFCT_glFinishAsyncSGIX
typedef GLint (APIENTRYP PFNGLUXFINISHASYNCSGIXPROC) (GLuint *markerp);
#endif
#ifndef __GLUX__GLFCT_glPollAsyncSGIX
typedef GLint (APIENTRYP PFNGLUXPOLLASYNCSGIXPROC) (GLuint *markerp);
#endif
#ifndef __GLUX__GLFCT_glGenAsyncMarkersSGIX
typedef GLuint (APIENTRYP PFNGLUXGENASYNCMARKERSSGIXPROC) (GLsizei range);
#endif
#ifndef __GLUX__GLFCT_glDeleteAsyncMarkersSGIX
typedef void (APIENTRYP PFNGLUXDELETEASYNCMARKERSSGIXPROC) (GLuint marker, GLsizei range);
#endif
#ifndef __GLUX__GLFCT_glIsAsyncMarkerSGIX
typedef GLboolean (APIENTRYP PFNGLUXISASYNCMARKERSGIXPROC) (GLuint marker);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glAsyncMarkerSGIX
extern PFNGLUXASYNCMARKERSGIXPROC glAsyncMarkerSGIX;
#endif
#ifndef __GLUX__GLFCT_glFinishAsyncSGIX
extern PFNGLUXFINISHASYNCSGIXPROC glFinishAsyncSGIX;
#endif
#ifndef __GLUX__GLFCT_glPollAsyncSGIX
extern PFNGLUXPOLLASYNCSGIXPROC glPollAsyncSGIX;
#endif
#ifndef __GLUX__GLFCT_glGenAsyncMarkersSGIX
extern PFNGLUXGENASYNCMARKERSSGIXPROC glGenAsyncMarkersSGIX;
#endif
#ifndef __GLUX__GLFCT_glDeleteAsyncMarkersSGIX
extern PFNGLUXDELETEASYNCMARKERSSGIXPROC glDeleteAsyncMarkersSGIX;
#endif
#ifndef __GLUX__GLFCT_glIsAsyncMarkerSGIX
extern PFNGLUXISASYNCMARKERSGIXPROC glIsAsyncMarkerSGIX;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
