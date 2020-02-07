
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

#ifndef __GLUX_GL_ARB_texture_cube_map__
#define __GLUX_GL_ARB_texture_cube_map__

GLUX_NEW_PLUGIN(GL_ARB_texture_cube_map)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_NORMAL_MAP_ARB
#    define GL_NORMAL_MAP_ARB 0x8511
#  endif
#  ifndef GL_REFLECTION_MAP_ARB
#    define GL_REFLECTION_MAP_ARB 0x8512
#  endif
#  ifndef GL_TEXTURE_CUBE_MAP_ARB
#    define GL_TEXTURE_CUBE_MAP_ARB 0x8513
#  endif
#  ifndef GL_TEXTURE_BINDING_CUBE_MAP_ARB
#    define GL_TEXTURE_BINDING_CUBE_MAP_ARB 0x8514
#  endif
#  ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB
#    define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x8515
#  endif
#  ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB
#    define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x8516
#  endif
#  ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB
#    define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x8517
#  endif
#  ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB
#    define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x8518
#  endif
#  ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB
#    define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x8519
#  endif
#  ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB
#    define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x851A
#  endif
#  ifndef GL_PROXY_TEXTURE_CUBE_MAP_ARB
#    define GL_PROXY_TEXTURE_CUBE_MAP_ARB 0x851B
#  endif
#  ifndef GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB
#    define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB 0x851C
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
