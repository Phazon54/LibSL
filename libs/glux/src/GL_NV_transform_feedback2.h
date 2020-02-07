
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

#ifndef __GLUX_GL_NV_transform_feedback2__
#define __GLUX_GL_NV_transform_feedback2__

GLUX_NEW_PLUGIN(GL_NV_transform_feedback2)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_TRANSFORM_FEEDBACK_NV
#    define GL_TRANSFORM_FEEDBACK_NV 0x8E22
#  endif
#  ifndef GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV
#    define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV 0x8E23
#  endif
#  ifndef GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV
#    define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV 0x8E24
#  endif
#  ifndef GL_TRANSFORM_FEEDBACK_BINDING_NV
#    define GL_TRANSFORM_FEEDBACK_BINDING_NV 0x8E25
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glBindTransformFeedbackNV
typedef void (APIENTRYP PFNGLUXBINDTRANSFORMFEEDBACKNVPROC) (GLenum target, GLuint id);
#endif
#ifndef __GLUX__GLFCT_glDeleteTransformFeedbacksNV
typedef void (APIENTRYP PFNGLUXDELETETRANSFORMFEEDBACKSNVPROC) (GLsizei n, const GLuint *ids);
#endif
#ifndef __GLUX__GLFCT_glGenTransformFeedbacksNV
typedef void (APIENTRYP PFNGLUXGENTRANSFORMFEEDBACKSNVPROC) (GLsizei n, GLuint *ids);
#endif
#ifndef __GLUX__GLFCT_glIsTransformFeedbackNV
typedef GLboolean (APIENTRYP PFNGLUXISTRANSFORMFEEDBACKNVPROC) (GLuint id);
#endif
#ifndef __GLUX__GLFCT_glPauseTransformFeedbackNV
typedef void (APIENTRYP PFNGLUXPAUSETRANSFORMFEEDBACKNVPROC) (void);
#endif
#ifndef __GLUX__GLFCT_glResumeTransformFeedbackNV
typedef void (APIENTRYP PFNGLUXRESUMETRANSFORMFEEDBACKNVPROC) (void);
#endif
#ifndef __GLUX__GLFCT_glDrawTransformFeedbackNV
typedef void (APIENTRYP PFNGLUXDRAWTRANSFORMFEEDBACKNVPROC) (GLenum mode, GLuint id);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glBindTransformFeedbackNV
extern PFNGLUXBINDTRANSFORMFEEDBACKNVPROC glBindTransformFeedbackNV;
#endif
#ifndef __GLUX__GLFCT_glDeleteTransformFeedbacksNV
extern PFNGLUXDELETETRANSFORMFEEDBACKSNVPROC glDeleteTransformFeedbacksNV;
#endif
#ifndef __GLUX__GLFCT_glGenTransformFeedbacksNV
extern PFNGLUXGENTRANSFORMFEEDBACKSNVPROC glGenTransformFeedbacksNV;
#endif
#ifndef __GLUX__GLFCT_glIsTransformFeedbackNV
extern PFNGLUXISTRANSFORMFEEDBACKNVPROC glIsTransformFeedbackNV;
#endif
#ifndef __GLUX__GLFCT_glPauseTransformFeedbackNV
extern PFNGLUXPAUSETRANSFORMFEEDBACKNVPROC glPauseTransformFeedbackNV;
#endif
#ifndef __GLUX__GLFCT_glResumeTransformFeedbackNV
extern PFNGLUXRESUMETRANSFORMFEEDBACKNVPROC glResumeTransformFeedbackNV;
#endif
#ifndef __GLUX__GLFCT_glDrawTransformFeedbackNV
extern PFNGLUXDRAWTRANSFORMFEEDBACKNVPROC glDrawTransformFeedbackNV;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
