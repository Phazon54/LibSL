
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

#ifndef __GLUX_GL_NV_fragment_program__
#define __GLUX_GL_NV_fragment_program__

GLUX_NEW_PLUGIN(GL_NV_fragment_program)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV
#    define GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV 0x8868
#  endif
#  ifndef GL_FRAGMENT_PROGRAM_NV
#    define GL_FRAGMENT_PROGRAM_NV 0x8870
#  endif
#  ifndef GL_MAX_TEXTURE_COORDS_NV
#    define GL_MAX_TEXTURE_COORDS_NV 0x8871
#  endif
#  ifndef GL_MAX_TEXTURE_IMAGE_UNITS_NV
#    define GL_MAX_TEXTURE_IMAGE_UNITS_NV 0x8872
#  endif
#  ifndef GL_FRAGMENT_PROGRAM_BINDING_NV
#    define GL_FRAGMENT_PROGRAM_BINDING_NV 0x8873
#  endif
#  ifndef GL_PROGRAM_ERROR_STRING_NV
#    define GL_PROGRAM_ERROR_STRING_NV 0x8874
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glProgramNamedParameter4fNV
typedef void (APIENTRYP PFNGLUXPROGRAMNAMEDPARAMETER4FNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#endif
#ifndef __GLUX__GLFCT_glProgramNamedParameter4fvNV
typedef void (APIENTRYP PFNGLUXPROGRAMNAMEDPARAMETER4FVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v);
#endif
#ifndef __GLUX__GLFCT_glProgramNamedParameter4dNV
typedef void (APIENTRYP PFNGLUXPROGRAMNAMEDPARAMETER4DNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#endif
#ifndef __GLUX__GLFCT_glProgramNamedParameter4dvNV
typedef void (APIENTRYP PFNGLUXPROGRAMNAMEDPARAMETER4DVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v);
#endif
#ifndef __GLUX__GLFCT_glGetProgramNamedParameterfvNV
typedef void (APIENTRYP PFNGLUXGETPROGRAMNAMEDPARAMETERFVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glGetProgramNamedParameterdvNV
typedef void (APIENTRYP PFNGLUXGETPROGRAMNAMEDPARAMETERDVNVPROC) (GLuint id, GLsizei len, const GLubyte *name, GLdouble *params);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glProgramNamedParameter4fNV
extern PFNGLUXPROGRAMNAMEDPARAMETER4FNVPROC glProgramNamedParameter4fNV;
#endif
#ifndef __GLUX__GLFCT_glProgramNamedParameter4fvNV
extern PFNGLUXPROGRAMNAMEDPARAMETER4FVNVPROC glProgramNamedParameter4fvNV;
#endif
#ifndef __GLUX__GLFCT_glProgramNamedParameter4dNV
extern PFNGLUXPROGRAMNAMEDPARAMETER4DNVPROC glProgramNamedParameter4dNV;
#endif
#ifndef __GLUX__GLFCT_glProgramNamedParameter4dvNV
extern PFNGLUXPROGRAMNAMEDPARAMETER4DVNVPROC glProgramNamedParameter4dvNV;
#endif
#ifndef __GLUX__GLFCT_glGetProgramNamedParameterfvNV
extern PFNGLUXGETPROGRAMNAMEDPARAMETERFVNVPROC glGetProgramNamedParameterfvNV;
#endif
#ifndef __GLUX__GLFCT_glGetProgramNamedParameterdvNV
extern PFNGLUXGETPROGRAMNAMEDPARAMETERDVNVPROC glGetProgramNamedParameterdvNV;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
