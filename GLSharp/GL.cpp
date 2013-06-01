#include "stdafx.h"
#include "./GL.h"

void System::Drawing::GLSharp::GL::Accum(GL_FLAGS op, float val)
{
	glAccum((int)op, val);
}

void System::Drawing::GLSharp::GL::AlphaFunc(GL_FLAGS flags, float ref)
{
	glAlphaFunc((int)flags, ref);
}

void System::Drawing::GLSharp::GL::ArrayElement(int i)
{
	glArrayElement(i);
}

void System::Drawing::GLSharp::GL::Begin(GL_FLAGS flags)
{
	glBegin((int)flags);
}

void System::Drawing::GLSharp::GL::BindTexture(BIND_FLAGS target, UInt32 tx)
{
  glBindTexture((int)target, tx);
}

void System::Drawing::GLSharp::GL::Bitmap(int width, int height, float xorig, float yorig, float xmove, float ymove, array<byte> ^bitmap)
{
  pin_ptr<byte> m_bitmap_ptr = &bitmap[0];

  glBitmap(width, height, xorig, yorig, xmove, ymove, m_bitmap_ptr);
}

void System::Drawing::GLSharp::GL::BlendFunc(GL_FLAGS sfactor, GL_FLAGS dfactor)
{
  glBlendFunc((int)sfactor, (int)dfactor);
}

void System::Drawing::GLSharp::GL::CallList(UInt32 list)
{
	glCallList(list);
}

void System::Drawing::GLSharp::GL::Clear(GL_FLAGS flags)
{
	glClear((int)flags);
}

void System::Drawing::GLSharp::GL::ClearAccum(float r, float g, float b, float a)
{
	glClearAccum(r,g,b,a);
}

void System::Drawing::GLSharp::GL::ClearColor(float r, float g, float b, float a)
{
	glClearColor(r,g,b,a);
}

void System::Drawing::GLSharp::GL::ClearDepth(double d)
{
	glClearDepth(d);
}

void System::Drawing::GLSharp::GL::ClearIndex(float c)
{
	glClearIndex(c);
}

void System::Drawing::GLSharp::GL::ClearStencil(int s)
{
	glClearStencil(s);
}

void System::Drawing::GLSharp::GL::ColorMaterial(GL_FLAGS face, GL_FLAGS mode)
{
  glColorMaterial((int)face, (int)mode);
}

void System::Drawing::GLSharp::GL::CopyPixels(int x, int y, int width, int height, GL_FLAGS type)
{
  glCopyPixels(x,y,width,height,(int)type);
}

void System::Drawing::GLSharp::GL::CopyTexImage1D(GL_FLAGS target, int level, GL_FLAGS internalFormat, int x, int y, int width, int border)
{
  glCopyTexImage1D((int)target, level, (int)internalFormat, x, y, width, border);
}

void System::Drawing::GLSharp::GL::CopyTexImage2D(GL_FLAGS target, int level, GL_FLAGS internalFormat, int x, int y, int width, int height, int border)
{
  glCopyTexImage2D((int)target, level, (int)internalFormat, x, y, width, height, border);
}

void System::Drawing::GLSharp::GL::CopyTexSubImage1D(GL_FLAGS target, int level, int xoffset, int x, int y, int width)
{
  glCopyTexSubImage1D((int)target, level, xoffset, x, y, width);
}

void System::Drawing::GLSharp::GL::CopyTexSubImage2D(GL_FLAGS target, int level, int xoffset, int yoffset, int x, int y, int width, int height)
{
  glCopyTexSubImage2D((int)target, level, xoffset, yoffset, x, y, width, height);
}

void System::Drawing::GLSharp::GL::CullFace(GL_FLAGS mode)
{
  glCullFace((int)mode);
}

void System::Drawing::GLSharp::GL::DeleteLists(UInt32 list, int range)
{
  glDeleteLists(list, range);
}

void System::Drawing::GLSharp::GL::DepthFunc(GL_FLAGS func)
{
  glDepthFunc((int)func);
}

void System::Drawing::GLSharp::GL::DepthMask(byte flag)
{
  glDepthMask(flag);
}

void System::Drawing::GLSharp::GL::DepthRange(double zNear, double zFar)
{
  glDepthRange(zNear, zFar);
}

void System::Drawing::GLSharp::GL::Disable(GL_FLAGS flags)
{
	glDisable((int)flags);
}

