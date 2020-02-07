
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

#ifndef __GLUX_WGL_NV_video_capture__
#define __GLUX_WGL_NV_video_capture__

GLUX_NEW_PLUGIN(WGL_NV_video_capture)
// --------------------------------------------------------
#if defined(_WIN32) || defined(_WIN64)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef WGL_UNIQUE_ID_NV
#    define WGL_UNIQUE_ID_NV 0x20CE
#  endif
#  ifndef WGL_NUM_VIDEO_CAPTURE_SLOTS_NV
#    define WGL_NUM_VIDEO_CAPTURE_SLOTS_NV 0x20CF
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_wglBindVideoCaptureDeviceNV
typedef BOOL (APIENTRYP PFNWGLUXBINDVIDEOCAPTUREDEVICENVPROC) (UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
#endif
#ifndef __GLUX__GLFCT_wglEnumerateVideoCaptureDevicesNV
typedef UINT (APIENTRYP PFNWGLUXENUMERATEVIDEOCAPTUREDEVICESNVPROC) (HDC hDc, HVIDEOINPUTDEVICENV *phDeviceList);
#endif
#ifndef __GLUX__GLFCT_wglLockVideoCaptureDeviceNV
typedef BOOL (APIENTRYP PFNWGLUXLOCKVIDEOCAPTUREDEVICENVPROC) (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
#endif
#ifndef __GLUX__GLFCT_wglQueryVideoCaptureDeviceNV
typedef BOOL (APIENTRYP PFNWGLUXQUERYVIDEOCAPTUREDEVICENVPROC) (HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int *piValue);
#endif
#ifndef __GLUX__GLFCT_wglReleaseVideoCaptureDeviceNV
typedef BOOL (APIENTRYP PFNWGLUXRELEASEVIDEOCAPTUREDEVICENVPROC) (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_wglBindVideoCaptureDeviceNV
extern PFNWGLUXBINDVIDEOCAPTUREDEVICENVPROC wglBindVideoCaptureDeviceNV;
#endif
#ifndef __GLUX__GLFCT_wglEnumerateVideoCaptureDevicesNV
extern PFNWGLUXENUMERATEVIDEOCAPTUREDEVICESNVPROC wglEnumerateVideoCaptureDevicesNV;
#endif
#ifndef __GLUX__GLFCT_wglLockVideoCaptureDeviceNV
extern PFNWGLUXLOCKVIDEOCAPTUREDEVICENVPROC wglLockVideoCaptureDeviceNV;
#endif
#ifndef __GLUX__GLFCT_wglQueryVideoCaptureDeviceNV
extern PFNWGLUXQUERYVIDEOCAPTUREDEVICENVPROC wglQueryVideoCaptureDeviceNV;
#endif
#ifndef __GLUX__GLFCT_wglReleaseVideoCaptureDeviceNV
extern PFNWGLUXRELEASEVIDEOCAPTUREDEVICENVPROC wglReleaseVideoCaptureDeviceNV;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
