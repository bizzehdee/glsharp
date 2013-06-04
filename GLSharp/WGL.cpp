#include "stdafx.h"
#include "WGL.h"

IntPtr System::Drawing::GLSharp::WGL::CreateContext(IntPtr hdc)
{
	HDC m_hdc = (HDC)hdc.ToPointer();

	HGLRC m_ctx = ::wglCreateContext(m_hdc);

	return IntPtr::IntPtr(m_ctx);
}

IntPtr System::Drawing::GLSharp::WGL::CreateLayerContext(IntPtr hdc, Int32 plane)
{
	HDC m_hdc = (HDC)hdc.ToPointer();

	HGLRC m_ctx = ::wglCreateLayerContext(m_hdc, plane);

	return IntPtr::IntPtr(m_ctx);
}

Boolean System::Drawing::GLSharp::WGL::MakeCurrent(IntPtr hdc, IntPtr ctx)
{
	HDC m_hdc = (HDC)hdc.ToPointer();
	HGLRC m_ctx = (HGLRC)ctx.ToPointer();

	return !!::wglMakeCurrent(m_hdc, m_ctx);
}

Boolean System::Drawing::GLSharp::WGL::CopyContext(IntPtr src, IntPtr% dst, UInt32 mask)
{
	HGLRC m_src = (HGLRC)src.ToPointer();
	HGLRC m_dst = (HGLRC)dst.ToPointer();

	return !!::wglCopyContext(m_src, m_dst, mask);
}

Boolean System::Drawing::GLSharp::WGL::DeleteContext(IntPtr ctx)
{
	HGLRC m_dst = (HGLRC)ctx.ToPointer();

	return !!::wglDeleteContext(m_dst);
}

IntPtr System::Drawing::GLSharp::WGL::GetCurrentContext()
{
	return IntPtr::IntPtr(::wglGetCurrentContext());
}

IntPtr System::Drawing::GLSharp::WGL::GetCurrentDC()
{
	return IntPtr::IntPtr(::wglGetCurrentDC());
}


//Not strictly WGL, but required for double buffering
Boolean System::Drawing::GLSharp::WGL::SwapBuffers(IntPtr hdc)
{
	HDC m_hdc = (HDC)hdc.ToPointer();

	return !!::SwapBuffers(m_hdc);
}

IntPtr System::Drawing::GLSharp::WGL::CreatePixelFormatDescriptor(PFD_FLAGS flags, Int32 color_type, Int32 color_depth, Int32 depth_buffer)
{
	Int32 f = (Int32)flags;

	Int32 m_flags = f != 0 ? f : PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW | PFD_DOUBLEBUFFER;
	Int32 m_colour_depth = color_depth == 0 ? 16 : color_depth;
	Int32 m_depth_buffer = depth_buffer == 0 ? 16 : depth_buffer;

	PIXELFORMATDESCRIPTOR pfd = {
		sizeof(PIXELFORMATDESCRIPTOR),
		1,
		m_flags,
		color_type,
		m_colour_depth,
		0, 0, 0, 0, 0, 0,
		0,
		0,
		0,
		0, 0, 0, 0,
		m_depth_buffer,
		0,
		0,
		PFD_MAIN_PLANE,
		0,
		0, 0, 0,
	};

	return IntPtr::IntPtr(&pfd);
}

System::Drawing::GLSharp::PixelFormatDescriptor ^System::Drawing::GLSharp::WGL::CreatePixelFormatDescriptor()
{
	return gcnew System::Drawing::GLSharp::PixelFormatDescriptor();
}

Int32 System::Drawing::GLSharp::WGL::ChoosePixelFormat(IntPtr hdc, IntPtr pfd)
{
	HDC m_hdc = (HDC)hdc.ToPointer();
	PIXELFORMATDESCRIPTOR *m_pfd = (PIXELFORMATDESCRIPTOR *)pfd.ToPointer();

	return ::ChoosePixelFormat(m_hdc, m_pfd);
}

Int32 System::Drawing::GLSharp::WGL::ChoosePixelFormat(IntPtr hdc, System::Drawing::GLSharp::PixelFormatDescriptor ^pfd)
{
	HDC m_hdc = (HDC)hdc.ToPointer();

	return ::ChoosePixelFormat(m_hdc, pfd);
}

Int32 System::Drawing::GLSharp::WGL::SetPixelFormat(IntPtr hdc, Int32 pf, IntPtr pfd)
{
	HDC m_hdc = (HDC)hdc.ToPointer();
	PIXELFORMATDESCRIPTOR *m_pfd = (PIXELFORMATDESCRIPTOR *)pfd.ToPointer();

	return ::SetPixelFormat(m_hdc, pf, m_pfd);
}

Int32 System::Drawing::GLSharp::WGL::SetPixelFormat(IntPtr hdc, Int32 pf, System::Drawing::GLSharp::PixelFormatDescriptor ^pfd)
{
	HDC m_hdc = (HDC)hdc.ToPointer();

	return ::SetPixelFormat(m_hdc, pf, pfd);
}
