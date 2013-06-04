using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Drawing.GLSharp;

namespace test
{
	public partial class Form1 : GLForm
	{
		IntPtr hdc;
		GLSharp m_gl;
		WGL m_wgl;

		public Form1()
		{
			InitializeComponent();

			m_gl = new GLSharp();
			m_wgl = new WGL();
		}

		private void Form1_Load(object sender, EventArgs e)
		{
			Graphics g = this.CreateGraphics();
			hdc = g.GetHdc();

			PixelFormatDescriptor m_pfd = new PixelFormatDescriptor();
			m_pfd.Flags = (uint)(WGL.PFD_FLAGS.DOUBLEBUFFER | WGL.PFD_FLAGS.DRAW_TO_WINDOW | WGL.PFD_FLAGS.SUPPORT_OPENGL | WGL.PFD_FLAGS.TYPE_RGBA);
			m_pfd.PixelType = 0;
			m_pfd.ColorBits = 24;
			m_pfd.DepthBits = 32;
			m_pfd.LayerType = 0;

			Int32 pf = m_wgl.ChoosePixelFormat(hdc, m_pfd);
			if (pf == 0) throw new Exception("ChoosePixelFormat failed");

			Int32 spf = m_wgl.SetPixelFormat(hdc, pf, m_pfd);
			if (spf != 1) throw new Exception("SetPixelFormat failed");

			IntPtr ctx = m_wgl.CreateContext(hdc);
			m_wgl.MakeCurrent(hdc, ctx);

			m_gl.MatrixMode(GL.GL_FLAGS.PROJECTION);
			m_gl.Frustum(-0.5F, 0.5F, -0.5F, 0.5F, 1.0F, 3.0F);

			m_gl.MatrixMode(GL.GL_FLAGS.MODELVIEW);
			m_gl.Translatef(0.0F, 0.0F, -2.0F);

			m_gl.Rotatef(30.0F, 1.0F, 0.0F, 0.0F);
			m_gl.Rotatef(30.0F, 0.0F, 1.0F, 0.0F);

			m_gl.Enable(GL.GL_FLAGS.DEPTH_TEST);
			m_gl.Enable(GL.GL_FLAGS.COLOR_MATERIAL);
			m_gl.Enable(GL.GL_FLAGS.LIGHTING);
			m_gl.Enable(GL.GL_FLAGS.LIGHT0);

			m_gl.ColorMaterial(GL.GL_FLAGS.FRONT_AND_BACK, GL.GL_FLAGS.AMBIENT_AND_DIFFUSE);

			this.Invalidate();
		}

		private void Form1_Paint(object sender, PaintEventArgs e)
		{
			m_gl.Clear(GL.GL_FLAGS.COLOR_BUFFER_BIT | GL.GL_FLAGS.DEPTH_BUFFER_BIT);

			m_gl.Color3f(1.0F, 0, 0);
			m_gl.Begin(GL.GL_FLAGS.QUADS);

			m_gl.Normal3f(0.0F, 0.0F, 1.0F);

			m_gl.Vertex3f(0.5F, 0.5F, 0.5F);
			m_gl.Vertex3f(-0.5F, 0.5F, 0.5F);
			m_gl.Vertex3f(-0.5F, -0.5F, 0.5F);
			m_gl.Vertex3f(0.5F, -0.5F, 0.5F);

			m_gl.Normal3f(0.0F, 0.0F, -1.0F);
			m_gl.Vertex3f(-0.5F, -0.5F, -0.5F);
			m_gl.Vertex3f(-0.5F, 0.5F, -0.5F);
			m_gl.Vertex3f(0.5F, 0.5F, -0.5F);
			m_gl.Vertex3f(0.5F, -0.5F, -0.5F);

			m_gl.Normal3f(0.0F, 1.0F, 0.0F);
			m_gl.Vertex3f(0.5F, 0.5F, 0.5F);
			m_gl.Vertex3f(0.5F, 0.5F, -0.5F);
			m_gl.Vertex3f(-0.5F, 0.5F, -0.5F);
			m_gl.Vertex3f(-0.5F, 0.5F, 0.5F);

			m_gl.Normal3f(0.0F, -1.0F, 0.0F);
			m_gl.Vertex3f(-0.5F, -0.5F, -0.5F);
			m_gl.Vertex3f(0.5F, -0.5F, -0.5F);
			m_gl.Vertex3f(0.5F, -0.5F, 0.5F);
			m_gl.Vertex3f(-0.5F, -0.5F, 0.5F);

			m_gl.Normal3f(1.0F, 0.0F, 0.0F);
			m_gl.Vertex3f(0.5F, 0.5F, 0.5F);
			m_gl.Vertex3f(0.5F, -0.5F, 0.5F);
			m_gl.Vertex3f(0.5F, -0.5F, -0.5F);
			m_gl.Vertex3f(0.5F, 0.5F, -0.5F);

			m_gl.Normal3f(-1.0F, 0.0F, 0.0F);
			m_gl.Vertex3f(-0.5F, -0.5F, -0.5F);
			m_gl.Vertex3f(-0.5F, -0.5F, 0.5F);
			m_gl.Vertex3f(-0.5F, 0.5F, 0.5F);
			m_gl.Vertex3f(-0.5F, 0.5F, -0.5F);

			m_gl.End();

			m_wgl.SwapBuffers(hdc);
		}

		private void Form1_ResizeEnd(object sender, EventArgs e)
		{
			m_gl.Viewport(0, 0, ClientSize.Width, ClientSize.Height);
			Invalidate();
		}
	}
}
