#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_ATFReader
#include <openfl/display3D/_internal/ATFReader.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_35_new,"openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",35,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_88_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",88,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_96_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",96,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_136_uploadFromBitmapData,"openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",136,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_230_uploadFromByteArray,"openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",230,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_244_uploadFromTypedArray,"openfl.display3D.textures.Texture","uploadFromTypedArray",0x20dd8a2a,"openfl.display3D.textures.Texture.uploadFromTypedArray","openfl/display3D/textures/Texture.hx",244,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_263___setSamplerState,"openfl.display3D.textures.Texture","__setSamplerState",0xb719141b,"openfl.display3D.textures.Texture.__setSamplerState","openfl/display3D/textures/Texture.hx",263,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_313___uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","__uploadCompressedTextureFromByteArray",0x1748d45e,"openfl.display3D.textures.Texture.__uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",313,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_300___uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","__uploadCompressedTextureFromByteArray",0x1748d45e,"openfl.display3D.textures.Texture.__uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",300,0x3ee19dbf)
static const bool _hx_array_data_f13028fe_10[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_31_boot,"openfl.display3D.textures.Texture","boot",0x536eb1a2,"openfl.display3D.textures.Texture.boot","openfl/display3D/textures/Texture.hx",31,0x3ee19dbf)
namespace openfl{
namespace display3D{
namespace textures{

void Texture_obj::__construct( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_35_new)
HXLINE(  36)		super::__construct(context);
HXLINE(  38)		this->_hx___width = width;
HXLINE(  39)		this->_hx___height = height;
HXLINE(  41)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  42)		this->_hx___streamingLevels = streamingLevels;
HXLINE(  44)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE(  46)		this->_hx___textureTarget = gl->TEXTURE_2D;
HXLINE(  48)		this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE(  49)		{
HXLINE(  49)			int target = this->_hx___textureTarget;
HXDLIN(  49)			int internalformat = this->_hx___internalFormat;
HXDLIN(  49)			int width1 = this->_hx___width;
HXDLIN(  49)			int height1 = this->_hx___height;
HXDLIN(  49)			int format1 = this->_hx___format;
HXDLIN(  49)			int type = gl->UNSIGNED_BYTE;
HXDLIN(  49)			 ::lime::utils::ArrayBufferView srcData = null();
HXDLIN(  49)			{
HXLINE(  49)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),srcData,null(),0);
HXDLIN(  49)				gl->texImage2D(target,0,internalformat,width1,height1,0,format1,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE(  50)		this->_hx___context->_hx___bindGLTexture2D(null());
HXLINE(  52)		if (optimizeForRenderToTexture) {
HXLINE(  52)			this->_hx___getGLFramebuffer(true,0,0);
            		}
            	}

Dynamic Texture_obj::__CreateEmpty() { return new Texture_obj; }

void *Texture_obj::_hx_vtable = 0;

Dynamic Texture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Texture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3247d979) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x3247d979;
		}
	} else {
		return inClassId==(int)0x6d550de4;
	}
}

void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,::hx::Null< bool >  __o_async){
            		bool async = __o_async.Default(false);
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_88_uploadCompressedTextureFromByteArray)
HXDLIN(  88)		 ::openfl::display3D::textures::Texture _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  89)		if (!(async)) {
HXLINE(  91)			this->_hx___uploadCompressedTextureFromByteArray(data,byteArrayOffset);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::Texture,_gthis, ::openfl::utils::ByteArrayData,data,int,byteArrayOffset) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_96_uploadCompressedTextureFromByteArray)
HXLINE(  97)				_gthis->_hx___uploadCompressedTextureFromByteArray(data,byteArrayOffset);
HXLINE(  99)				 ::openfl::events::Event event = null();
HXLINE( 105)				event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("textureReady",88,4d,5a,df),null(),null());
HXLINE( 108)				_gthis->dispatchEvent(event);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  95)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis,data,byteArrayOffset)),1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,::hx::Null< int >  __o_miplevel,::hx::Null< bool >  __o_generateMipmap){
            		int miplevel = __o_miplevel.Default(0);
            		bool generateMipmap = __o_generateMipmap.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_136_uploadFromBitmapData)
