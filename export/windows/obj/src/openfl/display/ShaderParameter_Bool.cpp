#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_abe7b394d2d5e035_168_new,"openfl.display.ShaderParameter_Bool","new",0xb2db75c1,"openfl.display.ShaderParameter_Bool.new","openfl/display/ShaderParameter.hx",168,0xc89f13e6)
HX_LOCAL_STACK_FRAME(_hx_pos_abe7b394d2d5e035_172___disableGL,"openfl.display.ShaderParameter_Bool","__disableGL",0xcd8ea94e,"openfl.display.ShaderParameter_Bool.__disableGL","openfl/display/ShaderParameter.hx",172,0xc89f13e6)
HX_LOCAL_STACK_FRAME(_hx_pos_abe7b394d2d5e035_187___updateGL,"openfl.display.ShaderParameter_Bool","__updateGL",0x0736c44d,"openfl.display.ShaderParameter_Bool.__updateGL","openfl/display/ShaderParameter.hx",187,0xc89f13e6)
HX_LOCAL_STACK_FRAME(_hx_pos_abe7b394d2d5e035_423___updateGLFromBuffer,"openfl.display.ShaderParameter_Bool","__updateGLFromBuffer",0x7e43ccb7,"openfl.display.ShaderParameter_Bool.__updateGLFromBuffer","openfl/display/ShaderParameter.hx",423,0xc89f13e6)
HX_LOCAL_STACK_FRAME(_hx_pos_abe7b394d2d5e035_591_set_name,"openfl.display.ShaderParameter_Bool","set_name",0xe657c247,"openfl.display.ShaderParameter_Bool.set_name","openfl/display/ShaderParameter.hx",591,0xc89f13e6)
HX_LOCAL_STACK_FRAME(_hx_pos_abe7b394d2d5e035_96_boot,"openfl.display.ShaderParameter_Bool","boot",0xc54493b1,"openfl.display.ShaderParameter_Bool.boot","openfl/display/ShaderParameter.hx",96,0xc89f13e6)
namespace openfl{
namespace display{

void ShaderParameter_Bool_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_abe7b394d2d5e035_168_new)
HXDLIN( 168)		this->index = 0;
            	}

Dynamic ShaderParameter_Bool_obj::__CreateEmpty() { return new ShaderParameter_Bool_obj; }

void *ShaderParameter_Bool_obj::_hx_vtable = 0;

Dynamic ShaderParameter_Bool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShaderParameter_Bool_obj > _hx_result = new ShaderParameter_Bool_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderParameter_Bool_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0677f393;
}

