
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

#ifndef __GLUX_GL_INTEL_parallel_arrays__
#define __GLUX_GL_INTEL_parallel_arrays__

GLUX_NEW_PLUGIN(GL_INTEL_parallel_arrays)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_PARALLEL_ARRAYS_INTEL
#    define GL_PARALLEL_ARRAYS_INTEL 0x83F4
#  endif
#  ifndef GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL
#    define GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL 0x83F5
#  endif
#  ifndef GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL
#    define GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL 0x83F6
#  endif
#  ifndef GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL
#    define GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL 0x83F7
#  endif
#  ifndef GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL
#    define GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL 0x83F8
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glVertexPointervINTEL
typedef void (APIENTRYP PFNGLUXVERTEXPOINTERVINTELPROC) (GLint size, GLenum type, const void **pointer);
#endif
#ifndef __GLUX__GLFCT_glNormalPointervINTEL
typedef void (APIENTRYP PFNGLUXNORMALPOINTERVINTELPROC) (GLenum type, const void **pointer);
#endif
#ifndef __GLUX__GLFCT_glColorPointervINTEL
typedef void (APIENTRYP PFNGLUXCOLORPOINTERVINTELPROC) (GLint size, GLenum type, const void **pointer);
#endif
#ifndef __GLUX__GLFCT_glTexCoordPointervINTEL
typedef void (APIENTRYP PFNGLUXTEXCOORDPOINTERVINTELPROC) (GLint size, GLenum type, const void **pointer);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glVertexPointervINTEL
extern PFNGLUXVERTEXPOINTERVINTELPROC glVertexPointervINTEL;
#endif
#ifndef __GLUX__GLFCT_glNormalPointervINTEL
extern PFNGLUXNORMALPOINTERVINTELPROC glNormalPointervINTEL;
#endif
#ifndef __GLUX__GLFCT_glColorPointervINTEL
extern PFNGLUXCOLORPOINTERVINTELPROC glColorPointervINTEL;
#endif
#ifndef __GLUX__GLFCT_glTexCoordPointervINTEL
extern PFNGLUXTEXCOORDPOINTERVINTELPROC glTexCoordPointervINTEL;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
