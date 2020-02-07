
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

#ifndef __GLUX_GL_EXT_texture_buffer_object__
#define __GLUX_GL_EXT_texture_buffer_object__

GLUX_NEW_PLUGIN(GL_EXT_texture_buffer_object)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_TEXTURE_BUFFER_EXT
#    define GL_TEXTURE_BUFFER_EXT 0x8C2A
#  endif
#  ifndef GL_MAX_TEXTURE_BUFFER_SIZE_EXT
#    define GL_MAX_TEXTURE_BUFFER_SIZE_EXT 0x8C2B
#  endif
#  ifndef GL_TEXTURE_BINDING_BUFFER_EXT
#    define GL_TEXTURE_BINDING_BUFFER_EXT 0x8C2C
#  endif
#  ifndef GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT
#    define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#  endif
#  ifndef GL_TEXTURE_BUFFER_FORMAT_EXT
#    define GL_TEXTURE_BUFFER_FORMAT_EXT 0x8C2E
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glTexBufferEXT
typedef void (APIENTRYP PFNGLUXTEXBUFFEREXTPROC) (GLenum target, GLenum internalformat, GLuint buffer);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glTexBufferEXT
extern PFNGLUXTEXBUFFEREXTPROC glTexBufferEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