void ShaderParameter_Bool_obj::_hx___disableGL( ::openfl::display3D::Context3D context){
            	HX_STACKFRAME(&_hx_pos_abe7b394d2d5e035_172___disableGL)
HXLINE( 173)		if (::hx::IsLess( this->index,0 )) {
HXLINE( 173)			return;
            		}
HXLINE( 175)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 177)		if (!(this->_hx___isUniform)) {
HXLINE( 179)			int _g = 0;
HXDLIN( 179)			int _g1 = this->_hx___arrayLength;
HXDLIN( 179)			while((_g < _g1)){
HXLINE( 179)				_g = (_g + 1);
HXDLIN( 179)				int i = (_g - 1);
HXLINE( 181)				gl->disableVertexAttribArray(( (int)((this->index + i)) ));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderParameter_Bool_obj,_hx___disableGL,(void))

void ShaderParameter_Bool_obj::_hx___updateGL( ::openfl::display3D::Context3D context,::Array< bool > overrideValue){
            	HX_STACKFRAME(&_hx_pos_abe7b394d2d5e035_187___updateGL)
HXLINE( 188)		if (::hx::IsLess( this->index,0 )) {
HXLINE( 188)			return;
            		}
HXLINE( 191)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 193)		::Array< bool > value;
HXDLIN( 193)		if (::hx::IsNotNull( overrideValue )) {
HXLINE( 193)			value = overrideValue;
            		}
            		else {
HXLINE( 193)			value = this->value;
            		}
HXLINE( 195)		::Array< bool > boolValue;
HXDLIN( 195)		if (this->_hx___isBool) {
HXLINE( 195)			boolValue = value;
            		}
            		else {
HXLINE( 195)			boolValue = null();
            		}
HXLINE( 196)		::Array< Float > floatValue;
HXDLIN( 196)		if (this->_hx___isFloat) {
HXLINE( 196)			floatValue = value;
            		}
            		else {
HXLINE( 196)			floatValue = null();
            		}
HXLINE( 197)		::Array< int > intValue;
HXDLIN( 197)		if (this->_hx___isInt) {
HXLINE( 197)			intValue = value;
            		}
            		else {
HXLINE( 197)			intValue = null();
            		}
HXLINE( 199)		if (this->_hx___isUniform) {
HXLINE( 201)			bool _hx_tmp;
HXDLIN( 201)			if (::hx::IsNotNull( value )) {
HXLINE( 201)				_hx_tmp = (value->length >= this->__length);
            			}
            			else {
HXLINE( 201)				_hx_tmp = false;
            			}
HXDLIN( 201)			if (_hx_tmp) {
HXLINE( 203)				 ::Dynamic _hx_switch_0 = this->type;
            				if (  (_hx_switch_0==0) ){
HXLINE( 206)					int _hx_tmp;
HXDLIN( 206)					if (boolValue->__get(0)) {
HXLINE( 206)						_hx_tmp = 1;
            					}
            					else {
HXLINE( 206)						_hx_tmp = 0;
            					}
HXDLIN( 206)					gl->uniform1i(( (int)(this->index) ),_hx_tmp);
HXDLIN( 206)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE( 208)					int _hx_tmp;
HXDLIN( 208)					if (boolValue->__get(0)) {
HXLINE( 208)						_hx_tmp = 1;
            					}
            					else {
HXLINE( 208)						_hx_tmp = 0;
            					}
HXDLIN( 208)					int _hx_tmp1;
HXDLIN( 208)					if (boolValue->__get(1)) {
HXLINE( 208)						_hx_tmp1 = 1;
            					}
            					else {
HXLINE( 208)						_hx_tmp1 = 0;
            					}
HXDLIN( 208)					gl->uniform2i(( (int)(this->index) ),_hx_tmp,_hx_tmp1);
HXDLIN( 208)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE( 210)					int _hx_tmp;
HXDLIN( 210)					if (boolValue->__get(0)) {
HXLINE( 210)						_hx_tmp = 1;
            					}
            					else {
HXLINE( 210)						_hx_tmp = 0;
            					}
HXDLIN( 210)					int _hx_tmp1;
HXDLIN( 210)					if (boolValue->__get(1)) {
HXLINE( 210)						_hx_tmp1 = 1;
            					}
            					else {
HXLINE( 210)						_hx_tmp1 = 0;
            					}
HXDLIN( 210)					int _hx_tmp2;
HXDLIN( 210)					if (boolValue->__get(2)) {
HXLINE( 210)						_hx_tmp2 = 1;
            					}
            					else {
HXLINE( 210)						_hx_tmp2 = 0;
            					}
HXDLIN( 210)					gl->uniform3i(( (int)(this->index) ),_hx_tmp,_hx_tmp1,_hx_tmp2);
HXDLIN( 210)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE( 212)					int _hx_tmp;
HXDLIN( 212)					if (boolValue->__get(0)) {
HXLINE( 212)						_hx_tmp = 1;
            					}
            					else {
HXLINE( 212)						_hx_tmp = 0;
            					}
HXDLIN( 212)					int _hx_tmp1;
HXDLIN( 212)					if (boolValue->__get(1)) {
HXLINE( 212)						_hx_tmp1 = 1;
            					}
            					else {
HXLINE( 212)						_hx_tmp1 = 0;
            					}
HXDLIN( 212)					int _hx_tmp2;
HXDLIN( 212)					if (boolValue->__get(2)) {
HXLINE( 212)						_hx_tmp2 = 1;
            					}
            					else {
HXLINE( 212)						_hx_tmp2 = 0;
            					}
HXDLIN( 212)					int _hx_tmp3;
HXDLIN( 212)					if (boolValue->__get(3)) {
HXLINE( 212)						_hx_tmp3 = 1;
            					}
            					else {
HXLINE( 212)						_hx_tmp3 = 0;
            					}
HXDLIN( 212)					gl->uniform4i(( (int)(this->index) ),_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3);
HXDLIN( 212)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==4) ){
HXLINE( 214)					gl->uniform1f(( (int)(this->index) ),floatValue->__get(0));
HXDLIN( 214)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==5) ){
HXLINE( 216)					gl->uniform2f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1));
HXDLIN( 216)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==6) ){
HXLINE( 218)					gl->uniform3f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2));
HXDLIN( 218)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==7) ){
HXLINE( 220)					gl->uniform4f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2),floatValue->__get(3));
HXDLIN( 220)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==8) ){
HXLINE( 252)					gl->uniform1i(( (int)(this->index) ),intValue->__get(0));
HXDLIN( 252)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==9) ){
HXLINE( 254)					gl->uniform2i(( (int)(this->index) ),intValue->__get(0),intValue->__get(1));
HXDLIN( 254)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==10) ){
HXLINE( 256)					gl->uniform3i(( (int)(this->index) ),intValue->__get(0),intValue->__get(1),intValue->__get(2));
HXDLIN( 256)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==11) ){
HXLINE( 258)					gl->uniform4i(( (int)(this->index) ),intValue->__get(0),intValue->__get(1),intValue->__get(2),intValue->__get(3));
HXDLIN( 258)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==12) ){
HXLINE( 223)					{
HXLINE( 225)						{
HXLINE( 225)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 225)							Float val = floatValue->__get(0);
HXDLIN( 225)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 225)						{
HXLINE( 225)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 225)							Float val1 = floatValue->__get(1);
HXDLIN( 225)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 225)						{
HXLINE( 225)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 225)							Float val2 = floatValue->__get(2);
HXDLIN( 225)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 225)						{
HXLINE( 225)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 225)							Float val3 = floatValue->__get(3);
HXDLIN( 225)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
            					}
HXLINE( 227)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix2fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 222)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==16) ){
HXLINE( 234)					{
HXLINE( 236)						{
HXLINE( 236)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 236)							Float val = floatValue->__get(0);
HXDLIN( 236)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 236)						{
HXLINE( 236)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 236)							Float val1 = floatValue->__get(1);
HXDLIN( 236)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 236)						{
HXLINE( 236)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 236)							Float val2 = floatValue->__get(2);
HXDLIN( 236)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 236)						{
HXLINE( 236)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 236)							Float val3 = floatValue->__get(3);
HXDLIN( 236)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
HXDLIN( 236)						{
HXLINE( 236)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 236)							Float val4 = floatValue->__get(4);
HXDLIN( 236)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),val4);
            						}
HXDLIN( 236)						{
HXLINE( 236)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 236)							Float val5 = floatValue->__get(5);
HXDLIN( 236)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),val5);
            						}
HXDLIN( 236)						{
HXLINE( 236)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 236)							Float val6 = floatValue->__get(6);
HXDLIN( 236)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),val6);
            						}
HXDLIN( 236)						{
HXLINE( 236)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 236)							Float val7 = floatValue->__get(7);
HXDLIN( 236)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),val7);
            						}
HXDLIN( 236)						{
HXLINE( 236)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 236)							Float val8 = floatValue->__get(8);
HXDLIN( 236)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),val8);
            						}
            					}
HXLINE( 238)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix3fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 233)					goto _hx_goto_3;
            				}
            				if (  (_hx_switch_0==20) ){
HXLINE( 245)					{
HXLINE( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val = floatValue->__get(0);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val1 = floatValue->__get(1);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val2 = floatValue->__get(2);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val3 = floatValue->__get(3);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val4 = floatValue->__get(4);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),val4);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val5 = floatValue->__get(5);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),val5);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val6 = floatValue->__get(6);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),val6);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val7 = floatValue->__get(7);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),val7);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val8 = floatValue->__get(8);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),val8);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this10 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val9 = floatValue->__get(9);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this10->buffer->b,(this10->byteOffset + 36),val9);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this11 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val10 = floatValue->__get(10);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this11->buffer->b,(this11->byteOffset + 40),val10);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this12 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val11 = floatValue->__get(11);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this12->buffer->b,(this12->byteOffset + 44),val11);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this13 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val12 = floatValue->__get(12);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this13->buffer->b,(this13->byteOffset + 48),val12);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this14 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val13 = floatValue->__get(13);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this14->buffer->b,(this14->byteOffset + 52),val13);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this15 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val14 = floatValue->__get(14);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this15->buffer->b,(this15->byteOffset + 56),val14);
            						}
