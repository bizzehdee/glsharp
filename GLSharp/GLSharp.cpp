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

void System::Drawing::GLSharp::GLSharp::EvalCoord(double u)
{
	GL::EvalCoord1d(u);
}

void System::Drawing::GLSharp::GLSharp::EvalCoord(float u)
{
	GL::EvalCoord1f(u);
}

void System::Drawing::GLSharp::GLSharp::EvalCoord(double u, double v)
{
	GL::EvalCoord2d(u,v);
}

void System::Drawing::GLSharp::GLSharp::EvalCoord(float u, float v)
{
	GL::EvalCoord2f(u,v);
}

void System::Drawing::GLSharp::GLSharp::EvalMesh(GL_FLAGS mode, int i1, int i2)
{
	GL::EvalMesh1(mode, i1, i2);
}

void System::Drawing::GLSharp::GLSharp::EvalMesh(GL_FLAGS mode, int i1, int i2, int j1, int j2)
{
	GL::EvalMesh2(mode, i1, i2, j1, j2);
}

void System::Drawing::GLSharp::GLSharp::EvalPoint(int i)
{
	GL::EvalPoint1(i);
}

void System::Drawing::GLSharp::GLSharp::EvalPoint(int i, int j)
{
	GL::EvalPoint2(i,j);
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

void System::Drawing::GLSharp::GLSharp::RasterPos(double x, double y)
{
	GL::RasterPos2d(x,y);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(float x, float y)
{
	GL::RasterPos2f(x,y);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(int x, int y)
{
	GL::RasterPos2i(x,y);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(short x, short y)
{
	GL::RasterPos2s(x,y);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(double x, double y, double z)
{
	GL::RasterPos3d(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(float x, float y, float z)
{
	GL::RasterPos3f(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(int x, int y, int z)
{
	GL::RasterPos3i(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(short x, short y, short z)
{
	GL::RasterPos3s(x,y,z);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(double x, double y, double z, double w)
{
	GL::RasterPos4d(x,y,z,w);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(float x, float y, float z, float w)
{
	GL::RasterPos4f(x,y,z,w);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(int x, int y, int z, int w)
{
	GL::RasterPos4i(x,y,z,w);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(short x, short y, short z, short w)
{
	GL::RasterPos4s(x,y,z,w);
}

void System::Drawing::GLSharp::GLSharp::RasterPos(array<double> ^v)
{
	switch(v->Length)
	{
	case 2: GL::RasterPos2dv(v);
		break;
	case 3: GL::RasterPos3dv(v);
		break;
	case 4: GL::RasterPos4dv(v);
		break;
	}
}

void System::Drawing::GLSharp::GLSharp::RasterPos(array<float> ^v)
{
	switch(v->Length)
	{
	case 2: GL::RasterPos2fv(v);
		break;
	case 3: GL::RasterPos3fv(v);
		break;
	case 4: GL::RasterPos4fv(v);
		break;
	}
}

void System::Drawing::GLSharp::GLSharp::RasterPos(array<int> ^v)
{
	switch(v->Length)
	{
	case 2: GL::RasterPos2iv(v);
		break;
	case 3: GL::RasterPos3iv(v);
		break;
	case 4: GL::RasterPos4iv(v);
		break;
	}
}

void System::Drawing::GLSharp::GLSharp::RasterPos(array<short> ^v)
{
	switch(v->Length)
	{
	case 2: GL::RasterPos2sv(v);
		break;
	case 3: GL::RasterPos3sv(v);
		break;
	case 4: GL::RasterPos4sv(v);
		break;
	}
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
