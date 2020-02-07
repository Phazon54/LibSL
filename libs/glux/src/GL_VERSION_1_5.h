
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

#ifndef __GLUX_GL_VERSION_1_5__
#define __GLUX_GL_VERSION_1_5__

GLUX_NEW_PLUGIN(GL_VERSION_1_5)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_BUFFER_SIZE
#    define GL_BUFFER_SIZE 0x8764
#  endif
#  ifndef GL_BUFFER_USAGE
#    define GL_BUFFER_USAGE 0x8765
#  endif
#  ifndef GL_QUERY_COUNTER_BITS
#    define GL_QUERY_COUNTER_BITS 0x8864
#  endif
#  ifndef GL_CURRENT_QUERY
#    define GL_CURRENT_QUERY 0x8865
#  endif
#  ifndef GL_QUERY_RESULT
#    define GL_QUERY_RESULT 0x8866
#  endif
#  ifndef GL_QUERY_RESULT_AVAILABLE
#    define GL_QUERY_RESULT_AVAILABLE 0x8867
#  endif
#  ifndef GL_ARRAY_BUFFER
#    define GL_ARRAY_BUFFER 0x8892
#  endif
#  ifndef GL_ELEMENT_ARRAY_BUFFER
#    define GL_ELEMENT_ARRAY_BUFFER 0x8893
#  endif
#  ifndef GL_ARRAY_BUFFER_BINDING
#    define GL_ARRAY_BUFFER_BINDING 0x8894
#  endif
#  ifndef GL_ELEMENT_ARRAY_BUFFER_BINDING
#    define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#  endif
#  ifndef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
#    define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#  endif
#  ifndef GL_READ_ONLY
#    define GL_READ_ONLY 0x88B8
#  endif
#  ifndef GL_WRITE_ONLY
#    define GL_WRITE_ONLY 0x88B9
#  endif
#  ifndef GL_READ_WRITE
#    define GL_READ_WRITE 0x88BA
#  endif
#  ifndef GL_BUFFER_ACCESS
#    define GL_BUFFER_ACCESS 0x88BB
#  endif
#  ifndef GL_BUFFER_MAPPED
#    define GL_BUFFER_MAPPED 0x88BC
#  endif
#  ifndef GL_BUFFER_MAP_POINTER
#    define GL_BUFFER_MAP_POINTER 0x88BD
#  endif
#  ifndef GL_STREAM_DRAW
#    define GL_STREAM_DRAW 0x88E0
#  endif
#  ifndef GL_STREAM_READ
#    define GL_STREAM_READ 0x88E1
#  endif
#  ifndef GL_STREAM_COPY
#    define GL_STREAM_COPY 0x88E2
#  endif
#  ifndef GL_STATIC_DRAW
#    define GL_STATIC_DRAW 0x88E4
#  endif
#  ifndef GL_STATIC_READ
#    define GL_STATIC_READ 0x88E5
#  endif
#  ifndef GL_STATIC_COPY
#    define GL_STATIC_COPY 0x88E6
#  endif
#  ifndef GL_DYNAMIC_DRAW
#    define GL_DYNAMIC_DRAW 0x88E8
#  endif
#  ifndef GL_DYNAMIC_READ
#    define GL_DYNAMIC_READ 0x88E9
#  endif
#  ifndef GL_DYNAMIC_COPY
#    define GL_DYNAMIC_COPY 0x88EA
#  endif
#  ifndef GL_SAMPLES_PASSED
#    define GL_SAMPLES_PASSED 0x8914
#  endif
#  ifndef GL_SRC1_ALPHA
#    define GL_SRC1_ALPHA 0x8589
#  endif
#  ifndef GL_VERTEX_ARRAY_BUFFER_BINDING
#    define GL_VERTEX_ARRAY_BUFFER_BINDING 0x8896
#  endif
#  ifndef GL_NORMAL_ARRAY_BUFFER_BINDING
#    define GL_NORMAL_ARRAY_BUFFER_BINDING 0x8897
#  endif
#  ifndef GL_COLOR_ARRAY_BUFFER_BINDING
#    define GL_COLOR_ARRAY_BUFFER_BINDING 0x8898
#  endif
#  ifndef GL_INDEX_ARRAY_BUFFER_BINDING
#    define GL_INDEX_ARRAY_BUFFER_BINDING 0x8899
#  endif
#  ifndef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
#    define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#  endif
#  ifndef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING
#    define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING 0x889B
#  endif
#  ifndef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING
#    define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING 0x889C
#  endif
#  ifndef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
#    define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#  endif
#  ifndef GL_WEIGHT_ARRAY_BUFFER_BINDING
#    define GL_WEIGHT_ARRAY_BUFFER_BINDING 0x889E
#  endif
#  ifndef GL_FOG_COORD_SRC
#    define GL_FOG_COORD_SRC 0x8450
#  endif
#  ifndef GL_FOG_COORD
#    define GL_FOG_COORD 0x8451
#  endif
#  ifndef GL_CURRENT_FOG_COORD
#    define GL_CURRENT_FOG_COORD 0x8453
#  endif
#  ifndef GL_FOG_COORD_ARRAY_TYPE
#    define GL_FOG_COORD_ARRAY_TYPE 0x8454
#  endif
#  ifndef GL_FOG_COORD_ARRAY_STRIDE
#    define GL_FOG_COORD_ARRAY_STRIDE 0x8455
#  endif
#  ifndef GL_FOG_COORD_ARRAY_POINTER
#    define GL_FOG_COORD_ARRAY_POINTER 0x8456
#  endif
#  ifndef GL_FOG_COORD_ARRAY
#    define GL_FOG_COORD_ARRAY 0x8457
#  endif
#  ifndef GL_FOG_COORD_ARRAY_BUFFER_BINDING
#    define GL_FOG_COORD_ARRAY_BUFFER_BINDING 0x889D
#  endif
#  ifndef GL_SRC0_RGB
#    define GL_SRC0_RGB 0x8580
#  endif
#  ifndef GL_SRC1_RGB
#    define GL_SRC1_RGB 0x8581
#  endif
#  ifndef GL_SRC2_RGB
#    define GL_SRC2_RGB 0x8582
#  endif
#  ifndef GL_SRC0_ALPHA
#    define GL_SRC0_ALPHA 0x8588
#  endif
#  ifndef GL_SRC2_ALPHA
#    define GL_SRC2_ALPHA 0x858A
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glGenQueries
typedef void (APIENTRYP PFNGLUXGENQUERIESPROC) (GLsizei n, GLuint *ids);
#endif
#ifndef __GLUX__GLFCT_glDeleteQueries
typedef void (APIENTRYP PFNGLUXDELETEQUERIESPROC) (GLsizei n, const GLuint *ids);
#endif
#ifndef __GLUX__GLFCT_glIsQuery
typedef GLboolean (APIENTRYP PFNGLUXISQUERYPROC) (GLuint id);
#endif
#ifndef __GLUX__GLFCT_glBeginQuery
typedef void (APIENTRYP PFNGLUXBEGINQUERYPROC) (GLenum target, GLuint id);
#endif
#ifndef __GLUX__GLFCT_glEndQuery
typedef void (APIENTRYP PFNGLUXENDQUERYPROC) (GLenum target);
#endif
#ifndef __GLUX__GLFCT_glGetQueryiv
typedef void (APIENTRYP PFNGLUXGETQUERYIVPROC) (GLenum target, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetQueryObjectiv
typedef void (APIENTRYP PFNGLUXGETQUERYOBJECTIVPROC) (GLuint id, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetQueryObjectuiv
typedef void (APIENTRYP PFNGLUXGETQUERYOBJECTUIVPROC) (GLuint id, GLenum pname, GLuint *params);
#endif
#ifndef __GLUX__GLFCT_glBindBuffer
typedef void (APIENTRYP PFNGLUXBINDBUFFERPROC) (GLenum target, GLuint buffer);
#endif
#ifndef __GLUX__GLFCT_glDeleteBuffers
typedef void (APIENTRYP PFNGLUXDELETEBUFFERSPROC) (GLsizei n, const GLuint *buffers);
#endif
#ifndef __GLUX__GLFCT_glGenBuffers
typedef void (APIENTRYP PFNGLUXGENBUFFERSPROC) (GLsizei n, GLuint *buffers);
#endif
#ifndef __GLUX__GLFCT_glIsBuffer
typedef GLboolean (APIENTRYP PFNGLUXISBUFFERPROC) (GLuint buffer);
#endif
#ifndef __GLUX__GLFCT_glBufferData
typedef void (APIENTRYP PFNGLUXBUFFERDATAPROC) (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
#endif
#ifndef __GLUX__GLFCT_glBufferSubData
typedef void (APIENTRYP PFNGLUXBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
#endif
#ifndef __GLUX__GLFCT_glGetBufferSubData
typedef void (APIENTRYP PFNGLUXGETBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, void *data);
#endif
#ifndef __GLUX__GLFCT_glMapBuffer
typedef void *(APIENTRYP PFNGLUXMAPBUFFERPROC) (GLenum target, GLenum access);
#endif
#ifndef __GLUX__GLFCT_glUnmapBuffer
typedef GLboolean (APIENTRYP PFNGLUXUNMAPBUFFERPROC) (GLenum target);
#endif
#ifndef __GLUX__GLFCT_glGetBufferParameteriv
typedef void (APIENTRYP PFNGLUXGETBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetBufferPointerv
typedef void (APIENTRYP PFNGLUXGETBUFFERPOINTERVPROC) (GLenum target, GLenum pname, void **params);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glGenQueries
extern PFNGLUXGENQUERIESPROC glGenQueries;
#endif
#ifndef __GLUX__GLFCT_glDeleteQueries
extern PFNGLUXDELETEQUERIESPROC glDeleteQueries;
#endif
#ifndef __GLUX__GLFCT_glIsQuery
extern PFNGLUXISQUERYPROC glIsQuery;
#endif
#ifndef __GLUX__GLFCT_glBeginQuery
extern PFNGLUXBEGINQUERYPROC glBeginQuery;
#endif
#ifndef __GLUX__GLFCT_glEndQuery
extern PFNGLUXENDQUERYPROC glEndQuery;
#endif
#ifndef __GLUX__GLFCT_glGetQueryiv
extern PFNGLUXGETQUERYIVPROC glGetQueryiv;
#endif
#ifndef __GLUX__GLFCT_glGetQueryObjectiv
extern PFNGLUXGETQUERYOBJECTIVPROC glGetQueryObjectiv;
#endif
#ifndef __GLUX__GLFCT_glGetQueryObjectuiv
extern PFNGLUXGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;
#endif
#ifndef __GLUX__GLFCT_glBindBuffer
extern PFNGLUXBINDBUFFERPROC glBindBuffer;
#endif
#ifndef __GLUX__GLFCT_glDeleteBuffers
extern PFNGLUXDELETEBUFFERSPROC glDeleteBuffers;
#endif
#ifndef __GLUX__GLFCT_glGenBuffers
extern PFNGLUXGENBUFFERSPROC glGenBuffers;
#endif
#ifndef __GLUX__GLFCT_glIsBuffer
extern PFNGLUXISBUFFERPROC glIsBuffer;
#endif
#ifndef __GLUX__GLFCT_glBufferData
extern PFNGLUXBUFFERDATAPROC glBufferData;
#endif
#ifndef __GLUX__GLFCT_glBufferSubData
extern PFNGLUXBUFFERSUBDATAPROC glBufferSubData;
#endif
#ifndef __GLUX__GLFCT_glGetBufferSubData
extern PFNGLUXGETBUFFERSUBDATAPROC glGetBufferSubData;
#endif
#ifndef __GLUX__GLFCT_glMapBuffer
extern PFNGLUXMAPBUFFERPROC glMapBuffer;
#endif
#ifndef __GLUX__GLFCT_glUnmapBuffer
extern PFNGLUXUNMAPBUFFERPROC glUnmapBuffer;
#endif
#ifndef __GLUX__GLFCT_glGetBufferParameteriv
extern PFNGLUXGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;
#endif
#ifndef __GLUX__GLFCT_glGetBufferPointerv
extern PFNGLUXGETBUFFERPOINTERVPROC glGetBufferPointerv;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