HXLINE( 148)		if (::hx::IsNull( source )) {
HXLINE( 148)			return;
            		}
HXLINE( 150)		int width = (this->_hx___width >> miplevel);
HXLINE( 151)		int height = (this->_hx___height >> miplevel);
HXLINE( 153)		bool _hx_tmp;
HXDLIN( 153)		if ((width == 0)) {
HXLINE( 153)			_hx_tmp = (height == 0);
            		}
            		else {
HXLINE( 153)			_hx_tmp = false;
            		}
HXDLIN( 153)		if (_hx_tmp) {
HXLINE( 153)			return;
            		}
HXLINE( 155)		if ((width == 0)) {
HXLINE( 155)			width = 1;
            		}
HXLINE( 156)		if ((height == 0)) {
HXLINE( 156)			height = 1;
            		}
HXLINE( 158)		bool _hx_tmp1;
HXDLIN( 158)		if ((source->width == width)) {
HXLINE( 158)			_hx_tmp1 = (source->height != height);
            		}
            		else {
HXLINE( 158)			_hx_tmp1 = true;
            		}
HXDLIN( 158)		if (_hx_tmp1) {
HXLINE( 160)			 ::openfl::display::BitmapData copy =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,0);
HXLINE( 161)			copy->draw(source,null(),null(),null(),null(),null());
HXLINE( 162)			source = copy;
            		}
HXLINE( 165)		 ::lime::graphics::Image image = this->_hx___getImage(source);
HXLINE( 166)		if (::hx::IsNull( image )) {
HXLINE( 166)			return;
            		}
HXLINE( 191)		this->uploadFromTypedArray(image->get_data(),miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromBitmapData,(void))

void Texture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,::hx::Null< int >  __o_miplevel){
            		int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_230_uploadFromByteArray)
HXDLIN( 230)		 ::Dynamic elements = null();
HXDLIN( 230)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN( 230)		::cpp::VirtualArray array = null();
HXDLIN( 230)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 230)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 230)		 ::Dynamic byteoffset = byteArrayOffset;
HXDLIN( 230)		 ::Dynamic len = null();
HXDLIN( 230)		if (::hx::IsNull( byteoffset )) {
HXDLIN( 230)			byteoffset = 0;
            		}
HXDLIN( 230)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 230)		if (::hx::IsNotNull( elements )) {
HXDLIN( 230)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXDLIN( 230)			if (::hx::IsNotNull( array )) {
HXDLIN( 230)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 230)				_this->byteOffset = 0;
HXDLIN( 230)				_this->length = array->get_length();
HXDLIN( 230)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 230)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 230)				_this->buffer = this2;
HXDLIN( 230)				_this->copyFromArray(array,null());
HXDLIN( 230)				this1 = _this;
            			}
            			else {
HXDLIN( 230)				if (::hx::IsNotNull( vector )) {
HXDLIN( 230)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 230)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 230)					_this->byteOffset = 0;
HXDLIN( 230)					_this->length = array->get_length();
HXDLIN( 230)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 230)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 230)					_this->buffer = this2;
HXDLIN( 230)					_this->copyFromArray(array,null());
HXDLIN( 230)					this1 = _this;
            				}
            				else {
HXDLIN( 230)					if (::hx::IsNotNull( view )) {
HXDLIN( 230)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 230)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 230)						int srcLength = view->length;
HXDLIN( 230)						int srcByteOffset = view->byteOffset;
HXDLIN( 230)						int srcElementSize = view->bytesPerElement;
HXDLIN( 230)						int elementSize = _this->bytesPerElement;
HXDLIN( 230)						if ((view->type == _this->type)) {
HXDLIN( 230)							int srcLength = srcData->length;
HXDLIN( 230)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 230)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 230)							_this->buffer = this1;
HXDLIN( 230)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXDLIN( 230)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 230)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 230)						_this->byteOffset = 0;
HXDLIN( 230)						_this->length = srcLength;
HXDLIN( 230)						this1 = _this;
            					}
            					else {
HXDLIN( 230)						if (::hx::IsNotNull( buffer )) {
HXDLIN( 230)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 230)							int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 230)							if ((in_byteOffset < 0)) {
HXDLIN( 230)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 230)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXDLIN( 230)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 230)							int bufferByteLength = buffer->length;
HXDLIN( 230)							int elementSize = _this->bytesPerElement;
HXDLIN( 230)							int newByteLength = bufferByteLength;
HXDLIN( 230)							if (::hx::IsNull( len )) {
HXDLIN( 230)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 230)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXDLIN( 230)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 230)								if ((newByteLength < 0)) {
HXDLIN( 230)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXDLIN( 230)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 230)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 230)								if ((newRange > bufferByteLength)) {
HXDLIN( 230)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 230)							_this->buffer = buffer;
HXDLIN( 230)							_this->byteOffset = in_byteOffset;
HXDLIN( 230)							_this->byteLength = newByteLength;
HXDLIN( 230)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 230)							this1 = _this;
            						}
            						else {
HXDLIN( 230)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 230)		this->uploadFromTypedArray(this1,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

void Texture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,::hx::Null< int >  __o_miplevel){
            		int miplevel = __o_miplevel.Default(0);
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_244_uploadFromTypedArray)
HXLINE( 245)		if (::hx::IsNull( data )) {
HXLINE( 245)			return;
            		}
