
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

#ifndef __GLUX_GL_VERSION_3_1__
#define __GLUX_GL_VERSION_3_1__

GLUX_NEW_PLUGIN(GL_VERSION_3_1)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_SAMPLER_2D_RECT
#    define GL_SAMPLER_2D_RECT 0x8B63
#  endif
#  ifndef GL_SAMPLER_2D_RECT_SHADOW
#    define GL_SAMPLER_2D_RECT_SHADOW 0x8B64
#  endif
#  ifndef GL_SAMPLER_BUFFER
#    define GL_SAMPLER_BUFFER 0x8DC2
#  endif
#  ifndef GL_INT_SAMPLER_2D_RECT
#    define GL_INT_SAMPLER_2D_RECT 0x8DCD
#  endif
#  ifndef GL_INT_SAMPLER_BUFFER
#    define GL_INT_SAMPLER_BUFFER 0x8DD0
#  endif
#  ifndef GL_UNSIGNED_INT_SAMPLER_2D_RECT
#    define GL_UNSIGNED_INT_SAMPLER_2D_RECT 0x8DD5
#  endif
#  ifndef GL_UNSIGNED_INT_SAMPLER_BUFFER
#    define GL_UNSIGNED_INT_SAMPLER_BUFFER 0x8DD8
#  endif
#  ifndef GL_TEXTURE_BUFFER
#    define GL_TEXTURE_BUFFER 0x8C2A
#  endif
#  ifndef GL_MAX_TEXTURE_BUFFER_SIZE
#    define GL_MAX_TEXTURE_BUFFER_SIZE 0x8C2B
#  endif
#  ifndef GL_TEXTURE_BINDING_BUFFER
#    define GL_TEXTURE_BINDING_BUFFER 0x8C2C
#  endif
#  ifndef GL_TEXTURE_BUFFER_DATA_STORE_BINDING
#    define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#  endif
#  ifndef GL_TEXTURE_RECTANGLE
#    define GL_TEXTURE_RECTANGLE 0x84F5
#  endif
#  ifndef GL_TEXTURE_BINDING_RECTANGLE
#    define GL_TEXTURE_BINDING_RECTANGLE 0x84F6
#  endif
#  ifndef GL_PROXY_TEXTURE_RECTANGLE
#    define GL_PROXY_TEXTURE_RECTANGLE 0x84F7
#  endif
#  ifndef GL_MAX_RECTANGLE_TEXTURE_SIZE
#    define GL_MAX_RECTANGLE_TEXTURE_SIZE 0x84F8
#  endif
#  ifndef GL_R8_SNORM
#    define GL_R8_SNORM 0x8F94
#  endif
#  ifndef GL_RG8_SNORM
#    define GL_RG8_SNORM 0x8F95
#  endif
#  ifndef GL_RGB8_SNORM
#    define GL_RGB8_SNORM 0x8F96
#  endif
#  ifndef GL_RGBA8_SNORM
#    define GL_RGBA8_SNORM 0x8F97
#  endif
#  ifndef GL_R16_SNORM
#    define GL_R16_SNORM 0x8F98
#  endif
#  ifndef GL_RG16_SNORM
#    define GL_RG16_SNORM 0x8F99
#  endif
#  ifndef GL_RGB16_SNORM
#    define GL_RGB16_SNORM 0x8F9A
#  endif
#  ifndef GL_RGBA16_SNORM
#    define GL_RGBA16_SNORM 0x8F9B
#  endif
#  ifndef GL_SIGNED_NORMALIZED
#    define GL_SIGNED_NORMALIZED 0x8F9C
#  endif
#  ifndef GL_PRIMITIVE_RESTART
#    define GL_PRIMITIVE_RESTART 0x8F9D
#  endif
#  ifndef GL_PRIMITIVE_RESTART_INDEX
#    define GL_PRIMITIVE_RESTART_INDEX 0x8F9E
#  endif
#  ifndef GL_COPY_READ_BUFFER
#    define GL_COPY_READ_BUFFER 0x8F36
#  endif
#  ifndef GL_COPY_WRITE_BUFFER
#    define GL_COPY_WRITE_BUFFER 0x8F37
#  endif
#  ifndef GL_UNIFORM_BUFFER
#    define GL_UNIFORM_BUFFER 0x8A11
#  endif
#  ifndef GL_UNIFORM_BUFFER_BINDING
#    define GL_UNIFORM_BUFFER_BINDING 0x8A28
#  endif
#  ifndef GL_UNIFORM_BUFFER_START
#    define GL_UNIFORM_BUFFER_START 0x8A29
#  endif
#  ifndef GL_UNIFORM_BUFFER_SIZE
#    define GL_UNIFORM_BUFFER_SIZE 0x8A2A
#  endif
#  ifndef GL_MAX_VERTEX_UNIFORM_BLOCKS
#    define GL_MAX_VERTEX_UNIFORM_BLOCKS 0x8A2B
#  endif
#  ifndef GL_MAX_GEOMETRY_UNIFORM_BLOCKS
#    define GL_MAX_GEOMETRY_UNIFORM_BLOCKS 0x8A2C
#  endif
#  ifndef GL_MAX_FRAGMENT_UNIFORM_BLOCKS
#    define GL_MAX_FRAGMENT_UNIFORM_BLOCKS 0x8A2D
#  endif
#  ifndef GL_MAX_COMBINED_UNIFORM_BLOCKS
#    define GL_MAX_COMBINED_UNIFORM_BLOCKS 0x8A2E
#  endif
#  ifndef GL_MAX_UNIFORM_BUFFER_BINDINGS
#    define GL_MAX_UNIFORM_BUFFER_BINDINGS 0x8A2F
#  endif
#  ifndef GL_MAX_UNIFORM_BLOCK_SIZE
#    define GL_MAX_UNIFORM_BLOCK_SIZE 0x8A30
#  endif
#  ifndef GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS
#    define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#  endif
#  ifndef GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS
#    define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#  endif
#  ifndef GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS
#    define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#  endif
#  ifndef GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT
#    define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#  endif
#  ifndef GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH
#    define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#  endif
#  ifndef GL_ACTIVE_UNIFORM_BLOCKS
#    define GL_ACTIVE_UNIFORM_BLOCKS 0x8A36
#  endif
#  ifndef GL_UNIFORM_TYPE
#    define GL_UNIFORM_TYPE 0x8A37
#  endif
#  ifndef GL_UNIFORM_SIZE
#    define GL_UNIFORM_SIZE 0x8A38
#  endif
#  ifndef GL_UNIFORM_NAME_LENGTH
#    define GL_UNIFORM_NAME_LENGTH 0x8A39
#  endif
#  ifndef GL_UNIFORM_BLOCK_INDEX
#    define GL_UNIFORM_BLOCK_INDEX 0x8A3A
#  endif
#  ifndef GL_UNIFORM_OFFSET
#    define GL_UNIFORM_OFFSET 0x8A3B
#  endif
#  ifndef GL_UNIFORM_ARRAY_STRIDE
#    define GL_UNIFORM_ARRAY_STRIDE 0x8A3C
#  endif
#  ifndef GL_UNIFORM_MATRIX_STRIDE
#    define GL_UNIFORM_MATRIX_STRIDE 0x8A3D
#  endif
#  ifndef GL_UNIFORM_IS_ROW_MAJOR
#    define GL_UNIFORM_IS_ROW_MAJOR 0x8A3E
#  endif
#  ifndef GL_UNIFORM_BLOCK_BINDING
#    define GL_UNIFORM_BLOCK_BINDING 0x8A3F
#  endif
#  ifndef GL_UNIFORM_BLOCK_DATA_SIZE
#    define GL_UNIFORM_BLOCK_DATA_SIZE 0x8A40
#  endif
#  ifndef GL_UNIFORM_BLOCK_NAME_LENGTH
#    define GL_UNIFORM_BLOCK_NAME_LENGTH 0x8A41
#  endif
#  ifndef GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS
#    define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS 0x8A42
#  endif
#  ifndef GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES
#    define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#  endif
#  ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER
#    define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#  endif
#  ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER
#    define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#  endif
#  ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER
#    define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#  endif
#  ifndef GL_INVALID_INDEX
#    define GL_INVALID_INDEX 0xFFFFFFFFu
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glDrawArraysInstanced
typedef void (APIENTRYP PFNGLUXDRAWARRAYSINSTANCEDPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
#endif
#ifndef __GLUX__GLFCT_glDrawElementsInstanced
typedef void (APIENTRYP PFNGLUXDRAWELEMENTSINSTANCEDPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
#endif
#ifndef __GLUX__GLFCT_glTexBuffer
typedef void (APIENTRYP PFNGLUXTEXBUFFERPROC) (GLenum target, GLenum internalformat, GLuint buffer);
#endif
#ifndef __GLUX__GLFCT_glPrimitiveRestartIndex
typedef void (APIENTRYP PFNGLUXPRIMITIVERESTARTINDEXPROC) (GLuint index);
#endif
#ifndef __GLUX__GLFCT_glCopyBufferSubData
typedef void (APIENTRYP PFNGLUXCOPYBUFFERSUBDATAPROC) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
#endif
#ifndef __GLUX__GLFCT_glGetUniformIndices
typedef void (APIENTRYP PFNGLUXGETUNIFORMINDICESPROC) (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
#endif
#ifndef __GLUX__GLFCT_glGetActiveUniformsiv
typedef void (APIENTRYP PFNGLUXGETACTIVEUNIFORMSIVPROC) (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetActiveUniformName
typedef void (APIENTRYP PFNGLUXGETACTIVEUNIFORMNAMEPROC) (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
#endif
#ifndef __GLUX__GLFCT_glGetUniformBlockIndex
typedef GLuint (APIENTRYP PFNGLUXGETUNIFORMBLOCKINDEXPROC) (GLuint program, const GLchar *uniformBlockName);
#endif
#ifndef __GLUX__GLFCT_glGetActiveUniformBlockiv
typedef void (APIENTRYP PFNGLUXGETACTIVEUNIFORMBLOCKIVPROC) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetActiveUniformBlockName
typedef void (APIENTRYP PFNGLUXGETACTIVEUNIFORMBLOCKNAMEPROC) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
#endif
#ifndef __GLUX__GLFCT_glUniformBlockBinding
typedef void (APIENTRYP PFNGLUXUNIFORMBLOCKBINDINGPROC) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glDrawArraysInstanced
extern PFNGLUXDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
#endif
#ifndef __GLUX__GLFCT_glDrawElementsInstanced
extern PFNGLUXDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;
#endif
#ifndef __GLUX__GLFCT_glTexBuffer
extern PFNGLUXTEXBUFFERPROC glTexBuffer;
#endif
#ifndef __GLUX__GLFCT_glPrimitiveRestartIndex
extern PFNGLUXPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;
#endif
#ifndef __GLUX__GLFCT_glCopyBufferSubData
extern PFNGLUXCOPYBUFFERSUBDATAPROC glCopyBufferSubData;
#endif
#ifndef __GLUX__GLFCT_glGetUniformIndices
extern PFNGLUXGETUNIFORMINDICESPROC glGetUniformIndices;
#endif
#ifndef __GLUX__GLFCT_glGetActiveUniformsiv
extern PFNGLUXGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
#endif
#ifndef __GLUX__GLFCT_glGetActiveUniformName
extern PFNGLUXGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName;
#endif
#ifndef __GLUX__GLFCT_glGetUniformBlockIndex
extern PFNGLUXGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
#endif
#ifndef __GLUX__GLFCT_glGetActiveUniformBlockiv
extern PFNGLUXGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
#endif
#ifndef __GLUX__GLFCT_glGetActiveUniformBlockName
extern PFNGLUXGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;
#endif
#ifndef __GLUX__GLFCT_glUniformBlockBinding
extern PFNGLUXUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
