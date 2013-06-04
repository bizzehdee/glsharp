#pragma once

namespace System {
	namespace Drawing {
		namespace GLSharp {

			public ref class PixelFormatDescriptor
			{
			public:
				PixelFormatDescriptor();
				PixelFormatDescriptor(PIXELFORMATDESCRIPTOR *pfd);

				operator const PIXELFORMATDESCRIPTOR*()
				{
					return m_pfd;
				}

				property unsigned short Size
				{
					unsigned short get()
					{
						return m_pfd->nSize;
					}
					void set(unsigned short n)
					{
						m_pfd->nSize = n;
					}
				}

				property unsigned short Version
				{
					unsigned short get()
					{
						return m_pfd->nVersion;
					}
					void set(unsigned short n)
					{
						m_pfd->nVersion = n;
					}
				}

				property unsigned long Flags
				{
					unsigned long get()
					{
						return m_pfd->dwFlags;
					}
					void set(unsigned long n)
					{
						m_pfd->dwFlags = n;
					}
				}

				property unsigned char PixelType
				{
					unsigned char get()
					{
						return m_pfd->iPixelType;
					}
					void set(unsigned char n)
					{
						m_pfd->iPixelType = n;
					}
				}

				property unsigned char ColorBits
				{
					unsigned char get()
					{
						return m_pfd->cColorBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cColorBits = n;
					}
				}

				property unsigned char RedBits
				{
					unsigned char get()
					{
						return m_pfd->cRedBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cRedBits = n;
					}
				}

				property unsigned char RedShift
				{
					unsigned char get()
					{
						return m_pfd->cRedShift;
					}
					void set(unsigned char n)
					{
						m_pfd->cRedShift = n;
					}
				}

				property unsigned char GreenBits
				{
					unsigned char get()
					{
						return m_pfd->cGreenBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cGreenBits = n;
					}
				}

				property unsigned char GreenShift
				{
					unsigned char get()
					{
						return m_pfd->cGreenShift;
					}
					void set(unsigned char n)
					{
						m_pfd->cGreenShift = n;
					}
				}

				property unsigned char BlueBits
				{
					unsigned char get()
					{
						return m_pfd->cBlueBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cBlueBits = n;
					}
				}

				property unsigned char BlueShift
				{
					unsigned char get()
					{
						return m_pfd->cBlueShift;
					}
					void set(unsigned char n)
					{
						m_pfd->cBlueShift = n;
					}
				}

				property unsigned char AlphaBits
				{
					unsigned char get()
					{
						return m_pfd->cAlphaBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cAlphaBits = n;
					}
				}

				property unsigned char AlphaShift
				{
					unsigned char get()
					{
						return m_pfd->cAlphaShift;
					}
					void set(unsigned char n)
					{
						m_pfd->cAlphaShift = n;
					}
				}

				property unsigned char AccumBits
				{
					unsigned char get()
					{
						return m_pfd->cAccumBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cAccumBits = n;
					}
				}

				property unsigned char AccumRedBits
				{
					unsigned char get()
					{
						return m_pfd->cAccumRedBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cAccumRedBits = n;
					}
				}

				property unsigned char AccumGreenBits
				{
					unsigned char get()
					{
						return m_pfd->cAccumGreenBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cAccumGreenBits = n;
					}
				}

				property unsigned char AccumBlueBits
				{
					unsigned char get()
					{
						return m_pfd->cAccumBlueBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cAccumBlueBits = n;
					}
				}

				property unsigned char AccumAlphaBits
				{
					unsigned char get()
					{
						return m_pfd->cAccumAlphaBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cAccumAlphaBits = n;
					}
				}

				property unsigned char DepthBits
				{
					unsigned char get()
					{
						return m_pfd->cDepthBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cDepthBits = n;
					}
				}

				property unsigned char StencilBits
				{
					unsigned char get()
					{
						return m_pfd->cStencilBits;
					}
					void set(unsigned char n)
					{
						m_pfd->cStencilBits = n;
					}
				}

				property unsigned char AuxBuffers
				{
					unsigned char get()
					{
						return m_pfd->cAuxBuffers;
					}
					void set(unsigned char n)
					{
						m_pfd->cAuxBuffers = n;
					}
				}

				property unsigned char LayerType
				{
					unsigned char get()
					{
						return m_pfd->iLayerType;
					}
					void set(unsigned char n)
					{
						m_pfd->iLayerType = n;
					}
				}

				property unsigned char Reserved
				{
					unsigned char get()
					{
						return m_pfd->bReserved;
					}
					void set(unsigned char n)
					{
						m_pfd->bReserved = n;
					}
				}

				property unsigned long LayerMask
				{
					unsigned long get()
					{
						return m_pfd->dwLayerMask;
					}
					void set(unsigned long n)
					{
						m_pfd->dwLayerMask = n;
					}
				}

				property unsigned long VisibleMask
				{
					unsigned long get()
					{
						return m_pfd->dwVisibleMask;
					}
					void set(unsigned long n)
					{
						m_pfd->dwVisibleMask = n;
					}
				}

				property unsigned long DamageMask
				{
					unsigned long get()
					{
						return m_pfd->dwDamageMask;
					}
					void set(unsigned long n)
					{
						m_pfd->dwDamageMask = n;
					}
				}

			protected:
				PIXELFORMATDESCRIPTOR *m_pfd;
			};

		}
	}
}