HXLINE( 247)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 249)		int width = (this->_hx___width >> miplevel);
HXLINE( 250)		int height = (this->_hx___height >> miplevel);
HXLINE( 252)		bool _hx_tmp;
HXDLIN( 252)		if ((width == 0)) {
HXLINE( 252)			_hx_tmp = (height == 0);
            		}
            		else {
HXLINE( 252)			_hx_tmp = false;
            		}
HXDLIN( 252)		if (_hx_tmp) {
HXLINE( 252)			return;
            		}
HXLINE( 254)		if ((width == 0)) {
HXLINE( 254)			width = 1;
            		}
HXLINE( 255)		if ((height == 0)) {
HXLINE( 255)			height = 1;
            		}
HXLINE( 257)		this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE( 258)		{
HXLINE( 258)			int target = this->_hx___textureTarget;
HXDLIN( 258)			int internalformat = this->_hx___internalFormat;
HXDLIN( 258)			int format = this->_hx___format;
HXDLIN( 258)			int type = gl->UNSIGNED_BYTE;
HXDLIN( 258)			{
HXLINE( 258)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data,null(),0);
HXDLIN( 258)				gl->texImage2D(target,miplevel,internalformat,width,height,0,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE( 259)		this->_hx___context->_hx___bindGLTexture2D(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromTypedArray,(void))

bool Texture_obj::_hx___setSamplerState( ::openfl::display::_internal::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_263___setSamplerState)
HXLINE( 264)		if (this->super::_hx___setSamplerState(state)) {
HXLINE( 266)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 268)			bool _hx_tmp;
HXDLIN( 268)			if (::hx::IsNotEq( state->mipfilter,2 )) {
HXLINE( 268)				_hx_tmp = !(this->_hx___samplerState->mipmapGenerated);
            			}
            			else {
HXLINE( 268)				_hx_tmp = false;
            			}
HXDLIN( 268)			if (_hx_tmp) {
HXLINE( 270)				gl->generateMipmap(gl->TEXTURE_2D);
HXLINE( 271)				this->_hx___samplerState->mipmapGenerated = true;
            			}
HXLINE( 274)			if ((::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy != 0)) {
HXLINE( 276)				int aniso;
HXDLIN( 276)				 ::Dynamic _hx_switch_0 = state->filter;
            				if (  (_hx_switch_0==0) ){
HXLINE( 276)					aniso = 16;
HXDLIN( 276)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE( 276)					aniso = 2;
HXDLIN( 276)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE( 276)					aniso = 4;
HXDLIN( 276)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE( 276)					aniso = 8;
HXDLIN( 276)					goto _hx_goto_6;
            				}
            				/* default */{
HXLINE( 276)					aniso = 1;
            				}
            				_hx_goto_6:;
HXLINE( 285)				if ((aniso > ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy)) {
HXLINE( 287)					aniso = ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy;
            				}
HXLINE( 290)				gl->texParameterf(gl->TEXTURE_2D,::openfl::display3D::Context3D_obj::_hx___glTextureMaxAnisotropy,( (Float)(aniso) ));
            			}
HXLINE( 293)			return true;
            		}
HXLINE( 296)		return false;
            	}