HXDLIN( 247)						{
HXLINE( 247)							 ::lime::utils::ArrayBufferView this16 = this->_hx___uniformMatrix;
HXDLIN( 247)							Float val15 = floatValue->__get(15);
HXDLIN( 247)							 ::__hxcpp_memory_set_float(this16->buffer->b,(this16->byteOffset + 60),val15);
            						}
            					}
HXLINE( 249)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix4fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 244)					goto _hx_goto_3;
            				}
            				/* default */{
            				}
            				_hx_goto_3:;
            			}
            			else {
HXLINE( 265)				 ::Dynamic _hx_switch_1 = this->type;
            				if (  (_hx_switch_1==1) ||  (_hx_switch_1==9) ){
HXLINE( 270)					gl->uniform2i(( (int)(this->index) ),0,0);
HXDLIN( 270)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==3) ||  (_hx_switch_1==11) ){
HXLINE( 274)					gl->uniform4i(( (int)(this->index) ),0,0,0,0);
HXDLIN( 274)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==4) ){
HXLINE( 276)					gl->uniform1f(( (int)(this->index) ),( (Float)(0) ));
HXDLIN( 276)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==5) ){
HXLINE( 278)					gl->uniform2f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 278)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==6) ){
HXLINE( 280)					gl->uniform3f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 280)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==7) ){
HXLINE( 282)					gl->uniform4f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 282)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==0) ||  (_hx_switch_1==8) ){
HXLINE( 268)					gl->uniform1i(( (int)(this->index) ),0);
HXDLIN( 268)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==2) ||  (_hx_switch_1==10) ){
HXLINE( 272)					gl->uniform3i(( (int)(this->index) ),0,0,0);
HXDLIN( 272)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==12) ){
HXLINE( 285)					{
HXLINE( 287)						{
HXLINE( 287)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 287)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,0);
            						}
HXDLIN( 287)						{
HXLINE( 287)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 287)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),0);
            						}
HXDLIN( 287)						{
HXLINE( 287)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 287)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),0);
            						}
HXDLIN( 287)						{
HXLINE( 287)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 287)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),0);
            						}
            					}
HXLINE( 289)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix2fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 284)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==16) ){
HXLINE( 296)					{
HXLINE( 298)						{
HXLINE( 298)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 298)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,0);
            						}
HXDLIN( 298)						{
HXLINE( 298)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 298)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),0);
            						}
HXDLIN( 298)						{
HXLINE( 298)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 298)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),0);
            						}
HXDLIN( 298)						{
HXLINE( 298)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 298)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),0);
            						}
HXDLIN( 298)						{
HXLINE( 298)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 298)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),0);
            						}
HXDLIN( 298)						{
HXLINE( 298)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 298)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),0);
            						}
HXDLIN( 298)						{
HXLINE( 298)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 298)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),0);
            						}
HXDLIN( 298)						{
HXLINE( 298)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 298)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),0);
            						}
HXDLIN( 298)						{
HXLINE( 298)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 298)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),0);
            						}
            					}
HXLINE( 300)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix3fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 295)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_1==20) ){
HXLINE( 307)					{
HXLINE( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this10 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this10->buffer->b,(this10->byteOffset + 36),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this11 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this11->buffer->b,(this11->byteOffset + 40),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this12 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this12->buffer->b,(this12->byteOffset + 44),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this13 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this13->buffer->b,(this13->byteOffset + 48),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this14 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this14->buffer->b,(this14->byteOffset + 52),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this15 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this15->buffer->b,(this15->byteOffset + 56),0);
            						}
HXDLIN( 309)						{
HXLINE( 309)							 ::lime::utils::ArrayBufferView this16 = this->_hx___uniformMatrix;
HXDLIN( 309)							 ::__hxcpp_memory_set_float(this16->buffer->b,(this16->byteOffset + 60),0);
            						}
            					}
