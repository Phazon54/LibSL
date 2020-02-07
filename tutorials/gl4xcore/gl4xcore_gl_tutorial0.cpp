/* --------------------------------------------------------------------
Author: Sylvain Lefebvre    sylvain.lefebvre@sophia.inria.fr

                  Simple Library for Graphics (LibSL)

This software is a computer program whose purpose is to offer a set of
tools to simplify programming real-time computer graphics applications
under OpenGL and DirectX.

This software is governed by the CeCILL-C license under French law and
abiding by the rules of distribution of free software.  You can  use, 
modify and/ or redistribute the software under the terms of the CeCILL-C
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info". 

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability. 

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or 
data to be ensured and,  more generally, to use and operate it in the 
same conditions as regards security. 

The fact that you are presently reading this means that you have had
knowledge of the CeCILL-C license and that you accept its terms.
-------------------------------------------------------------------- */
// --------------------------------------------------------------
// Tutorial for GLHelpers
// --------------------------------------------------------------
#include <iostream>
#include <ctime>
#include <cmath>
/* -------------------------------------------------------- */

#include <LibSL/LibSL_gl4core.h>

#ifdef WIN32
LIBSL_WIN32_FIX; // necessary due to a VC compiler issue
#endif

#include "GL_NV_shader_buffer_load.h"
GLUX_REQUIRE(GL_NV_shader_buffer_load)

/* -------------------------------------------------------- */

#include "gl4xcore_gl_tutorial0.h"

AutoBindShader::gl4xcore_gl_tutorial0 shader;

AutoPtr<Shapes::Square> g_Square;
GLBuffer                g_Buffer;

/* -------------------------------------------------------- */

using namespace std;

/* -------------------------------------------------------- */

bool         g_Wireframe = false;

/* -------------------------------------------------------- */

void mainKeyboard(uchar key) 
{
  if (key == 'q') {
    TrackballUI::exit();
  }
}

/* -------------------------------------------------------- */

void mainRender()
{
  LIBSL_GL_CHECK_ERROR;

  // viewport
  LibSL::GPUHelpers::Renderer::setViewport(0,0,256,256);

  LIBSL_GL_CHECK_ERROR;

  // clear screen
  clearScreen(LIBSL_COLOR_BUFFER | LIBSL_DEPTH_BUFFER,1.0,0.5,0.5);
  
  LIBSL_GL_CHECK_ERROR;

  // draw
  // -> activate shader
  shader.begin();
  shader.u_Projection.set( orthoMatrixGL(0.0f,1.0f,0.0f,1.0f,-1.0f,1.0f) );
  shader.u_ModelView .set( m4x4f::identity() );
  // -> render quad
  g_Square->render();
  // -> deactivate shader
  shader.end();

  LIBSL_GL_CHECK_ERROR;
}

/* -------------------------------------------------------- */

int main(int argc, char **argv)
{
  try {

    // init trackball
    TrackballUI::onKeyPressed = mainKeyboard;
    TrackballUI::onRender     = mainRender;
    TrackballUI::init(256,256,"OpenGL 4.x core profile tutorial");
    
    // init shader
    shader  .init();
    
    g_Square = AutoPtr<Shapes::Square>(new Shapes::Square());

    g_Buffer.init(256);

    // get NVidia 64 bits GPU pointer to buffer
    glBindBufferARB(g_Buffer.type(), g_Buffer.glId());
    GLuint64EXT ptr = 0;
    glGetBufferParameterui64vNV(g_Buffer.type(), GL_BUFFER_GPU_ADDRESS_NV, &ptr);
    glMakeBufferResidentNV(g_Buffer.type(), GL_READ_WRITE);
    glBindBufferARB(g_Buffer.type(), 0);

    // pass pointer to shader
    shader.begin();
    glUniformui64NV(shader.u_Buffer.handle(), ptr);
    shader.end();

    // help
    printf("[q]     - quit\n");
      
    // let's go
    TrackballUI::loop();

    // read back buffer
    uchar tbl[256];
    g_Buffer.readBack(tbl,256);
    ForIndex(i,256) {
      cerr << (int)tbl[i] << ' ';
    }
    cerr << endl;

    shader  .terminate();
    g_Buffer.terminate();
    g_Square = AutoPtr<Shapes::Square>();

    // shutdown
    TrackballUI::shutdown();

  } catch (GLException& e) {
    cerr << e.message() << endl;
    return (-1);
  } catch (Fatal& e) {
    cerr << e.message() << endl;
    return (-1);
  }

  return (0);
}

/* -------------------------------------------------------- */
