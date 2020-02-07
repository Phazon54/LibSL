
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

#ifndef __GLUX_GL_ATI_fragment_shader__
#define __GLUX_GL_ATI_fragment_shader__

GLUX_NEW_PLUGIN(GL_ATI_fragment_shader)
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#  ifndef GL_FRAGMENT_SHADER_ATI
#    define GL_FRAGMENT_SHADER_ATI 0x8920
#  endif
#  ifndef GL_REG_0_ATI
#    define GL_REG_0_ATI 0x8921
#  endif
#  ifndef GL_REG_1_ATI
#    define GL_REG_1_ATI 0x8922
#  endif
#  ifndef GL_REG_2_ATI
#    define GL_REG_2_ATI 0x8923
#  endif
#  ifndef GL_REG_3_ATI
#    define GL_REG_3_ATI 0x8924
#  endif
#  ifndef GL_REG_4_ATI
#    define GL_REG_4_ATI 0x8925
#  endif
#  ifndef GL_REG_5_ATI
#    define GL_REG_5_ATI 0x8926
#  endif
#  ifndef GL_REG_6_ATI
#    define GL_REG_6_ATI 0x8927
#  endif
#  ifndef GL_REG_7_ATI
#    define GL_REG_7_ATI 0x8928
#  endif
#  ifndef GL_REG_8_ATI
#    define GL_REG_8_ATI 0x8929
#  endif
#  ifndef GL_REG_9_ATI
#    define GL_REG_9_ATI 0x892A
#  endif
#  ifndef GL_REG_10_ATI
#    define GL_REG_10_ATI 0x892B
#  endif
#  ifndef GL_REG_11_ATI
#    define GL_REG_11_ATI 0x892C
#  endif
#  ifndef GL_REG_12_ATI
#    define GL_REG_12_ATI 0x892D
#  endif
#  ifndef GL_REG_13_ATI
#    define GL_REG_13_ATI 0x892E
#  endif
#  ifndef GL_REG_14_ATI
#    define GL_REG_14_ATI 0x892F
#  endif
#  ifndef GL_REG_15_ATI
#    define GL_REG_15_ATI 0x8930
#  endif
#  ifndef GL_REG_16_ATI
#    define GL_REG_16_ATI 0x8931
#  endif
#  ifndef GL_REG_17_ATI
#    define GL_REG_17_ATI 0x8932
#  endif
#  ifndef GL_REG_18_ATI
#    define GL_REG_18_ATI 0x8933
#  endif
#  ifndef GL_REG_19_ATI
#    define GL_REG_19_ATI 0x8934
#  endif
#  ifndef GL_REG_20_ATI
#    define GL_REG_20_ATI 0x8935
#  endif
#  ifndef GL_REG_21_ATI
#    define GL_REG_21_ATI 0x8936
#  endif
#  ifndef GL_REG_22_ATI
#    define GL_REG_22_ATI 0x8937
#  endif
#  ifndef GL_REG_23_ATI
#    define GL_REG_23_ATI 0x8938
#  endif
#  ifndef GL_REG_24_ATI
#    define GL_REG_24_ATI 0x8939
#  endif
#  ifndef GL_REG_25_ATI
#    define GL_REG_25_ATI 0x893A
#  endif
#  ifndef GL_REG_26_ATI
#    define GL_REG_26_ATI 0x893B
#  endif
#  ifndef GL_REG_27_ATI
#    define GL_REG_27_ATI 0x893C
#  endif
#  ifndef GL_REG_28_ATI
#    define GL_REG_28_ATI 0x893D
#  endif
#  ifndef GL_REG_29_ATI
#    define GL_REG_29_ATI 0x893E
#  endif
#  ifndef GL_REG_30_ATI
#    define GL_REG_30_ATI 0x893F
#  endif
#  ifndef GL_REG_31_ATI
#    define GL_REG_31_ATI 0x8940
#  endif
#  ifndef GL_CON_0_ATI
#    define GL_CON_0_ATI 0x8941
#  endif
#  ifndef GL_CON_1_ATI
#    define GL_CON_1_ATI 0x8942
#  endif
#  ifndef GL_CON_2_ATI
#    define GL_CON_2_ATI 0x8943
#  endif
#  ifndef GL_CON_3_ATI
#    define GL_CON_3_ATI 0x8944
#  endif
#  ifndef GL_CON_4_ATI
#    define GL_CON_4_ATI 0x8945
#  endif
#  ifndef GL_CON_5_ATI
#    define GL_CON_5_ATI 0x8946
#  endif
#  ifndef GL_CON_6_ATI
#    define GL_CON_6_ATI 0x8947
#  endif
#  ifndef GL_CON_7_ATI
#    define GL_CON_7_ATI 0x8948
#  endif
#  ifndef GL_CON_8_ATI
#    define GL_CON_8_ATI 0x8949
#  endif
#  ifndef GL_CON_9_ATI
#    define GL_CON_9_ATI 0x894A
#  endif
#  ifndef GL_CON_10_ATI
#    define GL_CON_10_ATI 0x894B
#  endif
#  ifndef GL_CON_11_ATI
#    define GL_CON_11_ATI 0x894C
#  endif
#  ifndef GL_CON_12_ATI
#    define GL_CON_12_ATI 0x894D
#  endif
#  ifndef GL_CON_13_ATI
#    define GL_CON_13_ATI 0x894E
#  endif
#  ifndef GL_CON_14_ATI
#    define GL_CON_14_ATI 0x894F
#  endif
#  ifndef GL_CON_15_ATI
#    define GL_CON_15_ATI 0x8950
#  endif
#  ifndef GL_CON_16_ATI
#    define GL_CON_16_ATI 0x8951
#  endif
#  ifndef GL_CON_17_ATI
#    define GL_CON_17_ATI 0x8952
#  endif
#  ifndef GL_CON_18_ATI
#    define GL_CON_18_ATI 0x8953
#  endif
#  ifndef GL_CON_19_ATI
#    define GL_CON_19_ATI 0x8954
#  endif
#  ifndef GL_CON_20_ATI
#    define GL_CON_20_ATI 0x8955
#  endif
#  ifndef GL_CON_21_ATI
#    define GL_CON_21_ATI 0x8956
#  endif
#  ifndef GL_CON_22_ATI
#    define GL_CON_22_ATI 0x8957
#  endif
#  ifndef GL_CON_23_ATI
#    define GL_CON_23_ATI 0x8958
#  endif
#  ifndef GL_CON_24_ATI
#    define GL_CON_24_ATI 0x8959
#  endif
#  ifndef GL_CON_25_ATI
#    define GL_CON_25_ATI 0x895A
#  endif
#  ifndef GL_CON_26_ATI
#    define GL_CON_26_ATI 0x895B
#  endif
#  ifndef GL_CON_27_ATI
#    define GL_CON_27_ATI 0x895C
#  endif
#  ifndef GL_CON_28_ATI
#    define GL_CON_28_ATI 0x895D
#  endif
#  ifndef GL_CON_29_ATI
#    define GL_CON_29_ATI 0x895E
#  endif
#  ifndef GL_CON_30_ATI
#    define GL_CON_30_ATI 0x895F
#  endif
#  ifndef GL_CON_31_ATI
#    define GL_CON_31_ATI 0x8960
#  endif
#  ifndef GL_MOV_ATI
#    define GL_MOV_ATI 0x8961
#  endif
#  ifndef GL_ADD_ATI
#    define GL_ADD_ATI 0x8963
#  endif
#  ifndef GL_MUL_ATI
#    define GL_MUL_ATI 0x8964
#  endif
#  ifndef GL_SUB_ATI
#    define GL_SUB_ATI 0x8965
#  endif
#  ifndef GL_DOT3_ATI
#    define GL_DOT3_ATI 0x8966
#  endif
#  ifndef GL_DOT4_ATI
#    define GL_DOT4_ATI 0x8967
#  endif
#  ifndef GL_MAD_ATI
#    define GL_MAD_ATI 0x8968
#  endif
#  ifndef GL_LERP_ATI
#    define GL_LERP_ATI 0x8969
#  endif
#  ifndef GL_CND_ATI
#    define GL_CND_ATI 0x896A
#  endif
#  ifndef GL_CND0_ATI
#    define GL_CND0_ATI 0x896B
#  endif
#  ifndef GL_DOT2_ADD_ATI
#    define GL_DOT2_ADD_ATI 0x896C
#  endif
#  ifndef GL_SECONDARY_INTERPOLATOR_ATI
#    define GL_SECONDARY_INTERPOLATOR_ATI 0x896D
#  endif
#  ifndef GL_NUM_FRAGMENT_REGISTERS_ATI
#    define GL_NUM_FRAGMENT_REGISTERS_ATI 0x896E
#  endif
#  ifndef GL_NUM_FRAGMENT_CONSTANTS_ATI
#    define GL_NUM_FRAGMENT_CONSTANTS_ATI 0x896F
#  endif
#  ifndef GL_NUM_PASSES_ATI
#    define GL_NUM_PASSES_ATI 0x8970
#  endif
#  ifndef GL_NUM_INSTRUCTIONS_PER_PASS_ATI
#    define GL_NUM_INSTRUCTIONS_PER_PASS_ATI 0x8971
#  endif
#  ifndef GL_NUM_INSTRUCTIONS_TOTAL_ATI
#    define GL_NUM_INSTRUCTIONS_TOTAL_ATI 0x8972
#  endif
#  ifndef GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI
#    define GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI 0x8973
#  endif
#  ifndef GL_NUM_LOOPBACK_COMPONENTS_ATI
#    define GL_NUM_LOOPBACK_COMPONENTS_ATI 0x8974
#  endif
#  ifndef GL_COLOR_ALPHA_PAIRING_ATI
#    define GL_COLOR_ALPHA_PAIRING_ATI 0x8975
#  endif
#  ifndef GL_SWIZZLE_STR_ATI
#    define GL_SWIZZLE_STR_ATI 0x8976
#  endif
#  ifndef GL_SWIZZLE_STQ_ATI
#    define GL_SWIZZLE_STQ_ATI 0x8977
#  endif
#  ifndef GL_SWIZZLE_STR_DR_ATI
#    define GL_SWIZZLE_STR_DR_ATI 0x8978
#  endif
#  ifndef GL_SWIZZLE_STQ_DQ_ATI
#    define GL_SWIZZLE_STQ_DQ_ATI 0x8979
#  endif
#  ifndef GL_SWIZZLE_STRQ_ATI
#    define GL_SWIZZLE_STRQ_ATI 0x897A
#  endif
#  ifndef GL_SWIZZLE_STRQ_DQ_ATI
#    define GL_SWIZZLE_STRQ_DQ_ATI 0x897B
#  endif
#  ifndef GL_RED_BIT_ATI
#    define GL_RED_BIT_ATI 0x00000001
#  endif
#  ifndef GL_GREEN_BIT_ATI
#    define GL_GREEN_BIT_ATI 0x00000002
#  endif
#  ifndef GL_BLUE_BIT_ATI
#    define GL_BLUE_BIT_ATI 0x00000004
#  endif
#  ifndef GL_2X_BIT_ATI
#    define GL_2X_BIT_ATI 0x00000001
#  endif
#  ifndef GL_4X_BIT_ATI
#    define GL_4X_BIT_ATI 0x00000002
#  endif
#  ifndef GL_8X_BIT_ATI
#    define GL_8X_BIT_ATI 0x00000004
#  endif
#  ifndef GL_HALF_BIT_ATI
#    define GL_HALF_BIT_ATI 0x00000008
#  endif
#  ifndef GL_QUARTER_BIT_ATI
#    define GL_QUARTER_BIT_ATI 0x00000010
#  endif
#  ifndef GL_EIGHTH_BIT_ATI
#    define GL_EIGHTH_BIT_ATI 0x00000020
#  endif
#  ifndef GL_SATURATE_BIT_ATI
#    define GL_SATURATE_BIT_ATI 0x00000040
#  endif
#  ifndef GL_COMP_BIT_ATI
#    define GL_COMP_BIT_ATI 0x00000002
#  endif
#  ifndef GL_NEGATE_BIT_ATI
#    define GL_NEGATE_BIT_ATI 0x00000004
#  endif
#  ifndef GL_BIAS_BIT_ATI
#    define GL_BIAS_BIT_ATI 0x00000008
#  endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glGenFragmentShadersATI
typedef GLuint (APIENTRYP PFNGLUXGENFRAGMENTSHADERSATIPROC) (GLuint range);
#endif
#ifndef __GLUX__GLFCT_glBindFragmentShaderATI
typedef void (APIENTRYP PFNGLUXBINDFRAGMENTSHADERATIPROC) (GLuint id);
#endif
#ifndef __GLUX__GLFCT_glDeleteFragmentShaderATI
typedef void (APIENTRYP PFNGLUXDELETEFRAGMENTSHADERATIPROC) (GLuint id);
#endif
#ifndef __GLUX__GLFCT_glBeginFragmentShaderATI
typedef void (APIENTRYP PFNGLUXBEGINFRAGMENTSHADERATIPROC) (void);
#endif
#ifndef __GLUX__GLFCT_glEndFragmentShaderATI
typedef void (APIENTRYP PFNGLUXENDFRAGMENTSHADERATIPROC) (void);
#endif
#ifndef __GLUX__GLFCT_glPassTexCoordATI
typedef void (APIENTRYP PFNGLUXPASSTEXCOORDATIPROC) (GLuint dst, GLuint coord, GLenum swizzle);
#endif
#ifndef __GLUX__GLFCT_glSampleMapATI
typedef void (APIENTRYP PFNGLUXSAMPLEMAPATIPROC) (GLuint dst, GLuint interp, GLenum swizzle);
#endif
#ifndef __GLUX__GLFCT_glColorFragmentOp1ATI
typedef void (APIENTRYP PFNGLUXCOLORFRAGMENTOP1ATIPROC) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
#endif
#ifndef __GLUX__GLFCT_glColorFragmentOp2ATI
typedef void (APIENTRYP PFNGLUXCOLORFRAGMENTOP2ATIPROC) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
#endif
#ifndef __GLUX__GLFCT_glColorFragmentOp3ATI
typedef void (APIENTRYP PFNGLUXCOLORFRAGMENTOP3ATIPROC) (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
#endif
#ifndef __GLUX__GLFCT_glAlphaFragmentOp1ATI
typedef void (APIENTRYP PFNGLUXALPHAFRAGMENTOP1ATIPROC) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
#endif
#ifndef __GLUX__GLFCT_glAlphaFragmentOp2ATI
typedef void (APIENTRYP PFNGLUXALPHAFRAGMENTOP2ATIPROC) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
#endif
#ifndef __GLUX__GLFCT_glAlphaFragmentOp3ATI
typedef void (APIENTRYP PFNGLUXALPHAFRAGMENTOP3ATIPROC) (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
#endif
#ifndef __GLUX__GLFCT_glSetFragmentShaderConstantATI
typedef void (APIENTRYP PFNGLUXSETFRAGMENTSHADERCONSTANTATIPROC) (GLuint dst, const GLfloat *value);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glGenFragmentShadersATI
extern PFNGLUXGENFRAGMENTSHADERSATIPROC glGenFragmentShadersATI;
#endif
#ifndef __GLUX__GLFCT_glBindFragmentShaderATI
extern PFNGLUXBINDFRAGMENTSHADERATIPROC glBindFragmentShaderATI;
#endif
#ifndef __GLUX__GLFCT_glDeleteFragmentShaderATI
extern PFNGLUXDELETEFRAGMENTSHADERATIPROC glDeleteFragmentShaderATI;
#endif
#ifndef __GLUX__GLFCT_glBeginFragmentShaderATI
extern PFNGLUXBEGINFRAGMENTSHADERATIPROC glBeginFragmentShaderATI;
#endif
#ifndef __GLUX__GLFCT_glEndFragmentShaderATI
extern PFNGLUXENDFRAGMENTSHADERATIPROC glEndFragmentShaderATI;
#endif
#ifndef __GLUX__GLFCT_glPassTexCoordATI
extern PFNGLUXPASSTEXCOORDATIPROC glPassTexCoordATI;
#endif
#ifndef __GLUX__GLFCT_glSampleMapATI
extern PFNGLUXSAMPLEMAPATIPROC glSampleMapATI;
#endif
#ifndef __GLUX__GLFCT_glColorFragmentOp1ATI
extern PFNGLUXCOLORFRAGMENTOP1ATIPROC glColorFragmentOp1ATI;
#endif
#ifndef __GLUX__GLFCT_glColorFragmentOp2ATI
extern PFNGLUXCOLORFRAGMENTOP2ATIPROC glColorFragmentOp2ATI;
#endif
#ifndef __GLUX__GLFCT_glColorFragmentOp3ATI
extern PFNGLUXCOLORFRAGMENTOP3ATIPROC glColorFragmentOp3ATI;
#endif
#ifndef __GLUX__GLFCT_glAlphaFragmentOp1ATI
extern PFNGLUXALPHAFRAGMENTOP1ATIPROC glAlphaFragmentOp1ATI;
#endif
#ifndef __GLUX__GLFCT_glAlphaFragmentOp2ATI
extern PFNGLUXALPHAFRAGMENTOP2ATIPROC glAlphaFragmentOp2ATI;
#endif
#ifndef __GLUX__GLFCT_glAlphaFragmentOp3ATI
extern PFNGLUXALPHAFRAGMENTOP3ATIPROC glAlphaFragmentOp3ATI;
#endif
#ifndef __GLUX__GLFCT_glSetFragmentShaderConstantATI
extern PFNGLUXSETFRAGMENTSHADERCONSTANTATIPROC glSetFragmentShaderConstantATI;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
