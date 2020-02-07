
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

#ifndef __GLUX_GL_OES_compressed_paletted_texture__
#define __GLUX_GL_OES_compressed_paletted_texture__

GLUX_NEW_PLUGIN(GL_OES_compressed_paletted_texture)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_PALETTE4_RGB8_OES
#    define GL_PALETTE4_RGB8_OES 0x8B90
#  endif
#  ifndef GL_PALETTE4_RGBA8_OES
#    define GL_PALETTE4_RGBA8_OES 0x8B91
#  endif
#  ifndef GL_PALETTE4_R5_G6_B5_OES
#    define GL_PALETTE4_R5_G6_B5_OES 0x8B92
#  endif
#  ifndef GL_PALETTE4_RGBA4_OES
#    define GL_PALETTE4_RGBA4_OES 0x8B93
#  endif
#  ifndef GL_PALETTE4_RGB5_A1_OES
#    define GL_PALETTE4_RGB5_A1_OES 0x8B94
#  endif
#  ifndef GL_PALETTE8_RGB8_OES
#    define GL_PALETTE8_RGB8_OES 0x8B95
#  endif
#  ifndef GL_PALETTE8_RGBA8_OES
#    define GL_PALETTE8_RGBA8_OES 0x8B96
#  endif
#  ifndef GL_PALETTE8_R5_G6_B5_OES
#    define GL_PALETTE8_R5_G6_B5_OES 0x8B97
#  endif
#  ifndef GL_PALETTE8_RGBA4_OES
#    define GL_PALETTE8_RGBA4_OES 0x8B98
#  endif
#  ifndef GL_PALETTE8_RGB5_A1_OES
#    define GL_PALETTE8_RGB5_A1_OES 0x8B99
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
