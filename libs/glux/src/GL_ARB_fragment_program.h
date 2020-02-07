
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

#ifndef __GLUX_GL_ARB_fragment_program__
#define __GLUX_GL_ARB_fragment_program__

GLUX_NEW_PLUGIN(GL_ARB_fragment_program)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_FRAGMENT_PROGRAM_ARB
#    define GL_FRAGMENT_PROGRAM_ARB 0x8804
#  endif
#  ifndef GL_PROGRAM_FORMAT_ASCII_ARB
#    define GL_PROGRAM_FORMAT_ASCII_ARB 0x8875
#  endif
#  ifndef GL_PROGRAM_LENGTH_ARB
#    define GL_PROGRAM_LENGTH_ARB 0x8627
#  endif
#  ifndef GL_PROGRAM_FORMAT_ARB
#    define GL_PROGRAM_FORMAT_ARB 0x8876
#  endif
#  ifndef GL_PROGRAM_BINDING_ARB
#    define GL_PROGRAM_BINDING_ARB 0x8677
#  endif
#  ifndef GL_PROGRAM_INSTRUCTIONS_ARB
#    define GL_PROGRAM_INSTRUCTIONS_ARB 0x88A0
#  endif
#  ifndef GL_MAX_PROGRAM_INSTRUCTIONS_ARB
#    define GL_MAX_PROGRAM_INSTRUCTIONS_ARB 0x88A1
#  endif
#  ifndef GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB
#    define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A2
#  endif
#  ifndef GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB
#    define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A3
#  endif
#  ifndef GL_PROGRAM_TEMPORARIES_ARB
#    define GL_PROGRAM_TEMPORARIES_ARB 0x88A4
#  endif
#  ifndef GL_MAX_PROGRAM_TEMPORARIES_ARB
#    define GL_MAX_PROGRAM_TEMPORARIES_ARB 0x88A5
#  endif
#  ifndef GL_PROGRAM_NATIVE_TEMPORARIES_ARB
#    define GL_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A6
#  endif
#  ifndef GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB
#    define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A7
#  endif
#  ifndef GL_PROGRAM_PARAMETERS_ARB
#    define GL_PROGRAM_PARAMETERS_ARB 0x88A8
#  endif
#  ifndef GL_MAX_PROGRAM_PARAMETERS_ARB
#    define GL_MAX_PROGRAM_PARAMETERS_ARB 0x88A9
#  endif
#  ifndef GL_PROGRAM_NATIVE_PARAMETERS_ARB
#    define GL_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AA
#  endif
#  ifndef GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB
#    define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AB
#  endif
#  ifndef GL_PROGRAM_ATTRIBS_ARB
#    define GL_PROGRAM_ATTRIBS_ARB 0x88AC
#  endif
#  ifndef GL_MAX_PROGRAM_ATTRIBS_ARB
#    define GL_MAX_PROGRAM_ATTRIBS_ARB 0x88AD
#  endif
#  ifndef GL_PROGRAM_NATIVE_ATTRIBS_ARB
#    define GL_PROGRAM_NATIVE_ATTRIBS_ARB 0x88AE
#  endif
#  ifndef GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB
#    define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB 0x88AF
#  endif
#  ifndef GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB
#    define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB 0x88B4
#  endif
#  ifndef GL_MAX_PROGRAM_ENV_PARAMETERS_ARB
#    define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB 0x88B5
#  endif
#  ifndef GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB
#    define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB 0x88B6
#  endif
#  ifndef GL_PROGRAM_ALU_INSTRUCTIONS_ARB
#    define GL_PROGRAM_ALU_INSTRUCTIONS_ARB 0x8805
#  endif
#  ifndef GL_PROGRAM_TEX_INSTRUCTIONS_ARB
#    define GL_PROGRAM_TEX_INSTRUCTIONS_ARB 0x8806
#  endif
#  ifndef GL_PROGRAM_TEX_INDIRECTIONS_ARB
#    define GL_PROGRAM_TEX_INDIRECTIONS_ARB 0x8807
#  endif
#  ifndef GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB
#    define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x8808
#  endif
#  ifndef GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB
#    define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x8809
#  endif
#  ifndef GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB
#    define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x880A
#  endif
#  ifndef GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB
#    define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB 0x880B
#  endif
#  ifndef GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB
#    define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB 0x880C
#  endif
#  ifndef GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB
#    define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB 0x880D
#  endif
#  ifndef GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB
#    define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x880E
#  endif
#  ifndef GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB
#    define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x880F
#  endif
#  ifndef GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB
#    define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x8810
#  endif
#  ifndef GL_PROGRAM_STRING_ARB
#    define GL_PROGRAM_STRING_ARB 0x8628
#  endif
#  ifndef GL_PROGRAM_ERROR_POSITION_ARB
#    define GL_PROGRAM_ERROR_POSITION_ARB 0x864B
#  endif
#  ifndef GL_CURRENT_MATRIX_ARB
#    define GL_CURRENT_MATRIX_ARB 0x8641
#  endif
#  ifndef GL_TRANSPOSE_CURRENT_MATRIX_ARB
#    define GL_TRANSPOSE_CURRENT_MATRIX_ARB 0x88B7
#  endif
#  ifndef GL_CURRENT_MATRIX_STACK_DEPTH_ARB
#    define GL_CURRENT_MATRIX_STACK_DEPTH_ARB 0x8640
#  endif
#  ifndef GL_MAX_PROGRAM_MATRICES_ARB
#    define GL_MAX_PROGRAM_MATRICES_ARB 0x862F
#  endif
#  ifndef GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB
#    define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB 0x862E
#  endif
#  ifndef GL_MAX_TEXTURE_COORDS_ARB
#    define GL_MAX_TEXTURE_COORDS_ARB 0x8871
#  endif
#  ifndef GL_MAX_TEXTURE_IMAGE_UNITS_ARB
#    define GL_MAX_TEXTURE_IMAGE_UNITS_ARB 0x8872
#  endif
#  ifndef GL_PROGRAM_ERROR_STRING_ARB
#    define GL_PROGRAM_ERROR_STRING_ARB 0x8874
#  endif
#  ifndef GL_MATRIX0_ARB
#    define GL_MATRIX0_ARB 0x88C0
#  endif
#  ifndef GL_MATRIX1_ARB
#    define GL_MATRIX1_ARB 0x88C1
#  endif
#  ifndef GL_MATRIX2_ARB
#    define GL_MATRIX2_ARB 0x88C2
#  endif
#  ifndef GL_MATRIX3_ARB
#    define GL_MATRIX3_ARB 0x88C3
#  endif
#  ifndef GL_MATRIX4_ARB
#    define GL_MATRIX4_ARB 0x88C4
#  endif
#  ifndef GL_MATRIX5_ARB
#    define GL_MATRIX5_ARB 0x88C5
#  endif
#  ifndef GL_MATRIX6_ARB
#    define GL_MATRIX6_ARB 0x88C6
#  endif
#  ifndef GL_MATRIX7_ARB
#    define GL_MATRIX7_ARB 0x88C7
#  endif
#  ifndef GL_MATRIX8_ARB
#    define GL_MATRIX8_ARB 0x88C8
#  endif
#  ifndef GL_MATRIX9_ARB
#    define GL_MATRIX9_ARB 0x88C9
#  endif
#  ifndef GL_MATRIX10_ARB
#    define GL_MATRIX10_ARB 0x88CA
#  endif
#  ifndef GL_MATRIX11_ARB
#    define GL_MATRIX11_ARB 0x88CB
#  endif
#  ifndef GL_MATRIX12_ARB
#    define GL_MATRIX12_ARB 0x88CC
#  endif
#  ifndef GL_MATRIX13_ARB
#    define GL_MATRIX13_ARB 0x88CD
#  endif
#  ifndef GL_MATRIX14_ARB
#    define GL_MATRIX14_ARB 0x88CE
#  endif
#  ifndef GL_MATRIX15_ARB
#    define GL_MATRIX15_ARB 0x88CF
#  endif
#  ifndef GL_MATRIX16_ARB
#    define GL_MATRIX16_ARB 0x88D0
#  endif
#  ifndef GL_MATRIX17_ARB
#    define GL_MATRIX17_ARB 0x88D1
#  endif
#  ifndef GL_MATRIX18_ARB
#    define GL_MATRIX18_ARB 0x88D2
#  endif
#  ifndef GL_MATRIX19_ARB
#    define GL_MATRIX19_ARB 0x88D3
#  endif
#  ifndef GL_MATRIX20_ARB
#    define GL_MATRIX20_ARB 0x88D4
#  endif
#  ifndef GL_MATRIX21_ARB
#    define GL_MATRIX21_ARB 0x88D5
#  endif
#  ifndef GL_MATRIX22_ARB
#    define GL_MATRIX22_ARB 0x88D6
#  endif
#  ifndef GL_MATRIX23_ARB
#    define GL_MATRIX23_ARB 0x88D7
#  endif
#  ifndef GL_MATRIX24_ARB
#    define GL_MATRIX24_ARB 0x88D8
#  endif
#  ifndef GL_MATRIX25_ARB
#    define GL_MATRIX25_ARB 0x88D9
#  endif
#  ifndef GL_MATRIX26_ARB
#    define GL_MATRIX26_ARB 0x88DA
#  endif
#  ifndef GL_MATRIX27_ARB
#    define GL_MATRIX27_ARB 0x88DB
#  endif
#  ifndef GL_MATRIX28_ARB
#    define GL_MATRIX28_ARB 0x88DC
#  endif
#  ifndef GL_MATRIX29_ARB
#    define GL_MATRIX29_ARB 0x88DD
#  endif
#  ifndef GL_MATRIX30_ARB
#    define GL_MATRIX30_ARB 0x88DE
#  endif
#  ifndef GL_MATRIX31_ARB
#    define GL_MATRIX31_ARB 0x88DF
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glProgramStringARB
typedef void (APIENTRYP PFNGLUXPROGRAMSTRINGARBPROC) (GLenum target, GLenum format, GLsizei len, const void *string);
#endif
#ifndef __GLUX__GLFCT_glBindProgramARB
typedef void (APIENTRYP PFNGLUXBINDPROGRAMARBPROC) (GLenum target, GLuint program);
#endif
#ifndef __GLUX__GLFCT_glDeleteProgramsARB
typedef void (APIENTRYP PFNGLUXDELETEPROGRAMSARBPROC) (GLsizei n, const GLuint *programs);
#endif
#ifndef __GLUX__GLFCT_glGenProgramsARB
typedef void (APIENTRYP PFNGLUXGENPROGRAMSARBPROC) (GLsizei n, GLuint *programs);
#endif
#ifndef __GLUX__GLFCT_glProgramEnvParameter4dARB
typedef void (APIENTRYP PFNGLUXPROGRAMENVPARAMETER4DARBPROC) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#endif
#ifndef __GLUX__GLFCT_glProgramEnvParameter4dvARB
typedef void (APIENTRYP PFNGLUXPROGRAMENVPARAMETER4DVARBPROC) (GLenum target, GLuint index, const GLdouble *params);
#endif
#ifndef __GLUX__GLFCT_glProgramEnvParameter4fARB
typedef void (APIENTRYP PFNGLUXPROGRAMENVPARAMETER4FARBPROC) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#endif
#ifndef __GLUX__GLFCT_glProgramEnvParameter4fvARB
typedef void (APIENTRYP PFNGLUXPROGRAMENVPARAMETER4FVARBPROC) (GLenum target, GLuint index, const GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glProgramLocalParameter4dARB
typedef void (APIENTRYP PFNGLUXPROGRAMLOCALPARAMETER4DARBPROC) (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#endif
#ifndef __GLUX__GLFCT_glProgramLocalParameter4dvARB
typedef void (APIENTRYP PFNGLUXPROGRAMLOCALPARAMETER4DVARBPROC) (GLenum target, GLuint index, const GLdouble *params);
#endif
#ifndef __GLUX__GLFCT_glProgramLocalParameter4fARB
typedef void (APIENTRYP PFNGLUXPROGRAMLOCALPARAMETER4FARBPROC) (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#endif
#ifndef __GLUX__GLFCT_glProgramLocalParameter4fvARB
typedef void (APIENTRYP PFNGLUXPROGRAMLOCALPARAMETER4FVARBPROC) (GLenum target, GLuint index, const GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glGetProgramEnvParameterdvARB
typedef void (APIENTRYP PFNGLUXGETPROGRAMENVPARAMETERDVARBPROC) (GLenum target, GLuint index, GLdouble *params);
#endif
#ifndef __GLUX__GLFCT_glGetProgramEnvParameterfvARB
typedef void (APIENTRYP PFNGLUXGETPROGRAMENVPARAMETERFVARBPROC) (GLenum target, GLuint index, GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glGetProgramLocalParameterdvARB
typedef void (APIENTRYP PFNGLUXGETPROGRAMLOCALPARAMETERDVARBPROC) (GLenum target, GLuint index, GLdouble *params);
#endif
#ifndef __GLUX__GLFCT_glGetProgramLocalParameterfvARB
typedef void (APIENTRYP PFNGLUXGETPROGRAMLOCALPARAMETERFVARBPROC) (GLenum target, GLuint index, GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glGetProgramivARB
typedef void (APIENTRYP PFNGLUXGETPROGRAMIVARBPROC) (GLenum target, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetProgramStringARB
typedef void (APIENTRYP PFNGLUXGETPROGRAMSTRINGARBPROC) (GLenum target, GLenum pname, void *string);
#endif
#ifndef __GLUX__GLFCT_glIsProgramARB
typedef GLboolean (APIENTRYP PFNGLUXISPROGRAMARBPROC) (GLuint program);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glProgramStringARB
extern PFNGLUXPROGRAMSTRINGARBPROC glProgramStringARB;
#endif
#ifndef __GLUX__GLFCT_glBindProgramARB
extern PFNGLUXBINDPROGRAMARBPROC glBindProgramARB;
#endif
#ifndef __GLUX__GLFCT_glDeleteProgramsARB
extern PFNGLUXDELETEPROGRAMSARBPROC glDeleteProgramsARB;
#endif
#ifndef __GLUX__GLFCT_glGenProgramsARB
extern PFNGLUXGENPROGRAMSARBPROC glGenProgramsARB;
#endif
#ifndef __GLUX__GLFCT_glProgramEnvParameter4dARB
extern PFNGLUXPROGRAMENVPARAMETER4DARBPROC glProgramEnvParameter4dARB;
#endif
#ifndef __GLUX__GLFCT_glProgramEnvParameter4dvARB
extern PFNGLUXPROGRAMENVPARAMETER4DVARBPROC glProgramEnvParameter4dvARB;
#endif
#ifndef __GLUX__GLFCT_glProgramEnvParameter4fARB
extern PFNGLUXPROGRAMENVPARAMETER4FARBPROC glProgramEnvParameter4fARB;
#endif
#ifndef __GLUX__GLFCT_glProgramEnvParameter4fvARB
extern PFNGLUXPROGRAMENVPARAMETER4FVARBPROC glProgramEnvParameter4fvARB;
#endif
#ifndef __GLUX__GLFCT_glProgramLocalParameter4dARB
extern PFNGLUXPROGRAMLOCALPARAMETER4DARBPROC glProgramLocalParameter4dARB;
#endif
#ifndef __GLUX__GLFCT_glProgramLocalParameter4dvARB
extern PFNGLUXPROGRAMLOCALPARAMETER4DVARBPROC glProgramLocalParameter4dvARB;
#endif
#ifndef __GLUX__GLFCT_glProgramLocalParameter4fARB
extern PFNGLUXPROGRAMLOCALPARAMETER4FARBPROC glProgramLocalParameter4fARB;
#endif
#ifndef __GLUX__GLFCT_glProgramLocalParameter4fvARB
extern PFNGLUXPROGRAMLOCALPARAMETER4FVARBPROC glProgramLocalParameter4fvARB;
#endif
#ifndef __GLUX__GLFCT_glGetProgramEnvParameterdvARB
extern PFNGLUXGETPROGRAMENVPARAMETERDVARBPROC glGetProgramEnvParameterdvARB;
#endif
#ifndef __GLUX__GLFCT_glGetProgramEnvParameterfvARB
extern PFNGLUXGETPROGRAMENVPARAMETERFVARBPROC glGetProgramEnvParameterfvARB;
#endif
#ifndef __GLUX__GLFCT_glGetProgramLocalParameterdvARB
extern PFNGLUXGETPROGRAMLOCALPARAMETERDVARBPROC glGetProgramLocalParameterdvARB;
#endif
#ifndef __GLUX__GLFCT_glGetProgramLocalParameterfvARB
extern PFNGLUXGETPROGRAMLOCALPARAMETERFVARBPROC glGetProgramLocalParameterfvARB;
#endif
#ifndef __GLUX__GLFCT_glGetProgramivARB
extern PFNGLUXGETPROGRAMIVARBPROC glGetProgramivARB;
#endif
#ifndef __GLUX__GLFCT_glGetProgramStringARB
extern PFNGLUXGETPROGRAMSTRINGARBPROC glGetProgramStringARB;
#endif
#ifndef __GLUX__GLFCT_glIsProgramARB
extern PFNGLUXISPROGRAMARBPROC glIsProgramARB;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