HXLINE( 311)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix4fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 306)					goto _hx_goto_4;
            				}
            				/* default */{
            				}
            				_hx_goto_4:;
            			}
            		}
            		else {
HXLINE( 319)			bool _hx_tmp;
HXDLIN( 319)			if (!(this->_hx___useArray)) {
HXLINE( 319)				if (::hx::IsNotNull( value )) {
HXLINE( 319)					_hx_tmp = (value->length == this->__length);
            				}
            				else {
HXLINE( 319)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 319)				_hx_tmp = false;
            			}
HXDLIN( 319)			if (_hx_tmp) {
HXLINE( 321)				{
HXLINE( 321)					int _g = 0;
HXDLIN( 321)					int _g1 = this->_hx___arrayLength;
HXDLIN( 321)					while((_g < _g1)){
HXLINE( 321)						_g = (_g + 1);
HXDLIN( 321)						int i = (_g - 1);
HXLINE( 323)						gl->disableVertexAttribArray(( (int)((this->index + i)) ));
            					}
            				}
HXLINE( 326)				if (::hx::IsNotNull( value )) {
HXLINE( 328)					 ::Dynamic _hx_switch_2 = this->type;
            					if (  (_hx_switch_2==0) ){
HXLINE( 331)						Float _hx_tmp;
HXDLIN( 331)						if (boolValue->__get(0)) {
HXLINE( 331)							_hx_tmp = ( (Float)(1) );
            						}
            						else {
HXLINE( 331)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 331)						gl->vertexAttrib1f(( (int)(this->index) ),_hx_tmp);
HXDLIN( 331)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==1) ){
HXLINE( 333)						Float _hx_tmp;
HXDLIN( 333)						if (boolValue->__get(0)) {
HXLINE( 333)							_hx_tmp = ( (Float)(1) );
            						}
            						else {
HXLINE( 333)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 333)						Float _hx_tmp1;
HXDLIN( 333)						if (boolValue->__get(1)) {
HXLINE( 333)							_hx_tmp1 = ( (Float)(1) );
            						}
            						else {
HXLINE( 333)							_hx_tmp1 = ( (Float)(0) );
            						}
HXDLIN( 333)						gl->vertexAttrib2f(( (int)(this->index) ),_hx_tmp,_hx_tmp1);
HXDLIN( 333)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==2) ){
HXLINE( 335)						Float _hx_tmp;
HXDLIN( 335)						if (boolValue->__get(0)) {
HXLINE( 335)							_hx_tmp = ( (Float)(1) );
            						}
            						else {
HXLINE( 335)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 335)						Float _hx_tmp1;
HXDLIN( 335)						if (boolValue->__get(1)) {
HXLINE( 335)							_hx_tmp1 = ( (Float)(1) );
            						}
            						else {
HXLINE( 335)							_hx_tmp1 = ( (Float)(0) );
            						}
HXDLIN( 335)						Float _hx_tmp2;
HXDLIN( 335)						if (boolValue->__get(2)) {
HXLINE( 335)							_hx_tmp2 = ( (Float)(1) );
            						}
            						else {
HXLINE( 335)							_hx_tmp2 = ( (Float)(0) );
            						}
HXDLIN( 335)						gl->vertexAttrib3f(( (int)(this->index) ),_hx_tmp,_hx_tmp1,_hx_tmp2);
HXDLIN( 335)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==3) ){
HXLINE( 337)						Float _hx_tmp;
HXDLIN( 337)						if (boolValue->__get(0)) {
HXLINE( 337)							_hx_tmp = ( (Float)(1) );
            						}
            						else {
HXLINE( 337)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 337)						Float _hx_tmp1;
HXDLIN( 337)						if (boolValue->__get(1)) {
HXLINE( 337)							_hx_tmp1 = ( (Float)(1) );
            						}
            						else {
HXLINE( 337)							_hx_tmp1 = ( (Float)(0) );
            						}
HXDLIN( 337)						Float _hx_tmp2;
HXDLIN( 337)						if (boolValue->__get(2)) {
HXLINE( 337)							_hx_tmp2 = ( (Float)(1) );
            						}
            						else {
HXLINE( 337)							_hx_tmp2 = ( (Float)(0) );
            						}
HXDLIN( 337)						Float _hx_tmp3;
HXDLIN( 337)						if (boolValue->__get(3)) {
HXLINE( 337)							_hx_tmp3 = ( (Float)(1) );
            						}
            						else {
HXLINE( 337)							_hx_tmp3 = ( (Float)(0) );
            						}
HXDLIN( 337)						gl->vertexAttrib4f(( (int)(this->index) ),_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3);
HXDLIN( 337)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==4) ){
HXLINE( 339)						gl->vertexAttrib1f(( (int)(this->index) ),floatValue->__get(0));
HXDLIN( 339)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==5) ){
HXLINE( 341)						gl->vertexAttrib2f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1));
HXDLIN( 341)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==6) ){
HXLINE( 343)						gl->vertexAttrib3f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2));
HXDLIN( 343)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==7) ){
HXLINE( 345)						gl->vertexAttrib4f(( (int)(this->index) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2),floatValue->__get(3));
HXDLIN( 345)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==8) ){
HXLINE( 366)						gl->vertexAttrib1f(( (int)(this->index) ),( (Float)(intValue->__get(0)) ));
HXDLIN( 366)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==9) ){
HXLINE( 368)						gl->vertexAttrib2f(( (int)(this->index) ),( (Float)(intValue->__get(0)) ),( (Float)(intValue->__get(1)) ));
HXDLIN( 368)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==10) ){
HXLINE( 370)						gl->vertexAttrib3f(( (int)(this->index) ),( (Float)(intValue->__get(0)) ),( (Float)(intValue->__get(1)) ),( (Float)(intValue->__get(2)) ));
HXDLIN( 370)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==11) ){
HXLINE( 372)						gl->vertexAttrib4f(( (int)(this->index) ),( (Float)(intValue->__get(0)) ),( (Float)(intValue->__get(1)) ),( (Float)(intValue->__get(2)) ),( (Float)(intValue->__get(3)) ));
HXDLIN( 372)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==12) ){
HXLINE( 350)						gl->vertexAttrib2f(( (int)((this->index + 0)) ),floatValue->__get(0),floatValue->__get(1));
HXDLIN( 350)						gl->vertexAttrib2f(( (int)((this->index + 1)) ),floatValue->__get(2),floatValue->__get(3));
HXLINE( 348)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==16) ){
HXLINE( 356)						gl->vertexAttrib3f(( (int)((this->index + 0)) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2));
HXDLIN( 356)						gl->vertexAttrib3f(( (int)((this->index + 1)) ),floatValue->__get(3),floatValue->__get(4),floatValue->__get(5));
HXDLIN( 356)						gl->vertexAttrib3f(( (int)((this->index + 2)) ),floatValue->__get(6),floatValue->__get(7),floatValue->__get(8));
HXLINE( 354)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_2==20) ){
HXLINE( 362)						gl->vertexAttrib4f(( (int)((this->index + 0)) ),floatValue->__get(0),floatValue->__get(1),floatValue->__get(2),floatValue->__get(3));
HXDLIN( 362)						gl->vertexAttrib4f(( (int)((this->index + 1)) ),floatValue->__get(4),floatValue->__get(5),floatValue->__get(6),floatValue->__get(7));
HXDLIN( 362)						gl->vertexAttrib4f(( (int)((this->index + 2)) ),floatValue->__get(8),floatValue->__get(9),floatValue->__get(10),floatValue->__get(11));
HXDLIN( 362)						gl->vertexAttrib4f(( (int)((this->index + 3)) ),floatValue->__get(12),floatValue->__get(13),floatValue->__get(14),floatValue->__get(15));
HXLINE( 360)						goto _hx_goto_6;
            					}
            					/* default */{
            					}
            					_hx_goto_6:;
            				}
            				else {
HXLINE( 378)					 ::Dynamic _hx_switch_3 = this->type;
            					if (  (_hx_switch_3==1) ||  (_hx_switch_3==5) ||  (_hx_switch_3==9) ){
HXLINE( 383)						gl->vertexAttrib2f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 383)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==3) ||  (_hx_switch_3==7) ||  (_hx_switch_3==11) ){
HXLINE( 387)						gl->vertexAttrib4f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 387)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==0) ||  (_hx_switch_3==4) ||  (_hx_switch_3==8) ){
HXLINE( 381)						gl->vertexAttrib1f(( (int)(this->index) ),( (Float)(0) ));
HXDLIN( 381)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==2) ||  (_hx_switch_3==6) ||  (_hx_switch_3==10) ){
HXLINE( 385)						gl->vertexAttrib3f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 385)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==12) ){
HXLINE( 392)						gl->vertexAttrib2f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 392)						gl->vertexAttrib2f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 390)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==16) ){
HXLINE( 398)						gl->vertexAttrib3f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 398)						gl->vertexAttrib3f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 398)						gl->vertexAttrib3f(( (int)((this->index + 2)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 396)						goto _hx_goto_7;
            					}
            					if (  (_hx_switch_3==20) ){
HXLINE( 404)						gl->vertexAttrib4f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 404)						gl->vertexAttrib4f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 404)						gl->vertexAttrib4f(( (int)((this->index + 2)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 404)						gl->vertexAttrib4f(( (int)((this->index + 3)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 402)						goto _hx_goto_7;
            					}
            					/* default */{
            					}
            					_hx_goto_7:;
            				}
            			}
            			else {
HXLINE( 413)				int _g = 0;
HXDLIN( 413)				int _g1 = this->_hx___arrayLength;
HXDLIN( 413)				while((_g < _g1)){
HXLINE( 413)					_g = (_g + 1);
HXDLIN( 413)					int i = (_g - 1);
HXLINE( 415)					gl->enableVertexAttribArray(( (int)((this->index + i)) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ShaderParameter_Bool_obj,_hx___updateGL,(void))

void ShaderParameter_Bool_obj::_hx___updateGLFromBuffer( ::openfl::display3D::Context3D context, ::lime::utils::ArrayBufferView buffer,int position,int length,int bufferOffset){
            	HX_STACKFRAME(&_hx_pos_abe7b394d2d5e035_423___updateGLFromBuffer)
HXLINE( 424)		if (::hx::IsLess( this->index,0 )) {
HXLINE( 424)			return;
            		}
HXLINE( 427)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 429)		if (this->_hx___isUniform) {
HXLINE( 431)			if ((length >= this->__length)) {
HXLINE( 433)				 ::Dynamic _hx_switch_0 = this->type;
            				if (  (_hx_switch_0==1) ||  (_hx_switch_0==9) ){
HXLINE( 438)					int location = ( (int)(this->index) );
HXDLIN( 438)					int v0 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4))));
HXDLIN( 438)					gl->uniform2i(location,v0,::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)))));
HXDLIN( 438)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==3) ||  (_hx_switch_0==11) ){
HXLINE( 442)					int location = ( (int)(this->index) );
HXDLIN( 442)					int v0 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4))));
HXDLIN( 442)					int v1 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4))));
HXDLIN( 442)					int v2 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4))));
HXDLIN( 442)					gl->uniform4i(location,v0,v1,v2,::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4)))));
HXDLIN( 442)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==4) ){
HXLINE( 445)					int location = ( (int)(this->index) );
HXDLIN( 445)					gl->uniform1f(location, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4))));
HXDLIN( 445)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==5) ){
HXLINE( 447)					int location = ( (int)(this->index) );
HXDLIN( 447)					Float v0 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 447)					gl->uniform2f(location,v0, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4))));
HXDLIN( 447)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==6) ){
HXLINE( 449)					int location = ( (int)(this->index) );
HXDLIN( 449)					Float v0 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 449)					Float v1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 449)					gl->uniform3f(location,v0,v1, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4))));
HXDLIN( 449)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==7) ){
HXLINE( 451)					int location = ( (int)(this->index) );
HXDLIN( 451)					Float v0 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 451)					Float v1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 451)					Float v2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 451)					gl->uniform4f(location,v0,v1,v2, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4))));
HXDLIN( 451)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==0) ||  (_hx_switch_0==8) ){
HXLINE( 436)					int location = ( (int)(this->index) );
HXDLIN( 436)					gl->uniform1i(location,::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)))));
HXDLIN( 436)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==2) ||  (_hx_switch_0==10) ){
HXLINE( 440)					int location = ( (int)(this->index) );
HXDLIN( 440)					int v0 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4))));
HXDLIN( 440)					int v1 = ::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4))));
HXDLIN( 440)					gl->uniform3i(location,v0,v1,::Std_obj::_hx_int( ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)))));
HXDLIN( 440)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==12) ){
HXLINE( 454)					{
HXLINE( 456)						{
HXLINE( 456)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 456)							Float val =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 456)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 456)						{
HXLINE( 456)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 456)							Float val1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 456)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 456)						{
HXLINE( 456)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 456)							Float val2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 456)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 456)						{
HXLINE( 456)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 456)							Float val3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4)));
HXDLIN( 456)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
            					}