void System::Drawing::GLSharp::GL::DisableClientState(GL_FLAGS ar)
{
	glDisableClientState((int)ar);
}

void System::Drawing::GLSharp::GL::DrawArrays(GL_FLAGS mode, int first, int count)
{
	glDrawArrays((int)mode, first, count);
}

void System::Drawing::GLSharp::GL::DrawBuffer(GL_FLAGS mode)
{
	glDrawBuffer((int)mode);
}

void System::Drawing::GLSharp::GL::EdgeFlag(Boolean flag)
{
	glEdgeFlag(flag);
}

void System::Drawing::GLSharp::GL::Enable(GL_FLAGS flags)
{
	glEnable((int)flags);
}

void System::Drawing::GLSharp::GL::EnableClientState(GL_FLAGS ar)
{
	glEnableClientState((int)ar);
}

void System::Drawing::GLSharp::GL::End()
{
	glEnd();
}

void System::Drawing::GLSharp::GL::EndList()
{
	glEndList();
}

void System::Drawing::GLSharp::GL::EvalCoord1d(double u)
{
	glEvalCoord1d(u);
}

void System::Drawing::GLSharp::GL::EvalCoord1f(float u)
{
	glEvalCoord1f(u);
}

void System::Drawing::GLSharp::GL::EvalCoord2d(double u, double v)
{
	glEvalCoord2d(u,v);
}

void System::Drawing::GLSharp::GL::EvalCoord2f(float u, float v)
{
	glEvalCoord2f(u,v);
}

void System::Drawing::GLSharp::GL::EvalMesh1(GL_FLAGS mode, int i1, int i2)
{
	glEvalMesh1((int)mode, i1, i2);
}

void System::Drawing::GLSharp::GL::EvalMesh2(GL_FLAGS mode, int i1, int i2, int j1, int j2)
{
	glEvalMesh2((int)mode, i1, i2, j1, j2);
}

void System::Drawing::GLSharp::GL::EvalPoint1(int i)
{
	glEvalPoint1(i);
}

void System::Drawing::GLSharp::GL::EvalPoint2(int i, int j)
{
	glEvalPoint2(i, j);
}

void System::Drawing::GLSharp::GL::Finish()
{
	glFinish();
}

void System::Drawing::GLSharp::GL::Flush()
{
	glFlush();
}

void System::Drawing::GLSharp::GL::FrontFace(GL_FLAGS mode)
{
	glFrontFace((int)mode);
}

void System::Drawing::GLSharp::GL::Frustum(Double left, Double right, Double bottom, Double top, Double nearVal, Double farVal)
{
	glFrustum(left, right, bottom, top, nearVal, farVal);
}

unsigned int System::Drawing::GLSharp::GL::GenLists(int range)
{
	return glGenLists(range);
}

System::Drawing::GLSharp::GL::GL_FLAGS System::Drawing::GLSharp::GL::GetError()
{
	return (System::Drawing::GLSharp::GL::GL_FLAGS)glGetError();
}

void System::Drawing::GLSharp::GL::MatrixMode(GL_FLAGS mode)
{
	glMatrixMode((int)mode);
}

void System::Drawing::GLSharp::GL::Viewport(Int32 x, Int32 y, Int32 w, Int32 h)
{
	glViewport(x,y,w,h);
}
void System::Drawing::GLSharp::GL::Color3f(float r, float g, float b)
{
	glColor3f(r,g,b);
}

void System::Drawing::GLSharp::GL::Color3i(int r, int g, int b)
{
	glColor3i(r,g,b);
}

void System::Drawing::GLSharp::GL::Color3s(short r, short g, short b)
{
	glColor3s(r,g,b);
}

void System::Drawing::GLSharp::GL::Color3us(unsigned short r, unsigned short g, unsigned short b)
{
	glColor3us(r,g,b);
}

void System::Drawing::GLSharp::GL::Color3b(byte r, byte g, byte b)
{
	glColor3b(r,g,b);
}

void System::Drawing::GLSharp::GL::Color3ub(unsigned char r, unsigned char g, unsigned char b)
{
	glColor3ub(r,g,b);
}

