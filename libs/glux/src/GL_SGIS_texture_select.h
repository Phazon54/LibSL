
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

#ifndef __GLUX_GL_SGIS_texture_select__
#define __GLUX_GL_SGIS_texture_select__

GLUX_NEW_PLUGIN(GL_SGIS_texture_select)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_DUAL_ALPHA4_SGIS
#    define GL_DUAL_ALPHA4_SGIS 0x8110
#  endif
#  ifndef GL_DUAL_ALPHA8_SGIS
#    define GL_DUAL_ALPHA8_SGIS 0x8111
#  endif
#  ifndef GL_DUAL_ALPHA12_SGIS
#    define GL_DUAL_ALPHA12_SGIS 0x8112
#  endif
#  ifndef GL_DUAL_ALPHA16_SGIS
#    define GL_DUAL_ALPHA16_SGIS 0x8113
#  endif
#  ifndef GL_DUAL_LUMINANCE4_SGIS
#    define GL_DUAL_LUMINANCE4_SGIS 0x8114
#  endif
#  ifndef GL_DUAL_LUMINANCE8_SGIS
#    define GL_DUAL_LUMINANCE8_SGIS 0x8115
#  endif
#  ifndef GL_DUAL_LUMINANCE12_SGIS
#    define GL_DUAL_LUMINANCE12_SGIS 0x8116
#  endif
#  ifndef GL_DUAL_LUMINANCE16_SGIS
#    define GL_DUAL_LUMINANCE16_SGIS 0x8117
#  endif
#  ifndef GL_DUAL_INTENSITY4_SGIS
#    define GL_DUAL_INTENSITY4_SGIS 0x8118
#  endif
#  ifndef GL_DUAL_INTENSITY8_SGIS
#    define GL_DUAL_INTENSITY8_SGIS 0x8119
#  endif
#  ifndef GL_DUAL_INTENSITY12_SGIS
#    define GL_DUAL_INTENSITY12_SGIS 0x811A
#  endif
#  ifndef GL_DUAL_INTENSITY16_SGIS
#    define GL_DUAL_INTENSITY16_SGIS 0x811B
#  endif
#  ifndef GL_DUAL_LUMINANCE_ALPHA4_SGIS
#    define GL_DUAL_LUMINANCE_ALPHA4_SGIS 0x811C
#  endif
#  ifndef GL_DUAL_LUMINANCE_ALPHA8_SGIS
#    define GL_DUAL_LUMINANCE_ALPHA8_SGIS 0x811D
#  endif
#  ifndef GL_QUAD_ALPHA4_SGIS
#    define GL_QUAD_ALPHA4_SGIS 0x811E
#  endif
#  ifndef GL_QUAD_ALPHA8_SGIS
#    define GL_QUAD_ALPHA8_SGIS 0x811F
#  endif
#  ifndef GL_QUAD_LUMINANCE4_SGIS
#    define GL_QUAD_LUMINANCE4_SGIS 0x8120
#  endif
#  ifndef GL_QUAD_LUMINANCE8_SGIS
#    define GL_QUAD_LUMINANCE8_SGIS 0x8121
#  endif
#  ifndef GL_QUAD_INTENSITY4_SGIS
#    define GL_QUAD_INTENSITY4_SGIS 0x8122
#  endif
#  ifndef GL_QUAD_INTENSITY8_SGIS
#    define GL_QUAD_INTENSITY8_SGIS 0x8123
#  endif
#  ifndef GL_DUAL_TEXTURE_SELECT_SGIS
#    define GL_DUAL_TEXTURE_SELECT_SGIS 0x8124
#  endif
#  ifndef GL_QUAD_TEXTURE_SELECT_SGIS
#    define GL_QUAD_TEXTURE_SELECT_SGIS 0x8125
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