void Texture_obj::_hx___uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::Texture,_gthis,::Array< bool >,hasTexture,bool,alpha, ::lime::_internal::backend::native::NativeOpenGLRenderContext,gl) HXARGC(7)
            		void _hx_run(int target,int level,int gpuFormat,int width,int height,int blockLength, ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_313___uploadCompressedTextureFromByteArray)
HXLINE( 314)			 ::Dynamic format;
HXDLIN( 314)			if (alpha) {
HXLINE( 314)				format = ::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha->get(gpuFormat);
            			}
            			else {
HXLINE( 314)				format = ::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats->get(gpuFormat);
            			}
HXLINE( 315)			if (::hx::IsEq( format,0 )) {
HXLINE( 315)				return;
            			}
HXLINE( 317)			hasTexture[0] = true;
HXLINE( 318)			_gthis->_hx___format = ( (int)(format) );
HXLINE( 319)			_gthis->_hx___internalFormat = ( (int)(format) );
HXLINE( 321)			bool _hx_tmp;
HXDLIN( 321)			if (alpha) {
HXLINE( 321)				_hx_tmp = (gpuFormat == 2);
            			}
            			else {
HXLINE( 321)				_hx_tmp = false;
            			}
HXDLIN( 321)			if (_hx_tmp) {
HXLINE( 323)				int size = ::Std_obj::_hx_int((( (Float)(blockLength) ) / ( (Float)(2) )));
HXLINE( 325)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl1 = gl;
HXDLIN( 325)				int _gthis1 = _gthis->_hx___textureTarget;
HXDLIN( 325)				int _gthis2 = _gthis->_hx___internalFormat;
HXLINE( 326)				 ::Dynamic elements = null();
HXDLIN( 326)				::cpp::VirtualArray array = null();
HXDLIN( 326)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 326)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 326)				 ::Dynamic byteoffset = 0;
HXDLIN( 326)				if (::hx::IsNull( byteoffset )) {
HXLINE( 326)					byteoffset = 0;
            				}
