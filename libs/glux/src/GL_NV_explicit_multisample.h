
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

#ifndef __GLUX_GL_NV_explicit_multisample__
#define __GLUX_GL_NV_explicit_multisample__

GLUX_NEW_PLUGIN(GL_NV_explicit_multisample)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_SAMPLE_POSITION_NV
#    define GL_SAMPLE_POSITION_NV 0x8E50
#  endif
#  ifndef GL_SAMPLE_MASK_NV
#    define GL_SAMPLE_MASK_NV 0x8E51
#  endif
#  ifndef GL_SAMPLE_MASK_VALUE_NV
#    define GL_SAMPLE_MASK_VALUE_NV 0x8E52
#  endif
#  ifndef GL_TEXTURE_BINDING_RENDERBUFFER_NV
#    define GL_TEXTURE_BINDING_RENDERBUFFER_NV 0x8E53
#  endif
#  ifndef GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV
#    define GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV 0x8E54
#  endif
#  ifndef GL_TEXTURE_RENDERBUFFER_NV
#    define GL_TEXTURE_RENDERBUFFER_NV 0x8E55
#  endif
#  ifndef GL_SAMPLER_RENDERBUFFER_NV
#    define GL_SAMPLER_RENDERBUFFER_NV 0x8E56
#  endif
#  ifndef GL_INT_SAMPLER_RENDERBUFFER_NV
#    define GL_INT_SAMPLER_RENDERBUFFER_NV 0x8E57
#  endif
#  ifndef GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV
#    define GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV 0x8E58
#  endif
#  ifndef GL_MAX_SAMPLE_MASK_WORDS_NV
#    define GL_MAX_SAMPLE_MASK_WORDS_NV 0x8E59
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glGetMultisamplefvNV
typedef void (APIENTRYP PFNGLUXGETMULTISAMPLEFVNVPROC) (GLenum pname, GLuint index, GLfloat *val);
#endif
#ifndef __GLUX__GLFCT_glSampleMaskIndexedNV
typedef void (APIENTRYP PFNGLUXSAMPLEMASKINDEXEDNVPROC) (GLuint index, GLbitfield mask);
#endif
#ifndef __GLUX__GLFCT_glTexRenderbufferNV
typedef void (APIENTRYP PFNGLUXTEXRENDERBUFFERNVPROC) (GLenum target, GLuint renderbuffer);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glGetMultisamplefvNV
extern PFNGLUXGETMULTISAMPLEFVNVPROC glGetMultisamplefvNV;
#endif
#ifndef __GLUX__GLFCT_glSampleMaskIndexedNV
extern PFNGLUXSAMPLEMASKINDEXEDNVPROC glSampleMaskIndexedNV;
#endif
#ifndef __GLUX__GLFCT_glTexRenderbufferNV
extern PFNGLUXTEXRENDERBUFFERNVPROC glTexRenderbufferNV;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
