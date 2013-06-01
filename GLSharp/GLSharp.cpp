#include "stdafx.h"
#include "GLSharp.h"

void System::Drawing::GLSharp::GLSharp::Color(float r, float g, float b)
{
	GL::Color3f(r,g,b);
}

void System::Drawing::GLSharp::GLSharp::Color(int r, int g, int b)
{
	GL::Color3i(r,g,b);
}

void System::Drawing::GLSharp::GLSharp::Color(short r, short g, short b)
{
	GL::Color3s(r,g,b);
}

void System::Drawing::GLSharp::GLSharp::Color(byte r, byte g, byte b)
{
	GL::Color3b(r,g,b);
}

void System::Drawing::GLSharp::GLSharp::Color(float r, float g, float b, float a)
{
	GL::Color4f(r,g,b,a);
}

void System::Drawing::GLSharp::GLSharp::Color(int r, int g, int b, int a)
{
	GL::Color4i(r,g,b,a);
}

void System::Drawing::GLSharp::GLSharp::Color(short r, short g, short b, short a)
{
	GL::Color4s(r,g,b,a);
}

void System::Drawing::GLSharp::GLSharp::Color(byte r, byte g, byte b, byte a)
{
	GL::Color4b(r,g,b,a);
}

void System::Drawing::GLSharp::GLSharp::Color(array<float> ^v)
{
	switch(v->Length)
	{
		case 3: GL::Color3fv(v);
		case 4: GL::Color4fv(v);
	}
}

void System::Drawing::GLSharp::GLSharp::Color(array<int> ^v)
{
	switch(v->Length)
	{
		case 3: GL::Color3iv(v);
		case 4: GL::Color4iv(v);
	}
}

void System::Drawing::GLSharp::GLSharp::Color(array<short> ^v)
{
	switch(v->Length)
	{
		case 3: GL::Color3sv(v);
		case 4: GL::Color4sv(v);
	}
}

void System::Drawing::GLSharp::GLSharp::Color(array<byte> ^v)
{
	switch(v->Length)
	{
		case 3: GL::Color3bv(v);
		case 4: GL::Color4bv(v);
	}
}

void System::Drawing::GLSharp::GLSharp::Fog(GL_FLAGS name, float param)
{
  GL::Fogf(name, param);
}

void System::Drawing::GLSharp::GLSharp::Fog(GL_FLAGS name, int param)
{
  GL::Fogi(name, param);
}

void System::Drawing::GLSharp::GLSharp::Normal(float x, float y, float z)
{
  GL::Normal3f(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::Normal(double x, double y, double z)
{
  GL::Normal3d(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::Normal(int x, int y, int z)
{
  GL::Normal3i(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::Normal(short x, short y, short z)
{
  GL::Normal3s(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::Normal(byte x, byte y, byte z)
{
  GL::Normal3b(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::Normal(array<float> ^v)
{
  GL::Normal3fv(v);
}

void System::Drawing::GLSharp::GLSharp::Normal(array<double> ^v)
{
  GL::Normal3dv(v);
}

void System::Drawing::GLSharp::GLSharp::Normal(array<int> ^v)
{
  GL::Normal3iv(v);
}

void System::Drawing::GLSharp::GLSharp::Normal(array<short> ^v)
{
  GL::Normal3sv(v);
}

void System::Drawing::GLSharp::GLSharp::Normal(array<char> ^v)
{
  GL::Normal3bv(v);
}

void System::Drawing::GLSharp::GLSharp::Rect(float x1, float y1, float x2, float y2)
{
  GL::Rectf(x1, y1, x2, y2);
}

void System::Drawing::GLSharp::GLSharp::Rect(double x1, double y1, double x2, double y2)
{
  GL::Rectd(x1, y1, x2, y2);
}

void System::Drawing::GLSharp::GLSharp::Rect(int x1, int y1, int x2, int y2)
{
  GL::Recti(x1, y1, x2, y2);
}

void System::Drawing::GLSharp::GLSharp::Rect(short x1, short y1, short x2, short y2)
{
  GL::Rects(x1, y1, x2, y2);
}

void System::Drawing::GLSharp::GLSharp::Rotate(float angle, float x, float y, float z)
{
	GL::Rotatef(angle, x,y,z);
}

void System::Drawing::GLSharp::GLSharp::Rotate(double angle, double x, double y, double z)
{
	GL::Rotated(angle, x,y,z);
}

void System::Drawing::GLSharp::GLSharp::Scale(double x, double y, double z)
{
  GL::Scaled(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::Scale(float x, float y, float z)
{
  GL::Scalef(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::Translate(float x, float y, float z)
{
  GL::Translatef(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::Translate(double x, double y, double z)
{
  GL::Translated(x,y,z);
}
