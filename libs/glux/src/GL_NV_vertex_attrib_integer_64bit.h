
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

#ifndef __GLUX_GL_NV_vertex_attrib_integer_64bit__
#define __GLUX_GL_NV_vertex_attrib_integer_64bit__

GLUX_NEW_PLUGIN(GL_NV_vertex_attrib_integer_64bit)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glVertexAttribL1i64NV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL1I64NVPROC) (GLuint index, GLint64EXT x);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2i64NV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL2I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3i64NV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL3I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4i64NV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL4I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL1i64vNV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL1I64VNVPROC) (GLuint index, const GLint64EXT *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2i64vNV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL2I64VNVPROC) (GLuint index, const GLint64EXT *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3i64vNV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL3I64VNVPROC) (GLuint index, const GLint64EXT *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4i64vNV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL4I64VNVPROC) (GLuint index, const GLint64EXT *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL1ui64NV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL1UI64NVPROC) (GLuint index, GLuint64EXT x);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2ui64NV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL2UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3ui64NV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL3UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4ui64NV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL4UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL1ui64vNV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL1UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2ui64vNV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL2UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3ui64vNV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL3UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4ui64vNV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL4UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
#endif
#ifndef __GLUX__GLFCT_glGetVertexAttribLi64vNV
typedef void (APIENTRYP PFNGLUXGETVERTEXATTRIBLI64VNVPROC) (GLuint index, GLenum pname, GLint64EXT *params);
#endif
#ifndef __GLUX__GLFCT_glGetVertexAttribLui64vNV
typedef void (APIENTRYP PFNGLUXGETVERTEXATTRIBLUI64VNVPROC) (GLuint index, GLenum pname, GLuint64EXT *params);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribLFormatNV
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBLFORMATNVPROC) (GLuint index, GLint size, GLenum type, GLsizei stride);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glVertexAttribL1i64NV
extern PFNGLUXVERTEXATTRIBL1I64NVPROC glVertexAttribL1i64NV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2i64NV
extern PFNGLUXVERTEXATTRIBL2I64NVPROC glVertexAttribL2i64NV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3i64NV
extern PFNGLUXVERTEXATTRIBL3I64NVPROC glVertexAttribL3i64NV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4i64NV
extern PFNGLUXVERTEXATTRIBL4I64NVPROC glVertexAttribL4i64NV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL1i64vNV
extern PFNGLUXVERTEXATTRIBL1I64VNVPROC glVertexAttribL1i64vNV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2i64vNV
extern PFNGLUXVERTEXATTRIBL2I64VNVPROC glVertexAttribL2i64vNV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3i64vNV
extern PFNGLUXVERTEXATTRIBL3I64VNVPROC glVertexAttribL3i64vNV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4i64vNV
extern PFNGLUXVERTEXATTRIBL4I64VNVPROC glVertexAttribL4i64vNV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL1ui64NV
extern PFNGLUXVERTEXATTRIBL1UI64NVPROC glVertexAttribL1ui64NV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2ui64NV
extern PFNGLUXVERTEXATTRIBL2UI64NVPROC glVertexAttribL2ui64NV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3ui64NV
extern PFNGLUXVERTEXATTRIBL3UI64NVPROC glVertexAttribL3ui64NV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4ui64NV
extern PFNGLUXVERTEXATTRIBL4UI64NVPROC glVertexAttribL4ui64NV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL1ui64vNV
extern PFNGLUXVERTEXATTRIBL1UI64VNVPROC glVertexAttribL1ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2ui64vNV
extern PFNGLUXVERTEXATTRIBL2UI64VNVPROC glVertexAttribL2ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3ui64vNV
extern PFNGLUXVERTEXATTRIBL3UI64VNVPROC glVertexAttribL3ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4ui64vNV
extern PFNGLUXVERTEXATTRIBL4UI64VNVPROC glVertexAttribL4ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glGetVertexAttribLi64vNV
extern PFNGLUXGETVERTEXATTRIBLI64VNVPROC glGetVertexAttribLi64vNV;
#endif
#ifndef __GLUX__GLFCT_glGetVertexAttribLui64vNV
extern PFNGLUXGETVERTEXATTRIBLUI64VNVPROC glGetVertexAttribLui64vNV;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribLFormatNV
extern PFNGLUXVERTEXATTRIBLFORMATNVPROC glVertexAttribLFormatNV;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
