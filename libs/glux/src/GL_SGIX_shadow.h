
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

#ifndef __GLUX_GL_SGIX_shadow__
#define __GLUX_GL_SGIX_shadow__

GLUX_NEW_PLUGIN(GL_SGIX_shadow)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_TEXTURE_COMPARE_SGIX
#    define GL_TEXTURE_COMPARE_SGIX 0x819A
#  endif
#  ifndef GL_TEXTURE_COMPARE_OPERATOR_SGIX
#    define GL_TEXTURE_COMPARE_OPERATOR_SGIX 0x819B
#  endif
#  ifndef GL_TEXTURE_LEQUAL_R_SGIX
#    define GL_TEXTURE_LEQUAL_R_SGIX 0x819C
#  endif
#  ifndef GL_TEXTURE_GEQUAL_R_SGIX
#    define GL_TEXTURE_GEQUAL_R_SGIX 0x819D
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
