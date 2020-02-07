
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

#ifndef __GLUX_GL_AMD_vertex_shader_tessellator__
#define __GLUX_GL_AMD_vertex_shader_tessellator__

GLUX_NEW_PLUGIN(GL_AMD_vertex_shader_tessellator)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_SAMPLER_BUFFER_AMD
#    define GL_SAMPLER_BUFFER_AMD 0x9001
#  endif
#  ifndef GL_INT_SAMPLER_BUFFER_AMD
#    define GL_INT_SAMPLER_BUFFER_AMD 0x9002
#  endif
#  ifndef GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD
#    define GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD 0x9003
#  endif
#  ifndef GL_TESSELLATION_MODE_AMD
#    define GL_TESSELLATION_MODE_AMD 0x9004
#  endif
#  ifndef GL_TESSELLATION_FACTOR_AMD
#    define GL_TESSELLATION_FACTOR_AMD 0x9005
#  endif
#  ifndef GL_DISCRETE_AMD
#    define GL_DISCRETE_AMD 0x9006
#  endif
#  ifndef GL_CONTINUOUS_AMD
#    define GL_CONTINUOUS_AMD 0x9007
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glTessellationFactorAMD
typedef void (APIENTRYP PFNGLUXTESSELLATIONFACTORAMDPROC) (GLfloat factor);
#endif
#ifndef __GLUX__GLFCT_glTessellationModeAMD
typedef void (APIENTRYP PFNGLUXTESSELLATIONMODEAMDPROC) (GLenum mode);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glTessellationFactorAMD
extern PFNGLUXTESSELLATIONFACTORAMDPROC glTessellationFactorAMD;
#endif
#ifndef __GLUX__GLFCT_glTessellationModeAMD
extern PFNGLUXTESSELLATIONMODEAMDPROC glTessellationModeAMD;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