HXDLIN( 326)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 326)				if (::hx::IsNotNull( elements )) {
HXLINE( 326)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 326)					if (::hx::IsNotNull( array )) {
HXLINE( 326)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 326)						_this->byteOffset = 0;
HXDLIN( 326)						_this->length = array->get_length();
HXDLIN( 326)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 326)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 326)						_this->buffer = this2;
HXDLIN( 326)						_this->copyFromArray(array,null());
HXDLIN( 326)						this1 = _this;
            					}
            					else {
HXLINE( 326)						if (::hx::IsNotNull( vector )) {
HXLINE( 326)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 326)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 326)							_this->byteOffset = 0;
HXDLIN( 326)							_this->length = array->get_length();
HXDLIN( 326)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 326)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 326)							_this->buffer = this2;
HXDLIN( 326)							_this->copyFromArray(array,null());
HXDLIN( 326)							this1 = _this;
            						}
            						else {
HXLINE( 326)							if (::hx::IsNotNull( view )) {
HXLINE( 326)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 326)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 326)								int srcLength = view->length;
HXDLIN( 326)								int srcByteOffset = view->byteOffset;
HXDLIN( 326)								int srcElementSize = view->bytesPerElement;
HXDLIN( 326)								int elementSize = _this->bytesPerElement;
HXDLIN( 326)								if ((view->type == _this->type)) {
HXLINE( 326)									int srcLength = srcData->length;
HXDLIN( 326)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 326)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 326)									_this->buffer = this1;
HXDLIN( 326)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 326)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 326)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 326)								_this->byteOffset = 0;
HXDLIN( 326)								_this->length = srcLength;
HXDLIN( 326)								this1 = _this;
            							}
            							else {
HXLINE( 326)								if (::hx::IsNotNull( bytes )) {
HXLINE( 326)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 326)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 326)									if ((in_byteOffset < 0)) {
HXLINE( 326)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 326)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 326)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 326)									int bufferByteLength = bytes->length;
HXDLIN( 326)									int elementSize = _this->bytesPerElement;
HXDLIN( 326)									int newByteLength = bufferByteLength;
HXDLIN( 326)									if (::hx::IsNull( size )) {
HXLINE( 326)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 326)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 326)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 326)										if ((newByteLength < 0)) {
HXLINE( 326)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 326)										newByteLength = (size * _this->bytesPerElement);
HXDLIN( 326)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 326)										if ((newRange > bufferByteLength)) {
HXLINE( 326)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 326)									_this->buffer = bytes;
HXDLIN( 326)									_this->byteOffset = in_byteOffset;
HXDLIN( 326)									_this->byteLength = newByteLength;
HXDLIN( 326)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 326)									this1 = _this;
            								}
            								else {
HXLINE( 326)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 325)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl1,_gthis1,level,_gthis2,width,height,0,this1);
HXLINE( 328)				 ::openfl::display3D::textures::Texture alphaTexture =  ::openfl::display3D::textures::Texture_obj::__alloc( HX_CTX ,_gthis->_hx___context,_gthis->_hx___width,_gthis->_hx___height,3,_gthis->_hx___optimizeForRenderToTexture,_gthis->_hx___streamingLevels);
HXLINE( 330)				alphaTexture->_hx___format = ( (int)(format) );
HXLINE( 331)				alphaTexture->_hx___internalFormat = ( (int)(format) );
HXLINE( 333)				_gthis->_hx___context->_hx___bindGLTexture2D(alphaTexture->_hx___textureID);
HXLINE( 334)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl2 = gl;
HXDLIN( 334)				int alphaTexture1 = alphaTexture->_hx___textureTarget;
HXDLIN( 334)				int alphaTexture2 = alphaTexture->_hx___internalFormat;
HXLINE( 335)				 ::Dynamic elements1 = null();
HXDLIN( 335)				::cpp::VirtualArray array1 = null();
HXDLIN( 335)				 ::openfl::_Vector::IntVector vector1 = null();
HXDLIN( 335)				 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 335)				 ::Dynamic byteoffset1 = size;
HXDLIN( 335)				if (::hx::IsNull( byteoffset1 )) {
HXLINE( 335)					byteoffset1 = 0;
            				}
