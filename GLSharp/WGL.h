#pragma once

using namespace System;

namespace System {
namespace Drawing {
namespace GLSharp {

public ref class WGL {
public:

  enum class PFD_FLAGS {
    DRAW_TO_WINDOW = PFD_DRAW_TO_WINDOW,
    DRAW_TO_BITMAP = PFD_DRAW_TO_BITMAP,
    SUPPORT_GDI = PFD_SUPPORT_GDI,
    SUPPORT_OPENGL = PFD_SUPPORT_OPENGL,
    GENERIC_ACCELERATED = PFD_GENERIC_ACCELERATED,
    GENERIC_FORMAT = PFD_GENERIC_FORMAT,
    NEED_PALETTE = PFD_NEED_PALETTE,
    NEED_SYSTEM_PALETTE = PFD_NEED_SYSTEM_PALETTE,
    DOUBLEBUFFER = PFD_DOUBLEBUFFER,
    STEREO = PFD_STEREO,
    SWAP_LAYER_BUFFERS = PFD_SWAP_LAYER_BUFFERS
  };

	IntPtr CreateContext(IntPtr hdc);
  IntPtr CreateLayerContext(IntPtr hdc, Int32 plane);
	Boolean MakeCurrent(IntPtr hdc, IntPtr ctx);
  Boolean CopyContext(IntPtr src, IntPtr% dst, UInt32 mask);
  Boolean DeleteContext(IntPtr ctx);
  IntPtr GetCurrentContext();
  IntPtr GetCurrentDC();

	//Not strictly WGL, but required for double buffering
	Boolean SwapBuffers(IntPtr hdc);

  IntPtr CreatePixelFormatDescriptor(PFD_FLAGS flags, Int32 color_type, Int32 colour_depth, Int32 depth_buffer);
  Int32 ChoosePixelFormat(IntPtr hdc, IntPtr pfd);
  Int32 SetPixelFormat(IntPtr hdc, Int32 pf, IntPtr pfd);
};

}
}
}
