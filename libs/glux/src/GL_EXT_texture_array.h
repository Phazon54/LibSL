
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

#ifndef __GLUX_GL_EXT_texture_array__
#define __GLUX_GL_EXT_texture_array__

GLUX_NEW_PLUGIN(GL_EXT_texture_array)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_TEXTURE_1D_ARRAY_EXT
#    define GL_TEXTURE_1D_ARRAY_EXT 0x8C18
#  endif
#  ifndef GL_PROXY_TEXTURE_1D_ARRAY_EXT
#    define GL_PROXY_TEXTURE_1D_ARRAY_EXT 0x8C19
#  endif
#  ifndef GL_TEXTURE_2D_ARRAY_EXT
#    define GL_TEXTURE_2D_ARRAY_EXT 0x8C1A
#  endif
#  ifndef GL_PROXY_TEXTURE_2D_ARRAY_EXT
#    define GL_PROXY_TEXTURE_2D_ARRAY_EXT 0x8C1B
#  endif
#  ifndef GL_TEXTURE_BINDING_1D_ARRAY_EXT
#    define GL_TEXTURE_BINDING_1D_ARRAY_EXT 0x8C1C
#  endif
#  ifndef GL_TEXTURE_BINDING_2D_ARRAY_EXT
#    define GL_TEXTURE_BINDING_2D_ARRAY_EXT 0x8C1D
#  endif
#  ifndef GL_MAX_ARRAY_TEXTURE_LAYERS_EXT
#    define GL_MAX_ARRAY_TEXTURE_LAYERS_EXT 0x88FF
#  endif
#  ifndef GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT
#    define GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT 0x884E
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glFramebufferTextureLayerEXT
typedef void (APIENTRYP PFNGLUXFRAMEBUFFERTEXTURELAYEREXTPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glFramebufferTextureLayerEXT
extern PFNGLUXFRAMEBUFFERTEXTURELAYEREXTPROC glFramebufferTextureLayerEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
