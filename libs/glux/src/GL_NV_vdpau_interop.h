
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

#ifndef __GLUX_GL_NV_vdpau_interop__
#define __GLUX_GL_NV_vdpau_interop__

GLUX_NEW_PLUGIN(GL_NV_vdpau_interop)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_SURFACE_STATE_NV
#    define GL_SURFACE_STATE_NV 0x86EB
#  endif
#  ifndef GL_SURFACE_REGISTERED_NV
#    define GL_SURFACE_REGISTERED_NV 0x86FD
#  endif
#  ifndef GL_SURFACE_MAPPED_NV
#    define GL_SURFACE_MAPPED_NV 0x8700
#  endif
#  ifndef GL_WRITE_DISCARD_NV
#    define GL_WRITE_DISCARD_NV 0x88BE
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glVDPAUInitNV
typedef void (APIENTRYP PFNGLUXVDPAUINITNVPROC) (const void *vdpDevice, const void *getProcAddress);
#endif
#ifndef __GLUX__GLFCT_glVDPAUFiniNV
typedef void (APIENTRYP PFNGLUXVDPAUFININVPROC) (void);
#endif
#ifndef __GLUX__GLFCT_glVDPAURegisterVideoSurfaceNV
typedef GLvdpauSurfaceNV (APIENTRYP PFNGLUXVDPAUREGISTERVIDEOSURFACENVPROC) (const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
#endif
#ifndef __GLUX__GLFCT_glVDPAURegisterOutputSurfaceNV
typedef GLvdpauSurfaceNV (APIENTRYP PFNGLUXVDPAUREGISTEROUTPUTSURFACENVPROC) (const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
#endif
#ifndef __GLUX__GLFCT_glVDPAUIsSurfaceNV
typedef GLboolean (APIENTRYP PFNGLUXVDPAUISSURFACENVPROC) (GLvdpauSurfaceNV surface);
#endif
#ifndef __GLUX__GLFCT_glVDPAUUnregisterSurfaceNV
typedef void (APIENTRYP PFNGLUXVDPAUUNREGISTERSURFACENVPROC) (GLvdpauSurfaceNV surface);
#endif
#ifndef __GLUX__GLFCT_glVDPAUGetSurfaceivNV
typedef void (APIENTRYP PFNGLUXVDPAUGETSURFACEIVNVPROC) (GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
#endif
#ifndef __GLUX__GLFCT_glVDPAUSurfaceAccessNV
typedef void (APIENTRYP PFNGLUXVDPAUSURFACEACCESSNVPROC) (GLvdpauSurfaceNV surface, GLenum access);
#endif
#ifndef __GLUX__GLFCT_glVDPAUMapSurfacesNV
typedef void (APIENTRYP PFNGLUXVDPAUMAPSURFACESNVPROC) (GLsizei numSurfaces, const GLvdpauSurfaceNV *surfaces);
#endif
#ifndef __GLUX__GLFCT_glVDPAUUnmapSurfacesNV
typedef void (APIENTRYP PFNGLUXVDPAUUNMAPSURFACESNVPROC) (GLsizei numSurface, const GLvdpauSurfaceNV *surfaces);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glVDPAUInitNV
extern PFNGLUXVDPAUINITNVPROC glVDPAUInitNV;
#endif
#ifndef __GLUX__GLFCT_glVDPAUFiniNV
extern PFNGLUXVDPAUFININVPROC glVDPAUFiniNV;
#endif
#ifndef __GLUX__GLFCT_glVDPAURegisterVideoSurfaceNV
extern PFNGLUXVDPAUREGISTERVIDEOSURFACENVPROC glVDPAURegisterVideoSurfaceNV;
#endif
#ifndef __GLUX__GLFCT_glVDPAURegisterOutputSurfaceNV
extern PFNGLUXVDPAUREGISTEROUTPUTSURFACENVPROC glVDPAURegisterOutputSurfaceNV;
#endif
#ifndef __GLUX__GLFCT_glVDPAUIsSurfaceNV
extern PFNGLUXVDPAUISSURFACENVPROC glVDPAUIsSurfaceNV;
#endif
#ifndef __GLUX__GLFCT_glVDPAUUnregisterSurfaceNV
extern PFNGLUXVDPAUUNREGISTERSURFACENVPROC glVDPAUUnregisterSurfaceNV;
#endif
#ifndef __GLUX__GLFCT_glVDPAUGetSurfaceivNV
extern PFNGLUXVDPAUGETSURFACEIVNVPROC glVDPAUGetSurfaceivNV;
#endif
#ifndef __GLUX__GLFCT_glVDPAUSurfaceAccessNV
extern PFNGLUXVDPAUSURFACEACCESSNVPROC glVDPAUSurfaceAccessNV;
#endif
#ifndef __GLUX__GLFCT_glVDPAUMapSurfacesNV
extern PFNGLUXVDPAUMAPSURFACESNVPROC glVDPAUMapSurfacesNV;
#endif
#ifndef __GLUX__GLFCT_glVDPAUUnmapSurfacesNV
extern PFNGLUXVDPAUUNMAPSURFACESNVPROC glVDPAUUnmapSurfacesNV;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