HXDLIN( 335)				 ::lime::utils::ArrayBufferView this2;
HXDLIN( 335)				if (::hx::IsNotNull( elements1 )) {
HXLINE( 335)					this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements1,4);
            				}
            				else {
HXLINE( 335)					if (::hx::IsNotNull( array1 )) {
HXLINE( 335)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 335)						_this->byteOffset = 0;
HXDLIN( 335)						_this->length = array1->get_length();
HXDLIN( 335)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 335)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 335)						_this->buffer = this1;
HXDLIN( 335)						_this->copyFromArray(array1,null());
HXDLIN( 335)						this2 = _this;
            					}
            					else {
HXLINE( 335)						if (::hx::IsNotNull( vector1 )) {
HXLINE( 335)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 335)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector1->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 335)							_this->byteOffset = 0;
HXDLIN( 335)							_this->length = array->get_length();
HXDLIN( 335)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 335)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 335)							_this->buffer = this1;
HXDLIN( 335)							_this->copyFromArray(array,null());
HXDLIN( 335)							this2 = _this;
            						}
            						else {
HXLINE( 335)							if (::hx::IsNotNull( view1 )) {
HXLINE( 335)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 335)								 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 335)								int srcLength = view1->length;
HXDLIN( 335)								int srcByteOffset = view1->byteOffset;
HXDLIN( 335)								int srcElementSize = view1->bytesPerElement;
HXDLIN( 335)								int elementSize = _this->bytesPerElement;
HXDLIN( 335)								if ((view1->type == _this->type)) {
HXLINE( 335)									int srcLength = srcData->length;
HXDLIN( 335)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 335)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 335)									_this->buffer = this1;
HXDLIN( 335)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 335)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 335)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 335)								_this->byteOffset = 0;
HXDLIN( 335)								_this->length = srcLength;
HXDLIN( 335)								this2 = _this;
            							}
            							else {
HXLINE( 335)								if (::hx::IsNotNull( bytes )) {
HXLINE( 335)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 335)									int in_byteOffset = ( (int)(byteoffset1) );
HXDLIN( 335)									if ((in_byteOffset < 0)) {
HXLINE( 335)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 335)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 335)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 335)									int bufferByteLength = bytes->length;
HXDLIN( 335)									int elementSize = _this->bytesPerElement;
HXDLIN( 335)									int newByteLength = bufferByteLength;
HXDLIN( 335)									if (::hx::IsNull( size )) {
HXLINE( 335)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 335)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 335)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 335)										if ((newByteLength < 0)) {
HXLINE( 335)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 335)										newByteLength = (size * _this->bytesPerElement);
HXDLIN( 335)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 335)										if ((newRange > bufferByteLength)) {
HXLINE( 335)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 335)									_this->buffer = bytes;
HXDLIN( 335)									_this->byteOffset = in_byteOffset;
HXDLIN( 335)									_this->byteLength = newByteLength;
HXDLIN( 335)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 335)									this2 = _this;
            								}
            								else {
HXLINE( 335)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 334)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl2,alphaTexture1,level,alphaTexture2,width,height,0,this2);
HXLINE( 337)				_gthis->_hx___alphaTexture = alphaTexture;
            			}
            			else {
HXLINE( 341)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl1 = gl;
HXDLIN( 341)				int _gthis1 = _gthis->_hx___textureTarget;
HXDLIN( 341)				int _gthis2 = _gthis->_hx___internalFormat;
HXLINE( 342)				 ::Dynamic elements = null();
HXDLIN( 342)				::cpp::VirtualArray array = null();
HXDLIN( 342)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 342)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 342)				 ::Dynamic byteoffset = 0;
HXDLIN( 342)				if (::hx::IsNull( byteoffset )) {
HXLINE( 342)					byteoffset = 0;
            				}
HXDLIN( 342)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 342)				if (::hx::IsNotNull( elements )) {
HXLINE( 342)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            				}
            				else {
HXLINE( 342)					if (::hx::IsNotNull( array )) {
HXLINE( 342)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 342)						_this->byteOffset = 0;
HXDLIN( 342)						_this->length = array->get_length();
HXDLIN( 342)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 342)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 342)						_this->buffer = this2;
HXDLIN( 342)						_this->copyFromArray(array,null());
HXDLIN( 342)						this1 = _this;
            					}
            					else {
HXLINE( 342)						if (::hx::IsNotNull( vector )) {
HXLINE( 342)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 342)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 342)							_this->byteOffset = 0;
HXDLIN( 342)							_this->length = array->get_length();
HXDLIN( 342)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 342)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 342)							_this->buffer = this2;
HXDLIN( 342)							_this->copyFromArray(array,null());
HXDLIN( 342)							this1 = _this;
            						}
            						else {
HXLINE( 342)							if (::hx::IsNotNull( view )) {
HXLINE( 342)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 342)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 342)								int srcLength = view->length;
HXDLIN( 342)								int srcByteOffset = view->byteOffset;
HXDLIN( 342)								int srcElementSize = view->bytesPerElement;
HXDLIN( 342)								int elementSize = _this->bytesPerElement;
HXDLIN( 342)								if ((view->type == _this->type)) {
HXLINE( 342)									int srcLength = srcData->length;
HXDLIN( 342)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 342)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 342)									_this->buffer = this1;
HXDLIN( 342)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 342)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 342)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 342)								_this->byteOffset = 0;
HXDLIN( 342)								_this->length = srcLength;
HXDLIN( 342)								this1 = _this;
            							}
            							else {
HXLINE( 342)								if (::hx::IsNotNull( bytes )) {
HXLINE( 342)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 342)									int in_byteOffset = ( (int)(byteoffset) );
HXDLIN( 342)									if ((in_byteOffset < 0)) {
HXLINE( 342)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 342)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 342)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 342)									int bufferByteLength = bytes->length;
HXDLIN( 342)									int elementSize = _this->bytesPerElement;
HXDLIN( 342)									int newByteLength = bufferByteLength;
HXDLIN( 342)									if (::hx::IsNull( blockLength )) {
HXLINE( 342)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 342)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 342)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 342)										if ((newByteLength < 0)) {
HXLINE( 342)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 342)										newByteLength = (blockLength * _this->bytesPerElement);
HXDLIN( 342)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 342)										if ((newRange > bufferByteLength)) {
HXLINE( 342)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 342)									_this->buffer = bytes;
HXDLIN( 342)									_this->byteOffset = in_byteOffset;
HXDLIN( 342)									_this->byteLength = newByteLength;
HXDLIN( 342)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 342)									this1 = _this;
            								}
            								else {
HXLINE( 342)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            								}
            							}
            						}
            					}
            				}
