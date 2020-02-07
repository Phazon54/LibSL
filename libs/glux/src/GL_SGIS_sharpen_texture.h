
// --------------------------------------------------------
// Generated by glux perl script (Fri Feb  7 10:09:03 2020)
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

#ifndef __GLUX_GL_SGIS_sharpen_texture__
#define __GLUX_GL_SGIS_sharpen_texture__

GLUX_NEW_PLUGIN(GL_SGIS_sharpen_texture)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_LINEAR_SHARPEN_SGIS
#    define GL_LINEAR_SHARPEN_SGIS 0x80AD
#  endif
#  ifndef GL_LINEAR_SHARPEN_ALPHA_SGIS
#    define GL_LINEAR_SHARPEN_ALPHA_SGIS 0x80AE
#  endif
#  ifndef GL_LINEAR_SHARPEN_COLOR_SGIS
#    define GL_LINEAR_SHARPEN_COLOR_SGIS 0x80AF
#  endif
#  ifndef GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS
#    define GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS 0x80B0
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glSharpenTexFuncSGIS
typedef void (APIENTRYP PFNGLUXSHARPENTEXFUNCSGISPROC) (GLenum target, GLsizei n, const GLfloat *points);
#endif
#ifndef __GLUX__GLFCT_glGetSharpenTexFuncSGIS
typedef void (APIENTRYP PFNGLUXGETSHARPENTEXFUNCSGISPROC) (GLenum target, GLfloat *points);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glSharpenTexFuncSGIS
extern PFNGLUXSHARPENTEXFUNCSGISPROC glSharpenTexFuncSGIS;
#endif
#ifndef __GLUX__GLFCT_glGetSharpenTexFuncSGIS
extern PFNGLUXGETSHARPENTEXFUNCSGISPROC glGetSharpenTexFuncSGIS;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
