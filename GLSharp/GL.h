#pragma once

#using <System.Reflection.dll>

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::InteropServices;

namespace System {
	namespace Drawing {
		namespace GLSharp {

			public ref class GL
			{
			public:

				enum class GL_FLAGS
				{
					ACCUM = GL_ACCUM,
					LOAD = GL_LOAD,
					RETURN = GL_RETURN,
					MULT = GL_MULT,
					ADD = GL_ADD,
					NEVER = GL_NEVER,
					LESS = GL_LESS,
					EQUAL = GL_EQUAL,
					LEQUAL = GL_LEQUAL,
					GREATER = GL_GREATER,
					NOTEQUAL = GL_NOTEQUAL,
					GEQUAL = GL_GEQUAL,
					ALWAYS = GL_ALWAYS,
					CURRENT_BIT = GL_CURRENT_BIT,
					POINT_BIT = GL_POINT_BIT,
					LINE_BIT = GL_LINE_BIT,
					POLYGON_BIT = GL_POLYGON_BIT,
					POLYGON_STIPPLE_BIT = GL_POLYGON_STIPPLE_BIT,
					PIXEL_MODE_BIT = GL_PIXEL_MODE_BIT,
					LIGHTING_BIT = GL_LIGHTING_BIT,
					FOG_BIT = GL_FOG_BIT,
					DEPTH_BUFFER_BIT = GL_DEPTH_BUFFER_BIT,
					ACCUM_BUFFER_BIT = GL_ACCUM_BUFFER_BIT,
					STENCIL_BUFFER_BIT = GL_STENCIL_BUFFER_BIT,
					VIEWPORT_BIT = GL_VIEWPORT_BIT,
					TRANSFORM_BIT = GL_TRANSFORM_BIT,
					ENABLE_BIT = GL_ENABLE_BIT,
					COLOR_BUFFER_BIT = GL_COLOR_BUFFER_BIT,
					HINT_BIT = GL_HINT_BIT,
					EVAL_BIT = GL_EVAL_BIT,
					LIST_BIT = GL_LIST_BIT,
					TEXTURE_BIT = GL_TEXTURE_BIT,
					SCISSOR_BIT = GL_SCISSOR_BIT,
					ALL_ATTRIB_BITS = GL_ALL_ATTRIB_BITS,
					POINTS = GL_POINTS,
					LINES = GL_LINES,
					LINE_LOOP = GL_LINE_LOOP,
					LINE_STRIP = GL_LINE_STRIP,
					TRIANGLES = GL_TRIANGLES,
					TRIANGLE_STRIP = GL_TRIANGLE_STRIP,
					TRIANGLE_FAN = GL_TRIANGLE_FAN,
					QUADS = GL_QUADS,
					QUAD_STRIP = GL_QUAD_STRIP,
					POLYGON = GL_POLYGON,
					ZERO = GL_ZERO,
					ONE = GL_ONE,
					SRC_COLOR = GL_SRC_COLOR,
					ONE_MINUS_SRC_COLOR = GL_ONE_MINUS_SRC_COLOR,
					SRC_ALPHA = GL_SRC_ALPHA,
					ONE_MINUS_SRC_ALPHA = GL_ONE_MINUS_SRC_ALPHA,
					DST_ALPHA = GL_DST_ALPHA,
					ONE_MINUS_DST_ALPHA = GL_ONE_MINUS_DST_ALPHA,
					DST_COLOR = GL_DST_COLOR,
					ONE_MINUS_DST_COLOR = GL_ONE_MINUS_DST_COLOR,
					SRC_ALPHA_SATURATE = GL_SRC_ALPHA_SATURATE,
					CLIP_PLANE0 = GL_CLIP_PLANE0,
					CLIP_PLANE1 = GL_CLIP_PLANE1,
					CLIP_PLANE2 = GL_CLIP_PLANE2,
					CLIP_PLANE3 = GL_CLIP_PLANE3,
					CLIP_PLANE4 = GL_CLIP_PLANE4,
					CLIP_PLANE5 = GL_CLIP_PLANE5,
					BYTE = GL_BYTE,
					UNSIGNED_BYTE = GL_UNSIGNED_BYTE,
					SHORT = GL_SHORT,
					UNSIGNED_SHORT = GL_UNSIGNED_SHORT,
					INT = GL_INT,
					UNSIGNED_INT = GL_UNSIGNED_INT,
					FLOAT = GL_FLOAT,
					_2_BYTES = GL_2_BYTES,
					_3_BYTES = GL_3_BYTES,
					_4_BYTES = GL_4_BYTES,
					DOUBLE = GL_DOUBLE,
					NONE = GL_NONE,
					FRONT_LEFT = GL_FRONT_LEFT,
					FRONT_RIGHT = GL_FRONT_RIGHT,
					BACK_LEFT = GL_BACK_LEFT,
					BACK_RIGHT = GL_BACK_RIGHT,
					FRONT = GL_FRONT,
					BACK = GL_BACK,
					LEFT = GL_LEFT,
					RIGHT = GL_RIGHT,
					FRONT_AND_BACK = GL_FRONT_AND_BACK,
					AUX0 = GL_AUX0,
					AUX1 = GL_AUX1,
					AUX2 = GL_AUX2,
					AUX3 = GL_AUX3,
					_NO_ERROR = GL_NO_ERROR,
					INVALID_ENUM = GL_INVALID_ENUM,
					INVALID_VALUE = GL_INVALID_VALUE,
					INVALID_OPERATION = GL_INVALID_OPERATION,
					STACK_OVERFLOW = GL_STACK_OVERFLOW,
					STACK_UNDERFLOW = GL_STACK_UNDERFLOW,
					OUT_OF_MEMORY = GL_OUT_OF_MEMORY,
					_2D = GL_2D,
					_3D = GL_3D,
					_3D_COLOR = GL_3D_COLOR,
					_3D_COLOR_TEXTURE = GL_3D_COLOR_TEXTURE,
					_4D_COLOR_TEXTURE = GL_4D_COLOR_TEXTURE,
					PASS_THROUGH_TOKEN = GL_PASS_THROUGH_TOKEN,
					POINT_TOKEN = GL_POINT_TOKEN,
					LINE_TOKEN = GL_LINE_TOKEN,
					POLYGON_TOKEN = GL_POLYGON_TOKEN,
					BITMAP_TOKEN = GL_BITMAP_TOKEN,
					DRAW_PIXEL_TOKEN = GL_DRAW_PIXEL_TOKEN,
					COPY_PIXEL_TOKEN = GL_COPY_PIXEL_TOKEN,
					LINE_RESET_TOKEN = GL_LINE_RESET_TOKEN,
					EXP = GL_EXP,
					EXP2 = GL_EXP2,
					CW = GL_CW,
					CCW = GL_CCW,
					COEFF = GL_COEFF,
					ORDER = GL_ORDER,
					DOMAIN = GL_DOMAIN,
					CURRENT_COLOR = GL_CURRENT_COLOR,
					CURRENT_INDEX = GL_CURRENT_INDEX,
					CURRENT_NORMAL = GL_CURRENT_NORMAL,
					CURRENT_TEXTURE_COORDS = GL_CURRENT_TEXTURE_COORDS,
					CURRENT_RASTER_COLOR = GL_CURRENT_RASTER_COLOR,
					CURRENT_RASTER_INDEX = GL_CURRENT_RASTER_INDEX,
					CURRENT_RASTER_TEXTURE_COORDS = GL_CURRENT_RASTER_TEXTURE_COORDS,
					CURRENT_RASTER_POSITION = GL_CURRENT_RASTER_POSITION,
					CURRENT_RASTER_POSITION_VALID = GL_CURRENT_RASTER_POSITION_VALID,
					CURRENT_RASTER_DISTANCE = GL_CURRENT_RASTER_DISTANCE,
					POINT_SMOOTH = GL_POINT_SMOOTH,
					POINT_SIZE = GL_POINT_SIZE,
					POINT_SIZE_RANGE = GL_POINT_SIZE_RANGE,
					POINT_SIZE_GRANULARITY = GL_POINT_SIZE_GRANULARITY,
					LINE_SMOOTH = GL_LINE_SMOOTH,
					LINE_WIDTH = GL_LINE_WIDTH,
					LINE_WIDTH_RANGE = GL_LINE_WIDTH_RANGE,
					LINE_WIDTH_GRANULARITY = GL_LINE_WIDTH_GRANULARITY,
					LINE_STIPPLE = GL_LINE_STIPPLE,
					LINE_STIPPLE_PATTERN = GL_LINE_STIPPLE_PATTERN,
					LINE_STIPPLE_REPEAT = GL_LINE_STIPPLE_REPEAT,
					LIST_MODE = GL_LIST_MODE,
					MAX_LIST_NESTING = GL_MAX_LIST_NESTING,
					LIST_BASE = GL_LIST_BASE,
					LIST_INDEX = GL_LIST_INDEX,
					POLYGON_MODE = GL_POLYGON_MODE,
					POLYGON_SMOOTH = GL_POLYGON_SMOOTH,
					POLYGON_STIPPLE = GL_POLYGON_STIPPLE,
					EDGE_FLAG = GL_EDGE_FLAG,
					CULL_FACE = GL_CULL_FACE,
					CULL_FACE_MODE = GL_CULL_FACE_MODE,
					FRONT_FACE = GL_FRONT_FACE,
					LIGHTING = GL_LIGHTING,
					LIGHT_MODEL_LOCAL_VIEWER = GL_LIGHT_MODEL_LOCAL_VIEWER,
					LIGHT_MODEL_TWO_SIDE = GL_LIGHT_MODEL_TWO_SIDE,
					LIGHT_MODEL_AMBIENT = GL_LIGHT_MODEL_AMBIENT,
					SHADE_MODEL = GL_SHADE_MODEL,
					COLOR_MATERIAL_FACE = GL_COLOR_MATERIAL_FACE,
					COLOR_MATERIAL_PARAMETER = GL_COLOR_MATERIAL_PARAMETER,
					COLOR_MATERIAL = GL_COLOR_MATERIAL,
					FOG = GL_FOG,
					FOG_INDEX = GL_FOG_INDEX,
					FOG_DENSITY = GL_FOG_DENSITY,
					FOG_START = GL_FOG_START,
					FOG_END = GL_FOG_END,
					FOG_MODE = GL_FOG_MODE,
					FOG_COLOR = GL_FOG_COLOR,
					DEPTH_RANGE = GL_DEPTH_RANGE,
					DEPTH_TEST = GL_DEPTH_TEST,
					DEPTH_WRITEMASK = GL_DEPTH_WRITEMASK,
					DEPTH_CLEAR_VALUE = GL_DEPTH_CLEAR_VALUE,
					DEPTH_FUNC = GL_DEPTH_FUNC,
					ACCUM_CLEAR_VALUE = GL_ACCUM_CLEAR_VALUE,
					STENCIL_TEST = GL_STENCIL_TEST,
					STENCIL_CLEAR_VALUE = GL_STENCIL_CLEAR_VALUE,
					STENCIL_FUNC = GL_STENCIL_FUNC,
					STENCIL_VALUE_MASK = GL_STENCIL_VALUE_MASK,
					STENCIL_FAIL = GL_STENCIL_FAIL,
					STENCIL_PASS_DEPTH_FAIL = GL_STENCIL_PASS_DEPTH_FAIL,
					STENCIL_PASS_DEPTH_PASS = GL_STENCIL_PASS_DEPTH_PASS,
					STENCIL_REF = GL_STENCIL_REF,
					STENCIL_WRITEMASK = GL_STENCIL_WRITEMASK,
					MATRIX_MODE = GL_MATRIX_MODE,
					NORMALIZE = GL_NORMALIZE,
					VIEWPORT = GL_VIEWPORT,
					MODELVIEW_STACK_DEPTH = GL_MODELVIEW_STACK_DEPTH,
					PROJECTION_STACK_DEPTH = GL_PROJECTION_STACK_DEPTH,
					TEXTURE_STACK_DEPTH = GL_TEXTURE_STACK_DEPTH,
					MODELVIEW_MATRIX = GL_MODELVIEW_MATRIX,
					PROJECTION_MATRIX = GL_PROJECTION_MATRIX,
					TEXTURE_MATRIX = GL_TEXTURE_MATRIX,
					ATTRIB_STACK_DEPTH = GL_ATTRIB_STACK_DEPTH,
					CLIENT_ATTRIB_STACK_DEPTH = GL_CLIENT_ATTRIB_STACK_DEPTH,
					ALPHA_TEST = GL_ALPHA_TEST,
					ALPHA_TEST_FUNC = GL_ALPHA_TEST_FUNC,
					ALPHA_TEST_REF = GL_ALPHA_TEST_REF,
					DITHER = GL_DITHER,
					BLEND_DST = GL_BLEND_DST,
					BLEND_SRC = GL_BLEND_SRC,
					BLEND = GL_BLEND,
					LOGIC_OP_MODE = GL_LOGIC_OP_MODE,
					INDEX_LOGIC_OP = GL_INDEX_LOGIC_OP,
					COLOR_LOGIC_OP = GL_COLOR_LOGIC_OP,
					AUX_BUFFERS = GL_AUX_BUFFERS,
					DRAW_BUFFER = GL_DRAW_BUFFER,
					READ_BUFFER = GL_READ_BUFFER,
					SCISSOR_BOX = GL_SCISSOR_BOX,
					SCISSOR_TEST = GL_SCISSOR_TEST,
					INDEX_CLEAR_VALUE = GL_INDEX_CLEAR_VALUE,
					INDEX_WRITEMASK = GL_INDEX_WRITEMASK,
					COLOR_CLEAR_VALUE = GL_COLOR_CLEAR_VALUE,
					COLOR_WRITEMASK = GL_COLOR_WRITEMASK,
					INDEX_MODE = GL_INDEX_MODE,
					RGBA_MODE = GL_RGBA_MODE,
					DOUBLEBUFFER = GL_DOUBLEBUFFER,
					STEREO = GL_STEREO,
					RENDER_MODE = GL_RENDER_MODE,
					PERSPECTIVE_CORRECTION_HINT = GL_PERSPECTIVE_CORRECTION_HINT,
					POINT_SMOOTH_HINT = GL_POINT_SMOOTH_HINT,
					LINE_SMOOTH_HINT = GL_LINE_SMOOTH_HINT,
					POLYGON_SMOOTH_HINT = GL_POLYGON_SMOOTH_HINT,
					FOG_HINT = GL_FOG_HINT,
					TEXTURE_GEN_S = GL_TEXTURE_GEN_S,
					TEXTURE_GEN_T = GL_TEXTURE_GEN_T,
					TEXTURE_GEN_R = GL_TEXTURE_GEN_R,
					TEXTURE_GEN_Q = GL_TEXTURE_GEN_Q,
					PIXEL_MAP_I_TO_I = GL_PIXEL_MAP_I_TO_I,
					PIXEL_MAP_S_TO_S = GL_PIXEL_MAP_S_TO_S,
					PIXEL_MAP_I_TO_R = GL_PIXEL_MAP_I_TO_R,
					PIXEL_MAP_I_TO_G = GL_PIXEL_MAP_I_TO_G,
					PIXEL_MAP_I_TO_B = GL_PIXEL_MAP_I_TO_B,
					PIXEL_MAP_I_TO_A = GL_PIXEL_MAP_I_TO_A,
					PIXEL_MAP_R_TO_R = GL_PIXEL_MAP_R_TO_R,
					PIXEL_MAP_G_TO_G = GL_PIXEL_MAP_G_TO_G,
					PIXEL_MAP_B_TO_B = GL_PIXEL_MAP_B_TO_B,
					PIXEL_MAP_A_TO_A = GL_PIXEL_MAP_A_TO_A,
					PIXEL_MAP_I_TO_I_SIZE = GL_PIXEL_MAP_I_TO_I_SIZE,
					PIXEL_MAP_S_TO_S_SIZE = GL_PIXEL_MAP_S_TO_S_SIZE,
					PIXEL_MAP_I_TO_R_SIZE = GL_PIXEL_MAP_I_TO_R_SIZE,
					PIXEL_MAP_I_TO_G_SIZE = GL_PIXEL_MAP_I_TO_G_SIZE,
					PIXEL_MAP_I_TO_B_SIZE = GL_PIXEL_MAP_I_TO_B_SIZE,
					PIXEL_MAP_I_TO_A_SIZE = GL_PIXEL_MAP_I_TO_A_SIZE,
					PIXEL_MAP_R_TO_R_SIZE = GL_PIXEL_MAP_R_TO_R_SIZE,
					PIXEL_MAP_G_TO_G_SIZE = GL_PIXEL_MAP_G_TO_G_SIZE,
					PIXEL_MAP_B_TO_B_SIZE = GL_PIXEL_MAP_B_TO_B_SIZE,
					PIXEL_MAP_A_TO_A_SIZE = GL_PIXEL_MAP_A_TO_A_SIZE,
					UNPACK_SWAP_BYTES = GL_UNPACK_SWAP_BYTES,
					UNPACK_LSB_FIRST = GL_UNPACK_LSB_FIRST,
					UNPACK_ROW_LENGTH = GL_UNPACK_ROW_LENGTH,
					UNPACK_SKIP_ROWS = GL_UNPACK_SKIP_ROWS,
					UNPACK_SKIP_PIXELS = GL_UNPACK_SKIP_PIXELS,
					UNPACK_ALIGNMENT = GL_UNPACK_ALIGNMENT,
					PACK_SWAP_BYTES = GL_PACK_SWAP_BYTES,
					PACK_LSB_FIRST = GL_PACK_LSB_FIRST,
					PACK_ROW_LENGTH = GL_PACK_ROW_LENGTH,
					PACK_SKIP_ROWS = GL_PACK_SKIP_ROWS,
					PACK_SKIP_PIXELS = GL_PACK_SKIP_PIXELS,
					PACK_ALIGNMENT = GL_PACK_ALIGNMENT,
					MAP_COLOR = GL_MAP_COLOR,
					MAP_STENCIL = GL_MAP_STENCIL,
					INDEX_SHIFT = GL_INDEX_SHIFT,
					INDEX_OFFSET = GL_INDEX_OFFSET,
					RED_SCALE = GL_RED_SCALE,
					RED_BIAS = GL_RED_BIAS,
					ZOOM_X = GL_ZOOM_X,
					ZOOM_Y = GL_ZOOM_Y,
					GREEN_SCALE = GL_GREEN_SCALE,
					GREEN_BIAS = GL_GREEN_BIAS,
					BLUE_SCALE = GL_BLUE_SCALE,
					BLUE_BIAS = GL_BLUE_BIAS,
					ALPHA_SCALE = GL_ALPHA_SCALE,
					ALPHA_BIAS = GL_ALPHA_BIAS,
					DEPTH_SCALE = GL_DEPTH_SCALE,
					DEPTH_BIAS = GL_DEPTH_BIAS,
					MAX_EVAL_ORDER = GL_MAX_EVAL_ORDER,
					MAX_LIGHTS = GL_MAX_LIGHTS,
					MAX_CLIP_PLANES = GL_MAX_CLIP_PLANES,
					MAX_TEXTURE_SIZE = GL_MAX_TEXTURE_SIZE,
					MAX_PIXEL_MAP_TABLE = GL_MAX_PIXEL_MAP_TABLE,
					MAX_ATTRIB_STACK_DEPTH = GL_MAX_ATTRIB_STACK_DEPTH,
					MAX_MODELVIEW_STACK_DEPTH = GL_MAX_MODELVIEW_STACK_DEPTH,
					MAX_NAME_STACK_DEPTH = GL_MAX_NAME_STACK_DEPTH,
					MAX_PROJECTION_STACK_DEPTH = GL_MAX_PROJECTION_STACK_DEPTH,
					MAX_TEXTURE_STACK_DEPTH = GL_MAX_TEXTURE_STACK_DEPTH,
					MAX_VIEWPORT_DIMS = GL_MAX_VIEWPORT_DIMS,
					MAX_CLIENT_ATTRIB_STACK_DEPTH = GL_MAX_CLIENT_ATTRIB_STACK_DEPTH,
					SUBPIXEL_BITS = GL_SUBPIXEL_BITS,
					INDEX_BITS = GL_INDEX_BITS,
					RED_BITS = GL_RED_BITS,
					GREEN_BITS = GL_GREEN_BITS,
					BLUE_BITS = GL_BLUE_BITS,
					ALPHA_BITS = GL_ALPHA_BITS,
					DEPTH_BITS = GL_DEPTH_BITS,
					STENCIL_BITS = GL_STENCIL_BITS,
					ACCUM_RED_BITS = GL_ACCUM_RED_BITS,
					ACCUM_GREEN_BITS = GL_ACCUM_GREEN_BITS,
					ACCUM_BLUE_BITS = GL_ACCUM_BLUE_BITS,
					ACCUM_ALPHA_BITS = GL_ACCUM_ALPHA_BITS,
					NAME_STACK_DEPTH = GL_NAME_STACK_DEPTH,
					AUTO_NORMAL = GL_AUTO_NORMAL,
					MAP1_COLOR_4 = GL_MAP1_COLOR_4,
					MAP1_INDEX = GL_MAP1_INDEX,
					MAP1_NORMAL = GL_MAP1_NORMAL,
					MAP1_TEXTURE_COORD_1 = GL_MAP1_TEXTURE_COORD_1,
					MAP1_TEXTURE_COORD_2 = GL_MAP1_TEXTURE_COORD_2,
					MAP1_TEXTURE_COORD_3 = GL_MAP1_TEXTURE_COORD_3,
					MAP1_TEXTURE_COORD_4 = GL_MAP1_TEXTURE_COORD_4,
					MAP1_VERTEX_3 = GL_MAP1_VERTEX_3,
					MAP1_VERTEX_4 = GL_MAP1_VERTEX_4,
					MAP2_COLOR_4 = GL_MAP2_COLOR_4,
					MAP2_INDEX = GL_MAP2_INDEX,
					MAP2_NORMAL = GL_MAP2_NORMAL,
					MAP2_TEXTURE_COORD_1 = GL_MAP2_TEXTURE_COORD_1,
					MAP2_TEXTURE_COORD_2 = GL_MAP2_TEXTURE_COORD_2,
					MAP2_TEXTURE_COORD_3 = GL_MAP2_TEXTURE_COORD_3,
					MAP2_TEXTURE_COORD_4 = GL_MAP2_TEXTURE_COORD_4,
					MAP2_VERTEX_3 = GL_MAP2_VERTEX_3,
					MAP2_VERTEX_4 = GL_MAP2_VERTEX_4,
					MAP1_GRID_DOMAIN = GL_MAP1_GRID_DOMAIN,
					MAP1_GRID_SEGMENTS = GL_MAP1_GRID_SEGMENTS,
					MAP2_GRID_DOMAIN = GL_MAP2_GRID_DOMAIN,
					MAP2_GRID_SEGMENTS = GL_MAP2_GRID_SEGMENTS,
					TEXTURE_1D = GL_TEXTURE_1D,
					TEXTURE_2D = GL_TEXTURE_2D,
					FEEDBACK_BUFFER_POINTER = GL_FEEDBACK_BUFFER_POINTER,
					FEEDBACK_BUFFER_SIZE = GL_FEEDBACK_BUFFER_SIZE,
					FEEDBACK_BUFFER_TYPE = GL_FEEDBACK_BUFFER_TYPE,
					SELECTION_BUFFER_POINTER = GL_SELECTION_BUFFER_POINTER,
					TEXTURE_WIDTH = GL_TEXTURE_WIDTH,
					TEXTURE_HEIGHT = GL_TEXTURE_HEIGHT,
					TEXTURE_INTERNAL_FORMAT = GL_TEXTURE_INTERNAL_FORMAT,
					TEXTURE_BORDER_COLOR = GL_TEXTURE_BORDER_COLOR,
					TEXTURE_BORDER = GL_TEXTURE_BORDER,
					DONT_CARE = GL_DONT_CARE,
					FASTEST = GL_FASTEST,
					NICEST = GL_NICEST,
					LIGHT0 = GL_LIGHT0,
					LIGHT1 = GL_LIGHT1,
					LIGHT2 = GL_LIGHT2,
					LIGHT3 = GL_LIGHT3,
					LIGHT4 = GL_LIGHT4,
					LIGHT5 = GL_LIGHT5,
					LIGHT6 = GL_LIGHT6,
					LIGHT7 = GL_LIGHT7,
					AMBIENT = GL_AMBIENT,
					DIFFUSE = GL_DIFFUSE,
					SPECULAR = GL_SPECULAR,
					POSITION = GL_POSITION,
					SPOT_DIRECTION = GL_SPOT_DIRECTION,
					SPOT_EXPONENT = GL_SPOT_EXPONENT,
					SPOT_CUTOFF = GL_SPOT_CUTOFF,
					CONSTANT_ATTENUATION = GL_CONSTANT_ATTENUATION,
					LINEAR_ATTENUATION = GL_LINEAR_ATTENUATION,
					QUADRATIC_ATTENUATION = GL_QUADRATIC_ATTENUATION,
					COMPILE = GL_COMPILE,
					COMPILE_AND_EXECUTE = GL_COMPILE_AND_EXECUTE,
					CLEAR = GL_CLEAR,
					AND = GL_AND,
					AND_REVERSE = GL_AND_REVERSE,
					COPY = GL_COPY,
					AND_INVERTED = GL_AND_INVERTED,
					NOOP = GL_NOOP,
					XOR = GL_XOR,
					OR = GL_OR,
					NOR = GL_NOR,
					EQUIV = GL_EQUIV,
					INVERT = GL_INVERT,
					OR_REVERSE = GL_OR_REVERSE,
					COPY_INVERTED = GL_COPY_INVERTED,
					OR_INVERTED = GL_OR_INVERTED,
					NAND = GL_NAND,
					SET = GL_SET,
					EMISSION = GL_EMISSION,
					SHININESS = GL_SHININESS,
					AMBIENT_AND_DIFFUSE = GL_AMBIENT_AND_DIFFUSE,
					COLOR_INDEXES = GL_COLOR_INDEXES,
					MODELVIEW = GL_MODELVIEW,
					PROJECTION = GL_PROJECTION,
					TEXTURE = GL_TEXTURE,
					COLOR = GL_COLOR,
					DEPTH = GL_DEPTH,
					STENCIL = GL_STENCIL,
					COLOR_INDEX = GL_COLOR_INDEX,
					STENCIL_INDEX = GL_STENCIL_INDEX,
					DEPTH_COMPONENT = GL_DEPTH_COMPONENT,
					RED = GL_RED,
					GREEN = GL_GREEN,
					BLUE = GL_BLUE,
					ALPHA = GL_ALPHA,
					RGB = GL_RGB,
					RGBA = GL_RGBA,
					LUMINANCE = GL_LUMINANCE,
					LUMINANCE_ALPHA = GL_LUMINANCE_ALPHA,
					BITMAP = GL_BITMAP,
					POINT = GL_POINT,
					LINE = GL_LINE,
					FILL = GL_FILL,
					RENDER = GL_RENDER,
					FEEDBACK = GL_FEEDBACK,
					SELECT = GL_SELECT,
					FLAT = GL_FLAT,
					SMOOTH = GL_SMOOTH,
					KEEP = GL_KEEP,
					REPLACE = GL_REPLACE,
					INCR = GL_INCR,
					DECR = GL_DECR,
					VENDOR = GL_VENDOR,
					RENDERER = GL_RENDERER,
					VERSION = GL_VERSION,
					EXTENSIONS = GL_EXTENSIONS,
					S = GL_S,
					T = GL_T,
					R = GL_R,
					Q = GL_Q,
					MODULATE = GL_MODULATE,
					DECAL = GL_DECAL,
					TEXTURE_ENV_MODE = GL_TEXTURE_ENV_MODE,
					TEXTURE_ENV_COLOR = GL_TEXTURE_ENV_COLOR,
					TEXTURE_ENV = GL_TEXTURE_ENV,
					EYE_LINEAR = GL_EYE_LINEAR,
					OBJECT_LINEAR = GL_OBJECT_LINEAR,
					SPHERE_MAP = GL_SPHERE_MAP,
					TEXTURE_GEN_MODE = GL_TEXTURE_GEN_MODE,
					OBJECT_PLANE = GL_OBJECT_PLANE,
					EYE_PLANE = GL_EYE_PLANE,
					NEAREST = GL_NEAREST,
					LINEAR = GL_LINEAR,
					NEAREST_MIPMAP_NEAREST = GL_NEAREST_MIPMAP_NEAREST,
					LINEAR_MIPMAP_NEAREST = GL_LINEAR_MIPMAP_NEAREST,
					NEAREST_MIPMAP_LINEAR = GL_NEAREST_MIPMAP_LINEAR,
					LINEAR_MIPMAP_LINEAR = GL_LINEAR_MIPMAP_LINEAR,
					TEXTURE_MAG_FILTER = GL_TEXTURE_MAG_FILTER,
					TEXTURE_MIN_FILTER = GL_TEXTURE_MIN_FILTER,
					TEXTURE_WRAP_S = GL_TEXTURE_WRAP_S,
					TEXTURE_WRAP_T = GL_TEXTURE_WRAP_T,
					CLAMP = GL_CLAMP,
					REPEAT = GL_REPEAT,
					CLIENT_PIXEL_STORE_BIT = GL_CLIENT_PIXEL_STORE_BIT,
					CLIENT_VERTEX_ARRAY_BIT = GL_CLIENT_VERTEX_ARRAY_BIT,
					CLIENT_ALL_ATTRIB_BITS = GL_CLIENT_ALL_ATTRIB_BITS,
					POLYGON_OFFSET_FACTOR = GL_POLYGON_OFFSET_FACTOR,
					POLYGON_OFFSET_UNITS = GL_POLYGON_OFFSET_UNITS,
					POLYGON_OFFSET_POINT = GL_POLYGON_OFFSET_POINT,
					POLYGON_OFFSET_LINE = GL_POLYGON_OFFSET_LINE,
					POLYGON_OFFSET_FILL = GL_POLYGON_OFFSET_FILL,
					ALPHA4 = GL_ALPHA4,
					ALPHA8 = GL_ALPHA8,
					ALPHA12 = GL_ALPHA12,
					ALPHA16 = GL_ALPHA16,
					LUMINANCE4 = GL_LUMINANCE4,
					LUMINANCE8 = GL_LUMINANCE8,
					LUMINANCE12 = GL_LUMINANCE12,
					LUMINANCE16 = GL_LUMINANCE16,
					LUMINANCE4_ALPHA4 = GL_LUMINANCE4_ALPHA4,
					LUMINANCE6_ALPHA2 = GL_LUMINANCE6_ALPHA2,
					LUMINANCE8_ALPHA8 = GL_LUMINANCE8_ALPHA8,
					LUMINANCE12_ALPHA4 = GL_LUMINANCE12_ALPHA4,
					LUMINANCE12_ALPHA12 = GL_LUMINANCE12_ALPHA12,
					LUMINANCE16_ALPHA16 = GL_LUMINANCE16_ALPHA16,
					INTENSITY = GL_INTENSITY,
					INTENSITY4 = GL_INTENSITY4,
					INTENSITY8 = GL_INTENSITY8,
					INTENSITY12 = GL_INTENSITY12,
					INTENSITY16 = GL_INTENSITY16,
					R3_G3_B2 = GL_R3_G3_B2,
					RGB4 = GL_RGB4,
					RGB5 = GL_RGB5,
					RGB8 = GL_RGB8,
					RGB10 = GL_RGB10,
					RGB12 = GL_RGB12,
					RGB16 = GL_RGB16,
					RGBA2 = GL_RGBA2,
					RGBA4 = GL_RGBA4,
					RGB5_A1 = GL_RGB5_A1,
					RGBA8 = GL_RGBA8,
					RGB10_A2 = GL_RGB10_A2,
					RGBA12 = GL_RGBA12,
					RGBA16 = GL_RGBA16,
					TEXTURE_RED_SIZE = GL_TEXTURE_RED_SIZE,
					TEXTURE_GREEN_SIZE = GL_TEXTURE_GREEN_SIZE,
					TEXTURE_BLUE_SIZE = GL_TEXTURE_BLUE_SIZE,
					TEXTURE_ALPHA_SIZE = GL_TEXTURE_ALPHA_SIZE,
					TEXTURE_LUMINANCE_SIZE = GL_TEXTURE_LUMINANCE_SIZE,
					TEXTURE_INTENSITY_SIZE = GL_TEXTURE_INTENSITY_SIZE,
					PROXY_TEXTURE_1D = GL_PROXY_TEXTURE_1D,
					PROXY_TEXTURE_2D = GL_PROXY_TEXTURE_2D,
					TEXTURE_PRIORITY = GL_TEXTURE_PRIORITY,
					TEXTURE_RESIDENT = GL_TEXTURE_RESIDENT,
					TEXTURE_BINDING_1D = GL_TEXTURE_BINDING_1D,
					TEXTURE_BINDING_2D = GL_TEXTURE_BINDING_2D,
					VERTEX_ARRAY = GL_VERTEX_ARRAY,
					NORMAL_ARRAY = GL_NORMAL_ARRAY,
					COLOR_ARRAY = GL_COLOR_ARRAY,
					INDEX_ARRAY = GL_INDEX_ARRAY,
					TEXTURE_COORD_ARRAY = GL_TEXTURE_COORD_ARRAY,
					EDGE_FLAG_ARRAY = GL_EDGE_FLAG_ARRAY,
					VERTEX_ARRAY_SIZE = GL_VERTEX_ARRAY_SIZE,
					VERTEX_ARRAY_TYPE = GL_VERTEX_ARRAY_TYPE,
					VERTEX_ARRAY_STRIDE = GL_VERTEX_ARRAY_STRIDE,
					NORMAL_ARRAY_TYPE = GL_NORMAL_ARRAY_TYPE,
					NORMAL_ARRAY_STRIDE = GL_NORMAL_ARRAY_STRIDE,
					COLOR_ARRAY_SIZE = GL_COLOR_ARRAY_SIZE,
					COLOR_ARRAY_TYPE = GL_COLOR_ARRAY_TYPE,
					COLOR_ARRAY_STRIDE = GL_COLOR_ARRAY_STRIDE,
					INDEX_ARRAY_TYPE = GL_INDEX_ARRAY_TYPE,
					INDEX_ARRAY_STRIDE = GL_INDEX_ARRAY_STRIDE,
					TEXTURE_COORD_ARRAY_SIZE = GL_TEXTURE_COORD_ARRAY_SIZE,
					TEXTURE_COORD_ARRAY_TYPE = GL_TEXTURE_COORD_ARRAY_TYPE,
					TEXTURE_COORD_ARRAY_STRIDE = GL_TEXTURE_COORD_ARRAY_STRIDE,
					EDGE_FLAG_ARRAY_STRIDE = GL_EDGE_FLAG_ARRAY_STRIDE,
					VERTEX_ARRAY_POINTER = GL_VERTEX_ARRAY_POINTER,
					NORMAL_ARRAY_POINTER = GL_NORMAL_ARRAY_POINTER,
					COLOR_ARRAY_POINTER = GL_COLOR_ARRAY_POINTER,
					INDEX_ARRAY_POINTER = GL_INDEX_ARRAY_POINTER,
					TEXTURE_COORD_ARRAY_POINTER = GL_TEXTURE_COORD_ARRAY_POINTER,
					EDGE_FLAG_ARRAY_POINTER = GL_EDGE_FLAG_ARRAY_POINTER,
					V2F = GL_V2F,
					V3F = GL_V3F,
					C4UB_V2F = GL_C4UB_V2F,
					C4UB_V3F = GL_C4UB_V3F,
					C3F_V3F = GL_C3F_V3F,
					N3F_V3F = GL_N3F_V3F,
					C4F_N3F_V3F = GL_C4F_N3F_V3F,
					T2F_V3F = GL_T2F_V3F,
					T4F_V4F = GL_T4F_V4F,
					T2F_C4UB_V3F = GL_T2F_C4UB_V3F,
					T2F_C3F_V3F = GL_T2F_C3F_V3F,
					T2F_N3F_V3F = GL_T2F_N3F_V3F,
					T2F_C4F_N3F_V3F = GL_T2F_C4F_N3F_V3F,
					T4F_C4F_N3F_V4F = GL_T4F_C4F_N3F_V4F,
					EXT_vertex_array = GL_EXT_vertex_array,
					EXT_bgra = GL_EXT_bgra,
					EXT_paletted_texture = GL_EXT_paletted_texture,
					WIN_swap_hint = GL_WIN_swap_hint,
					WIN_draw_range_elements = GL_WIN_draw_range_elements,
					VERTEX_ARRAY_EXT = GL_VERTEX_ARRAY_EXT,
					NORMAL_ARRAY_EXT = GL_NORMAL_ARRAY_EXT,
					COLOR_ARRAY_EXT = GL_COLOR_ARRAY_EXT,
					INDEX_ARRAY_EXT = GL_INDEX_ARRAY_EXT,
					TEXTURE_COORD_ARRAY_EXT = GL_TEXTURE_COORD_ARRAY_EXT,
					EDGE_FLAG_ARRAY_EXT = GL_EDGE_FLAG_ARRAY_EXT,
					VERTEX_ARRAY_SIZE_EXT = GL_VERTEX_ARRAY_SIZE_EXT,
					VERTEX_ARRAY_TYPE_EXT = GL_VERTEX_ARRAY_TYPE_EXT,
					VERTEX_ARRAY_STRIDE_EXT = GL_VERTEX_ARRAY_STRIDE_EXT,
					VERTEX_ARRAY_COUNT_EXT = GL_VERTEX_ARRAY_COUNT_EXT,
					NORMAL_ARRAY_TYPE_EXT = GL_NORMAL_ARRAY_TYPE_EXT,
					NORMAL_ARRAY_STRIDE_EXT = GL_NORMAL_ARRAY_STRIDE_EXT,
					NORMAL_ARRAY_COUNT_EXT = GL_NORMAL_ARRAY_COUNT_EXT,
					COLOR_ARRAY_SIZE_EXT = GL_COLOR_ARRAY_SIZE_EXT,
					COLOR_ARRAY_TYPE_EXT = GL_COLOR_ARRAY_TYPE_EXT,
					COLOR_ARRAY_STRIDE_EXT = GL_COLOR_ARRAY_STRIDE_EXT,
					COLOR_ARRAY_COUNT_EXT = GL_COLOR_ARRAY_COUNT_EXT,
					INDEX_ARRAY_TYPE_EXT = GL_INDEX_ARRAY_TYPE_EXT,
					INDEX_ARRAY_STRIDE_EXT = GL_INDEX_ARRAY_STRIDE_EXT,
					INDEX_ARRAY_COUNT_EXT = GL_INDEX_ARRAY_COUNT_EXT,
					TEXTURE_COORD_ARRAY_SIZE_EXT = GL_TEXTURE_COORD_ARRAY_SIZE_EXT,
					TEXTURE_COORD_ARRAY_TYPE_EXT = GL_TEXTURE_COORD_ARRAY_TYPE_EXT,
					TEXTURE_COORD_ARRAY_STRIDE_EXT = GL_TEXTURE_COORD_ARRAY_STRIDE_EXT,
					TEXTURE_COORD_ARRAY_COUNT_EXT = GL_TEXTURE_COORD_ARRAY_COUNT_EXT,
					EDGE_FLAG_ARRAY_STRIDE_EXT = GL_EDGE_FLAG_ARRAY_STRIDE_EXT,
					EDGE_FLAG_ARRAY_COUNT_EXT = GL_EDGE_FLAG_ARRAY_COUNT_EXT,
					VERTEX_ARRAY_POINTER_EXT = GL_VERTEX_ARRAY_POINTER_EXT,
					NORMAL_ARRAY_POINTER_EXT = GL_NORMAL_ARRAY_POINTER_EXT,
					COLOR_ARRAY_POINTER_EXT = GL_COLOR_ARRAY_POINTER_EXT,
					INDEX_ARRAY_POINTER_EXT = GL_INDEX_ARRAY_POINTER_EXT,
					TEXTURE_COORD_ARRAY_POINTER_EXT = GL_TEXTURE_COORD_ARRAY_POINTER_EXT,
					EDGE_FLAG_ARRAY_POINTER_EXT = GL_EDGE_FLAG_ARRAY_POINTER_EXT,
					DOUBLE_EXT = GL_DOUBLE_EXT, 
					_DOUBLE = GL_DOUBLE,
					BGR_EXT = GL_BGR_EXT,
					BGRA_EXT = GL_BGRA_EXT,
					COLOR_TABLE_FORMAT_EXT = GL_COLOR_TABLE_FORMAT_EXT,
					COLOR_TABLE_WIDTH_EXT = GL_COLOR_TABLE_WIDTH_EXT,
					COLOR_TABLE_RED_SIZE_EXT = GL_COLOR_TABLE_RED_SIZE_EXT,
					COLOR_TABLE_GREEN_SIZE_EXT = GL_COLOR_TABLE_GREEN_SIZE_EXT,
					COLOR_TABLE_BLUE_SIZE_EXT = GL_COLOR_TABLE_BLUE_SIZE_EXT,
					COLOR_TABLE_ALPHA_SIZE_EXT = GL_COLOR_TABLE_ALPHA_SIZE_EXT,
					COLOR_TABLE_LUMINANCE_SIZE_EXT = GL_COLOR_TABLE_LUMINANCE_SIZE_EXT,
					COLOR_TABLE_INTENSITY_SIZE_EXT = GL_COLOR_TABLE_INTENSITY_SIZE_EXT,
					COLOR_INDEX1_EXT = GL_COLOR_INDEX1_EXT,
					COLOR_INDEX2_EXT = GL_COLOR_INDEX2_EXT,
					COLOR_INDEX4_EXT = GL_COLOR_INDEX4_EXT,
					COLOR_INDEX8_EXT = GL_COLOR_INDEX8_EXT,
					COLOR_INDEX12_EXT = GL_COLOR_INDEX12_EXT,
					COLOR_INDEX16_EXT = GL_COLOR_INDEX16_EXT,
					MAX_ELEMENTS_VERTICES_WIN = GL_MAX_ELEMENTS_VERTICES_WIN,
					MAX_ELEMENTS_INDICES_WIN = GL_MAX_ELEMENTS_INDICES_WIN,
					PHONG_WIN = GL_PHONG_WIN, 
					PHONG_HINT_WIN = GL_PHONG_HINT_WIN, 
					FOG_SPECULAR_TEXTURE_WIN = GL_FOG_SPECULAR_TEXTURE_WIN
				};

				void Accum(GL_FLAGS op, float val);
				void AlphaFunc(GL_FLAGS flags, float ref);
				Boolean AreTexturesResident(int n, array<UInt32> ^textures, array<unsigned char> ^residences);
				void ArrayElement(int i);
				void Begin(GL_FLAGS flags);
				void BindTexture(BIND_FLAGS target, UInt32 tx);
				void Bitmap(int width, int height, float xorig, float yorig, float xmove, float ymove, array<byte> ^bitmap);
				void BlendFunc(GL_FLAGS sfactor, GL_FLAGS dfactor);
				void CallList(UInt32 list);
				void Clear(GL_FLAGS flags);
				void ClearAccum(float r, float g, float b, float a);
				void ClearColor(float r, float g, float b, float a);
				void ClearDepth(double d);
				void ClearIndex(float c);
				void ClearStencil(int s);
				void ClipPlane(GL_FLAGS plane, array<double> ^equation);
				void ColorMask(Boolean r, Boolean g, Boolean b, Boolean a);
				void ColorMaterial(GL_FLAGS face, GL_FLAGS mode);
				void CopyPixels(int x, int y, int width, int height, GL_FLAGS type);/**/
				void CopyTexImage1D(GL_FLAGS target, int level, GL_FLAGS internalFormat, int x, int y, int width, int border);
				void CopyTexImage2D(GL_FLAGS target, int level, GL_FLAGS internalFormat, int x, int y, int width, int height, int border);
				void CopyTexSubImage1D(GL_FLAGS target, int level, int xoffset, int x, int y, int width);
				void CopyTexSubImage2D(GL_FLAGS target, int level, int xoffset, int yoffset, int x, int y, int width, int height);
				void CullFace(GL_FLAGS mode);
				void DeleteLists(UInt32 list, int range);
				void DeleteTextures(int size, array<UInt32> ^textures);
				void DepthFunc(GL_FLAGS func);
				void DepthMask(byte flag);
				void DepthRange(double zNear, double zFar);
				void Disable(GL_FLAGS flags);
				void DisableClientState(GL_FLAGS ar);
				void DrawArrays(GL_FLAGS mode, int first, int count);
				void DrawBuffer(GL_FLAGS mode);
				void EdgeFlag(Boolean flag);
				void Enable(GL_FLAGS flags);
				void EnableClientState(GL_FLAGS ar);
				void End();
				void EndList();
				void EvalCoord1d(double u);
				void EvalCoord1f(float u);
				void EvalCoord2d(double u, double v);
				void EvalCoord2f(float u, float v);
				void EvalMesh1(GL_FLAGS mode, int i1, int i2);
				void EvalMesh2(GL_FLAGS mode, int i1, int i2, int j1, int j2);
				void EvalPoint1(int i);
				void EvalPoint2(int i, int j);
				void Finish();
				void Flush();
				void Fogf(GL_FLAGS name, float param);
				void Fogi(GL_FLAGS name, int param);
				void FrontFace(GL_FLAGS mode);
				void Frustum(Double left, Double right, Double bottom, Double top, Double nearVal, Double farVal);
				UInt32 GenLists(int range);
				void GenTextures(int n, array<UInt32> ^%textures);
				void GetBooleanv(GL_FLAGS pname, array<unsigned char> ^%param);
				void GetClipPlane(GL_FLAGS plane, array<double> ^%equation);
				void GetDoublev(GL_FLAGS pname, array<double> ^%param);
				GL_FLAGS GetError();
				void GetFloatv(GL_FLAGS pname, array<float> ^%param);
				void GetIntegerv(GL_FLAGS pname, array<int> ^%param);
				void GetLightfv(GL_FLAGS light, GL_FLAGS pname, array<float> ^%params);
				void GetLightiv(GL_FLAGS light, GL_FLAGS pname, array<int> ^%params);
				void GetMapdv(GL_FLAGS target, GL_FLAGS query, array<double> ^%v);
				void GetMapfv(GL_FLAGS target, GL_FLAGS query, array<float> ^%v);
				void GetMapiv(GL_FLAGS target, GL_FLAGS query, array<int> ^%v);
				void GetMaterialfv(GL_FLAGS face, GL_FLAGS pname, array<float> ^%params);
				void GetMaterialiv(GL_FLAGS face, GL_FLAGS pname, array<int> ^%params);
				void GetPixelMapfv(GL_FLAGS map, array<float> ^%values);
				void GetPixelMapuiv(GL_FLAGS map, array<UInt32> ^%values);
				void GetPixelMapusv(GL_FLAGS map, array<unsigned short> ^%values);
				void GetPolygonStipple(array<unsigned char> ^%v);
				array<unsigned char> ^GetString(GL_FLAGS name);
				void GetTexEnvfv(GL_FLAGS target, GL_FLAGS pname, array<float> ^%params);/*not implemented*/
				void GetTexEnviv(GL_FLAGS target, GL_FLAGS pname, array<int> ^%params);/*not implemented*/
				void GetTexGendv(GL_FLAGS coord, GL_FLAGS pname, array<double> ^%params);/*not implemented*/
				void GetTexGenfv(GL_FLAGS coord, GL_FLAGS pname, array<float> ^%params);/*not implemented*/
				void GetTexGeniv(GL_FLAGS coord, GL_FLAGS pname, array<int> ^%params);/*not implemented*/
				void GetTexImage(GL_FLAGS target, int level, GL_FLAGS format, GL_FLAGS type, array<IntPtr> ^%pixels);/*not implemented*/
				void GetTexLevelParameterfv(GL_FLAGS target, int level, GL_FLAGS pname, array<float> ^%params);/*not implemented*/
				void GetTexLevelParameteriv(GL_FLAGS target, int level, GL_FLAGS pname, array<int> ^%params);/*not implemented*/
				void GetTexParameterfv(GL_FLAGS target, GL_FLAGS pname, array<float> ^%params);/*not implemented*/
				void GetTexParameteriv(GL_FLAGS target, GL_FLAGS pname, array<int> ^%params);/*not implemented*/
				void IndexMask(UInt32 mask);
				void IndexPointer(GL_FLAGS type, int stride, array<IntPtr> ^%pointer);
				void Indexd(double c);
				void Indexdv(array<double> ^%c);
				void Indexf(float c);
				void Indexfv(array<float> ^%c);
				void Indexi(int c);
				void Indexiv(array<int> ^%c);
				void Indexs(short c);
				void Indexsv(array<short> ^%c);
				void Indexub(unsigned char c);
				void Indexubv(array<unsigned char> ^%c);
				void InitNames();
				void InterleavedArrays(GL_FLAGS format, int stride, array<IntPtr> ^%pixels);/*not implemented*/
				Boolean IsEnabled(GL_FLAGS cap);
				Boolean IsList(UInt32 list);
				Boolean IsTexture(UInt32 texture);
				void LightModelf(GL_FLAGS pname, float param);
				void LightModelfv(GL_FLAGS pname, array<float> ^%params);
				void LightModeli(GL_FLAGS pname, int param);
				void LightModeliv(GL_FLAGS pname, array<int> ^%params);
				void Lightf(GL_FLAGS light, GL_FLAGS pname, float param);
				void Lightfv(GL_FLAGS light, GL_FLAGS pname, array<float> ^%params);
				void Lighti(GL_FLAGS light, GL_FLAGS pname, int param);
				void Lightiv(GL_FLAGS light, GL_FLAGS pname, array<int> ^%params);
				void LineStipple(int factor, unsigned short pattern);
				void LineWidth(float width);
				void ListBase(UInt32 base);
				void LoadIdentity();
				void LoadMatrixd(array<double> ^%m);
				void LoadMatrixf(array<float> ^%m);
				void LoadName(UInt32 name);
				void LogicOp(GL_FLAGS opcode);
				void Map1d(GL_FLAGS target, double u1, double u2, int stride, int order, array<double> ^%points);
				void Map1f(GL_FLAGS target, float u1, float u2, int stride, int order, array<float> ^%points);
				void Map2d(GL_FLAGS target, double u1, double u2, int ustride, int uorder, double v1, double v2, int vstride, int vorder, array<double> ^%points);
				void Map2f(GL_FLAGS target, float u1, float u2, int ustride, int uorder, float v1, float v2, int vstride, int vorder, array<float> ^%points);
				void MapGrid1d(int un, double u1, double u2);
				void MapGrid1f(int un, float u1, float u2);
				void MapGrid2d(int un, double u1, double u2, int vn, double v1, double v2);
				void MapGrid2f(int un, float u1, float u2, int vn, float v1, float v2);
				void Materialf(GL_FLAGS face, GL_FLAGS pname, float param);
				void Materialfv(GL_FLAGS face, GL_FLAGS pname, array<float> ^%params);
				void Materiali(GL_FLAGS face, GL_FLAGS pname, int param);
				void Materialiv(GL_FLAGS face, GL_FLAGS pname, array<int> ^%params);
				void MatrixMode(GL_FLAGS mode);
				void MultMatrixd(array<double> ^%m);
				void MultMatrixf(array<float> ^%m);
				void NewList(UInt32 list, GL_FLAGS mode);
				void NormalPointer(GL_FLAGS type, int stride, array<IntPtr> ^pointer);
				void Ortho(double left, double right, double bottom, double top, double zNear, double zFar);
				void PassThrough(float token);
				void PixelMapfv(GL_FLAGS map, int mapsize, array<float> ^values);
				void PixelMapuiv(GL_FLAGS map, int mapsize, array<UInt32> ^values);
				void PixelMapusv(GL_FLAGS map, int mapsize, array<unsigned short> ^values);
				void PixelStoref(GL_FLAGS pname, float param);
				void PixelStorei(GL_FLAGS pname, int param);
				void PixelTransferf(GL_FLAGS pname, float param);
				void PixelTransferi(GL_FLAGS pname, int param);
				void PixelZoom(float xfactor, float yfactor);
				void PointSize(float size);
				void PolygonMode(GL_FLAGS face, GL_FLAGS mode);
				void PolygonOffset(float factor, float units);
				void PolygonStipple(array<unsigned char> ^mask);
				void PopAttrib();
				void PopClientAttrib();
				void PopMatrix();
				void PopName();
				void PrioritizeTextures(int n, array<UInt32> ^textures, array<float> ^priorities);
				void PushAttrib(UInt32 mask);
				void PushClientAttrib(UInt32 mask);
				void PushMatrix();
				void PushName(UInt32 name);
				void ReadBuffer(GL_FLAGS mode);
				void ReadPixels(int x, int y, int width, int height, GL_FLAGS format, GL_FLAGS type, array<IntPtr> ^pixels);
				int RenderMode(GL_FLAGS mode);
				void Scissor(int x, int y, int width, int height);
				void SelectBuffer(int size, array<UInt32> ^buffer);
				void ShadeModel(GL_FLAGS mode);
				void StencilFunc(GL_FLAGS func, int ref, UInt32 mask);
				void StencilMask(UInt32 mask);
				void StencilOp(GL_FLAGS fail, GL_FLAGS zfail, GL_FLAGS zpass);
				void TexCoordPointer(int size, GL_FLAGS type, int stride, array<IntPtr> ^pointer);/*not implemented*/
				void TexEnvf(GL_FLAGS target, GL_FLAGS pname, float param);
				void TexEnvfv(GL_FLAGS target, GL_FLAGS pname, array<float> ^params);
				void TexEnvi(GL_FLAGS target, GL_FLAGS pname, int param);
				void TexEnviv(GL_FLAGS target, GL_FLAGS pname, array<int> ^params);
				void TexGend(GL_FLAGS coord, GL_FLAGS pname, double param);
				void TexGendv(GL_FLAGS coord, GL_FLAGS pname, array<double> ^params);
				void TexGenf(GL_FLAGS coord, GL_FLAGS pname, float param);
				void TexGenfv(GL_FLAGS coord, GL_FLAGS pname, array<float> ^params);
				void TexGeni(GL_FLAGS coord, GL_FLAGS pname, int param);
				void TexGeniv(GL_FLAGS coord, GL_FLAGS pname, array<int> ^params);
				void TexImage1D(GL_FLAGS target, int level, int internalformat, int width, int border, GL_FLAGS format, GL_FLAGS type, array<IntPtr> ^pointer);/*not implemented*/
				void TexImage2D(GL_FLAGS target, int level, int internalformat, int width, int height, int border, GL_FLAGS format, GL_FLAGS type, array<IntPtr> ^pointer);/*not implemented*/
				void TexParameterf(GL_FLAGS target, GL_FLAGS pname, float param);
				void TexParameterfv(GL_FLAGS target, GL_FLAGS pname, array<float> ^params);
				void TexParameteri(GL_FLAGS target, GL_FLAGS pname, int param);
				void TexParameteriv(GL_FLAGS target, GL_FLAGS pname, array<int> ^params);
				void TexSubImage1D(GL_FLAGS target, int level, int xoffset, int width, GL_FLAGS format, GL_FLAGS type, array<IntPtr> ^pointer);/*not implemented*/
				void TexSubImage2D(GL_FLAGS target, int level, int xoffset, int yoffset, int width, int height, GL_FLAGS format, GL_FLAGS type, array<IntPtr> ^pointer);/*not implemented*/
				void Viewport(Int32 x, Int32 y, Int32 w, Int32 h);

				/**/
				void Color3f(float r, float g, float b);
				void Color3i(int r, int g, int b);
				void Color3s(short r, short g, short b);
				void Color3us(unsigned short r, unsigned short g, unsigned short b);
				void Color3b(byte r, byte g, byte b);
				void Color3ub(unsigned char r, unsigned char g, unsigned char b);

				void Color3fv(array<float> ^v);
				void Color3iv(array<int> ^v);
				void Color3sv(array<short> ^v);
				void Color3bv(array<byte> ^v);
				void Color3ubv(array<unsigned char> ^v);

				void Color4f(float r, float g, float b, float a);
				void Color4i(int r, int g, int b, int a);
				void Color4s(short r, short g, short b, short a);
				void Color4us(unsigned short r, unsigned short g, unsigned short b, unsigned short a);
				void Color4b(byte r, byte g, byte b, byte a);
				void Color4ub(unsigned char r, unsigned char g, unsigned char b, unsigned char a);

				void Color4fv(array<float> ^v);
				void Color4iv(array<int> ^v);
				void Color4sv(array<short> ^v);
				void Color4usv(array<unsigned short> ^v);
				void Color4bv(array<byte> ^v);
				void Color4ubv(array<unsigned char> ^v);
				/**/

				/**/
				void Normal3f(float x, float y, float z);
				void Normal3d(double x, double y, double z);
				void Normal3i(int x, int y, int z);
				void Normal3s(short x, short y, short z);
				void Normal3b(byte x, byte y, byte z);

				void Normal3fv(array<float> ^v);
				void Normal3dv(array<double> ^v);
				void Normal3iv(array<int> ^v);
				void Normal3sv(array<short> ^v);
				void Normal3bv(array<char> ^v);
				/**/

				/**/
				void RasterPos2d(double x, double y);
				void RasterPos2dv(array<double> ^v);
				void RasterPos2f(float x, float y);
				void RasterPos2fv(array<float> ^v);
				void RasterPos2i(int x, int y);
				void RasterPos2iv(array<int> ^v);
				void RasterPos2s(short x, short y);
				void RasterPos2sv(array<short> ^v);
				void RasterPos3d(double x, double y, double z);
				void RasterPos3dv(array<double> ^v);
				void RasterPos3f(float x, float y, float z);
				void RasterPos3fv(array<float> ^v);
				void RasterPos3i(int x, int y, int z);
				void RasterPos3iv(array<int> ^v);
				void RasterPos3s(short x, short y, short z);
				void RasterPos3sv(array<short> ^v);
				void RasterPos4d(double x, double y, double z, double w);
				void RasterPos4dv(array<double> ^v);
				void RasterPos4f(float x, float y, float z, float w);
				void RasterPos4fv(array<float> ^v);
				void RasterPos4i(int x, int y, int z, int w);
				void RasterPos4iv(array<int> ^v);
				void RasterPos4s(short x, short y, short z, short w);
				void RasterPos4sv(array<short> ^v);
				/**/

				/**/
				void Rectf(float x1, float y1, float x2, float y2);
				void Rectd(double x1, double y1, double x2, double y2);
				void Recti(int x1, int y1, int x2, int y2);
				void Rects(short x1, short y1, short x2, short y2);
				void Rectfv(array<float> ^v1, array<float> ^v2);
				void Rectdv(array<double> ^v1, array<double> ^v2);
				void Rectiv(array<int> ^v1, array<int> ^v2);
				void Rectsv(array<short> ^v1, array<short> ^v2);
				/**/

				/**/
				void Rotatef(float angle, float x, float y, float z);
				void Rotated(double angle, double x, double y, double z);
				/**/

				/**/
				void Scaled(double x, double y, double z);
				void Scalef(float x, float y, float z);
				/**/

				/**/
				void TexCoord1f(float s);
				void TexCoord1d(double s);
				void TexCoord1s(short s);
				void TexCoord1i(int s);

				void TexCoord1fv(array<float> ^v);
				void TexCoord1dv(array<double> ^v);
				void TexCoord1sv(array<short> ^v);
				void TexCoord1iv(array<int> ^v);

				void TexCoord2f(float s, float t);
				void TexCoord2d(double s, double t);
				void TexCoord2s(short s, short t);
				void TexCoord2i(int s, int t);

				void TexCoord2fv(array<float> ^v);
				void TexCoord2dv(array<double> ^v);
				void TexCoord2sv(array<short> ^v);
				void TexCoord2iv(array<int> ^v);

				void TexCoord3f(float s, float t, float r);
				void TexCoord3d(double s, double t, double r);
				void TexCoord3s(short s, short t, short r);
				void TexCoord3i(int s, int t, int r);

				void TexCoord3fv(array<float> ^v);
				void TexCoord3dv(array<double> ^v);
				void TexCoord3sv(array<short> ^v);
				void TexCoord3iv(array<int> ^v);

				void TexCoord4f(float s, float t, float r, float q);
				void TexCoord4d(double s, double t, double r, double q);
				void TexCoord4s(short s, short t, short r, short q);
				void TexCoord4i(int s, int t, int r, int q);

				void TexCoord4fv(array<float> ^v);
				void TexCoord4dv(array<double> ^v);
				void TexCoord4sv(array<short> ^v);
				void TexCoord4iv(array<int> ^v);
				/**/

				/**/
				void Translatef(float x, float y, float z);
				void Translated(double x, double y, double z);
				/**/

				/**/
				void Vertex2f(float x, float y);
				void Vertex3f(float x, float y, float z);
				void Vertex4f(float x, float y, float z, float w);
				void Vertex2fv(array<float> ^v);
				void Vertex3fv(array<float> ^v);
				void Vertex4fv(array<float> ^v);

				void Vertex2i(int x, int y);
				void Vertex3i(int x, int y, int z);
				void Vertex4i(int x, int y, int z, int w);
				void Vertex2iv(array<int> ^v);
				void Vertex3iv(array<int> ^v);
				void Vertex4iv(array<int> ^v);

				void Vertex2d(double x, double y);
				void Vertex3d(double x, double y, double z);
				void Vertex4d(double x, double y, double z, double w);
				void Vertex2dv(array<double> ^v);
				void Vertex3dv(array<double> ^v);
				void Vertex4dv(array<double> ^v);

				void Vertex2s(short x, short y);
				void Vertex3s(short x, short y, short z);
				void Vertex4s(short x, short y, short z, short w);
				void Vertex2sv(array<short> ^v);
				void Vertex3sv(array<short> ^v);
				void Vertex4sv(array<short> ^v);
				/**/
			};
		}
	}
}