HXLINE( 458)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix2fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 453)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==16) ){
HXLINE( 465)					{
HXLINE( 467)						{
HXLINE( 467)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 467)							Float val =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 467)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 467)						{
HXLINE( 467)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 467)							Float val1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 467)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 467)						{
HXLINE( 467)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 467)							Float val2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 467)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 467)						{
HXLINE( 467)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 467)							Float val3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4)));
HXDLIN( 467)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
HXDLIN( 467)						{
HXLINE( 467)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 467)							Float val4 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 4) * 4)));
HXDLIN( 467)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),val4);
            						}
HXDLIN( 467)						{
HXLINE( 467)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 467)							Float val5 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 5) * 4)));
HXDLIN( 467)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),val5);
            						}
HXDLIN( 467)						{
HXLINE( 467)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 467)							Float val6 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 6) * 4)));
HXDLIN( 467)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),val6);
            						}
HXDLIN( 467)						{
HXLINE( 467)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 467)							Float val7 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 7) * 4)));
HXDLIN( 467)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),val7);
            						}
HXDLIN( 467)						{
HXLINE( 467)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 467)							Float val8 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 8) * 4)));
HXDLIN( 467)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),val8);
            						}
            					}
HXLINE( 469)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix3fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 464)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==20) ){
HXLINE( 476)					{
HXLINE( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this1 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this2 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this2->buffer->b,(this2->byteOffset + 4),val1);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this3 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this3->buffer->b,(this3->byteOffset + 8),val2);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this4 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this4->buffer->b,(this4->byteOffset + 12),val3);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this5 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val4 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 4) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this5->buffer->b,(this5->byteOffset + 16),val4);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this6 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val5 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 5) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this6->buffer->b,(this6->byteOffset + 20),val5);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this7 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val6 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 6) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this7->buffer->b,(this7->byteOffset + 24),val6);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this8 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val7 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 7) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this8->buffer->b,(this8->byteOffset + 28),val7);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this9 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val8 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 8) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this9->buffer->b,(this9->byteOffset + 32),val8);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this10 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val9 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 9) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this10->buffer->b,(this10->byteOffset + 36),val9);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this11 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val10 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 10) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this11->buffer->b,(this11->byteOffset + 40),val10);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this12 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val11 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 11) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this12->buffer->b,(this12->byteOffset + 44),val11);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this13 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val12 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 12) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this13->buffer->b,(this13->byteOffset + 48),val12);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this14 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val13 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 13) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this14->buffer->b,(this14->byteOffset + 52),val13);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this15 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val14 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 14) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this15->buffer->b,(this15->byteOffset + 56),val14);
            						}
