
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

#ifndef __GLUX_GL_NV_depth_buffer_float__
#define __GLUX_GL_NV_depth_buffer_float__

GLUX_NEW_PLUGIN(GL_NV_depth_buffer_float)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_DEPTH_COMPONENT32F_NV
#    define GL_DEPTH_COMPONENT32F_NV 0x8DAB
#  endif
#  ifndef GL_DEPTH32F_STENCIL8_NV
#    define GL_DEPTH32F_STENCIL8_NV 0x8DAC
#  endif
#  ifndef GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV
#    define GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV 0x8DAD
#  endif
#  ifndef GL_DEPTH_BUFFER_FLOAT_MODE_NV
#    define GL_DEPTH_BUFFER_FLOAT_MODE_NV 0x8DAF
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glDepthRangedNV
typedef void (APIENTRYP PFNGLUXDEPTHRANGEDNVPROC) (GLdouble zNear, GLdouble zFar);
#endif
#ifndef __GLUX__GLFCT_glClearDepthdNV
typedef void (APIENTRYP PFNGLUXCLEARDEPTHDNVPROC) (GLdouble depth);
#endif
#ifndef __GLUX__GLFCT_glDepthBoundsdNV
typedef void (APIENTRYP PFNGLUXDEPTHBOUNDSDNVPROC) (GLdouble zmin, GLdouble zmax);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glDepthRangedNV
extern PFNGLUXDEPTHRANGEDNVPROC glDepthRangedNV;
#endif
#ifndef __GLUX__GLFCT_glClearDepthdNV
extern PFNGLUXCLEARDEPTHDNVPROC glClearDepthdNV;
#endif
#ifndef __GLUX__GLFCT_glDepthBoundsdNV
extern PFNGLUXDEPTHBOUNDSDNVPROC glDepthBoundsdNV;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
