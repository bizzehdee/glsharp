#pragma once

#using "System.Drawing.dll"

#include "gl.h"

using namespace System;
using namespace System::Drawing;

namespace System {
	namespace Drawing {
		namespace GLSharp {

			public ref class GLSharp : public GL
			{
			public:
				void Color(float r, float g, float b);
				void Color(int r, int g, int b);
				void Color(short r, short g, short b);
				void Color(byte r, byte g, byte b);
				void Color(float r, float g, float b, float a);
				void Color(int r, int g, int b, int a);
				void Color(short r, short g, short b, short a);
				void Color(byte r, byte g, byte b, byte a);
				void Color(array<float> ^v);
				void Color(array<int> ^v);
				void Color(array<short> ^v);
				void Color(array<byte> ^v);

				void EvalCoord(double u);
				void EvalCoord(float u);
				void EvalCoord(double u, double v);
				void EvalCoord(float u, float v);
				void EvalMesh(GL_FLAGS mode, int i1, int i2);
				void EvalMesh(GL_FLAGS mode, int i1, int i2, int j1, int j2);
				void EvalPoint(int i);
				void EvalPoint(int i, int j);

				void Fog(GL_FLAGS name, float param);
				void Fog(GL_FLAGS name, int param);

				void Normal(float x, float y, float z);
				void Normal(double x, double y, double z);
				void Normal(int x, int y, int z);
				void Normal(short x, short y, short z);
				void Normal(byte x, byte y, byte z);

				void Normal(array<float> ^v);
				void Normal(array<double> ^v);
				void Normal(array<int> ^v);
				void Normal(array<short> ^v);
				void Normal(array<char> ^v);

				void RasterPos(double x, double y);
				void RasterPos(float x, float y);
				void RasterPos(int x, int y);
				void RasterPos(short x, short y);
				void RasterPos(double x, double y, double z);
				void RasterPos(float x, float y, float z);
				void RasterPos(int x, int y, int z);
				void RasterPos(short x, short y, short z);
				void RasterPos(double x, double y, double z, double w);
				void RasterPos(float x, float y, float z, float w);
				void RasterPos(int x, int y, int z, int w);
				void RasterPos(short x, short y, short z, short w);
				void RasterPos(array<double> ^v);
				void RasterPos(array<float> ^v);
				void RasterPos(array<int> ^v);
				void RasterPos(array<short> ^v);

				void Rect(float x1, float y1, float x2, float y2);
				void Rect(double x1, double y1, double x2, double y2);
				void Rect(int x1, int y1, int x2, int y2);
				void Rect(short x1, short y1, short x2, short y2);

				void Rotate(float angle, float x, float y, float z);
				void Rotate(double angle, double x, double y, double z);

				void Scale(double x, double y, double z);
				void Scale(float x, float y, float z);

				void Translate(float x, float y, float z);
				void Translate(double x, double y, double z);
			};

		}
	}
}