HXDLIN( 478)						{
HXLINE( 478)							 ::lime::utils::ArrayBufferView this16 = this->_hx___uniformMatrix;
HXDLIN( 478)							Float val15 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 15) * 4)));
HXDLIN( 478)							 ::__hxcpp_memory_set_float(this16->buffer->b,(this16->byteOffset + 60),val15);
            						}
            					}
HXLINE( 480)					::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::uniformMatrix4fv(gl,( (int)(this->index) ),false,this->_hx___uniformMatrix);
HXLINE( 475)					goto _hx_goto_10;
            				}
            				/* default */{
            				}
            				_hx_goto_10:;
            			}
            		}
            		else {
HXLINE( 488)			bool _hx_tmp;
HXDLIN( 488)			if (!(this->_hx___internal)) {
HXLINE( 488)				if ((length != 0)) {
HXLINE( 488)					_hx_tmp = (length == this->__length);
            				}
            				else {
HXLINE( 488)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 488)				_hx_tmp = false;
            			}
HXDLIN( 488)			if (_hx_tmp) {
HXLINE( 490)				{
HXLINE( 490)					int _g = 0;
HXDLIN( 490)					int _g1 = this->_hx___arrayLength;
HXDLIN( 490)					while((_g < _g1)){
HXLINE( 490)						_g = (_g + 1);
HXDLIN( 490)						int i = (_g - 1);
HXLINE( 492)						gl->disableVertexAttribArray(( (int)((this->index + i)) ));
            					}
            				}
HXLINE( 495)				if ((length > 0)) {
HXLINE( 497)					 ::Dynamic _hx_switch_1 = this->type;
            					if (  (_hx_switch_1==1) ||  (_hx_switch_1==5) ||  (_hx_switch_1==9) ){
HXLINE( 502)						int indx = ( (int)(this->index) );
HXDLIN( 502)						Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 502)						gl->vertexAttrib2f(indx,x, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4))));
HXDLIN( 502)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==3) ||  (_hx_switch_1==7) ||  (_hx_switch_1==11) ){
HXLINE( 506)						int indx = ( (int)(this->index) );
HXDLIN( 506)						Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 506)						Float y =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 506)						Float z =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 506)						gl->vertexAttrib4f(indx,x,y,z, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4))));
HXDLIN( 506)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==0) ||  (_hx_switch_1==4) ||  (_hx_switch_1==8) ){
HXLINE( 500)						int indx = ( (int)(this->index) );
HXDLIN( 500)						gl->vertexAttrib1f(indx, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4))));
HXDLIN( 500)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==2) ||  (_hx_switch_1==6) ||  (_hx_switch_1==10) ){
HXLINE( 504)						int indx = ( (int)(this->index) );
HXDLIN( 504)						Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 504)						Float y =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 504)						gl->vertexAttrib3f(indx,x,y, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4))));
HXDLIN( 504)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==12) ){
HXLINE( 511)						{
HXLINE( 511)							int indx = ( (int)((this->index + 0)) );
HXDLIN( 511)							Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 511)							gl->vertexAttrib2f(indx,x, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4))));
            						}
HXDLIN( 511)						{
HXLINE( 511)							int indx1 = ( (int)((this->index + 1)) );
HXDLIN( 511)							Float x1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 511)							gl->vertexAttrib2f(indx1,x1, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 2) + 1) * 4))));
            						}
HXLINE( 509)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==16) ){
HXLINE( 517)						{
HXLINE( 517)							int indx = ( (int)((this->index + 0)) );
HXDLIN( 517)							Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 517)							Float y =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 517)							gl->vertexAttrib3f(indx,x,y, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4))));
            						}
HXDLIN( 517)						{
HXLINE( 517)							int indx1 = ( (int)((this->index + 1)) );
HXDLIN( 517)							Float x1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4)));
HXDLIN( 517)							Float y1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 3) + 1) * 4)));
HXDLIN( 517)							gl->vertexAttrib3f(indx1,x1,y1, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 3) + 2) * 4))));
            						}
HXDLIN( 517)						{
HXLINE( 517)							int indx2 = ( (int)((this->index + 2)) );
HXDLIN( 517)							Float x2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 6) * 4)));
HXDLIN( 517)							Float y2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 6) + 1) * 4)));
HXDLIN( 517)							gl->vertexAttrib3f(indx2,x2,y2, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 6) + 2) * 4))));
            						}
HXLINE( 515)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==20) ){
HXLINE( 523)						{
HXLINE( 523)							int indx = ( (int)((this->index + 0)) );
HXDLIN( 523)							Float x =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (position * 4)));
HXDLIN( 523)							Float y =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 1) * 4)));
HXDLIN( 523)							Float z =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 2) * 4)));
HXDLIN( 523)							gl->vertexAttrib4f(indx,x,y,z, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 3) * 4))));
            						}
