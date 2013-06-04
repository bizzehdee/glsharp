#include "stdafx.h"
#include "GLForm.h"

System::Windows::Forms::GLForm::GLForm()
	: Form()
{
	m_gl = gcnew System::Drawing::GLSharp::GL();
	m_wgl = gcnew System::Drawing::GLSharp::WGL();

	this->Load += gcnew EventHandler(this, &GLForm::GL_Load);
}

System::Void System::Windows::Forms::GLForm::GL_Load(System::Object ^sender, System::EventArgs ^e)
{

}
