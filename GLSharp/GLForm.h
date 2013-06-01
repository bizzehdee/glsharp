#pragma once

#include "./gl.h"
#include "./wgl.h"

#using <System.Windows.Forms.dll>
#using <System.Drawing.dll>

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

namespace System {
namespace Windows {
namespace Forms {

public ref class GLForm : public System::Windows::Forms::Form
{
public:
	GLForm();

  property System::Drawing::GLSharp::GL ^GL {
    System::Drawing::GLSharp::GL ^get() {
      return m_gl;
    }
  }

  property System::Drawing::GLSharp::WGL ^WGL {
    System::Drawing::GLSharp::WGL ^get() {
      return m_wgl;
    }

  }

private:
  void GL_Load(System::Object ^sender, System::EventArgs ^e);

private:
	System::Drawing::GLSharp::GL ^m_gl;
  System::Drawing::GLSharp::WGL ^m_wgl;
};

}
}
}