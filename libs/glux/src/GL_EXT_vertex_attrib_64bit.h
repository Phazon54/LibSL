
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

#ifndef __GLUX_GL_EXT_vertex_attrib_64bit__
#define __GLUX_GL_EXT_vertex_attrib_64bit__

GLUX_NEW_PLUGIN(GL_EXT_vertex_attrib_64bit)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_DOUBLE_VEC2_EXT
#    define GL_DOUBLE_VEC2_EXT 0x8FFC
#  endif
#  ifndef GL_DOUBLE_VEC3_EXT
#    define GL_DOUBLE_VEC3_EXT 0x8FFD
#  endif
#  ifndef GL_DOUBLE_VEC4_EXT
#    define GL_DOUBLE_VEC4_EXT 0x8FFE
#  endif
#  ifndef GL_DOUBLE_MAT2_EXT
#    define GL_DOUBLE_MAT2_EXT 0x8F46
#  endif
#  ifndef GL_DOUBLE_MAT3_EXT
#    define GL_DOUBLE_MAT3_EXT 0x8F47
#  endif
#  ifndef GL_DOUBLE_MAT4_EXT
#    define GL_DOUBLE_MAT4_EXT 0x8F48
#  endif
#  ifndef GL_DOUBLE_MAT2x3_EXT
#    define GL_DOUBLE_MAT2x3_EXT 0x8F49
#  endif
#  ifndef GL_DOUBLE_MAT2x4_EXT
#    define GL_DOUBLE_MAT2x4_EXT 0x8F4A
#  endif
#  ifndef GL_DOUBLE_MAT3x2_EXT
#    define GL_DOUBLE_MAT3x2_EXT 0x8F4B
#  endif
#  ifndef GL_DOUBLE_MAT3x4_EXT
#    define GL_DOUBLE_MAT3x4_EXT 0x8F4C
#  endif
#  ifndef GL_DOUBLE_MAT4x2_EXT
#    define GL_DOUBLE_MAT4x2_EXT 0x8F4D
#  endif
#  ifndef GL_DOUBLE_MAT4x3_EXT
#    define GL_DOUBLE_MAT4x3_EXT 0x8F4E
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glVertexAttribL1dEXT
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL1DEXTPROC) (GLuint index, GLdouble x);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2dEXT
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL2DEXTPROC) (GLuint index, GLdouble x, GLdouble y);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3dEXT
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL3DEXTPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4dEXT
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL4DEXTPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL1dvEXT
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL1DVEXTPROC) (GLuint index, const GLdouble *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2dvEXT
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL2DVEXTPROC) (GLuint index, const GLdouble *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3dvEXT
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL3DVEXTPROC) (GLuint index, const GLdouble *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4dvEXT
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBL4DVEXTPROC) (GLuint index, const GLdouble *v);
#endif
#ifndef __GLUX__GLFCT_glVertexAttribLPointerEXT
typedef void (APIENTRYP PFNGLUXVERTEXATTRIBLPOINTEREXTPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
#endif
#ifndef __GLUX__GLFCT_glGetVertexAttribLdvEXT
typedef void (APIENTRYP PFNGLUXGETVERTEXATTRIBLDVEXTPROC) (GLuint index, GLenum pname, GLdouble *params);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glVertexAttribL1dEXT
extern PFNGLUXVERTEXATTRIBL1DEXTPROC glVertexAttribL1dEXT;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2dEXT
extern PFNGLUXVERTEXATTRIBL2DEXTPROC glVertexAttribL2dEXT;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3dEXT
extern PFNGLUXVERTEXATTRIBL3DEXTPROC glVertexAttribL3dEXT;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4dEXT
extern PFNGLUXVERTEXATTRIBL4DEXTPROC glVertexAttribL4dEXT;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL1dvEXT
extern PFNGLUXVERTEXATTRIBL1DVEXTPROC glVertexAttribL1dvEXT;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL2dvEXT
extern PFNGLUXVERTEXATTRIBL2DVEXTPROC glVertexAttribL2dvEXT;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL3dvEXT
extern PFNGLUXVERTEXATTRIBL3DVEXTPROC glVertexAttribL3dvEXT;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribL4dvEXT
extern PFNGLUXVERTEXATTRIBL4DVEXTPROC glVertexAttribL4dvEXT;
#endif
#ifndef __GLUX__GLFCT_glVertexAttribLPointerEXT
extern PFNGLUXVERTEXATTRIBLPOINTEREXTPROC glVertexAttribLPointerEXT;
#endif
#ifndef __GLUX__GLFCT_glGetVertexAttribLdvEXT
extern PFNGLUXGETVERTEXATTRIBLDVEXTPROC glGetVertexAttribLdvEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
