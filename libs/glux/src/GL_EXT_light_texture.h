
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

#ifndef __GLUX_GL_EXT_light_texture__
#define __GLUX_GL_EXT_light_texture__

GLUX_NEW_PLUGIN(GL_EXT_light_texture)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_FRAGMENT_MATERIAL_EXT
#    define GL_FRAGMENT_MATERIAL_EXT 0x8349
#  endif
#  ifndef GL_FRAGMENT_NORMAL_EXT
#    define GL_FRAGMENT_NORMAL_EXT 0x834A
#  endif
#  ifndef GL_FRAGMENT_COLOR_EXT
#    define GL_FRAGMENT_COLOR_EXT 0x834C
#  endif
#  ifndef GL_ATTENUATION_EXT
#    define GL_ATTENUATION_EXT 0x834D
#  endif
#  ifndef GL_SHADOW_ATTENUATION_EXT
#    define GL_SHADOW_ATTENUATION_EXT 0x834E
#  endif
#  ifndef GL_TEXTURE_APPLICATION_MODE_EXT
#    define GL_TEXTURE_APPLICATION_MODE_EXT 0x834F
#  endif
#  ifndef GL_TEXTURE_LIGHT_EXT
#    define GL_TEXTURE_LIGHT_EXT 0x8350
#  endif
#  ifndef GL_TEXTURE_MATERIAL_FACE_EXT
#    define GL_TEXTURE_MATERIAL_FACE_EXT 0x8351
#  endif
#  ifndef GL_TEXTURE_MATERIAL_PARAMETER_EXT
#    define GL_TEXTURE_MATERIAL_PARAMETER_EXT 0x8352
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glApplyTextureEXT
typedef void (APIENTRYP PFNGLUXAPPLYTEXTUREEXTPROC) (GLenum mode);
#endif
#ifndef __GLUX__GLFCT_glTextureLightEXT
typedef void (APIENTRYP PFNGLUXTEXTURELIGHTEXTPROC) (GLenum pname);
#endif
#ifndef __GLUX__GLFCT_glTextureMaterialEXT
typedef void (APIENTRYP PFNGLUXTEXTUREMATERIALEXTPROC) (GLenum face, GLenum mode);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glApplyTextureEXT
extern PFNGLUXAPPLYTEXTUREEXTPROC glApplyTextureEXT;
#endif
#ifndef __GLUX__GLFCT_glTextureLightEXT
extern PFNGLUXTEXTURELIGHTEXTPROC glTextureLightEXT;
#endif
#ifndef __GLUX__GLFCT_glTextureMaterialEXT
extern PFNGLUXTEXTUREMATERIALEXTPROC glTextureMaterialEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
