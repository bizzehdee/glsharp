#include "stdafx.h"
#include "PixelFormatDescriptor.h"

System::Drawing::GLSharp::PixelFormatDescriptor::PixelFormatDescriptor()
{
	m_pfd = new PIXELFORMATDESCRIPTOR;
	memset((void *)m_pfd, 0, sizeof(PIXELFORMATDESCRIPTOR));
	m_pfd->nSize = sizeof(PIXELFORMATDESCRIPTOR);
	m_pfd->nVersion = 1;
}

System::Drawing::GLSharp::PixelFormatDescriptor::PixelFormatDescriptor(PIXELFORMATDESCRIPTOR *pfd)
{
	m_pfd = pfd;
}