HXLINE( 341)				::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::compressedTexImage2D(gl1,_gthis1,level,_gthis2,width,height,0,this1);
            			}
            		}
            		HX_END_LOCAL_FUNC7((void))

            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_300___uploadCompressedTextureFromByteArray)
HXDLIN( 300)		 ::openfl::display3D::textures::Texture _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 301)		 ::openfl::display3D::_internal::ATFReader reader =  ::openfl::display3D::_internal::ATFReader_obj::__alloc( HX_CTX ,data,byteArrayOffset);
HXLINE( 302)		bool alpha = reader->readHeader(this->_hx___width,this->_hx___height,false);
HXLINE( 304)		 ::openfl::display3D::Context3D context = this->_hx___context;
HXLINE( 305)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 307)		this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE( 309)		::Array< bool > hasTexture = ::Array_obj< bool >::fromData( _hx_array_data_f13028fe_10,1);
HXLINE( 312)		reader->readTextures( ::Dynamic(new _hx_Closure_0(_gthis,hasTexture,alpha,gl)));
HXLINE( 346)		if (!(hasTexture->__get(0))) {
HXLINE( 348)			 ::Dynamic elements = ((this->_hx___width * this->_hx___height) * 4);
HXDLIN( 348)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 348)			::cpp::VirtualArray array = null();
HXDLIN( 348)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 348)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 348)			 ::Dynamic len = null();
HXDLIN( 348)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 348)			if (::hx::IsNotNull( elements )) {
HXLINE( 348)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 348)				if (::hx::IsNotNull( array )) {
HXLINE( 348)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 348)					_this->byteOffset = 0;
HXDLIN( 348)					_this->length = array->get_length();
HXDLIN( 348)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 348)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 348)					_this->buffer = this2;
HXDLIN( 348)					_this->copyFromArray(array,null());
HXDLIN( 348)					this1 = _this;
            				}
            				else {
HXLINE( 348)					if (::hx::IsNotNull( vector )) {
HXLINE( 348)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 348)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 348)						_this->byteOffset = 0;
HXDLIN( 348)						_this->length = array->get_length();
HXDLIN( 348)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 348)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 348)						_this->buffer = this2;
HXDLIN( 348)						_this->copyFromArray(array,null());
HXDLIN( 348)						this1 = _this;
            					}
            					else {
HXLINE( 348)						if (::hx::IsNotNull( view )) {
HXLINE( 348)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 348)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 348)							int srcLength = view->length;
HXDLIN( 348)							int srcByteOffset = view->byteOffset;
HXDLIN( 348)							int srcElementSize = view->bytesPerElement;
HXDLIN( 348)							int elementSize = _this->bytesPerElement;
HXDLIN( 348)							if ((view->type == _this->type)) {
HXLINE( 348)								int srcLength = srcData->length;
HXDLIN( 348)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 348)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 348)								_this->buffer = this1;
HXDLIN( 348)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 348)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 348)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 348)							_this->byteOffset = 0;
HXDLIN( 348)							_this->length = srcLength;
HXDLIN( 348)							this1 = _this;
            						}
            						else {
HXLINE( 348)							if (::hx::IsNotNull( buffer )) {
HXLINE( 348)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 348)								int in_byteOffset = 0;
HXDLIN( 348)								if ((in_byteOffset < 0)) {
HXLINE( 348)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 348)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 348)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 348)								int bufferByteLength = buffer->length;
HXDLIN( 348)								int elementSize = _this->bytesPerElement;
HXDLIN( 348)								int newByteLength = bufferByteLength;
HXDLIN( 348)								if (::hx::IsNull( len )) {
HXLINE( 348)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 348)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 348)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 348)									if ((newByteLength < 0)) {
HXLINE( 348)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 348)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 348)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 348)									if ((newRange > bufferByteLength)) {
HXLINE( 348)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 348)								_this->buffer = buffer;
HXDLIN( 348)								_this->byteOffset = in_byteOffset;
HXDLIN( 348)								_this->byteLength = newByteLength;
HXDLIN( 348)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 348)								this1 = _this;
            							}
            							else {
HXLINE( 348)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 348)			 ::lime::utils::ArrayBufferView data = this1;
HXLINE( 349)			{
HXLINE( 349)				int target = this->_hx___textureTarget;
HXDLIN( 349)				int internalformat = this->_hx___internalFormat;
HXDLIN( 349)				int width = this->_hx___width;
HXDLIN( 349)				int height = this->_hx___height;
HXDLIN( 349)				int format = this->_hx___format;
HXDLIN( 349)				int type = gl->UNSIGNED_BYTE;
HXDLIN( 349)				{
HXLINE( 349)					::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),data,null(),0);
HXDLIN( 349)					 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl1 = gl;
HXDLIN( 349)					gl1->texImage2D(target,0,internalformat,width,height,0,format,type,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            				}
            			}
            		}
