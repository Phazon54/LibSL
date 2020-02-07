
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

#ifndef __GLUX_GL_SGIS_texture_color_mask__
#define __GLUX_GL_SGIS_texture_color_mask__

GLUX_NEW_PLUGIN(GL_SGIS_texture_color_mask)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_TEXTURE_COLOR_WRITEMASK_SGIS
#    define GL_TEXTURE_COLOR_WRITEMASK_SGIS 0x81EF
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glTextureColorMaskSGIS
typedef void (APIENTRYP PFNGLUXTEXTURECOLORMASKSGISPROC) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glTextureColorMaskSGIS
extern PFNGLUXTEXTURECOLORMASKSGISPROC glTextureColorMaskSGIS;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
