
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

#ifndef __GLUX_WGL_EXT_display_color_table__
#define __GLUX_WGL_EXT_display_color_table__

GLUX_NEW_PLUGIN(WGL_EXT_display_color_table)
// --------------------------------------------------------
#if defined(_WIN32) || defined(_WIN64)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_wglCreateDisplayColorTableEXT
typedef GLboolean (APIENTRYP PFNWGLUXCREATEDISPLAYCOLORTABLEEXTPROC) (GLushort id);
#endif
#ifndef __GLUX__GLFCT_wglLoadDisplayColorTableEXT
typedef GLboolean (APIENTRYP PFNWGLUXLOADDISPLAYCOLORTABLEEXTPROC) (const GLushort *table, GLuint length);
#endif
#ifndef __GLUX__GLFCT_wglBindDisplayColorTableEXT
typedef GLboolean (APIENTRYP PFNWGLUXBINDDISPLAYCOLORTABLEEXTPROC) (GLushort id);
#endif
#ifndef __GLUX__GLFCT_wglDestroyDisplayColorTableEXT
typedef VOID (APIENTRYP PFNWGLUXDESTROYDISPLAYCOLORTABLEEXTPROC) (GLushort id);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_wglCreateDisplayColorTableEXT
extern PFNWGLUXCREATEDISPLAYCOLORTABLEEXTPROC wglCreateDisplayColorTableEXT;
#endif
#ifndef __GLUX__GLFCT_wglLoadDisplayColorTableEXT
extern PFNWGLUXLOADDISPLAYCOLORTABLEEXTPROC wglLoadDisplayColorTableEXT;
#endif
#ifndef __GLUX__GLFCT_wglBindDisplayColorTableEXT
extern PFNWGLUXBINDDISPLAYCOLORTABLEEXTPROC wglBindDisplayColorTableEXT;
#endif
#ifndef __GLUX__GLFCT_wglDestroyDisplayColorTableEXT
extern PFNWGLUXDESTROYDISPLAYCOLORTABLEEXTPROC wglDestroyDisplayColorTableEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
