
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

#ifndef __GLUX_GL_AMD_gpu_shader_int64__
#define __GLUX_GL_AMD_gpu_shader_int64__

GLUX_NEW_PLUGIN(GL_AMD_gpu_shader_int64)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_INT64_NV
#    define GL_INT64_NV 0x140E
#  endif
#  ifndef GL_UNSIGNED_INT64_NV
#    define GL_UNSIGNED_INT64_NV 0x140F
#  endif
#  ifndef GL_INT8_NV
#    define GL_INT8_NV 0x8FE0
#  endif
#  ifndef GL_INT8_VEC2_NV
#    define GL_INT8_VEC2_NV 0x8FE1
#  endif
#  ifndef GL_INT8_VEC3_NV
#    define GL_INT8_VEC3_NV 0x8FE2
#  endif
#  ifndef GL_INT8_VEC4_NV
#    define GL_INT8_VEC4_NV 0x8FE3
#  endif
#  ifndef GL_INT16_NV
#    define GL_INT16_NV 0x8FE4
#  endif
#  ifndef GL_INT16_VEC2_NV
#    define GL_INT16_VEC2_NV 0x8FE5
#  endif
#  ifndef GL_INT16_VEC3_NV
#    define GL_INT16_VEC3_NV 0x8FE6
#  endif
#  ifndef GL_INT16_VEC4_NV
#    define GL_INT16_VEC4_NV 0x8FE7
#  endif
#  ifndef GL_INT64_VEC2_NV
#    define GL_INT64_VEC2_NV 0x8FE9
#  endif
#  ifndef GL_INT64_VEC3_NV
#    define GL_INT64_VEC3_NV 0x8FEA
#  endif
#  ifndef GL_INT64_VEC4_NV
#    define GL_INT64_VEC4_NV 0x8FEB
#  endif
#  ifndef GL_UNSIGNED_INT8_NV
#    define GL_UNSIGNED_INT8_NV 0x8FEC
#  endif
#  ifndef GL_UNSIGNED_INT8_VEC2_NV
#    define GL_UNSIGNED_INT8_VEC2_NV 0x8FED
#  endif
#  ifndef GL_UNSIGNED_INT8_VEC3_NV
#    define GL_UNSIGNED_INT8_VEC3_NV 0x8FEE
#  endif
#  ifndef GL_UNSIGNED_INT8_VEC4_NV
#    define GL_UNSIGNED_INT8_VEC4_NV 0x8FEF
#  endif
#  ifndef GL_UNSIGNED_INT16_NV
#    define GL_UNSIGNED_INT16_NV 0x8FF0
#  endif
#  ifndef GL_UNSIGNED_INT16_VEC2_NV
#    define GL_UNSIGNED_INT16_VEC2_NV 0x8FF1
#  endif
#  ifndef GL_UNSIGNED_INT16_VEC3_NV
#    define GL_UNSIGNED_INT16_VEC3_NV 0x8FF2
#  endif
#  ifndef GL_UNSIGNED_INT16_VEC4_NV
#    define GL_UNSIGNED_INT16_VEC4_NV 0x8FF3
#  endif
#  ifndef GL_UNSIGNED_INT64_VEC2_NV
#    define GL_UNSIGNED_INT64_VEC2_NV 0x8FF5
#  endif
#  ifndef GL_UNSIGNED_INT64_VEC3_NV
#    define GL_UNSIGNED_INT64_VEC3_NV 0x8FF6
#  endif
#  ifndef GL_UNSIGNED_INT64_VEC4_NV
#    define GL_UNSIGNED_INT64_VEC4_NV 0x8FF7
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glUniform1i64NV
typedef void (APIENTRYP PFNGLUXUNIFORM1I64NVPROC) (GLint location, GLint64EXT x);
#endif
#ifndef __GLUX__GLFCT_glUniform2i64NV
typedef void (APIENTRYP PFNGLUXUNIFORM2I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y);
#endif
#ifndef __GLUX__GLFCT_glUniform3i64NV
typedef void (APIENTRYP PFNGLUXUNIFORM3I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
#endif
#ifndef __GLUX__GLFCT_glUniform4i64NV
typedef void (APIENTRYP PFNGLUXUNIFORM4I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
#endif
#ifndef __GLUX__GLFCT_glUniform1i64vNV
typedef void (APIENTRYP PFNGLUXUNIFORM1I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glUniform2i64vNV
typedef void (APIENTRYP PFNGLUXUNIFORM2I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glUniform3i64vNV
typedef void (APIENTRYP PFNGLUXUNIFORM3I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glUniform4i64vNV
typedef void (APIENTRYP PFNGLUXUNIFORM4I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glUniform1ui64NV
typedef void (APIENTRYP PFNGLUXUNIFORM1UI64NVPROC) (GLint location, GLuint64EXT x);
#endif
#ifndef __GLUX__GLFCT_glUniform2ui64NV
typedef void (APIENTRYP PFNGLUXUNIFORM2UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y);
#endif
#ifndef __GLUX__GLFCT_glUniform3ui64NV
typedef void (APIENTRYP PFNGLUXUNIFORM3UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
#endif
#ifndef __GLUX__GLFCT_glUniform4ui64NV
typedef void (APIENTRYP PFNGLUXUNIFORM4UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
#endif
#ifndef __GLUX__GLFCT_glUniform1ui64vNV
typedef void (APIENTRYP PFNGLUXUNIFORM1UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glUniform2ui64vNV
typedef void (APIENTRYP PFNGLUXUNIFORM2UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glUniform3ui64vNV
typedef void (APIENTRYP PFNGLUXUNIFORM3UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glUniform4ui64vNV
typedef void (APIENTRYP PFNGLUXUNIFORM4UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glGetUniformi64vNV
typedef void (APIENTRYP PFNGLUXGETUNIFORMI64VNVPROC) (GLuint program, GLint location, GLint64EXT *params);
#endif
#ifndef __GLUX__GLFCT_glGetUniformui64vNV
typedef void (APIENTRYP PFNGLUXGETUNIFORMUI64VNVPROC) (GLuint program, GLint location, GLuint64EXT *params);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform1i64NV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM1I64NVPROC) (GLuint program, GLint location, GLint64EXT x);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform2i64NV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM2I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform3i64NV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM3I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform4i64NV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM4I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform1i64vNV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM1I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform2i64vNV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM2I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform3i64vNV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM3I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform4i64vNV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM4I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform1ui64NV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM1UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform2ui64NV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM2UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform3ui64NV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM3UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform4ui64NV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM4UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform1ui64vNV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM1UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform2ui64vNV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM2UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform3ui64vNV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM3UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#ifndef __GLUX__GLFCT_glProgramUniform4ui64vNV
typedef void (APIENTRYP PFNGLUXPROGRAMUNIFORM4UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glUniform1i64NV
extern PFNGLUXUNIFORM1I64NVPROC glUniform1i64NV;
#endif
#ifndef __GLUX__GLFCT_glUniform2i64NV
extern PFNGLUXUNIFORM2I64NVPROC glUniform2i64NV;
#endif
#ifndef __GLUX__GLFCT_glUniform3i64NV
extern PFNGLUXUNIFORM3I64NVPROC glUniform3i64NV;
#endif
#ifndef __GLUX__GLFCT_glUniform4i64NV
extern PFNGLUXUNIFORM4I64NVPROC glUniform4i64NV;
#endif
#ifndef __GLUX__GLFCT_glUniform1i64vNV
extern PFNGLUXUNIFORM1I64VNVPROC glUniform1i64vNV;
#endif
#ifndef __GLUX__GLFCT_glUniform2i64vNV
extern PFNGLUXUNIFORM2I64VNVPROC glUniform2i64vNV;
#endif
#ifndef __GLUX__GLFCT_glUniform3i64vNV
extern PFNGLUXUNIFORM3I64VNVPROC glUniform3i64vNV;
#endif
#ifndef __GLUX__GLFCT_glUniform4i64vNV
extern PFNGLUXUNIFORM4I64VNVPROC glUniform4i64vNV;
#endif
#ifndef __GLUX__GLFCT_glUniform1ui64NV
extern PFNGLUXUNIFORM1UI64NVPROC glUniform1ui64NV;
#endif
#ifndef __GLUX__GLFCT_glUniform2ui64NV
extern PFNGLUXUNIFORM2UI64NVPROC glUniform2ui64NV;
#endif
#ifndef __GLUX__GLFCT_glUniform3ui64NV
extern PFNGLUXUNIFORM3UI64NVPROC glUniform3ui64NV;
#endif
#ifndef __GLUX__GLFCT_glUniform4ui64NV
extern PFNGLUXUNIFORM4UI64NVPROC glUniform4ui64NV;
#endif
#ifndef __GLUX__GLFCT_glUniform1ui64vNV
extern PFNGLUXUNIFORM1UI64VNVPROC glUniform1ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glUniform2ui64vNV
extern PFNGLUXUNIFORM2UI64VNVPROC glUniform2ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glUniform3ui64vNV
extern PFNGLUXUNIFORM3UI64VNVPROC glUniform3ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glUniform4ui64vNV
extern PFNGLUXUNIFORM4UI64VNVPROC glUniform4ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glGetUniformi64vNV
extern PFNGLUXGETUNIFORMI64VNVPROC glGetUniformi64vNV;
#endif
#ifndef __GLUX__GLFCT_glGetUniformui64vNV
extern PFNGLUXGETUNIFORMUI64VNVPROC glGetUniformui64vNV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform1i64NV
extern PFNGLUXPROGRAMUNIFORM1I64NVPROC glProgramUniform1i64NV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform2i64NV
extern PFNGLUXPROGRAMUNIFORM2I64NVPROC glProgramUniform2i64NV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform3i64NV
extern PFNGLUXPROGRAMUNIFORM3I64NVPROC glProgramUniform3i64NV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform4i64NV
extern PFNGLUXPROGRAMUNIFORM4I64NVPROC glProgramUniform4i64NV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform1i64vNV
extern PFNGLUXPROGRAMUNIFORM1I64VNVPROC glProgramUniform1i64vNV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform2i64vNV
extern PFNGLUXPROGRAMUNIFORM2I64VNVPROC glProgramUniform2i64vNV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform3i64vNV
extern PFNGLUXPROGRAMUNIFORM3I64VNVPROC glProgramUniform3i64vNV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform4i64vNV
extern PFNGLUXPROGRAMUNIFORM4I64VNVPROC glProgramUniform4i64vNV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform1ui64NV
extern PFNGLUXPROGRAMUNIFORM1UI64NVPROC glProgramUniform1ui64NV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform2ui64NV
extern PFNGLUXPROGRAMUNIFORM2UI64NVPROC glProgramUniform2ui64NV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform3ui64NV
extern PFNGLUXPROGRAMUNIFORM3UI64NVPROC glProgramUniform3ui64NV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform4ui64NV
extern PFNGLUXPROGRAMUNIFORM4UI64NVPROC glProgramUniform4ui64NV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform1ui64vNV
extern PFNGLUXPROGRAMUNIFORM1UI64VNVPROC glProgramUniform1ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform2ui64vNV
extern PFNGLUXPROGRAMUNIFORM2UI64VNVPROC glProgramUniform2ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform3ui64vNV
extern PFNGLUXPROGRAMUNIFORM3UI64VNVPROC glProgramUniform3ui64vNV;
#endif
#ifndef __GLUX__GLFCT_glProgramUniform4ui64vNV
extern PFNGLUXPROGRAMUNIFORM4UI64VNVPROC glProgramUniform4ui64vNV;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
