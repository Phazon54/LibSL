
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

#ifndef __GLUX_WGL_EXT_pixel_format__
#define __GLUX_WGL_EXT_pixel_format__

GLUX_NEW_PLUGIN(WGL_EXT_pixel_format)
// --------------------------------------------------------
#if defined(_WIN32) || defined(_WIN64)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef WGL_NUMBER_PIXEL_FORMATS_EXT
#    define WGL_NUMBER_PIXEL_FORMATS_EXT 0x2000
#  endif
#  ifndef WGL_DRAW_TO_WINDOW_EXT
#    define WGL_DRAW_TO_WINDOW_EXT 0x2001
#  endif
#  ifndef WGL_DRAW_TO_BITMAP_EXT
#    define WGL_DRAW_TO_BITMAP_EXT 0x2002
#  endif
#  ifndef WGL_ACCELERATION_EXT
#    define WGL_ACCELERATION_EXT 0x2003
#  endif
#  ifndef WGL_NEED_PALETTE_EXT
#    define WGL_NEED_PALETTE_EXT 0x2004
#  endif
#  ifndef WGL_NEED_SYSTEM_PALETTE_EXT
#    define WGL_NEED_SYSTEM_PALETTE_EXT 0x2005
#  endif
#  ifndef WGL_SWAP_LAYER_BUFFERS_EXT
#    define WGL_SWAP_LAYER_BUFFERS_EXT 0x2006
#  endif
#  ifndef WGL_SWAP_METHOD_EXT
#    define WGL_SWAP_METHOD_EXT 0x2007
#  endif
#  ifndef WGL_NUMBER_OVERLAYS_EXT
#    define WGL_NUMBER_OVERLAYS_EXT 0x2008
#  endif
#  ifndef WGL_NUMBER_UNDERLAYS_EXT
#    define WGL_NUMBER_UNDERLAYS_EXT 0x2009
#  endif
#  ifndef WGL_TRANSPARENT_EXT
#    define WGL_TRANSPARENT_EXT 0x200A
#  endif
#  ifndef WGL_TRANSPARENT_VALUE_EXT
#    define WGL_TRANSPARENT_VALUE_EXT 0x200B
#  endif
#  ifndef WGL_SHARE_DEPTH_EXT
#    define WGL_SHARE_DEPTH_EXT 0x200C
#  endif
#  ifndef WGL_SHARE_STENCIL_EXT
#    define WGL_SHARE_STENCIL_EXT 0x200D
#  endif
#  ifndef WGL_SHARE_ACCUM_EXT
#    define WGL_SHARE_ACCUM_EXT 0x200E
#  endif
#  ifndef WGL_SUPPORT_GDI_EXT
#    define WGL_SUPPORT_GDI_EXT 0x200F
#  endif
#  ifndef WGL_SUPPORT_OPENGL_EXT
#    define WGL_SUPPORT_OPENGL_EXT 0x2010
#  endif
#  ifndef WGL_DOUBLE_BUFFER_EXT
#    define WGL_DOUBLE_BUFFER_EXT 0x2011
#  endif
#  ifndef WGL_STEREO_EXT
#    define WGL_STEREO_EXT 0x2012
#  endif
#  ifndef WGL_PIXEL_TYPE_EXT
#    define WGL_PIXEL_TYPE_EXT 0x2013
#  endif
#  ifndef WGL_COLOR_BITS_EXT
#    define WGL_COLOR_BITS_EXT 0x2014
#  endif
#  ifndef WGL_RED_BITS_EXT
#    define WGL_RED_BITS_EXT 0x2015
#  endif
#  ifndef WGL_RED_SHIFT_EXT
#    define WGL_RED_SHIFT_EXT 0x2016
#  endif
#  ifndef WGL_GREEN_BITS_EXT
#    define WGL_GREEN_BITS_EXT 0x2017
#  endif
#  ifndef WGL_GREEN_SHIFT_EXT
#    define WGL_GREEN_SHIFT_EXT 0x2018
#  endif
#  ifndef WGL_BLUE_BITS_EXT
#    define WGL_BLUE_BITS_EXT 0x2019
#  endif
#  ifndef WGL_BLUE_SHIFT_EXT
#    define WGL_BLUE_SHIFT_EXT 0x201A
#  endif
#  ifndef WGL_ALPHA_BITS_EXT
#    define WGL_ALPHA_BITS_EXT 0x201B
#  endif
#  ifndef WGL_ALPHA_SHIFT_EXT
#    define WGL_ALPHA_SHIFT_EXT 0x201C
#  endif
#  ifndef WGL_ACCUM_BITS_EXT
#    define WGL_ACCUM_BITS_EXT 0x201D
#  endif
#  ifndef WGL_ACCUM_RED_BITS_EXT
#    define WGL_ACCUM_RED_BITS_EXT 0x201E
#  endif
#  ifndef WGL_ACCUM_GREEN_BITS_EXT
#    define WGL_ACCUM_GREEN_BITS_EXT 0x201F
#  endif
#  ifndef WGL_ACCUM_BLUE_BITS_EXT
#    define WGL_ACCUM_BLUE_BITS_EXT 0x2020
#  endif
#  ifndef WGL_ACCUM_ALPHA_BITS_EXT
#    define WGL_ACCUM_ALPHA_BITS_EXT 0x2021
#  endif
#  ifndef WGL_DEPTH_BITS_EXT
#    define WGL_DEPTH_BITS_EXT 0x2022
#  endif
#  ifndef WGL_STENCIL_BITS_EXT
#    define WGL_STENCIL_BITS_EXT 0x2023
#  endif
#  ifndef WGL_AUX_BUFFERS_EXT
#    define WGL_AUX_BUFFERS_EXT 0x2024
#  endif
#  ifndef WGL_NO_ACCELERATION_EXT
#    define WGL_NO_ACCELERATION_EXT 0x2025
#  endif
#  ifndef WGL_GENERIC_ACCELERATION_EXT
#    define WGL_GENERIC_ACCELERATION_EXT 0x2026
#  endif
#  ifndef WGL_FULL_ACCELERATION_EXT
#    define WGL_FULL_ACCELERATION_EXT 0x2027
#  endif
#  ifndef WGL_SWAP_EXCHANGE_EXT
#    define WGL_SWAP_EXCHANGE_EXT 0x2028
#  endif
#  ifndef WGL_SWAP_COPY_EXT
#    define WGL_SWAP_COPY_EXT 0x2029
#  endif
#  ifndef WGL_SWAP_UNDEFINED_EXT
#    define WGL_SWAP_UNDEFINED_EXT 0x202A
#  endif
#  ifndef WGL_TYPE_RGBA_EXT
#    define WGL_TYPE_RGBA_EXT 0x202B
#  endif
#  ifndef WGL_TYPE_COLORINDEX_EXT
#    define WGL_TYPE_COLORINDEX_EXT 0x202C
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_wglGetPixelFormatAttribivEXT
typedef BOOL (APIENTRYP PFNWGLUXGETPIXELFORMATATTRIBIVEXTPROC) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, int *piValues);
#endif
#ifndef __GLUX__GLFCT_wglGetPixelFormatAttribfvEXT
typedef BOOL (APIENTRYP PFNWGLUXGETPIXELFORMATATTRIBFVEXTPROC) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, FLOAT *pfValues);
#endif
#ifndef __GLUX__GLFCT_wglChoosePixelFormatEXT
typedef BOOL (APIENTRYP PFNWGLUXCHOOSEPIXELFORMATEXTPROC) (HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_wglGetPixelFormatAttribivEXT
extern PFNWGLUXGETPIXELFORMATATTRIBIVEXTPROC wglGetPixelFormatAttribivEXT;
#endif
#ifndef __GLUX__GLFCT_wglGetPixelFormatAttribfvEXT
extern PFNWGLUXGETPIXELFORMATATTRIBFVEXTPROC wglGetPixelFormatAttribfvEXT;
#endif
#ifndef __GLUX__GLFCT_wglChoosePixelFormatEXT
extern PFNWGLUXCHOOSEPIXELFORMATEXTPROC wglChoosePixelFormatEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
