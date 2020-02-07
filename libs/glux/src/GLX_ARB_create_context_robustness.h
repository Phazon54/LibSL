
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

#ifndef __GLUX_GLX_ARB_create_context_robustness__
#define __GLUX_GLX_ARB_create_context_robustness__

GLUX_NEW_PLUGIN(GLX_ARB_create_context_robustness)
// --------------------------------------------------------
#if !(defined WIN32 || defined(_WIN64) || defined __APPLE__ || defined EMSCRIPTEN)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GLX_CONTEXT_ROBUST_ACCESS_BIT_ARB
#    define GLX_CONTEXT_ROBUST_ACCESS_BIT_ARB 0x00000004
#  endif
#  ifndef GLX_LOSE_CONTEXT_ON_RESET_ARB
#    define GLX_LOSE_CONTEXT_ON_RESET_ARB 0x8252
#  endif
#  ifndef GLX_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB
#    define GLX_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#  endif
#  ifndef GLX_NO_RESET_NOTIFICATION_ARB
#    define GLX_NO_RESET_NOTIFICATION_ARB 0x8261
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