void System::Drawing::GLSharp::GL::Color3fv(array<float> ^v)
{
	pin_ptr<float> m_vc_ptr = &v[0];

	glColor3fv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Color3iv(array<int> ^v)
{
	pin_ptr<int> m_vc_ptr = &v[0];

	glColor3iv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Color3sv(array<short> ^v)
{
	pin_ptr<short> m_vc_ptr = &v[0];

	glColor3sv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Color3bv(array<byte> ^v)
{
	pin_ptr<byte> m_vc_ptr = &v[0];

	glColor3bv((const signed char *)m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Color3ubv(array<unsigned char> ^v)
{
	pin_ptr<unsigned char> m_vc_ptr = &v[0];

	glColor3ubv((unsigned char *)m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Color4f(float r, float g, float b, float a)
{
	glColor4f(r,g,b,a);
}

void System::Drawing::GLSharp::GL::Color4i(int r, int g, int b, int a)
{
	glColor4i(r,g,b,a);
}

void System::Drawing::GLSharp::GL::Color4s(short r, short g, short b, short a)
{
	glColor4s(r,g,b,a);
}

void System::Drawing::GLSharp::GL::Color4us(unsigned short r, unsigned short g, unsigned short b, unsigned short a)
{
	glColor4us(r,g,b,a);
}

void System::Drawing::GLSharp::GL::Color4b(byte r, byte g, byte b, byte a)
{
	glColor4b(r,g,b,a);
}

void System::Drawing::GLSharp::GL::Color4ub(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
	glColor4ub(r,g,b,a);
}

void System::Drawing::GLSharp::GL::Color4fv(array<float> ^v)
{
	pin_ptr<float> m_vc_ptr = &v[0];

	glColor4fv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Color4iv(array<int> ^v)
{
	pin_ptr<int> m_vc_ptr = &v[0];

	glColor4iv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Color4sv(array<short> ^v)
{
	pin_ptr<short> m_vc_ptr = &v[0];

	glColor4sv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Color4usv(array<unsigned short> ^v)
{
	pin_ptr<unsigned short> m_vc_ptr = &v[0];

	glColor4usv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Color4bv(array<byte> ^v)
{
	pin_ptr<byte> m_vc_ptr = &v[0];

	glColor4bv((const signed char *)m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Color4ubv(array<unsigned char> ^v)
{
	pin_ptr<unsigned char> m_vc_ptr = &v[0];

	glColor4ubv((unsigned char *)m_vc_ptr);
}

void System::Drawing::GLSharp::GL::ColorMask(Boolean r, Boolean g, Boolean b, Boolean a)
{
	glColorMask(r,g,b,a);
}

void System::Drawing::GLSharp::GL::Fogf(GL_FLAGS name, float param)
{
	glFogf((int)name, param);
}

void System::Drawing::GLSharp::GL::Fogi(GL_FLAGS name, int param)
{
	glFogi((int)name, param);
}

void System::Drawing::GLSharp::GL::Normal3f(float x, float y, float z)
{
	glNormal3f(x,y,z);
}

void System::Drawing::GLSharp::GL::Normal3d(double x, double y, double z)
{
	glNormal3d(x,y,z);
}

void System::Drawing::GLSharp::GL::Normal3i(int x, int y, int z)
{
	glNormal3i(x,y,z);
}

void System::Drawing::GLSharp::GL::Normal3s(short x, short y, short z)
{
	glNormal3s(x,y,z);
}

void System::Drawing::GLSharp::GL::Normal3b(byte x, byte y, byte z)
{
	glNormal3b(x,y,z);
}

void System::Drawing::GLSharp::GL::Normal3fv(array<float> ^v)
{
  pin_ptr<float> m_vc_ptr = &v[0];

  glNormal3fv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Normal3dv(array<double> ^v)
{
  pin_ptr<double> m_vc_ptr = &v[0];

  glNormal3dv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Normal3iv(array<int> ^v)
{
  pin_ptr<int> m_vc_ptr = &v[0];

  glNormal3iv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Normal3sv(array<short> ^v)
{
  pin_ptr<short> m_vc_ptr = &v[0];

  glNormal3sv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Normal3bv(array<char> ^v)
{
  pin_ptr<char> m_vc_ptr = &v[0];
  glNormal3bv((GLbyte *)m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Rectf(float x1, float y1, float x2, float y2)
{
	glRectf(x1,y1,x2,y2);
}

void System::Drawing::GLSharp::GL::Rectd(double x1, double y1, double x2, double y2)
{
	glRectd(x1,y1,x2,y2);
}

void System::Drawing::GLSharp::GL::Recti(int x1, int y1, int x2, int y2)
{
	glRecti(x1,y1,x2,y2);
}

void System::Drawing::GLSharp::GL::Rects(short x1, short y1, short x2, short y2)
{
	glRects(x1,y1,x2,y2);
}

void System::Drawing::GLSharp::GL::Rotatef(float angle, float x, float y, float z)
{
	glRotatef(angle, x, y, z);
}

void System::Drawing::GLSharp::GL::Rotated(double angle, double x, double y, double z)
{
	glRotated(angle, x, y, z);
}

void System::Drawing::GLSharp::GL::Scaled(double x, double y, double z)
{
	glScaled(x,y,z);
}

void System::Drawing::GLSharp::GL::Scalef(float x, float y, float z)
{
	glScalef(x,y,z);
}

void System::Drawing::GLSharp::GL::TexCoord1f(float s)
{
	glTexCoord1f(s);
}

void System::Drawing::GLSharp::GL::TexCoord1d(double s)
{
	glTexCoord1d(s);
}

void System::Drawing::GLSharp::GL::TexCoord1s(short s)
{
	glTexCoord1s(s);
}

void System::Drawing::GLSharp::GL::TexCoord1i(int s)
{
	glTexCoord1i(s);
}

void System::Drawing::GLSharp::GL::TexCoord1fv(array<float> ^v)
{
  pin_ptr<float> m_vc_ptr = &v[0];

  glTexCoord1fv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord1dv(array<double> ^v)
{
  pin_ptr<double> m_vc_ptr = &v[0];

  glTexCoord1dv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord1sv(array<short> ^v)
{
  pin_ptr<short> m_vc_ptr = &v[0];

  glTexCoord1sv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord1iv(array<int> ^v)
{
  pin_ptr<int> m_vc_ptr = &v[0];

  glTexCoord1iv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord2f(float s, float t)
{
	glTexCoord2f(s,t);
}

void System::Drawing::GLSharp::GL::TexCoord2d(double s, double t)
{
	glTexCoord2d(s,t);
}

void System::Drawing::GLSharp::GL::TexCoord2s(short s, short t)
{
	glTexCoord2s(s,t);
}

void System::Drawing::GLSharp::GL::TexCoord2i(int s, int t)
{
	glTexCoord2i(s,t);
}

void System::Drawing::GLSharp::GL::TexCoord2fv(array<float> ^v)
{
  pin_ptr<float> m_vc_ptr = &v[0];

  glTexCoord2fv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord2dv(array<double> ^v)
{
  pin_ptr<double> m_vc_ptr = &v[0];

  glTexCoord2dv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord2sv(array<short> ^v)
{
  pin_ptr<short> m_vc_ptr = &v[0];

  glTexCoord2sv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord2iv(array<int> ^v)
{
  pin_ptr<int> m_vc_ptr = &v[0];

  glTexCoord2iv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord3f(float s, float t, float r)
{
	glTexCoord3f(s,t,r);
}

void System::Drawing::GLSharp::GL::TexCoord3d(double s, double t, double r)
{
	glTexCoord3d(s,t,r);
}

void System::Drawing::GLSharp::GL::TexCoord3s(short s, short t, short r)
{
	glTexCoord3s(s,t,r);
}

void System::Drawing::GLSharp::GL::TexCoord3i(int s, int t, int r)
{
	glTexCoord3i(s,t,r);
}

void System::Drawing::GLSharp::GL::TexCoord3fv(array<float> ^v)
{
  pin_ptr<float> m_vc_ptr = &v[0];

  glTexCoord3fv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord3dv(array<double> ^v)
{
  pin_ptr<double> m_vc_ptr = &v[0];

  glTexCoord3dv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord3sv(array<short> ^v)
{
  pin_ptr<short> m_vc_ptr = &v[0];

  glTexCoord3sv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord3iv(array<int> ^v)
{
  pin_ptr<int> m_vc_ptr = &v[0];

  glTexCoord3iv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord4f(float s, float t, float r, float q)
{
	glTexCoord4f(s,t,r,q);
}

void System::Drawing::GLSharp::GL::TexCoord4d(double s, double t, double r, double q)
{
	glTexCoord4d(s,t,r,q);
}

void System::Drawing::GLSharp::GL::TexCoord4s(short s, short t, short r, short q)
{
	glTexCoord4s(s,t,r,q);
}

void System::Drawing::GLSharp::GL::TexCoord4i(int s, int t, int r, int q)
{
	glTexCoord4i(s,t,r,q);
}

void System::Drawing::GLSharp::GL::TexCoord4fv(array<float> ^v)
{
  pin_ptr<float> m_vc_ptr = &v[0];

  glTexCoord4fv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord4dv(array<double> ^v)
{
  pin_ptr<double> m_vc_ptr = &v[0];

  glTexCoord4dv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord4sv(array<short> ^v)
{
  pin_ptr<short> m_vc_ptr = &v[0];

  glTexCoord4sv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::TexCoord4iv(array<int> ^v)
{
  pin_ptr<int> m_vc_ptr = &v[0];

  glTexCoord4iv(m_vc_ptr);
}

void System::Drawing::GLSharp::GL::Translatef(float x, float y, float z)
{
	glTranslatef(x,y,z);
}

void System::Drawing::GLSharp::GL::Translated(double x, double y, double z)
{
	glTranslated(x,y,z);
}

void System::Drawing::GLSharp::GL::Vertex2f(float x, float y)
{
	glVertex2f(x,y);
}

void System::Drawing::GLSharp::GL::Vertex3f(float x, float y, float z)
{
	glVertex3f(x,y,z);
}

void System::Drawing::GLSharp::GL::Vertex4f(float x, float y, float z, float w)
{
	glVertex4f(x,y,z,w);
}

void System::Drawing::GLSharp::GL::Vertex2fv(array<float> ^v)
{
	pin_ptr<float> m_vx_ptr = &v[0];

	glVertex2fv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex3fv(array<float> ^v)
{
	pin_ptr<float> m_vx_ptr = &v[0];

	glVertex3fv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex4fv(array<float> ^v)
{
	pin_ptr<float> m_vx_ptr = &v[0];

	glVertex4fv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex2i(int x, int y)
{
	glVertex2i(x,y);
}

void System::Drawing::GLSharp::GL::Vertex3i(int x, int y, int z)
{
	glVertex3i(x,y,z);
}

void System::Drawing::GLSharp::GL::Vertex4i(int x, int y, int z, int w)
{
	glVertex4i(x,y,z,w);
}

void System::Drawing::GLSharp::GL::Vertex2iv(array<int> ^v)
{
	pin_ptr<int> m_vx_ptr = &v[0];

	glVertex2iv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex3iv(array<int> ^v)
{
	pin_ptr<int> m_vx_ptr = &v[0];

	glVertex3iv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex4iv(array<int> ^v)
{
	pin_ptr<int> m_vx_ptr = &v[0];

	glVertex4iv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex2d(double x, double y)
{
	glVertex2d(x,y);
}

void System::Drawing::GLSharp::GL::Vertex3d(double x, double y, double z)
{
	glVertex3d(x,y,z);
}

void System::Drawing::GLSharp::GL::Vertex4d(double x, double y, double z, double w)
{
	glVertex4d(x,y,z,w);
}

void System::Drawing::GLSharp::GL::Vertex2dv(array<double> ^v)
{
	pin_ptr<double> m_vx_ptr = &v[0];

	glVertex2dv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex3dv(array<double> ^v)
{
	pin_ptr<double> m_vx_ptr = &v[0];

	glVertex3dv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex4dv(array<double> ^v)
{
	pin_ptr<double> m_vx_ptr = &v[0];

	glVertex4dv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex2s(short x, short y)
{
	glVertex2s(x,y);
}

void System::Drawing::GLSharp::GL::Vertex3s(short x, short y, short z)
{
	glVertex3s(x,y,z);
}

void System::Drawing::GLSharp::GL::Vertex4s(short x, short y, short z, short w)
{
	glVertex4s(x,y,z,w);
}

void System::Drawing::GLSharp::GL::Vertex2sv(array<short> ^v)
{
	pin_ptr<short> m_vx_ptr = &v[0];

	glVertex2sv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex3sv(array<short> ^v)
{
	pin_ptr<short> m_vx_ptr = &v[0];

	glVertex3sv(m_vx_ptr);
}

void System::Drawing::GLSharp::GL::Vertex4sv(array<short> ^v)
{
	pin_ptr<short> m_vx_ptr = &v[0];

	glVertex4sv(m_vx_ptr);
}
