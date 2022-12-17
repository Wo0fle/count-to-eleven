#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#define INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeOpenGLRenderContext_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeOpenGLRenderContext_obj OBJ_;
		NativeOpenGLRenderContext_obj();

	public:
		enum { _hx_ClassId = 0x693d41ef };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.backend.native.NativeOpenGLRenderContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime._internal.backend.native.NativeOpenGLRenderContext"); }
		static ::hx::ObjectPtr< NativeOpenGLRenderContext_obj > __new();
		static ::hx::ObjectPtr< NativeOpenGLRenderContext_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeOpenGLRenderContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeOpenGLRenderContext",d3,3f,53,bf); }

		static void __boot();
		static  ::haxe::ds::StringMap _hx___extensionObjects;
		static  ::haxe::ds::StringMap _hx___extensionObjectConstructors;
		static int _hx___lastContextID;
		static ::Array< ::String > _hx___supportedExtensions;
		int DEPTH_BUFFER_BIT;
		int STENCIL_BUFFER_BIT;
		int COLOR_BUFFER_BIT;
		int POINTS;
		int LINES;
		int LINE_LOOP;
		int LINE_STRIP;
		int TRIANGLES;
		int TRIANGLE_STRIP;
		int TRIANGLE_FAN;
		int ZERO;
		int ONE;
		int SRC_COLOR;
		int ONE_MINUS_SRC_COLOR;
		int SRC_ALPHA;
		int ONE_MINUS_SRC_ALPHA;
		int DST_ALPHA;
		int ONE_MINUS_DST_ALPHA;
		int DST_COLOR;
		int ONE_MINUS_DST_COLOR;
		int SRC_ALPHA_SATURATE;
		int FUNC_ADD;
		int BLEND_EQUATION;
		int BLEND_EQUATION_RGB;
		int BLEND_EQUATION_ALPHA;
		int FUNC_SUBTRACT;
		int FUNC_REVERSE_SUBTRACT;
		int BLEND_DST_RGB;
		int BLEND_SRC_RGB;
		int BLEND_DST_ALPHA;
		int BLEND_SRC_ALPHA;
		int CONSTANT_COLOR;
		int ONE_MINUS_CONSTANT_COLOR;
		int CONSTANT_ALPHA;
		int ONE_MINUS_CONSTANT_ALPHA;
		int BLEND_COLOR;
		int ARRAY_BUFFER;
		int ELEMENT_ARRAY_BUFFER;
		int ARRAY_BUFFER_BINDING;
		int ELEMENT_ARRAY_BUFFER_BINDING;
		int STREAM_DRAW;
		int STATIC_DRAW;
		int DYNAMIC_DRAW;
		int BUFFER_SIZE;
		int BUFFER_USAGE;
		int CURRENT_VERTEX_ATTRIB;
		int FRONT;
		int BACK;
		int FRONT_AND_BACK;
		int TEXTURE_2D;
		int CULL_FACE;
		int BLEND;
		int DITHER;
		int STENCIL_TEST;
		int DEPTH_TEST;
		int SCISSOR_TEST;
		int POLYGON_OFFSET_FILL;
		int SAMPLE_ALPHA_TO_COVERAGE;
		int SAMPLE_COVERAGE;
		int NO_ERROR;
		int INVALID_ENUM;
		int INVALID_VALUE;
		int INVALID_OPERATION;
		int OUT_OF_MEMORY;
		int CW;
		int CCW;
		int LINE_WIDTH;
		int ALIASED_POINT_SIZE_RANGE;
		int ALIASED_LINE_WIDTH_RANGE;
		int CULL_FACE_MODE;
		int FRONT_FACE;
		int DEPTH_RANGE;
		int DEPTH_WRITEMASK;
		int DEPTH_CLEAR_VALUE;
		int DEPTH_FUNC;
		int STENCIL_CLEAR_VALUE;
		int STENCIL_FUNC;
		int STENCIL_FAIL;
		int STENCIL_PASS_DEPTH_FAIL;
		int STENCIL_PASS_DEPTH_PASS;
		int STENCIL_REF;
		int STENCIL_VALUE_MASK;
		int STENCIL_WRITEMASK;
		int STENCIL_BACK_FUNC;
		int STENCIL_BACK_FAIL;
		int STENCIL_BACK_PASS_DEPTH_FAIL;
		int STENCIL_BACK_PASS_DEPTH_PASS;
		int STENCIL_BACK_REF;
		int STENCIL_BACK_VALUE_MASK;
		int STENCIL_BACK_WRITEMASK;
		int VIEWPORT;
		int SCISSOR_BOX;
		int COLOR_CLEAR_VALUE;
		int COLOR_WRITEMASK;
		int UNPACK_ALIGNMENT;
		int PACK_ALIGNMENT;
		int MAX_TEXTURE_SIZE;
		int MAX_VIEWPORT_DIMS;
		int SUBPIXEL_BITS;
		int RED_BITS;
		int GREEN_BITS;
		int BLUE_BITS;
		int ALPHA_BITS;
		int DEPTH_BITS;
		int STENCIL_BITS;
		int POLYGON_OFFSET_UNITS;
		int POLYGON_OFFSET_FACTOR;
		int TEXTURE_BINDING_2D;
		int SAMPLE_BUFFERS;
		int SAMPLES;
		int SAMPLE_COVERAGE_VALUE;
		int SAMPLE_COVERAGE_INVERT;
		int NUM_COMPRESSED_TEXTURE_FORMATS;
		int COMPRESSED_TEXTURE_FORMATS;
		int DONT_CARE;
		int FASTEST;
		int NICEST;
		int GENERATE_MIPMAP_HINT;
		int BYTE;
		int UNSIGNED_BYTE;
		int SHORT;
		int UNSIGNED_SHORT;
		int INT;
		int UNSIGNED_INT;
		int FLOAT;
		int FIXED;
		int DEPTH_COMPONENT;
		int ALPHA;
		int RGB;
		int RGBA;
		int LUMINANCE;
		int LUMINANCE_ALPHA;
		int UNSIGNED_SHORT_4_4_4_4;
		int UNSIGNED_SHORT_5_5_5_1;
		int UNSIGNED_SHORT_5_6_5;
		int FRAGMENT_SHADER;
		int VERTEX_SHADER;
		int MAX_VERTEX_ATTRIBS;
		int MAX_VERTEX_UNIFORM_VECTORS;
		int MAX_VARYING_VECTORS;
		int MAX_COMBINED_TEXTURE_IMAGE_UNITS;
		int MAX_VERTEX_TEXTURE_IMAGE_UNITS;
		int MAX_TEXTURE_IMAGE_UNITS;
		int MAX_FRAGMENT_UNIFORM_VECTORS;
		int SHADER_TYPE;
		int DELETE_STATUS;
		int LINK_STATUS;
		int VALIDATE_STATUS;
		int ATTACHED_SHADERS;
		int ACTIVE_UNIFORMS;
		int ACTIVE_UNIFORMS_MAX_LENGTH;
		int ACTIVE_ATTRIBUTES;
		int ACTIVE_ATTRIBUTES_MAX_LENGTH;
		int SHADING_LANGUAGE_VERSION;
		int CURRENT_PROGRAM;
		int NEVER;
		int LESS;
		int EQUAL;
		int LEQUAL;
		int GREATER;
		int NOTEQUAL;
		int GEQUAL;
		int ALWAYS;
		int KEEP;
		int REPLACE;
		int INCR;
		int DECR;
		int INVERT;
		int INCR_WRAP;
		int DECR_WRAP;
		int VENDOR;
		int RENDERER;
		int VERSION;
		int EXTENSIONS;
		int NEAREST;
		int LINEAR;
		int NEAREST_MIPMAP_NEAREST;
		int LINEAR_MIPMAP_NEAREST;
		int NEAREST_MIPMAP_LINEAR;
		int LINEAR_MIPMAP_LINEAR;
		int TEXTURE_MAG_FILTER;
		int TEXTURE_MIN_FILTER;
		int TEXTURE_WRAP_S;
		int TEXTURE_WRAP_T;
		int TEXTURE;
		int TEXTURE_CUBE_MAP;
		int TEXTURE_BINDING_CUBE_MAP;
		int TEXTURE_CUBE_MAP_POSITIVE_X;
		int TEXTURE_CUBE_MAP_NEGATIVE_X;
		int TEXTURE_CUBE_MAP_POSITIVE_Y;
		int TEXTURE_CUBE_MAP_NEGATIVE_Y;
		int TEXTURE_CUBE_MAP_POSITIVE_Z;
		int TEXTURE_CUBE_MAP_NEGATIVE_Z;
		int MAX_CUBE_MAP_TEXTURE_SIZE;
		int TEXTURE0;
		int TEXTURE1;
		int TEXTURE2;
		int TEXTURE3;
		int TEXTURE4;
		int TEXTURE5;
		int TEXTURE6;
		int TEXTURE7;
		int TEXTURE8;
		int TEXTURE9;
		int TEXTURE10;
		int TEXTURE11;
		int TEXTURE12;
		int TEXTURE13;
		int TEXTURE14;
		int TEXTURE15;
		int TEXTURE16;
		int TEXTURE17;
		int TEXTURE18;
		int TEXTURE19;
		int TEXTURE20;
		int TEXTURE21;
		int TEXTURE22;
		int TEXTURE23;
		int TEXTURE24;
		int TEXTURE25;
		int TEXTURE26;
		int TEXTURE27;
		int TEXTURE28;
		int TEXTURE29;
		int TEXTURE30;
		int TEXTURE31;
		int ACTIVE_TEXTURE;
		int REPEAT;
		int CLAMP_TO_EDGE;
		int MIRRORED_REPEAT;
		int FLOAT_VEC2;
		int FLOAT_VEC3;
		int FLOAT_VEC4;
		int INT_VEC2;
		int INT_VEC3;
		int INT_VEC4;
		int BOOL;
		int BOOL_VEC2;
		int BOOL_VEC3;
		int BOOL_VEC4;
		int FLOAT_MAT2;
		int FLOAT_MAT3;
		int FLOAT_MAT4;
		int SAMPLER_2D;
		int SAMPLER_CUBE;
		int VERTEX_ATTRIB_ARRAY_ENABLED;
		int VERTEX_ATTRIB_ARRAY_SIZE;
		int VERTEX_ATTRIB_ARRAY_STRIDE;
		int VERTEX_ATTRIB_ARRAY_TYPE;
		int VERTEX_ATTRIB_ARRAY_NORMALIZED;
		int VERTEX_ATTRIB_ARRAY_POINTER;
		int VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
		int IMPLEMENTATION_COLOR_READ_TYPE;
		int IMPLEMENTATION_COLOR_READ_FORMAT;
		int VERTEX_PROGRAM_POINT_SIZE;
		int POINT_SPRITE;
		int COMPILE_STATUS;
		int INFO_LOG_LENGTH;
		int SHADER_SOURCE_LENGTH;
		int SHADER_COMPILER;
		int SHADER_BINARY_FORMATS;
		int NUM_SHADER_BINARY_FORMATS;
		int LOW_FLOAT;
		int MEDIUM_FLOAT;
		int HIGH_FLOAT;
		int LOW_INT;
		int MEDIUM_INT;
		int HIGH_INT;
		int FRAMEBUFFER;
		int RENDERBUFFER;
		int RGBA4;
		int RGB5_A1;
		int RGB565;
		int DEPTH_COMPONENT16;
		int STENCIL_INDEX;
		int STENCIL_INDEX8;
		int DEPTH_STENCIL;
		int RENDERBUFFER_WIDTH;
		int RENDERBUFFER_HEIGHT;
		int RENDERBUFFER_INTERNAL_FORMAT;
		int RENDERBUFFER_RED_SIZE;
		int RENDERBUFFER_GREEN_SIZE;
		int RENDERBUFFER_BLUE_SIZE;
		int RENDERBUFFER_ALPHA_SIZE;
		int RENDERBUFFER_DEPTH_SIZE;
		int RENDERBUFFER_STENCIL_SIZE;
		int FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
		int FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
		int FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
		int FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
		int COLOR_ATTACHMENT0;
		int DEPTH_ATTACHMENT;
		int STENCIL_ATTACHMENT;
		int DEPTH_STENCIL_ATTACHMENT;
		int NONE;
		int FRAMEBUFFER_COMPLETE;
		int FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
		int FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
		int FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
		int FRAMEBUFFER_UNSUPPORTED;
		int FRAMEBUFFER_BINDING;
		int RENDERBUFFER_BINDING;
		int MAX_RENDERBUFFER_SIZE;
		int INVALID_FRAMEBUFFER_OPERATION;
		int UNPACK_FLIP_Y_WEBGL;
		int UNPACK_PREMULTIPLY_ALPHA_WEBGL;
		int CONTEXT_LOST_WEBGL;
		int UNPACK_COLORSPACE_CONVERSION_WEBGL;
		int BROWSER_DEFAULT_WEBGL;
		int READ_BUFFER;
		int UNPACK_ROW_LENGTH;
		int UNPACK_SKIP_ROWS;
		int UNPACK_SKIP_PIXELS;
		int PACK_ROW_LENGTH;
		int PACK_SKIP_ROWS;
		int PACK_SKIP_PIXELS;
		int TEXTURE_BINDING_3D;
		int UNPACK_SKIP_IMAGES;
		int UNPACK_IMAGE_HEIGHT;
		int MAX_3D_TEXTURE_SIZE;
		int MAX_ELEMENTS_VERTICES;
		int MAX_ELEMENTS_INDICES;
		int MAX_TEXTURE_LOD_BIAS;
		int MAX_FRAGMENT_UNIFORM_COMPONENTS;
		int MAX_VERTEX_UNIFORM_COMPONENTS;
		int MAX_ARRAY_TEXTURE_LAYERS;
		int MIN_PROGRAM_TEXEL_OFFSET;
		int MAX_PROGRAM_TEXEL_OFFSET;
		int MAX_VARYING_COMPONENTS;
		int FRAGMENT_SHADER_DERIVATIVE_HINT;
		int RASTERIZER_DISCARD;
		int VERTEX_ARRAY_BINDING;
		int MAX_VERTEX_OUTPUT_COMPONENTS;
		int MAX_FRAGMENT_INPUT_COMPONENTS;
		int MAX_SERVER_WAIT_TIMEOUT;
		int MAX_ELEMENT_INDEX;
		int RED;
		int RGB8;
		int RGBA8;
		int RGB10_A2;
		int TEXTURE_3D;
		int TEXTURE_WRAP_R;
		int TEXTURE_MIN_LOD;
		int TEXTURE_MAX_LOD;
		int TEXTURE_BASE_LEVEL;
		int TEXTURE_MAX_LEVEL;
		int TEXTURE_COMPARE_MODE;
		int TEXTURE_COMPARE_FUNC;
		int SRGB;
		int SRGB8;
		int SRGB8_ALPHA8;
		int COMPARE_REF_TO_TEXTURE;
		int RGBA32F;
		int RGB32F;
		int RGBA16F;
		int RGB16F;
		int TEXTURE_2D_ARRAY;
		int TEXTURE_BINDING_2D_ARRAY;
		int R11F_G11F_B10F;
		int RGB9_E5;
		int RGBA32UI;
		int RGB32UI;
		int RGBA16UI;
		int RGB16UI;
		int RGBA8UI;
		int RGB8UI;
		int RGBA32I;
		int RGB32I;
		int RGBA16I;
		int RGB16I;
		int RGBA8I;
		int RGB8I;
		int RED_INTEGER;
		int RGB_INTEGER;
		int RGBA_INTEGER;
		int R8;
		int RG8;
		int R16F;
		int R32F;
		int RG16F;
		int RG32F;
		int R8I;
		int R8UI;
		int R16I;
		int R16UI;
		int R32I;
		int R32UI;
		int RG8I;
		int RG8UI;
		int RG16I;
		int RG16UI;
		int RG32I;
		int RG32UI;
		int R8_SNORM;
		int RG8_SNORM;
		int RGB8_SNORM;
		int RGBA8_SNORM;
		int RGB10_A2UI;
		int TEXTURE_IMMUTABLE_FORMAT;
		int TEXTURE_IMMUTABLE_LEVELS;
		int UNSIGNED_INT_2_10_10_10_REV;
		int UNSIGNED_INT_10F_11F_11F_REV;
		int UNSIGNED_INT_5_9_9_9_REV;
		int FLOAT_32_UNSIGNED_INT_24_8_REV;
		int UNSIGNED_INT_24_8;
		int HALF_FLOAT;
		int RG;
		int RG_INTEGER;
		int INT_2_10_10_10_REV;
		int CURRENT_QUERY;
		int QUERY_RESULT;
		int QUERY_RESULT_AVAILABLE;
		int ANY_SAMPLES_PASSED;
		int ANY_SAMPLES_PASSED_CONSERVATIVE;
		int MAX_DRAW_BUFFERS;
		int DRAW_BUFFER0;
		int DRAW_BUFFER1;
		int DRAW_BUFFER2;
		int DRAW_BUFFER3;
		int DRAW_BUFFER4;
		int DRAW_BUFFER5;
		int DRAW_BUFFER6;
		int DRAW_BUFFER7;
		int DRAW_BUFFER8;
		int DRAW_BUFFER9;
		int DRAW_BUFFER10;
		int DRAW_BUFFER11;
		int DRAW_BUFFER12;
		int DRAW_BUFFER13;
		int DRAW_BUFFER14;
		int DRAW_BUFFER15;
		int MAX_COLOR_ATTACHMENTS;
		int COLOR_ATTACHMENT1;
		int COLOR_ATTACHMENT2;
		int COLOR_ATTACHMENT3;
		int COLOR_ATTACHMENT4;
		int COLOR_ATTACHMENT5;
		int COLOR_ATTACHMENT6;
		int COLOR_ATTACHMENT7;
		int COLOR_ATTACHMENT8;
		int COLOR_ATTACHMENT9;
		int COLOR_ATTACHMENT10;
		int COLOR_ATTACHMENT11;
		int COLOR_ATTACHMENT12;
		int COLOR_ATTACHMENT13;
		int COLOR_ATTACHMENT14;
		int COLOR_ATTACHMENT15;
		int SAMPLER_3D;
		int SAMPLER_2D_SHADOW;
		int SAMPLER_2D_ARRAY;
		int SAMPLER_2D_ARRAY_SHADOW;
		int SAMPLER_CUBE_SHADOW;
		int INT_SAMPLER_2D;
		int INT_SAMPLER_3D;
		int INT_SAMPLER_CUBE;
		int INT_SAMPLER_2D_ARRAY;
		int UNSIGNED_INT_SAMPLER_2D;
		int UNSIGNED_INT_SAMPLER_3D;
		int UNSIGNED_INT_SAMPLER_CUBE;
		int UNSIGNED_INT_SAMPLER_2D_ARRAY;
		int MAX_SAMPLES;
		int SAMPLER_BINDING;
		int PIXEL_PACK_BUFFER;
		int PIXEL_UNPACK_BUFFER;
		int PIXEL_PACK_BUFFER_BINDING;
		int PIXEL_UNPACK_BUFFER_BINDING;
		int COPY_READ_BUFFER;
		int COPY_WRITE_BUFFER;
		int COPY_READ_BUFFER_BINDING;
		int COPY_WRITE_BUFFER_BINDING;
		int FLOAT_MAT2x3;
		int FLOAT_MAT2x4;
		int FLOAT_MAT3x2;
		int FLOAT_MAT3x4;
		int FLOAT_MAT4x2;
		int FLOAT_MAT4x3;
		int UNSIGNED_INT_VEC2;
		int UNSIGNED_INT_VEC3;
		int UNSIGNED_INT_VEC4;
		int UNSIGNED_NORMALIZED;
		int SIGNED_NORMALIZED;
		int VERTEX_ATTRIB_ARRAY_INTEGER;
		int VERTEX_ATTRIB_ARRAY_DIVISOR;
		int TRANSFORM_FEEDBACK_BUFFER_MODE;
		int MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
		int TRANSFORM_FEEDBACK_VARYINGS;
		int TRANSFORM_FEEDBACK_BUFFER_START;
		int TRANSFORM_FEEDBACK_BUFFER_SIZE;
		int TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
		int MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
		int MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
		int INTERLEAVED_ATTRIBS;
		int SEPARATE_ATTRIBS;
		int TRANSFORM_FEEDBACK_BUFFER;
		int TRANSFORM_FEEDBACK_BUFFER_BINDING;
		int TRANSFORM_FEEDBACK;
		int TRANSFORM_FEEDBACK_PAUSED;
		int TRANSFORM_FEEDBACK_ACTIVE;
		int TRANSFORM_FEEDBACK_BINDING;
		int FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
		int FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
		int FRAMEBUFFER_ATTACHMENT_RED_SIZE;
		int FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
		int FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
		int FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
		int FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
		int FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
		int FRAMEBUFFER_DEFAULT;
		int DEPTH24_STENCIL8;
		int DRAW_FRAMEBUFFER_BINDING;
		int READ_FRAMEBUFFER;
		int DRAW_FRAMEBUFFER;
		int READ_FRAMEBUFFER_BINDING;
		int RENDERBUFFER_SAMPLES;
		int FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
		int FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
		int UNIFORM_BUFFER;
		int UNIFORM_BUFFER_BINDING;
		int UNIFORM_BUFFER_START;
		int UNIFORM_BUFFER_SIZE;
		int MAX_VERTEX_UNIFORM_BLOCKS;
		int MAX_FRAGMENT_UNIFORM_BLOCKS;
		int MAX_COMBINED_UNIFORM_BLOCKS;
		int MAX_UNIFORM_BUFFER_BINDINGS;
		int MAX_UNIFORM_BLOCK_SIZE;
		int MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
		int MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
		int UNIFORM_BUFFER_OFFSET_ALIGNMENT;
		int ACTIVE_UNIFORM_BLOCKS;
		int UNIFORM_TYPE;
		int UNIFORM_SIZE;
		int UNIFORM_BLOCK_INDEX;
		int UNIFORM_OFFSET;
		int UNIFORM_ARRAY_STRIDE;
		int UNIFORM_MATRIX_STRIDE;
		int UNIFORM_IS_ROW_MAJOR;
		int UNIFORM_BLOCK_BINDING;
		int UNIFORM_BLOCK_DATA_SIZE;
		int UNIFORM_BLOCK_ACTIVE_UNIFORMS;
		int UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
		int UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
		int UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;
		int OBJECT_TYPE;
		int SYNC_CONDITION;
		int SYNC_STATUS;
		int SYNC_FLAGS;
		int SYNC_FENCE;
		int SYNC_GPU_COMMANDS_COMPLETE;
		int UNSIGNALED;
		int SIGNALED;
		int ALREADY_SIGNALED;
		int TIMEOUT_EXPIRED;
		int CONDITION_SATISFIED;
		int WAIT_FAILED;
		int SYNC_FLUSH_COMMANDS_BIT;
		int COLOR;
		int DEPTH;
		int STENCIL;
		int MIN;
		int MAX;
		int DEPTH_COMPONENT24;
		int STREAM_READ;
		int STREAM_COPY;
		int STATIC_READ;
		int STATIC_COPY;
		int DYNAMIC_READ;
		int DYNAMIC_COPY;
		int DEPTH_COMPONENT32F;
		int DEPTH32F_STENCIL8;
		int INVALID_INDEX;
		int TIMEOUT_IGNORED;
		int MAX_CLIENT_WAIT_TIMEOUT_WEBGL;
		::String type;
		Float version;
		 ::lime::graphics::opengl::GLObject _hx___arrayBufferBinding;
		 ::lime::graphics::opengl::GLObject _hx___elementBufferBinding;
		int _hx___contextID;
		 ::lime::graphics::opengl::GLObject _hx___currentProgram;
		 ::lime::graphics::opengl::GLObject _hx___framebufferBinding;
		bool _hx___initialized;
		bool _hx___isContextLost;
		 ::lime::graphics::opengl::GLObject _hx___renderbufferBinding;
		 ::lime::graphics::opengl::GLObject _hx___texture2DBinding;
		 ::lime::graphics::opengl::GLObject _hx___textureCubeMapBinding;
		void activeTexture(int texture);
		::Dynamic activeTexture_dyn();

		void attachShader( ::lime::graphics::opengl::GLObject program, ::lime::graphics::opengl::GLObject shader);
		::Dynamic attachShader_dyn();

		void beginQuery(int target, ::lime::graphics::opengl::GLObject query);
		::Dynamic beginQuery_dyn();

		void beginTransformFeedback(int primitiveNode);
		::Dynamic beginTransformFeedback_dyn();

		void bindAttribLocation( ::lime::graphics::opengl::GLObject program,int index,::String name);
		::Dynamic bindAttribLocation_dyn();

		void bindBuffer(int target, ::lime::graphics::opengl::GLObject buffer);
		::Dynamic bindBuffer_dyn();

		void bindBufferBase(int target,int index, ::lime::graphics::opengl::GLObject buffer);
		::Dynamic bindBufferBase_dyn();

		void bindBufferRange(int target,int index, ::lime::graphics::opengl::GLObject buffer,Float offset,int size);
		::Dynamic bindBufferRange_dyn();

		void bindFramebuffer(int target, ::lime::graphics::opengl::GLObject framebuffer);
		::Dynamic bindFramebuffer_dyn();

		void bindRenderbuffer(int target, ::lime::graphics::opengl::GLObject renderbuffer);
		::Dynamic bindRenderbuffer_dyn();

		void bindSampler(int unit, ::lime::graphics::opengl::GLObject sampler);
		::Dynamic bindSampler_dyn();

		void bindTexture(int target, ::lime::graphics::opengl::GLObject texture);
		::Dynamic bindTexture_dyn();

		void bindTransformFeedback(int target, ::lime::graphics::opengl::GLObject transformFeedback);
		::Dynamic bindTransformFeedback_dyn();

		void bindVertexArray( ::lime::graphics::opengl::GLObject vertexArray);
		::Dynamic bindVertexArray_dyn();

		void blendColor(Float red,Float green,Float blue,Float alpha);
		::Dynamic blendColor_dyn();

		void blendEquation(int mode);
		::Dynamic blendEquation_dyn();

		void blendEquationSeparate(int modeRGB,int modeAlpha);
		::Dynamic blendEquationSeparate_dyn();

		void blendFunc(int sfactor,int dfactor);
		::Dynamic blendFunc_dyn();

		void blendFuncSeparate(int srcRGB,int dstRGB,int srcAlpha,int dstAlpha);
		::Dynamic blendFuncSeparate_dyn();

		void blitFramebuffer(int srcX0,int srcY0,int srcX1,int srcY1,int dstX0,int dstY0,int dstX1,int dstY1,int mask,int filter);
		::Dynamic blitFramebuffer_dyn();

		void bufferData(int target,int size,Float srcData,int usage);
		::Dynamic bufferData_dyn();

		void bufferSubData(int target,int dstByteOffset,int size,Float srcData);
		::Dynamic bufferSubData_dyn();

		int checkFramebufferStatus(int target);
		::Dynamic checkFramebufferStatus_dyn();

		void clear(int mask);
		::Dynamic clear_dyn();

		void clearBufferfi(int buffer,int drawbuffer,Float depth,int stencil);
		::Dynamic clearBufferfi_dyn();

		void clearBufferfv(int buffer,int drawbuffer,Float value);
		::Dynamic clearBufferfv_dyn();

		void clearBufferiv(int buffer,int drawbuffer,Float value);
		::Dynamic clearBufferiv_dyn();

		void clearBufferuiv(int buffer,int drawbuffer,Float value);
		::Dynamic clearBufferuiv_dyn();

		void clearColor(Float red,Float green,Float blue,Float alpha);
		::Dynamic clearColor_dyn();

		void clearDepthf(Float depth);
		::Dynamic clearDepthf_dyn();

		void clearStencil(int s);
		::Dynamic clearStencil_dyn();

		int clientWaitSync( ::Dynamic sync,int flags, cpp::Int64Struct timeout);
		::Dynamic clientWaitSync_dyn();

		void colorMask(bool red,bool green,bool blue,bool alpha);
		::Dynamic colorMask_dyn();

		void compileShader( ::lime::graphics::opengl::GLObject shader);
		::Dynamic compileShader_dyn();

		void compressedTexImage2D(int target,int level,int internalformat,int width,int height,int border,int imageSize,Float data);
		::Dynamic compressedTexImage2D_dyn();

		void compressedTexImage3D(int target,int level,int internalformat,int width,int height,int depth,int border,int imageSize,Float data);
		::Dynamic compressedTexImage3D_dyn();

		void compressedTexSubImage2D(int target,int level,int xoffset,int yoffset,int width,int height,int format,int imageSize,Float data);
		::Dynamic compressedTexSubImage2D_dyn();

		void compressedTexSubImage3D(int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int imageSize,Float data);
		::Dynamic compressedTexSubImage3D_dyn();

		void copyBufferSubData(int readTarget,int writeTarget,Float readOffset,Float writeOffset,int size);
		::Dynamic copyBufferSubData_dyn();

		void copyTexImage2D(int target,int level,int internalformat,int x,int y,int width,int height,int border);
		::Dynamic copyTexImage2D_dyn();

		void copyTexSubImage2D(int target,int level,int xoffset,int yoffset,int x,int y,int width,int height);
		::Dynamic copyTexSubImage2D_dyn();

		void copyTexSubImage3D(int target,int level,int xoffset,int yoffset,int zoffset,int x,int y,int width,int height);
		::Dynamic copyTexSubImage3D_dyn();

		 ::lime::graphics::opengl::GLObject createBuffer();
		::Dynamic createBuffer_dyn();

		 ::lime::graphics::opengl::GLObject createFramebuffer();
		::Dynamic createFramebuffer_dyn();

		 ::lime::graphics::opengl::GLObject createProgram();
		::Dynamic createProgram_dyn();

		 ::lime::graphics::opengl::GLObject createQuery();
		::Dynamic createQuery_dyn();

		 ::lime::graphics::opengl::GLObject createRenderbuffer();
		::Dynamic createRenderbuffer_dyn();

		 ::lime::graphics::opengl::GLObject createSampler();
		::Dynamic createSampler_dyn();

		 ::lime::graphics::opengl::GLObject createShader(int type);
		::Dynamic createShader_dyn();

		 ::lime::graphics::opengl::GLObject createTexture();
		::Dynamic createTexture_dyn();

		 ::lime::graphics::opengl::GLObject createTransformFeedback();
		::Dynamic createTransformFeedback_dyn();

		 ::lime::graphics::opengl::GLObject createVertexArray();
		::Dynamic createVertexArray_dyn();

		void cullFace(int mode);
		::Dynamic cullFace_dyn();

		void deleteBuffer( ::lime::graphics::opengl::GLObject buffer);
		::Dynamic deleteBuffer_dyn();

		void deleteFramebuffer( ::lime::graphics::opengl::GLObject framebuffer);
		::Dynamic deleteFramebuffer_dyn();

		void deleteProgram( ::lime::graphics::opengl::GLObject program);
		::Dynamic deleteProgram_dyn();

		void deleteQuery( ::lime::graphics::opengl::GLObject query);
		::Dynamic deleteQuery_dyn();

		void deleteRenderbuffer( ::lime::graphics::opengl::GLObject renderbuffer);
		::Dynamic deleteRenderbuffer_dyn();

		void deleteSampler( ::lime::graphics::opengl::GLObject sampler);
		::Dynamic deleteSampler_dyn();

		void deleteShader( ::lime::graphics::opengl::GLObject shader);
		::Dynamic deleteShader_dyn();

		void deleteSync( ::Dynamic sync);
		::Dynamic deleteSync_dyn();

		void deleteTexture( ::lime::graphics::opengl::GLObject texture);
		::Dynamic deleteTexture_dyn();

		void deleteTransformFeedback( ::lime::graphics::opengl::GLObject transformFeedback);
		::Dynamic deleteTransformFeedback_dyn();

		void deleteVertexArray( ::lime::graphics::opengl::GLObject vertexArray);
		::Dynamic deleteVertexArray_dyn();

		void depthFunc(int func);
		::Dynamic depthFunc_dyn();

		void depthMask(bool flag);
		::Dynamic depthMask_dyn();

		void depthRangef(Float zNear,Float zFar);
		::Dynamic depthRangef_dyn();

		void detachShader( ::lime::graphics::opengl::GLObject program, ::lime::graphics::opengl::GLObject shader);
		::Dynamic detachShader_dyn();

		void disable(int cap);
		::Dynamic disable_dyn();

		void disableVertexAttribArray(int index);
		::Dynamic disableVertexAttribArray_dyn();

		void drawArrays(int mode,int first,int count);
		::Dynamic drawArrays_dyn();

		void drawArraysInstanced(int mode,int first,int count,int instanceCount);
		::Dynamic drawArraysInstanced_dyn();

		void drawBuffers(::Array< int > buffers);
		::Dynamic drawBuffers_dyn();

		void drawElements(int mode,int count,int type,Float offset);
		::Dynamic drawElements_dyn();

		void drawElementsInstanced(int mode,int count,int type,Float offset,int instanceCount);
		::Dynamic drawElementsInstanced_dyn();

		void drawRangeElements(int mode,int start,int end,int count,int type,Float offset);
		::Dynamic drawRangeElements_dyn();

		void enable(int cap);
		::Dynamic enable_dyn();

		void enableVertexAttribArray(int index);
		::Dynamic enableVertexAttribArray_dyn();

		void endQuery(int target);
		::Dynamic endQuery_dyn();

		void endTransformFeedback();
		::Dynamic endTransformFeedback_dyn();

		 ::Dynamic fenceSync(int condition,int flags);
		::Dynamic fenceSync_dyn();

		void finish();
		::Dynamic finish_dyn();

		void flush();
		::Dynamic flush_dyn();

		void framebufferRenderbuffer(int target,int attachment,int renderbuffertarget, ::lime::graphics::opengl::GLObject renderbuffer);
		::Dynamic framebufferRenderbuffer_dyn();

		void framebufferTexture2D(int target,int attachment,int textarget, ::lime::graphics::opengl::GLObject texture,int level);
		::Dynamic framebufferTexture2D_dyn();

		void framebufferTextureLayer(int target,int attachment, ::lime::graphics::opengl::GLObject texture,int level,int layer);
		::Dynamic framebufferTextureLayer_dyn();

		void frontFace(int mode);
		::Dynamic frontFace_dyn();

		void generateMipmap(int target);
		::Dynamic generateMipmap_dyn();

		 ::Dynamic getActiveAttrib( ::lime::graphics::opengl::GLObject program,int index);
		::Dynamic getActiveAttrib_dyn();

		 ::Dynamic getActiveUniform( ::lime::graphics::opengl::GLObject program,int index);
		::Dynamic getActiveUniform_dyn();

		int getActiveUniformBlocki( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname);
		::Dynamic getActiveUniformBlocki_dyn();

		void getActiveUniformBlockiv( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname,Float params);
		::Dynamic getActiveUniformBlockiv_dyn();

		::String getActiveUniformBlockName( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex);
		::Dynamic getActiveUniformBlockName_dyn();

		 ::Dynamic getActiveUniformBlockParameter( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname);
		::Dynamic getActiveUniformBlockParameter_dyn();

		 ::Dynamic getActiveUniforms( ::lime::graphics::opengl::GLObject program,::Array< int > uniformIndices,int pname);
		::Dynamic getActiveUniforms_dyn();

		void getActiveUniformsiv( ::lime::graphics::opengl::GLObject program,::Array< int > uniformIndices,int pname,Float params);
		::Dynamic getActiveUniformsiv_dyn();

		::Array< ::Dynamic> getAttachedShaders( ::lime::graphics::opengl::GLObject program);
		::Dynamic getAttachedShaders_dyn();

		int getAttribLocation( ::lime::graphics::opengl::GLObject program,::String name);
		::Dynamic getAttribLocation_dyn();

		bool getBoolean(int pname);
		::Dynamic getBoolean_dyn();

		void getBooleanv(int pname,Float params);
		::Dynamic getBooleanv_dyn();

		 ::Dynamic getBufferParameter(int target,int pname);
		::Dynamic getBufferParameter_dyn();

		int getBufferParameteri(int target,int pname);
		::Dynamic getBufferParameteri_dyn();

		void getBufferParameteri64v(int target,int pname,Float params);
		::Dynamic getBufferParameteri64v_dyn();

		void getBufferParameteriv(int target,int pname,Float data);
		::Dynamic getBufferParameteriv_dyn();

		Float getBufferPointerv(int target,int pname);
		::Dynamic getBufferPointerv_dyn();

		void getBufferSubData(int target,Float offset,int size,Float data);
		::Dynamic getBufferSubData_dyn();

		 ::Dynamic getContextAttributes();
		::Dynamic getContextAttributes_dyn();

		int getError();
		::Dynamic getError_dyn();

		 ::Dynamic getExtension(::String name);
		::Dynamic getExtension_dyn();

		Float getFloat(int pname);
		::Dynamic getFloat_dyn();

		void getFloatv(int pname,Float params);
		::Dynamic getFloatv_dyn();

		int getFragDataLocation( ::lime::graphics::opengl::GLObject program,::String name);
		::Dynamic getFragDataLocation_dyn();

		 ::Dynamic getFramebufferAttachmentParameter(int target,int attachment,int pname);
		::Dynamic getFramebufferAttachmentParameter_dyn();

		int getFramebufferAttachmentParameteri(int target,int attachment,int pname);
		::Dynamic getFramebufferAttachmentParameteri_dyn();

		void getFramebufferAttachmentParameteriv(int target,int attachment,int pname,Float params);
		::Dynamic getFramebufferAttachmentParameteriv_dyn();

		 ::Dynamic getIndexedParameter(int target,int index);
		::Dynamic getIndexedParameter_dyn();

		int getInteger(int pname);
		::Dynamic getInteger_dyn();

		 cpp::Int64Struct getInteger64(int pname);
		::Dynamic getInteger64_dyn();

		 cpp::Int64Struct getInteger64i(int pname);
		::Dynamic getInteger64i_dyn();

		void getInteger64i_v(int pname,int index,Float params);
		::Dynamic getInteger64i_v_dyn();

		void getInteger64v(int pname,Float params);
		::Dynamic getInteger64v_dyn();

		void getIntegeri_v(int pname,int index,Float params);
		::Dynamic getIntegeri_v_dyn();

		void getIntegerv(int pname,Float params);
		::Dynamic getIntegerv_dyn();

		int getInternalformati(int target,int internalformat,int pname);
		::Dynamic getInternalformati_dyn();

		void getInternalformativ(int target,int internalformat,int pname,int bufSize,Float params);
		::Dynamic getInternalformativ_dyn();

		 ::Dynamic getInternalformatParameter(int target,int internalformat,int pname);
		::Dynamic getInternalformatParameter_dyn();

		 ::Dynamic getParameter(int pname);
		::Dynamic getParameter_dyn();

		int getProgrami( ::lime::graphics::opengl::GLObject program,int pname);
		::Dynamic getProgrami_dyn();

		void getProgramiv( ::lime::graphics::opengl::GLObject program,int pname,Float params);
		::Dynamic getProgramiv_dyn();

		 ::haxe::io::Bytes getProgramBinary( ::lime::graphics::opengl::GLObject program,int binaryFormat);
		::Dynamic getProgramBinary_dyn();

		::String getProgramInfoLog( ::lime::graphics::opengl::GLObject program);
		::Dynamic getProgramInfoLog_dyn();

		 ::Dynamic getProgramParameter( ::lime::graphics::opengl::GLObject program,int pname);
		::Dynamic getProgramParameter_dyn();

		 ::lime::graphics::opengl::GLObject getQuery(int target,int pname);
		::Dynamic getQuery_dyn();

		int getQueryi(int target,int pname);
		::Dynamic getQueryi_dyn();

		void getQueryiv(int target,int pname,Float params);
		::Dynamic getQueryiv_dyn();

		int getQueryObjectui( ::lime::graphics::opengl::GLObject query,int pname);
		::Dynamic getQueryObjectui_dyn();

		void getQueryObjectuiv( ::lime::graphics::opengl::GLObject query,int pname,Float params);
		::Dynamic getQueryObjectuiv_dyn();

		 ::Dynamic getQueryParameter( ::lime::graphics::opengl::GLObject query,int pname);
		::Dynamic getQueryParameter_dyn();

		 ::Dynamic getRenderbufferParameter(int target,int pname);
		::Dynamic getRenderbufferParameter_dyn();

		int getRenderbufferParameteri(int target,int pname);
		::Dynamic getRenderbufferParameteri_dyn();

		void getRenderbufferParameteriv(int target,int pname,Float params);
		::Dynamic getRenderbufferParameteriv_dyn();

		 ::Dynamic getSamplerParameter( ::lime::graphics::opengl::GLObject sampler,int pname);
		::Dynamic getSamplerParameter_dyn();

		Float getSamplerParameterf( ::lime::graphics::opengl::GLObject sampler,int pname);
		::Dynamic getSamplerParameterf_dyn();

		void getSamplerParameterfv( ::lime::graphics::opengl::GLObject sampler,int pname,Float params);
		::Dynamic getSamplerParameterfv_dyn();

		int getSamplerParameteri( ::lime::graphics::opengl::GLObject sampler,int pname);
		::Dynamic getSamplerParameteri_dyn();

		void getSamplerParameteriv( ::lime::graphics::opengl::GLObject sampler,int pname,Float params);
		::Dynamic getSamplerParameteriv_dyn();

		int getShaderi( ::lime::graphics::opengl::GLObject shader,int pname);
		::Dynamic getShaderi_dyn();

		void getShaderiv( ::lime::graphics::opengl::GLObject shader,int pname,Float params);
		::Dynamic getShaderiv_dyn();

		::String getShaderInfoLog( ::lime::graphics::opengl::GLObject shader);
		::Dynamic getShaderInfoLog_dyn();

		 ::Dynamic getShaderParameter( ::lime::graphics::opengl::GLObject shader,int pname);
		::Dynamic getShaderParameter_dyn();

		 ::Dynamic getShaderPrecisionFormat(int shadertype,int precisiontype);
		::Dynamic getShaderPrecisionFormat_dyn();

		::String getShaderSource( ::lime::graphics::opengl::GLObject shader);
		::Dynamic getShaderSource_dyn();

		::String getString(int name);
		::Dynamic getString_dyn();

		::String getStringi(int name,int index);
		::Dynamic getStringi_dyn();

		::Array< ::String > getSupportedExtensions();
		::Dynamic getSupportedExtensions_dyn();

		 ::Dynamic getSyncParameter( ::Dynamic sync,int pname);
		::Dynamic getSyncParameter_dyn();

		int getSyncParameteri( ::Dynamic sync,int pname);
		::Dynamic getSyncParameteri_dyn();

		void getSyncParameteriv( ::Dynamic sync,int pname,Float params);
		::Dynamic getSyncParameteriv_dyn();

		 ::Dynamic getTexParameter(int target,int pname);
		::Dynamic getTexParameter_dyn();

		Float getTexParameterf(int target,int pname);
		::Dynamic getTexParameterf_dyn();

		void getTexParameterfv(int target,int pname,Float params);
		::Dynamic getTexParameterfv_dyn();

		int getTexParameteri(int target,int pname);
		::Dynamic getTexParameteri_dyn();

		void getTexParameteriv(int target,int pname,Float params);
		::Dynamic getTexParameteriv_dyn();

		 ::Dynamic getTransformFeedbackVarying( ::lime::graphics::opengl::GLObject program,int index);
		::Dynamic getTransformFeedbackVarying_dyn();

		 ::Dynamic getUniform( ::lime::graphics::opengl::GLObject program,int location);
		::Dynamic getUniform_dyn();

		Float getUniformf( ::lime::graphics::opengl::GLObject program,int location);
		::Dynamic getUniformf_dyn();

		void getUniformfv( ::lime::graphics::opengl::GLObject program,int location,Float params);
		::Dynamic getUniformfv_dyn();

		int getUniformi( ::lime::graphics::opengl::GLObject program,int location);
		::Dynamic getUniformi_dyn();

		void getUniformiv( ::lime::graphics::opengl::GLObject program,int location,Float params);
		::Dynamic getUniformiv_dyn();

		int getUniformui( ::lime::graphics::opengl::GLObject program,int location);
		::Dynamic getUniformui_dyn();

		void getUniformuiv( ::lime::graphics::opengl::GLObject program,int location,Float params);
		::Dynamic getUniformuiv_dyn();

		int getUniformBlockIndex( ::lime::graphics::opengl::GLObject program,::String uniformBlockName);
		::Dynamic getUniformBlockIndex_dyn();

		::Array< int > getUniformIndices( ::lime::graphics::opengl::GLObject program,::Array< ::String > uniformNames);
		::Dynamic getUniformIndices_dyn();

		int getUniformLocation( ::lime::graphics::opengl::GLObject program,::String name);
		::Dynamic getUniformLocation_dyn();

		 ::Dynamic getVertexAttrib(int index,int pname);
		::Dynamic getVertexAttrib_dyn();

		Float getVertexAttribf(int index,int pname);
		::Dynamic getVertexAttribf_dyn();

		void getVertexAttribfv(int index,int pname,Float params);
		::Dynamic getVertexAttribfv_dyn();

		int getVertexAttribi(int index,int pname);
		::Dynamic getVertexAttribi_dyn();

		int getVertexAttribIi(int index,int pname);
		::Dynamic getVertexAttribIi_dyn();

		void getVertexAttribIiv(int index,int pname,Float params);
		::Dynamic getVertexAttribIiv_dyn();

		int getVertexAttribIui(int index,int pname);
		::Dynamic getVertexAttribIui_dyn();

		void getVertexAttribIuiv(int index,int pname,Float params);
		::Dynamic getVertexAttribIuiv_dyn();

		void getVertexAttribiv(int index,int pname,Float params);
		::Dynamic getVertexAttribiv_dyn();

		Float getVertexAttribPointerv(int index,int pname);
		::Dynamic getVertexAttribPointerv_dyn();

		void hint(int target,int mode);
		::Dynamic hint_dyn();

		void invalidateFramebuffer(int target,::Array< int > attachments);
		::Dynamic invalidateFramebuffer_dyn();

		void invalidateSubFramebuffer(int target,::Array< int > attachments,int x,int y,int width,int height);
		::Dynamic invalidateSubFramebuffer_dyn();

		bool isBuffer( ::lime::graphics::opengl::GLObject buffer);
		::Dynamic isBuffer_dyn();

		bool isContextLost();
		::Dynamic isContextLost_dyn();

		bool isEnabled(int cap);
		::Dynamic isEnabled_dyn();

		bool isFramebuffer( ::lime::graphics::opengl::GLObject framebuffer);
		::Dynamic isFramebuffer_dyn();

		bool isProgram( ::lime::graphics::opengl::GLObject program);
		::Dynamic isProgram_dyn();

		bool isQuery( ::lime::graphics::opengl::GLObject query);
		::Dynamic isQuery_dyn();

		bool isRenderbuffer( ::lime::graphics::opengl::GLObject renderbuffer);
		::Dynamic isRenderbuffer_dyn();

		bool isSampler( ::lime::graphics::opengl::GLObject sampler);
		::Dynamic isSampler_dyn();

		bool isShader( ::lime::graphics::opengl::GLObject shader);
		::Dynamic isShader_dyn();

		bool isSync( ::Dynamic sync);
		::Dynamic isSync_dyn();

		bool isTexture( ::lime::graphics::opengl::GLObject texture);
		::Dynamic isTexture_dyn();

		bool isTransformFeedback( ::lime::graphics::opengl::GLObject transformFeedback);
		::Dynamic isTransformFeedback_dyn();

		bool isVertexArray( ::lime::graphics::opengl::GLObject vertexArray);
		::Dynamic isVertexArray_dyn();

		void lineWidth(Float width);
		::Dynamic lineWidth_dyn();

		void linkProgram( ::lime::graphics::opengl::GLObject program);
		::Dynamic linkProgram_dyn();

		Float mapBufferRange(int target,Float offset,int length,int access);
		::Dynamic mapBufferRange_dyn();

		void pauseTransformFeedback();
		::Dynamic pauseTransformFeedback_dyn();

		void pixelStorei(int pname,int param);
		::Dynamic pixelStorei_dyn();

		void polygonOffset(Float factor,Float units);
		::Dynamic polygonOffset_dyn();

		void programBinary( ::lime::graphics::opengl::GLObject program,int binaryFormat,Float binary,int length);
		::Dynamic programBinary_dyn();

		void programParameteri( ::lime::graphics::opengl::GLObject program,int pname,int value);
		::Dynamic programParameteri_dyn();

		void readBuffer(int src);
		::Dynamic readBuffer_dyn();

		void readPixels(int x,int y,int width,int height,int format,int type,Float pixels);
		::Dynamic readPixels_dyn();

		void releaseShaderCompiler();
		::Dynamic releaseShaderCompiler_dyn();

		void renderbufferStorage(int target,int internalformat,int width,int height);
		::Dynamic renderbufferStorage_dyn();

		void renderbufferStorageMultisample(int target,int samples,int internalformat,int width,int height);
		::Dynamic renderbufferStorageMultisample_dyn();

		void resumeTransformFeedback();
		::Dynamic resumeTransformFeedback_dyn();

		void sampleCoverage(Float value,bool invert);
		::Dynamic sampleCoverage_dyn();

		void samplerParameterf( ::lime::graphics::opengl::GLObject sampler,int pname,Float param);
		::Dynamic samplerParameterf_dyn();

		void samplerParameteri( ::lime::graphics::opengl::GLObject sampler,int pname,int param);
		::Dynamic samplerParameteri_dyn();

		void scissor(int x,int y,int width,int height);
		::Dynamic scissor_dyn();

		void shaderBinary(::Array< ::Dynamic> shaders,int binaryformat,Float binary,int length);
		::Dynamic shaderBinary_dyn();

		void shaderSource( ::lime::graphics::opengl::GLObject shader,::String source);
		::Dynamic shaderSource_dyn();

		void stencilFunc(int func,int ref,int mask);
		::Dynamic stencilFunc_dyn();

		void stencilFuncSeparate(int face,int func,int ref,int mask);
		::Dynamic stencilFuncSeparate_dyn();

		void stencilMask(int mask);
		::Dynamic stencilMask_dyn();

		void stencilMaskSeparate(int face,int mask);
		::Dynamic stencilMaskSeparate_dyn();

		void stencilOp(int fail,int zfail,int zpass);
		::Dynamic stencilOp_dyn();

		void stencilOpSeparate(int face,int fail,int zfail,int zpass);
		::Dynamic stencilOpSeparate_dyn();

		void texImage2D(int target,int level,int internalformat,int width,int height,int border,int format,int type,Float data);
		::Dynamic texImage2D_dyn();

		void texImage3D(int target,int level,int internalformat,int width,int height,int depth,int border,int format,int type,Float data);
		::Dynamic texImage3D_dyn();

		void texStorage2D(int target,int level,int internalformat,int width,int height);
		::Dynamic texStorage2D_dyn();

		void texStorage3D(int target,int level,int internalformat,int width,int height,int depth);
		::Dynamic texStorage3D_dyn();

		void texParameterf(int target,int pname,Float param);
		::Dynamic texParameterf_dyn();

		void texParameteri(int target,int pname,int param);
		::Dynamic texParameteri_dyn();

		void texSubImage2D(int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,Float pixels);
		::Dynamic texSubImage2D_dyn();

		void texSubImage3D(int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int type,Float data);
		::Dynamic texSubImage3D_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void transformFeedbackVaryings( ::lime::graphics::opengl::GLObject program,::Array< ::String > varyings,int bufferMode);
		::Dynamic transformFeedbackVaryings_dyn();

		void uniform1f(int location,Float v0);
		::Dynamic uniform1f_dyn();

		void uniform1fv(int location,int count,Float v);
		::Dynamic uniform1fv_dyn();

		void uniform1i(int location,int v0);
		::Dynamic uniform1i_dyn();

		void uniform1iv(int location,int count,Float v);
		::Dynamic uniform1iv_dyn();

		void uniform1ui(int location,int v0);
		::Dynamic uniform1ui_dyn();

		void uniform1uiv(int location,int count,Float v);
		::Dynamic uniform1uiv_dyn();

		void uniform2f(int location,Float v0,Float v1);
		::Dynamic uniform2f_dyn();

		void uniform2fv(int location,int count,Float v);
		::Dynamic uniform2fv_dyn();

		void uniform2i(int location,int v0,int v1);
		::Dynamic uniform2i_dyn();

		void uniform2iv(int location,int count,Float v);
		::Dynamic uniform2iv_dyn();

		void uniform2ui(int location,int v0,int v1);
		::Dynamic uniform2ui_dyn();

		void uniform2uiv(int location,int count,Float v);
		::Dynamic uniform2uiv_dyn();

		void uniform3f(int location,Float v0,Float v1,Float v2);
		::Dynamic uniform3f_dyn();

		void uniform3fv(int location,int count,Float v);
		::Dynamic uniform3fv_dyn();

		void uniform3i(int location,int v0,int v1,int v2);
		::Dynamic uniform3i_dyn();

		void uniform3iv(int location,int count,Float v);
		::Dynamic uniform3iv_dyn();

		void uniform3ui(int location,int v0,int v1,int v2);
		::Dynamic uniform3ui_dyn();

		void uniform3uiv(int location,int count,Float v);
		::Dynamic uniform3uiv_dyn();

		void uniform4f(int location,Float v0,Float v1,Float v2,Float v3);
		::Dynamic uniform4f_dyn();

		void uniform4fv(int location,int count,Float v);
		::Dynamic uniform4fv_dyn();

		void uniform4i(int location,int v0,int v1,int v2,int v3);
		::Dynamic uniform4i_dyn();

		void uniform4iv(int location,int count,Float v);
		::Dynamic uniform4iv_dyn();

		void uniform4ui(int location,int v0,int v1,int v2,int v3);
		::Dynamic uniform4ui_dyn();

		void uniform4uiv(int location,int count,Float v);
		::Dynamic uniform4uiv_dyn();

		void uniformBlockBinding( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int uniformBlockBinding);
		::Dynamic uniformBlockBinding_dyn();

		void uniformMatrix2fv(int location,int count,bool transpose,Float v);
		::Dynamic uniformMatrix2fv_dyn();

		void uniformMatrix2x3fv(int location,int count,bool transpose,Float v);
		::Dynamic uniformMatrix2x3fv_dyn();

		void uniformMatrix2x4fv(int location,int count,bool transpose,Float v);
		::Dynamic uniformMatrix2x4fv_dyn();

		void uniformMatrix3fv(int location,int count,bool transpose,Float v);
		::Dynamic uniformMatrix3fv_dyn();

		void uniformMatrix3x2fv(int location,int count,bool transpose,Float v);
		::Dynamic uniformMatrix3x2fv_dyn();

		void uniformMatrix3x4fv(int location,int count,bool transpose,Float v);
		::Dynamic uniformMatrix3x4fv_dyn();

		void uniformMatrix4fv(int location,int count,bool transpose,Float v);
		::Dynamic uniformMatrix4fv_dyn();

		void uniformMatrix4x2fv(int location,int count,bool transpose,Float v);
		::Dynamic uniformMatrix4x2fv_dyn();

		void uniformMatrix4x3fv(int location,int count,bool transpose,Float v);
		::Dynamic uniformMatrix4x3fv_dyn();

		bool unmapBuffer(int target);
		::Dynamic unmapBuffer_dyn();

		void useProgram( ::lime::graphics::opengl::GLObject program);
		::Dynamic useProgram_dyn();

		void validateProgram( ::lime::graphics::opengl::GLObject program);
		::Dynamic validateProgram_dyn();

		void vertexAttrib1f(int index,Float v0);
		::Dynamic vertexAttrib1f_dyn();

		void vertexAttrib1fv(int index,Float v);
		::Dynamic vertexAttrib1fv_dyn();

		void vertexAttrib2f(int index,Float v0,Float y);
		::Dynamic vertexAttrib2f_dyn();

		void vertexAttrib2fv(int index,Float v);
		::Dynamic vertexAttrib2fv_dyn();

		void vertexAttrib3f(int index,Float v0,Float v1,Float v2);
		::Dynamic vertexAttrib3f_dyn();

		void vertexAttrib3fv(int index,Float v);
		::Dynamic vertexAttrib3fv_dyn();

		void vertexAttrib4f(int index,Float v0,Float v1,Float v2,Float v3);
		::Dynamic vertexAttrib4f_dyn();

		void vertexAttrib4fv(int index,Float v);
		::Dynamic vertexAttrib4fv_dyn();

		void vertexAttribDivisor(int index,int divisor);
		::Dynamic vertexAttribDivisor_dyn();

		void vertexAttribI4i(int index,int v0,int v1,int v2,int v3);
		::Dynamic vertexAttribI4i_dyn();

		void vertexAttribI4iv(int index,Float v);
		::Dynamic vertexAttribI4iv_dyn();

		void vertexAttribI4ui(int index,int v0,int v1,int v2,int v3);
		::Dynamic vertexAttribI4ui_dyn();

		void vertexAttribI4uiv(int index,Float v);
		::Dynamic vertexAttribI4uiv_dyn();

		void vertexAttribIPointer(int index,int size,int type,int stride,Float offset);
		::Dynamic vertexAttribIPointer_dyn();

		void vertexAttribPointer(int index,int size,int type,bool normalized,int stride,Float offset);
		::Dynamic vertexAttribPointer_dyn();

		void viewport(int x,int y,int width,int height);
		::Dynamic viewport_dyn();

		void waitSync( ::Dynamic sync,int flags, cpp::Int64Struct timeout);
		::Dynamic waitSync_dyn();

		void _hx___contextLost();
		::Dynamic _hx___contextLost_dyn();

		 ::lime::graphics::opengl::GLObject _hx___createObject(int id);
		::Dynamic _hx___createObject_dyn();

		int _hx___getObjectID( ::lime::graphics::opengl::GLObject object);
		::Dynamic _hx___getObjectID_dyn();

		void _hx___initialize();
		::Dynamic _hx___initialize_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext */ 