HXDLIN( 523)						{
HXLINE( 523)							int indx1 = ( (int)((this->index + 1)) );
HXDLIN( 523)							Float x1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 4) * 4)));
HXDLIN( 523)							Float y1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 4) + 1) * 4)));
HXDLIN( 523)							Float z1 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 4) + 2) * 4)));
HXDLIN( 523)							gl->vertexAttrib4f(indx1,x1,y1,z1, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 4) + 3) * 4))));
            						}
HXDLIN( 523)						{
HXLINE( 523)							int indx2 = ( (int)((this->index + 2)) );
HXDLIN( 523)							Float x2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 8) * 4)));
HXDLIN( 523)							Float y2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 8) + 1) * 4)));
HXDLIN( 523)							Float z2 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 8) + 2) * 4)));
HXDLIN( 523)							gl->vertexAttrib4f(indx2,x2,y2,z2, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 8) + 3) * 4))));
            						}
HXDLIN( 523)						{
HXLINE( 523)							int indx3 = ( (int)((this->index + 3)) );
HXDLIN( 523)							Float x3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + ((position + 12) * 4)));
HXDLIN( 523)							Float y3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 12) + 1) * 4)));
HXDLIN( 523)							Float z3 =  ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 12) + 2) * 4)));
HXDLIN( 523)							gl->vertexAttrib4f(indx3,x3,y3,z3, ::__hxcpp_memory_get_float(buffer->buffer->b,(buffer->byteOffset + (((position + 12) + 3) * 4))));
            						}