HXLINE( 353)		this->_hx___context->_hx___bindGLTexture2D(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,_hx___uploadCompressedTextureFromByteArray,(void))

bool Texture_obj::_hx___lowMemoryMode;


::hx::ObjectPtr< Texture_obj > Texture_obj::__new( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	::hx::ObjectPtr< Texture_obj > __this = new Texture_obj();
	__this->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

::hx::ObjectPtr< Texture_obj > Texture_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	Texture_obj *__this = (Texture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Texture_obj), true, "openfl.display3D.textures.Texture"));
	*(void **)__this = Texture_obj::_hx_vtable;
	__this->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

Texture_obj::Texture_obj()
{
}

::hx::Val Texture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return ::hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return ::hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return ::hx::Val( uploadFromBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return ::hx::Val( uploadFromTypedArray_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return ::hx::Val( uploadCompressedTextureFromByteArray_dyn() ); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"__uploadCompressedTextureFromByteArray") ) { return ::hx::Val( _hx___uploadCompressedTextureFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { outValue = ( _hx___lowMemoryMode ); return true; }
	}
	return false;
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { _hx___lowMemoryMode=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Texture_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Texture_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Texture_obj::_hx___lowMemoryMode,HX_("__lowMemoryMode",98,71,9e,43)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Texture_obj_sMemberFields[] = {
	HX_("uploadCompressedTextureFromByteArray",ce,c7,86,c5),
	HX_("uploadFromBitmapData",a4,85,65,0d),
	HX_("uploadFromByteArray",e6,17,1b,ee),
	HX_("uploadFromTypedArray",ba,7c,f4,d1),
	HX_("__setSamplerState",8b,e7,cf,5d),
	HX_("__uploadCompressedTextureFromByteArray",ee,aa,5f,fa),
	::String(null()) };

static void Texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::_hx___lowMemoryMode,"__lowMemoryMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::_hx___lowMemoryMode,"__lowMemoryMode");
};

#endif

::hx::Class Texture_obj::__mClass;

static ::String Texture_obj_sStaticFields[] = {
	HX_("__lowMemoryMode",98,71,9e,43),
	::String(null())
};

void Texture_obj::__register()
{
	Texture_obj _hx_dummy;
	Texture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.textures.Texture",fe,28,30,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = Texture_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Texture_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Texture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Texture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_31_boot)
HXDLIN(  31)		_hx___lowMemoryMode = false;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
