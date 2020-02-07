
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

#ifndef __GLUX_GL_ARB_window_pos__
#define __GLUX_GL_ARB_window_pos__

GLUX_NEW_PLUGIN(GL_ARB_window_pos)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glWindowPos2dARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS2DARBPROC) (GLdouble x, GLdouble y);
#endif
#ifndef __GLUX__GLFCT_glWindowPos2dvARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS2DVARBPROC) (const GLdouble *v);
#endif
#ifndef __GLUX__GLFCT_glWindowPos2fARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS2FARBPROC) (GLfloat x, GLfloat y);
#endif
#ifndef __GLUX__GLFCT_glWindowPos2fvARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS2FVARBPROC) (const GLfloat *v);
#endif
#ifndef __GLUX__GLFCT_glWindowPos2iARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS2IARBPROC) (GLint x, GLint y);
#endif
#ifndef __GLUX__GLFCT_glWindowPos2ivARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS2IVARBPROC) (const GLint *v);
#endif
#ifndef __GLUX__GLFCT_glWindowPos2sARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS2SARBPROC) (GLshort x, GLshort y);
#endif
#ifndef __GLUX__GLFCT_glWindowPos2svARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS2SVARBPROC) (const GLshort *v);
#endif
#ifndef __GLUX__GLFCT_glWindowPos3dARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS3DARBPROC) (GLdouble x, GLdouble y, GLdouble z);
#endif
#ifndef __GLUX__GLFCT_glWindowPos3dvARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS3DVARBPROC) (const GLdouble *v);
#endif
#ifndef __GLUX__GLFCT_glWindowPos3fARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS3FARBPROC) (GLfloat x, GLfloat y, GLfloat z);
#endif
#ifndef __GLUX__GLFCT_glWindowPos3fvARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS3FVARBPROC) (const GLfloat *v);
#endif
#ifndef __GLUX__GLFCT_glWindowPos3iARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS3IARBPROC) (GLint x, GLint y, GLint z);
#endif
#ifndef __GLUX__GLFCT_glWindowPos3ivARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS3IVARBPROC) (const GLint *v);
#endif
#ifndef __GLUX__GLFCT_glWindowPos3sARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS3SARBPROC) (GLshort x, GLshort y, GLshort z);
#endif
#ifndef __GLUX__GLFCT_glWindowPos3svARB
typedef void (APIENTRYP PFNGLUXWINDOWPOS3SVARBPROC) (const GLshort *v);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glWindowPos2dARB
extern PFNGLUXWINDOWPOS2DARBPROC glWindowPos2dARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos2dvARB
extern PFNGLUXWINDOWPOS2DVARBPROC glWindowPos2dvARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos2fARB
extern PFNGLUXWINDOWPOS2FARBPROC glWindowPos2fARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos2fvARB
extern PFNGLUXWINDOWPOS2FVARBPROC glWindowPos2fvARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos2iARB
extern PFNGLUXWINDOWPOS2IARBPROC glWindowPos2iARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos2ivARB
extern PFNGLUXWINDOWPOS2IVARBPROC glWindowPos2ivARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos2sARB
extern PFNGLUXWINDOWPOS2SARBPROC glWindowPos2sARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos2svARB
extern PFNGLUXWINDOWPOS2SVARBPROC glWindowPos2svARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos3dARB
extern PFNGLUXWINDOWPOS3DARBPROC glWindowPos3dARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos3dvARB
extern PFNGLUXWINDOWPOS3DVARBPROC glWindowPos3dvARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos3fARB
extern PFNGLUXWINDOWPOS3FARBPROC glWindowPos3fARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos3fvARB
extern PFNGLUXWINDOWPOS3FVARBPROC glWindowPos3fvARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos3iARB
extern PFNGLUXWINDOWPOS3IARBPROC glWindowPos3iARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos3ivARB
extern PFNGLUXWINDOWPOS3IVARBPROC glWindowPos3ivARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos3sARB
extern PFNGLUXWINDOWPOS3SARBPROC glWindowPos3sARB;
#endif
#ifndef __GLUX__GLFCT_glWindowPos3svARB
extern PFNGLUXWINDOWPOS3SVARBPROC glWindowPos3svARB;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