HXLINE( 521)						goto _hx_goto_12;
            					}
            					/* default */{
            					}
            					_hx_goto_12:;
            				}
            				else {
HXLINE( 532)					 ::Dynamic _hx_switch_2 = this->type;
            					if (  (_hx_switch_2==1) ||  (_hx_switch_2==5) ||  (_hx_switch_2==9) ){
HXLINE( 537)						gl->vertexAttrib2f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 537)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==3) ||  (_hx_switch_2==7) ||  (_hx_switch_2==11) ){
HXLINE( 541)						gl->vertexAttrib4f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 541)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==0) ||  (_hx_switch_2==4) ||  (_hx_switch_2==8) ){
HXLINE( 535)						gl->vertexAttrib1f(( (int)(this->index) ),( (Float)(0) ));
HXDLIN( 535)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==2) ||  (_hx_switch_2==6) ||  (_hx_switch_2==10) ){
HXLINE( 539)						gl->vertexAttrib3f(( (int)(this->index) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 539)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==12) ){
HXLINE( 546)						gl->vertexAttrib2f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 546)						gl->vertexAttrib2f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 544)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==16) ){
HXLINE( 552)						gl->vertexAttrib3f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 552)						gl->vertexAttrib3f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 552)						gl->vertexAttrib3f(( (int)((this->index + 2)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 550)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==20) ){
HXLINE( 558)						gl->vertexAttrib4f(( (int)((this->index + 0)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 558)						gl->vertexAttrib4f(( (int)((this->index + 1)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 558)						gl->vertexAttrib4f(( (int)((this->index + 2)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXDLIN( 558)						gl->vertexAttrib4f(( (int)((this->index + 3)) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 556)						goto _hx_goto_13;
            					}
            					/* default */{
            					}
            					_hx_goto_13:;
            				}
            			}
            			else {
HXLINE( 567)				int type = gl->FLOAT;
HXLINE( 568)				if (this->_hx___isBool) {
HXLINE( 568)					type = gl->INT;
            				}
            				else {
HXLINE( 569)					if (this->_hx___isInt) {
HXLINE( 569)						type = gl->INT;
            					}
            				}
HXLINE( 571)				{
HXLINE( 571)					int _g = 0;
HXDLIN( 571)					int _g1 = this->_hx___arrayLength;
HXDLIN( 571)					while((_g < _g1)){
HXLINE( 571)						_g = (_g + 1);
HXDLIN( 571)						int i = (_g - 1);
HXLINE( 573)						gl->enableVertexAttribArray(( (int)((this->index + i)) ));
            					}
            				}
HXLINE( 576)				if ((length > 0)) {
HXLINE( 578)					int _g = 0;
HXDLIN( 578)					int _g1 = this->_hx___arrayLength;
HXDLIN( 578)					while((_g < _g1)){
HXLINE( 578)						_g = (_g + 1);
HXDLIN( 578)						int i = (_g - 1);
HXLINE( 580)						{
HXLINE( 580)							int indx = ( (int)((this->index + i)) );
HXDLIN( 580)							int size = this->__length;
HXDLIN( 580)							int stride = (this->__length * 4);
HXDLIN( 580)							gl->vertexAttribPointer(indx,size,type,false,stride,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((((position + (bufferOffset * this->__length)) + (i * this->_hx___arrayLength)) * 4)));
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(ShaderParameter_Bool_obj,_hx___updateGLFromBuffer,(void))

::String ShaderParameter_Bool_obj::set_name(::String value){
            	HX_STACKFRAME(&_hx_pos_abe7b394d2d5e035_591_set_name)
HXLINE( 592)		this->_hx___internal = ::StringTools_obj::startsWith(value,HX_("openfl_",cf,ba,42,40));
HXLINE( 593)		return (this->name = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderParameter_Bool_obj,set_name,return )


::hx::ObjectPtr< ShaderParameter_Bool_obj > ShaderParameter_Bool_obj::__new() {
	::hx::ObjectPtr< ShaderParameter_Bool_obj > __this = new ShaderParameter_Bool_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ShaderParameter_Bool_obj > ShaderParameter_Bool_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ShaderParameter_Bool_obj *__this = (ShaderParameter_Bool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderParameter_Bool_obj), true, "openfl.display.ShaderParameter_Bool"));
	*(void **)__this = ShaderParameter_Bool_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ShaderParameter_Bool_obj::ShaderParameter_Bool_obj()
{
}

void ShaderParameter_Bool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderParameter_Bool);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_hx___arrayLength,"__arrayLength");
	HX_MARK_MEMBER_NAME(_hx___internal,"__internal");
	HX_MARK_MEMBER_NAME(_hx___isBool,"__isBool");
	HX_MARK_MEMBER_NAME(_hx___isFloat,"__isFloat");
	HX_MARK_MEMBER_NAME(_hx___isInt,"__isInt");
	HX_MARK_MEMBER_NAME(_hx___isUniform,"__isUniform");
	HX_MARK_MEMBER_NAME(__length,"__length");
	HX_MARK_MEMBER_NAME(_hx___uniformMatrix,"__uniformMatrix");
	HX_MARK_MEMBER_NAME(_hx___useArray,"__useArray");
	HX_MARK_END_CLASS();
}

void ShaderParameter_Bool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_hx___arrayLength,"__arrayLength");
	HX_VISIT_MEMBER_NAME(_hx___internal,"__internal");
	HX_VISIT_MEMBER_NAME(_hx___isBool,"__isBool");
	HX_VISIT_MEMBER_NAME(_hx___isFloat,"__isFloat");
	HX_VISIT_MEMBER_NAME(_hx___isInt,"__isInt");
	HX_VISIT_MEMBER_NAME(_hx___isUniform,"__isUniform");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	HX_VISIT_MEMBER_NAME(_hx___uniformMatrix,"__uniformMatrix");
	HX_VISIT_MEMBER_NAME(_hx___useArray,"__useArray");
}

::hx::Val ShaderParameter_Bool_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__isInt") ) { return ::hx::Val( _hx___isInt ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__isBool") ) { return ::hx::Val( _hx___isBool ); }
		if (HX_FIELD_EQ(inName,"__length") ) { return ::hx::Val( __length ); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return ::hx::Val( set_name_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isFloat") ) { return ::hx::Val( _hx___isFloat ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__internal") ) { return ::hx::Val( _hx___internal ); }
		if (HX_FIELD_EQ(inName,"__useArray") ) { return ::hx::Val( _hx___useArray ); }
		if (HX_FIELD_EQ(inName,"__updateGL") ) { return ::hx::Val( _hx___updateGL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { return ::hx::Val( _hx___isUniform ); }
		if (HX_FIELD_EQ(inName,"__disableGL") ) { return ::hx::Val( _hx___disableGL_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__arrayLength") ) { return ::hx::Val( _hx___arrayLength ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uniformMatrix") ) { return ::hx::Val( _hx___uniformMatrix ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__updateGLFromBuffer") ) { return ::hx::Val( _hx___updateGLFromBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ShaderParameter_Bool_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_name(inValue.Cast< ::String >()) );name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::Array< bool > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__isInt") ) { _hx___isInt=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__isBool") ) { _hx___isBool=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isFloat") ) { _hx___isFloat=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__internal") ) { _hx___internal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__useArray") ) { _hx___useArray=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { _hx___isUniform=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__arrayLength") ) { _hx___arrayLength=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uniformMatrix") ) { _hx___uniformMatrix=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderParameter_Bool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("__arrayLength",3f,70,c7,d4));
	outFields->push(HX_("__internal",5d,da,ae,cb));
	outFields->push(HX_("__isBool",54,b4,b1,06));
	outFields->push(HX_("__isFloat",32,ba,6a,20));
	outFields->push(HX_("__isInt",05,90,ac,2b));
	outFields->push(HX_("__isUniform",4a,07,8f,e7));
	outFields->push(HX_("__length",06,00,37,47));
	outFields->push(HX_("__uniformMatrix",75,03,f6,b5));
	outFields->push(HX_("__useArray",f2,42,33,90));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ShaderParameter_Bool_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderParameter_Bool_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsString,(int)offsetof(ShaderParameter_Bool_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ShaderParameter_Bool_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(ShaderParameter_Bool_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsInt,(int)offsetof(ShaderParameter_Bool_obj,_hx___arrayLength),HX_("__arrayLength",3f,70,c7,d4)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Bool_obj,_hx___internal),HX_("__internal",5d,da,ae,cb)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Bool_obj,_hx___isBool),HX_("__isBool",54,b4,b1,06)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Bool_obj,_hx___isFloat),HX_("__isFloat",32,ba,6a,20)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Bool_obj,_hx___isInt),HX_("__isInt",05,90,ac,2b)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Bool_obj,_hx___isUniform),HX_("__isUniform",4a,07,8f,e7)},
	{::hx::fsInt,(int)offsetof(ShaderParameter_Bool_obj,__length),HX_("__length",06,00,37,47)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(ShaderParameter_Bool_obj,_hx___uniformMatrix),HX_("__uniformMatrix",75,03,f6,b5)},
	{::hx::fsBool,(int)offsetof(ShaderParameter_Bool_obj,_hx___useArray),HX_("__useArray",f2,42,33,90)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ShaderParameter_Bool_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderParameter_Bool_obj_sMemberFields[] = {
	HX_("index",12,9b,14,be),
	HX_("name",4b,72,ff,48),
	HX_("type",ba,f2,08,4d),
	HX_("value",71,7f,b8,31),
	HX_("__arrayLength",3f,70,c7,d4),
	HX_("__internal",5d,da,ae,cb),
	HX_("__isBool",54,b4,b1,06),
	HX_("__isFloat",32,ba,6a,20),
	HX_("__isInt",05,90,ac,2b),
	HX_("__isUniform",4a,07,8f,e7),
	HX_("__length",06,00,37,47),
	HX_("__uniformMatrix",75,03,f6,b5),
	HX_("__useArray",f2,42,33,90),
	HX_("__disableGL",ed,3a,e1,35),
	HX_("__updateGL",8e,8b,32,1b),
	HX_("__updateGLFromBuffer",38,8f,d7,17),
	HX_("set_name",48,87,17,77),
	::String(null()) };

::hx::Class ShaderParameter_Bool_obj::__mClass;

void ShaderParameter_Bool_obj::__register()
{
	ShaderParameter_Bool_obj _hx_dummy;
	ShaderParameter_Bool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.ShaderParameter_Bool",4f,81,23,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShaderParameter_Bool_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShaderParameter_Bool_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderParameter_Bool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderParameter_Bool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ShaderParameter_Bool_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_abe7b394d2d5e035_96_boot)
HXDLIN(  96)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("index",12,9b,14,be), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("name",4b,72,ff,48), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
}

} // end namespace openfl
} // end namespace display
