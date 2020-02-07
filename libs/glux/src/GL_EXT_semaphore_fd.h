
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

#ifndef __GLUX_GL_EXT_semaphore_fd__
#define __GLUX_GL_EXT_semaphore_fd__

GLUX_NEW_PLUGIN(GL_EXT_semaphore_fd)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glImportSemaphoreFdEXT
typedef void (APIENTRYP PFNGLUXIMPORTSEMAPHOREFDEXTPROC) (GLuint semaphore, GLenum handleType, GLint fd);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glImportSemaphoreFdEXT
extern PFNGLUXIMPORTSEMAPHOREFDEXTPROC glImportSemaphoreFdEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
