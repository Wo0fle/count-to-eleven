#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
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
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#include <openfl/display/_internal/Context3DBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DElementType
#include <openfl/display/_internal/Context3DElementType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DGraphics
#include <openfl/display/_internal/Context3DGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DMaskShader
#include <openfl/display/_internal/Context3DMaskShader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_41_buildBuffer,"openfl.display._internal.Context3DGraphics","buildBuffer",0x4d7a46af,"openfl.display._internal.Context3DGraphics.buildBuffer","openfl/display/_internal/Context3DGraphics.hx",41,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_370_isCompatible,"openfl.display._internal.Context3DGraphics","isCompatible",0xc3dcc4dd,"openfl.display._internal.Context3DGraphics.isCompatible","openfl/display/_internal/Context3DGraphics.hx",370,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_463_render,"openfl.display._internal.Context3DGraphics","render",0x6cd95315,"openfl.display._internal.Context3DGraphics.render","openfl/display/_internal/Context3DGraphics.hx",463,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_833_renderMask,"openfl.display._internal.Context3DGraphics","renderMask",0xda186ea1,"openfl.display._internal.Context3DGraphics.renderMask","openfl/display/_internal/Context3DGraphics.hx",833,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_842_resizeIndexBuffer,"openfl.display._internal.Context3DGraphics","resizeIndexBuffer",0x673d02bf,"openfl.display._internal.Context3DGraphics.resizeIndexBuffer","openfl/display/_internal/Context3DGraphics.hx",842,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_890_resizeVertexBuffer,"openfl.display._internal.Context3DGraphics","resizeVertexBuffer",0x62dc7dd7,"openfl.display._internal.Context3DGraphics.resizeVertexBuffer","openfl/display/_internal/Context3DGraphics.hx",890,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_34_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",34,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_36_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",36,0x8e8e2a52)
HX_LOCAL_STACK_FRAME(_hx_pos_14098afca734a8c3_38_boot,"openfl.display._internal.Context3DGraphics","boot",0x906dae31,"openfl.display._internal.Context3DGraphics.boot","openfl/display/_internal/Context3DGraphics.hx",38,0x8e8e2a52)
namespace openfl{
namespace display{
namespace _internal{

void Context3DGraphics_obj::__construct() { }

Dynamic Context3DGraphics_obj::__CreateEmpty() { return new Context3DGraphics_obj; }

void *Context3DGraphics_obj::_hx_vtable = 0;

Dynamic Context3DGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DGraphics_obj > _hx_result = new Context3DGraphics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DGraphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cec42c1;
}

 ::openfl::display::BitmapData Context3DGraphics_obj::blankBitmapData;

bool Context3DGraphics_obj::maskRender;

 ::openfl::geom::ColorTransform Context3DGraphics_obj::tempColorTransform;

void Context3DGraphics_obj::buildBuffer( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_41_buildBuffer)
HXLINE(  42)		int quadBufferPosition = 0;
HXLINE(  43)		int triangleIndexBufferPosition = 0;
HXLINE(  44)		int vertexBufferPosition = 0;
HXLINE(  45)		int vertexBufferPositionUVT = 0;
HXLINE(  47)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE(  49)		 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  51)		 ::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  52)		 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  54)		 ::openfl::display::BitmapData bitmap = null();
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN(  56)			while((_g < _g1->length)){
HXLINE(  56)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(  56)				_g = (_g + 1);
HXLINE(  58)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE(  61)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 2);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->iPos = (data1->iPos + 1);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 4);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  61)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  61)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 5);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 2);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 4);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  61)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  61)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 4);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  61)								data2->iPos = (data2->iPos + 1);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  61)								data3->fPos = (data3->fPos + 2);
HXDLIN(  61)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  61)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  61)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  61)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  61)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(  61)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  61)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  62)						bitmap = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
            					}
            					break;
            					case (int)1: {
HXLINE(  65)						bitmap = null();
HXLINE(  66)						{
HXLINE(  66)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 2);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->iPos = (data1->iPos + 1);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 4);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  66)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  66)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 5);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 2);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 4);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  66)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  66)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 4);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  66)									data2->iPos = (data2->iPos + 1);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  66)									data3->fPos = (data3->fPos + 2);
HXDLIN(  66)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  66)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(  66)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  66)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(  66)							data->prev = type;
            						}
            					}
            					break;
            					case (int)3: {
HXLINE(  69)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 2);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->iPos = (data1->iPos + 1);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 4);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  69)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  69)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 5);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 2);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 4);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  69)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  69)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 4);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  69)								data2->iPos = (data2->iPos + 1);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  69)								data3->fPos = (data3->fPos + 2);
HXDLIN(  69)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  69)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  69)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  69)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  69)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN(  69)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  69)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  70)						 ::openfl::display::_internal::ShaderBuffer shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE(  72)						bitmap = null();
HXLINE(  74)						if (::hx::IsNotNull( shaderBuffer )) {
HXLINE(  76)							int _g = 0;
HXDLIN(  76)							int _g1 = shaderBuffer->inputCount;
HXDLIN(  76)							while((_g < _g1)){
HXLINE(  76)								_g = (_g + 1);
HXDLIN(  76)								int i = (_g - 1);
HXLINE(  78)								if ((shaderBuffer->inputRefs->__get(i).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >()->name == HX_("bitmap",ef,0f,0c,f1))) {
HXLINE(  80)									bitmap = shaderBuffer->inputs->__get(i).StaticCast<  ::openfl::display::BitmapData >();
HXLINE(  81)									goto _hx_goto_1;
            								}
            							}
            							_hx_goto_1:;
            						}
            					}
            					break;
            					case (int)8: {
HXLINE(  89)						if (::hx::IsNotNull( bitmap )) {
HXLINE(  91)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 2);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->iPos = (data1->iPos + 1);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 4);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  91)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  91)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 5);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 2);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 4);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  91)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  91)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 4);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  91)									data2->iPos = (data2->iPos + 1);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  91)									data3->fPos = (data3->fPos + 2);
HXDLIN(  91)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  91)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(  91)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  91)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(  91)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN(  91)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  91)							 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  92)							 ::openfl::_Vector::FloatVector rects = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE(  93)							 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE(  94)							 ::openfl::_Vector::FloatVector transforms = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE(  97)							::Array< Float > rects1;
HXDLIN(  97)							if (::hx::IsNull( rects )) {
HXLINE(  97)								rects1 = null();
            							}
            							else {
HXLINE(  97)								rects1 = ( (::Array< Float >)(rects->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE(  98)							::Array< int > indices1;
HXDLIN(  98)							if (::hx::IsNull( indices )) {
HXLINE(  98)								indices1 = null();
            							}
            							else {
HXLINE(  98)								indices1 = ( (::Array< int >)(indices->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE(  99)							::Array< Float > transforms1;
HXDLIN(  99)							if (::hx::IsNull( transforms )) {
HXLINE(  99)								transforms1 = null();
            							}
            							else {
HXLINE(  99)								transforms1 = ( (::Array< Float >)(transforms->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            							}
HXLINE( 102)							bool hasIndices = ::hx::IsNotNull( indices1 );
HXLINE( 103)							bool transformABCD = false;
HXDLIN( 103)							bool transformXY = false;
HXLINE( 105)							int length;
HXDLIN( 105)							if (hasIndices) {
HXLINE( 105)								length = indices1->length;
            							}
            							else {
HXLINE( 105)								length = ::Math_obj::floor((( (Float)(rects1->length) ) / ( (Float)(4) )));
            							}
HXLINE( 106)							if ((length == 0)) {
HXLINE( 106)								return;
            							}
HXLINE( 108)							if (::hx::IsNotNull( transforms1 )) {
HXLINE( 110)								if ((transforms1->length >= (length * 6))) {
HXLINE( 112)									transformABCD = true;
HXLINE( 113)									transformXY = true;
            								}
            								else {
HXLINE( 115)									if ((transforms1->length >= (length * 4))) {
HXLINE( 117)										transformABCD = true;
            									}
            									else {
HXLINE( 119)										if ((transforms1->length >= (length * 2))) {
HXLINE( 121)											transformXY = true;
            										}
            									}
            								}
            							}
HXLINE( 125)							int dataPerVertex = 4;
HXLINE( 126)							int stride = (dataPerVertex * 4);
HXLINE( 128)							if (::hx::IsNull( graphics->_hx___quadBuffer )) {
HXLINE( 130)								graphics->_hx___quadBuffer =  ::openfl::display::_internal::Context3DBuffer_obj::__alloc( HX_CTX ,context,::openfl::display::_internal::Context3DElementType_obj::QUADS_dyn(),length,dataPerVertex);
            							}
            							else {
HXLINE( 134)								graphics->_hx___quadBuffer->resize((quadBufferPosition + length),dataPerVertex);
            							}
HXLINE( 137)							int vertexOffset;
HXDLIN( 137)							Float alpha = ((Float)1.0);
HXDLIN( 137)							 ::Dynamic tileData;
HXDLIN( 137)							 ::Dynamic id;
HXLINE( 138)							Float tileWidth;
HXDLIN( 138)							Float tileHeight;
HXLINE( 142)							Float uvX;
HXDLIN( 142)							Float uvY;
HXDLIN( 142)							Float uvWidth;
HXDLIN( 142)							Float uvHeight;
HXLINE( 143)							Float x;
HXDLIN( 143)							Float y;
HXDLIN( 143)							Float x2;
HXDLIN( 143)							Float y2;
HXDLIN( 143)							Float x3;
HXDLIN( 143)							Float y3;
HXDLIN( 143)							Float x4;
HXDLIN( 143)							Float y4;
HXLINE( 144)							int ri;
HXDLIN( 144)							int ti;
HXLINE( 146)							 ::lime::utils::ArrayBufferView vertexBufferData = graphics->_hx___quadBuffer->vertexBufferData;
HXLINE( 138)							int bitmapWidth = bitmap->width;
HXDLIN( 138)							int bitmapHeight = bitmap->height;
HXLINE( 164)							 ::openfl::geom::Rectangle sourceRect = bitmap->rect;
HXLINE( 166)							{
HXLINE( 166)								int _g = 0;
HXDLIN( 166)								int _g1 = length;
HXDLIN( 166)								while((_g < _g1)){
HXLINE( 166)									_g = (_g + 1);
HXDLIN( 166)									int i = (_g - 1);
HXLINE( 168)									vertexOffset = ((quadBufferPosition + i) * stride);
HXLINE( 170)									if (hasIndices) {
HXLINE( 170)										ri = (indices1->__get(i) * 4);
            									}
            									else {
HXLINE( 170)										ri = (i * 4);
            									}
HXLINE( 171)									if ((ri < 0)) {
HXLINE( 171)										continue;
            									}
HXLINE( 172)									tileRect->setTo(rects1->__get(ri),rects1->__get((ri + 1)),rects1->__get((ri + 2)),rects1->__get((ri + 3)));
HXLINE( 174)									tileWidth = tileRect->width;
HXLINE( 175)									tileHeight = tileRect->height;
HXLINE( 177)									bool _hx_tmp;
HXDLIN( 177)									if (!((tileWidth <= 0))) {
HXLINE( 177)										_hx_tmp = (tileHeight <= 0);
            									}
            									else {
HXLINE( 177)										_hx_tmp = true;
            									}
HXDLIN( 177)									if (_hx_tmp) {
HXLINE( 179)										continue;
            									}
HXLINE( 182)									bool _hx_tmp1;
HXDLIN( 182)									if (transformABCD) {
HXLINE( 182)										_hx_tmp1 = transformXY;
            									}
            									else {
HXLINE( 182)										_hx_tmp1 = false;
            									}
HXDLIN( 182)									if (_hx_tmp1) {
HXLINE( 184)										ti = (i * 6);
HXLINE( 185)										tileTransform->setTo(transforms1->__get(ti),transforms1->__get((ti + 1)),transforms1->__get((ti + 2)),transforms1->__get((ti + 3)),transforms1->__get((ti + 4)),transforms1->__get((ti + 5)));
            									}
            									else {
HXLINE( 188)										if (transformABCD) {
HXLINE( 190)											ti = (i * 4);
HXLINE( 191)											tileTransform->setTo(transforms1->__get(ti),transforms1->__get((ti + 1)),transforms1->__get((ti + 2)),transforms1->__get((ti + 3)),tileRect->x,tileRect->y);
            										}
            										else {
HXLINE( 193)											if (transformXY) {
HXLINE( 195)												ti = (i * 2);
HXLINE( 196)												tileTransform->tx = transforms1->__get(ti);
HXLINE( 197)												tileTransform->ty = transforms1->__get((ti + 1));
            											}
            											else {
HXLINE( 201)												tileTransform->tx = tileRect->x;
HXLINE( 202)												tileTransform->ty = tileRect->y;
            											}
            										}
            									}
HXLINE( 205)									uvX = (tileRect->x / ( (Float)(bitmapWidth) ));
HXLINE( 206)									uvY = (tileRect->y / ( (Float)(bitmapHeight) ));
HXLINE( 207)									uvWidth = (tileRect->get_right() / ( (Float)(bitmapWidth) ));
HXLINE( 208)									uvHeight = (tileRect->get_bottom() / ( (Float)(bitmapHeight) ));
HXLINE( 210)									x = (((( (Float)(0) ) * tileTransform->a) + (( (Float)(0) ) * tileTransform->c)) + tileTransform->tx);
HXLINE( 211)									y = (((( (Float)(0) ) * tileTransform->b) + (( (Float)(0) ) * tileTransform->d)) + tileTransform->ty);
HXLINE( 212)									x2 = (((tileWidth * tileTransform->a) + (( (Float)(0) ) * tileTransform->c)) + tileTransform->tx);
HXLINE( 213)									y2 = (((tileWidth * tileTransform->b) + (( (Float)(0) ) * tileTransform->d)) + tileTransform->ty);
HXLINE( 214)									x3 = (((( (Float)(0) ) * tileTransform->a) + (tileHeight * tileTransform->c)) + tileTransform->tx);
HXLINE( 215)									y3 = (((( (Float)(0) ) * tileTransform->b) + (tileHeight * tileTransform->d)) + tileTransform->ty);
HXLINE( 216)									x4 = (((tileWidth * tileTransform->a) + (tileHeight * tileTransform->c)) + tileTransform->tx);
HXLINE( 217)									y4 = (((tileWidth * tileTransform->b) + (tileHeight * tileTransform->d)) + tileTransform->ty);
HXLINE( 219)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (vertexOffset * 4)),x);
HXLINE( 220)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 1) * 4)),y);
HXLINE( 221)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 2) * 4)),uvX);
HXLINE( 222)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + 3) * 4)),uvY);
HXLINE( 224)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + dataPerVertex) * 4)),x2);
HXLINE( 225)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 1) * 4)),y2);
HXLINE( 226)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 2) * 4)),uvWidth);
HXLINE( 227)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + dataPerVertex) + 3) * 4)),uvY);
HXLINE( 229)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + (dataPerVertex * 2)) * 4)),x3);
HXLINE( 230)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 1) * 4)),y3);
HXLINE( 231)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 2) * 4)),uvX);
HXLINE( 232)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 2)) + 3) * 4)),uvHeight);
HXLINE( 234)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((vertexOffset + (dataPerVertex * 3)) * 4)),x4);
HXLINE( 235)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 1) * 4)),y4);
HXLINE( 236)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 2) * 4)),uvWidth);
HXLINE( 237)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((vertexOffset + (dataPerVertex * 3)) + 3) * 4)),uvHeight);
            								}
            							}
HXLINE( 240)							quadBufferPosition = (quadBufferPosition + length);
            						}
            					}
            					break;
            					case (int)12: {
HXLINE( 244)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 2);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->iPos = (data1->iPos + 1);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 4);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 244)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 244)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 5);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 2);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 4);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 244)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 244)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 4);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 244)								data2->iPos = (data2->iPos + 1);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 244)								data3->fPos = (data3->fPos + 2);
HXDLIN( 244)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 244)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 244)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 244)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 244)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 244)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 244)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 245)						 ::openfl::_Vector::FloatVector vertices = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 246)						 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 247)						 ::openfl::_Vector::FloatVector uvtData = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 248)						 ::Dynamic culling = c->buffer->o->__get((c->oPos + 3));
HXLINE( 250)						bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 251)						int numVertices = ::Math_obj::floor((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE( 252)						int length;
HXDLIN( 252)						if (hasIndices) {
HXLINE( 252)							length = indices->get_length();
            						}
            						else {
HXLINE( 252)							length = numVertices;
            						}
HXLINE( 254)						bool hasUVData = ::hx::IsNotNull( uvtData );
HXLINE( 255)						bool hasUVTData;
HXDLIN( 255)						if (hasUVData) {
HXLINE( 255)							hasUVTData = (uvtData->get_length() >= (numVertices * 3));
            						}
            						else {
HXLINE( 255)							hasUVTData = false;
            						}
HXLINE( 256)						int vertLength;
HXDLIN( 256)						if (hasUVTData) {
HXLINE( 256)							vertLength = 4;
            						}
            						else {
HXLINE( 256)							vertLength = 2;
            						}
HXLINE( 257)						int uvStride;
HXDLIN( 257)						if (hasUVTData) {
HXLINE( 257)							uvStride = 3;
            						}
            						else {
HXLINE( 257)							uvStride = 2;
            						}
HXLINE( 259)						int dataPerVertex = (vertLength + 2);
HXLINE( 260)						int vertexOffset;
HXDLIN( 260)						if (hasUVTData) {
HXLINE( 260)							vertexOffset = vertexBufferPositionUVT;
            						}
            						else {
HXLINE( 260)							vertexOffset = vertexBufferPosition;
            						}
HXLINE( 265)						::openfl::display::_internal::Context3DGraphics_obj::resizeVertexBuffer(graphics,hasUVTData,(vertexOffset + (length * dataPerVertex)));
HXLINE( 268)						 ::lime::utils::ArrayBufferView vertexBufferData;
HXDLIN( 268)						if (hasUVTData) {
HXLINE( 268)							vertexBufferData = graphics->_hx___vertexBufferDataUVT;
            						}
            						else {
HXLINE( 268)							vertexBufferData = graphics->_hx___vertexBufferData;
            						}
HXLINE( 269)						int offset;
HXDLIN( 269)						int vertOffset;
HXDLIN( 269)						int uvOffset;
HXDLIN( 269)						Float t;
HXLINE( 271)						{
HXLINE( 271)							int _g = 0;
HXDLIN( 271)							int _g1 = length;
HXDLIN( 271)							while((_g < _g1)){
HXLINE( 271)								_g = (_g + 1);
HXDLIN( 271)								int i = (_g - 1);
HXLINE( 273)								offset = (vertexOffset + (i * dataPerVertex));
HXLINE( 274)								if (hasIndices) {
HXLINE( 274)									vertOffset = (indices->get(i) * 2);
            								}
            								else {
HXLINE( 274)									vertOffset = (i * 2);
            								}
HXLINE( 275)								if (hasIndices) {
HXLINE( 275)									uvOffset = (indices->get(i) * uvStride);
            								}
            								else {
HXLINE( 275)									uvOffset = (i * uvStride);
            								}
HXLINE( 279)								if (hasUVTData) {
HXLINE( 281)									t = uvtData->get((uvOffset + 2));
HXLINE( 283)									{
HXLINE( 283)										Float val = (vertices->get(vertOffset) / t);
HXDLIN( 283)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (offset * 4)),val);
            									}
HXLINE( 284)									{
HXLINE( 284)										Float val1 = (vertices->get((vertOffset + 1)) / t);
HXDLIN( 284)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 1) * 4)),val1);
            									}
HXLINE( 285)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 2) * 4)),0);
HXLINE( 286)									{
HXLINE( 286)										Float val2 = (( (Float)(1) ) / t);
HXDLIN( 286)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 3) * 4)),val2);
            									}
            								}
            								else {
HXLINE( 290)									{
HXLINE( 290)										Float val = vertices->get(vertOffset);
HXDLIN( 290)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (offset * 4)),val);
            									}
HXLINE( 291)									{
HXLINE( 291)										Float val1 = vertices->get((vertOffset + 1));
HXDLIN( 291)										 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + 1) * 4)),val1);
            									}
            								}
HXLINE( 294)								{
HXLINE( 294)									Float val;
HXDLIN( 294)									if (hasUVData) {
HXLINE( 294)										val = uvtData->get(uvOffset);
            									}
            									else {
HXLINE( 294)										val = ( (Float)(0) );
            									}
HXDLIN( 294)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + ((offset + vertLength) * 4)),val);
            								}
HXLINE( 295)								{
HXLINE( 295)									Float val1;
HXDLIN( 295)									if (hasUVData) {
HXLINE( 295)										val1 = uvtData->get((uvOffset + 1));
            									}
            									else {
HXLINE( 295)										val1 = ( (Float)(0) );
            									}
HXDLIN( 295)									 ::__hxcpp_memory_set_float(vertexBufferData->buffer->b,(vertexBufferData->byteOffset + (((offset + vertLength) + 1) * 4)),val1);
            								}
            							}
            						}
HXLINE( 299)						if (hasUVTData) {
HXLINE( 301)							vertexBufferPositionUVT = (vertexBufferPositionUVT + (length * dataPerVertex));
            						}
            						else {
HXLINE( 305)							vertexBufferPosition = (vertexBufferPosition + (length * dataPerVertex));
            						}
            					}
            					break;
            					case (int)13: {
HXLINE( 309)						bitmap = null();
            					}
            					break;
            					default:{
HXLINE( 312)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 2);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->iPos = (data1->iPos + 1);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 4);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 312)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 312)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 5);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 2);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 4);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 312)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 312)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 4);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 312)								data2->iPos = (data2->iPos + 1);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 312)								data3->fPos = (data3->fPos + 2);
HXDLIN( 312)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 312)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 312)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 312)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 312)						data->prev = type;
            					}
            				}
            			}
            		}
HXLINE( 318)		if ((quadBufferPosition > 0)) {
HXLINE( 320)			graphics->_hx___quadBuffer->flushVertexBufferData();
            		}
HXLINE( 323)		if ((triangleIndexBufferPosition > 0)) {
HXLINE( 325)			 ::openfl::display3D::IndexBuffer3D buffer = graphics->_hx___triangleIndexBuffer;
HXLINE( 327)			bool _hx_tmp;
HXDLIN( 327)			if (::hx::IsNotNull( buffer )) {
HXLINE( 327)				_hx_tmp = (triangleIndexBufferPosition > graphics->_hx___triangleIndexBufferCount);
            			}
            			else {
HXLINE( 327)				_hx_tmp = true;
            			}
HXDLIN( 327)			if (_hx_tmp) {
HXLINE( 329)				buffer = context->createIndexBuffer(triangleIndexBufferPosition,0);
HXLINE( 330)				graphics->_hx___triangleIndexBuffer = buffer;
HXLINE( 331)				graphics->_hx___triangleIndexBufferCount = triangleIndexBufferPosition;
            			}
HXLINE( 334)			buffer->uploadFromTypedArray(graphics->_hx___triangleIndexBufferData,null());
            		}
HXLINE( 337)		if ((vertexBufferPosition > 0)) {
HXLINE( 339)			 ::openfl::display3D::VertexBuffer3D buffer = graphics->_hx___vertexBuffer;
HXLINE( 341)			bool _hx_tmp;
HXDLIN( 341)			if (::hx::IsNotNull( buffer )) {
HXLINE( 341)				_hx_tmp = (vertexBufferPosition > graphics->_hx___vertexBufferCount);
            			}
            			else {
HXLINE( 341)				_hx_tmp = true;
            			}
HXDLIN( 341)			if (_hx_tmp) {
HXLINE( 343)				buffer = context->createVertexBuffer(vertexBufferPosition,4,0);
HXLINE( 344)				graphics->_hx___vertexBuffer = buffer;
HXLINE( 345)				graphics->_hx___vertexBufferCount = vertexBufferPosition;
            			}
HXLINE( 348)			buffer->uploadFromTypedArray(graphics->_hx___vertexBufferData,null());
            		}
HXLINE( 351)		if ((vertexBufferPositionUVT > 0)) {
HXLINE( 353)			 ::openfl::display3D::VertexBuffer3D buffer = graphics->_hx___vertexBufferUVT;
HXLINE( 355)			bool _hx_tmp;
HXDLIN( 355)			if (::hx::IsNotNull( buffer )) {
HXLINE( 355)				_hx_tmp = (vertexBufferPositionUVT > graphics->_hx___vertexBufferCountUVT);
            			}
            			else {
HXLINE( 355)				_hx_tmp = true;
            			}
HXDLIN( 355)			if (_hx_tmp) {
HXLINE( 357)				buffer = context->createVertexBuffer(vertexBufferPositionUVT,6,0);
HXLINE( 358)				graphics->_hx___vertexBufferUVT = buffer;
HXLINE( 359)				graphics->_hx___vertexBufferCountUVT = vertexBufferPositionUVT;
            			}
HXLINE( 362)			buffer->uploadFromTypedArray(graphics->_hx___vertexBufferDataUVT,null());
            		}
HXLINE( 365)		::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 366)		::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,buildBuffer,(void))

bool Context3DGraphics_obj::isCompatible( ::openfl::display::Graphics graphics){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_370_isCompatible)
HXLINE( 377)		if (::hx::IsNotNull( graphics->_hx___owner->_hx___worldScale9Grid )) {
HXLINE( 379)			return false;
            		}
HXLINE( 382)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 383)		bool hasColorFill = false;
HXDLIN( 383)		bool hasBitmapFill = false;
HXDLIN( 383)		bool hasShaderFill = false;
HXLINE( 385)		{
HXLINE( 385)			int _g = 0;
HXDLIN( 385)			::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 385)			while((_g < _g1->length)){
HXLINE( 385)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 385)				_g = (_g + 1);
HXLINE( 387)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE( 390)						hasBitmapFill = true;
HXLINE( 391)						hasColorFill = false;
HXLINE( 392)						hasShaderFill = false;
HXLINE( 393)						{
HXLINE( 393)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->iPos = (data1->iPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 393)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 393)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 5);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 393)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 393)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 4);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 393)									data2->iPos = (data2->iPos + 1);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 393)									data3->fPos = (data3->fPos + 2);
HXDLIN( 393)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 393)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 393)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 393)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 393)							data->prev = type;
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 396)						hasBitmapFill = false;
HXLINE( 397)						hasColorFill = true;
HXLINE( 398)						hasShaderFill = false;
HXLINE( 399)						{
HXLINE( 399)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 2);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->iPos = (data1->iPos + 1);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 4);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 399)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 399)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 5);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 2);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 4);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 399)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 399)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 4);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 399)									data2->iPos = (data2->iPos + 1);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 399)									data3->fPos = (data3->fPos + 2);
HXDLIN( 399)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 399)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 399)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 399)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 399)							data->prev = type;
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 402)						hasBitmapFill = false;
HXLINE( 403)						hasColorFill = false;
HXLINE( 404)						hasShaderFill = true;
HXLINE( 405)						{
HXLINE( 405)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 2);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->iPos = (data1->iPos + 1);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 4);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 405)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 405)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 5);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 2);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 4);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 405)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 405)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 4);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 405)									data2->iPos = (data2->iPos + 1);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 405)									data3->fPos = (data3->fPos + 2);
HXDLIN( 405)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 405)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 405)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 405)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 405)							data->prev = type;
            						}
            					}
            					break;
            					case (int)8: {
HXLINE( 408)						bool _hx_tmp;
HXDLIN( 408)						if (!(hasBitmapFill)) {
HXLINE( 408)							_hx_tmp = hasShaderFill;
            						}
            						else {
HXLINE( 408)							_hx_tmp = true;
            						}
HXDLIN( 408)						if (_hx_tmp) {
HXLINE( 410)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 2);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->iPos = (data1->iPos + 1);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 4);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 410)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 410)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 5);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 2);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 4);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 410)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 410)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 4);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 410)									data2->iPos = (data2->iPos + 1);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 410)									data3->fPos = (data3->fPos + 2);
HXDLIN( 410)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 410)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 410)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 410)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 410)							data->prev = type;
            						}
            						else {
HXLINE( 414)							data->destroy();
HXLINE( 415)							return false;
            						}
            					}
            					break;
            					case (int)9: {
HXLINE( 419)						if (hasColorFill) {
HXLINE( 421)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 2);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->iPos = (data1->iPos + 1);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 4);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 421)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 421)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 5);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 2);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 4);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 421)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 421)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 4);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 421)									data2->iPos = (data2->iPos + 1);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 421)									data3->fPos = (data3->fPos + 2);
HXDLIN( 421)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 421)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 421)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 421)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 421)							data->prev = type;
            						}
            						else {
HXLINE( 425)							data->destroy();
HXLINE( 426)							return false;
            						}
            					}
            					break;
            					case (int)12: {
HXLINE( 430)						bool _hx_tmp;
HXDLIN( 430)						if (!(hasBitmapFill)) {
HXLINE( 430)							_hx_tmp = hasShaderFill;
            						}
            						else {
HXLINE( 430)							_hx_tmp = true;
            						}
HXDLIN( 430)						if (_hx_tmp) {
HXLINE( 432)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 2);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->iPos = (data1->iPos + 1);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 4);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 432)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 432)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 5);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 2);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 4);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 432)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 432)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 4);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 432)									data2->iPos = (data2->iPos + 1);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 432)									data3->fPos = (data3->fPos + 2);
HXDLIN( 432)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 432)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 432)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 432)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 432)							data->prev = type;
            						}
            						else {
HXLINE( 436)							data->destroy();
HXLINE( 437)							return false;
            						}
            					}
            					break;
            					case (int)13: {
HXLINE( 441)						hasBitmapFill = false;
HXLINE( 442)						hasColorFill = false;
HXLINE( 443)						hasShaderFill = false;
HXLINE( 444)						{
HXLINE( 444)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 2);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->iPos = (data1->iPos + 1);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 4);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 444)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 444)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 5);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 2);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 4);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->iiPos = (data2->iiPos + 2);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 444)									data3->ffPos = (data3->ffPos + 1);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 444)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 4);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 444)									data2->iPos = (data2->iPos + 1);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 444)									data3->fPos = (data3->fPos + 2);
HXDLIN( 444)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 444)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE( 444)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 444)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 444)							data->prev = type;
            						}
            					}
            					break;
            					case (int)18: {
HXLINE( 447)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 2);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->iPos = (data1->iPos + 1);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 4);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 447)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 447)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 5);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 2);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 4);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 447)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 447)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 4);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 447)								data2->iPos = (data2->iPos + 1);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 447)								data3->fPos = (data3->fPos + 2);
HXDLIN( 447)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 447)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 447)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 447)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 447)						data->prev = type;
            					}
            					break;
            					case (int)19: {
HXLINE( 450)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 2);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->iPos = (data1->iPos + 1);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 4);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 450)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 450)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 5);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 2);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 4);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 450)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 450)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 4);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 450)								data2->iPos = (data2->iPos + 1);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 450)								data3->fPos = (data3->fPos + 2);
HXDLIN( 450)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 450)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 450)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 450)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 450)						data->prev = type;
            					}
            					break;
            					default:{
HXLINE( 453)						data->destroy();
HXLINE( 454)						return false;
            					}
            				}
            			}
            		}
HXLINE( 458)		data->destroy();
HXLINE( 459)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DGraphics_obj,isCompatible,return )

void Context3DGraphics_obj::render( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_463_render)
HXLINE( 464)		bool _hx_tmp;
HXDLIN( 464)		if (graphics->_hx___visible) {
HXLINE( 464)			_hx_tmp = (graphics->_hx___commands->get_length() == 0);
            		}
            		else {
HXLINE( 464)			_hx_tmp = true;
            		}
HXDLIN( 464)		if (_hx_tmp) {
HXLINE( 464)			return;
            		}
HXLINE( 466)		bool _hx_tmp1;
HXDLIN( 466)		bool _hx_tmp2;
HXDLIN( 466)		if (::hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE( 466)			_hx_tmp2 = !(graphics->_hx___dirty);
            		}
            		else {
HXLINE( 466)			_hx_tmp2 = false;
            		}
HXDLIN( 466)		if (!(_hx_tmp2)) {
HXLINE( 466)			_hx_tmp1 = !(::openfl::display::_internal::Context3DGraphics_obj::isCompatible(graphics));
            		}
            		else {
HXLINE( 466)			_hx_tmp1 = true;
            		}
HXDLIN( 466)		if (_hx_tmp1) {
HXLINE( 482)			renderer->_hx___softwareRenderer->_hx___pixelRatio = renderer->_hx___pixelRatio;
HXLINE( 484)			 ::openfl::geom::Matrix cacheTransform = renderer->_hx___softwareRenderer->_hx___worldTransform;
HXLINE( 488)			if ((graphics->_hx___owner->_hx___drawableType == 7)) {
HXLINE( 490)				renderer->_hx___softwareRenderer->_hx___worldTransform = ::openfl::geom::Matrix_obj::_hx___identity;
            			}
            			else {
HXLINE( 494)				renderer->_hx___softwareRenderer->_hx___worldTransform = renderer->_hx___worldTransform;
            			}
HXLINE( 500)			::openfl::display::_internal::CairoGraphics_obj::render(graphics,( ( ::openfl::display::CairoRenderer)(renderer->_hx___softwareRenderer) ));
HXLINE( 503)			renderer->_hx___softwareRenderer->_hx___worldTransform = cacheTransform;
            		}
            		else {
HXLINE( 507)			graphics->_hx___bitmap = null();
HXLINE( 508)			graphics->_hx___update(renderer->_hx___worldTransform);
HXLINE( 510)			 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXLINE( 512)			int width = graphics->_hx___width;
HXLINE( 513)			int height = graphics->_hx___height;
HXLINE( 515)			bool _hx_tmp;
HXDLIN( 515)			bool _hx_tmp1;
HXDLIN( 515)			if (::hx::IsNotNull( bounds )) {
HXLINE( 515)				_hx_tmp1 = (width >= 1);
            			}
            			else {
HXLINE( 515)				_hx_tmp1 = false;
            			}
HXDLIN( 515)			if (_hx_tmp1) {
HXLINE( 515)				_hx_tmp = (height >= 1);
            			}
            			else {
HXLINE( 515)				_hx_tmp = false;
            			}
HXDLIN( 515)			if (_hx_tmp) {
HXLINE( 517)				bool _hx_tmp;
HXDLIN( 517)				if (!(graphics->_hx___hardwareDirty)) {
HXLINE( 518)					bool _hx_tmp1;
HXDLIN( 518)					if (::hx::IsNull( graphics->_hx___quadBuffer )) {
HXLINE( 518)						_hx_tmp1 = ::hx::IsNull( graphics->_hx___vertexBuffer );
            					}
            					else {
HXLINE( 518)						_hx_tmp1 = false;
            					}
HXDLIN( 518)					if (_hx_tmp1) {
HXLINE( 517)						_hx_tmp = ::hx::IsNull( graphics->_hx___vertexBufferUVT );
            					}
            					else {
HXLINE( 517)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 517)					_hx_tmp = true;
            				}
HXDLIN( 517)				if (_hx_tmp) {
HXLINE( 520)					::openfl::display::_internal::Context3DGraphics_obj::buildBuffer(graphics,renderer);
            				}
HXLINE( 523)				 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,graphics->_hx___commands);
HXLINE( 525)				 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE( 526)				 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = context->gl;
HXLINE( 528)				 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 530)				 ::openfl::display::_internal::ShaderBuffer shaderBuffer = null();
HXLINE( 531)				 ::openfl::display::BitmapData bitmap = null();
HXLINE( 532)				bool repeat = false;
HXLINE( 533)				bool smooth = false;
HXLINE( 534)				 ::Dynamic fill = null();
HXLINE( 536)				Float positionX = ((Float)0.0);
HXLINE( 537)				Float positionY = ((Float)0.0);
HXLINE( 539)				int quadBufferPosition = 0;
HXLINE( 540)				int shaderBufferOffset = 0;
HXLINE( 541)				int triangleIndexBufferPosition = 0;
HXLINE( 542)				int vertexBufferPosition = 0;
HXLINE( 543)				int vertexBufferPositionUVT = 0;
HXLINE( 545)				{
HXLINE( 545)					int _g = 0;
HXDLIN( 545)					::Array< ::Dynamic> _g1 = graphics->_hx___commands->types;
HXDLIN( 545)					while((_g < _g1->length)){
HXLINE( 545)						 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN( 545)						_g = (_g + 1);
HXLINE( 547)						switch((int)(type->_hx_getIndex())){
            							case (int)0: {
HXLINE( 550)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->oPos = (data1->oPos + 2);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 550)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->iPos = (data1->iPos + 1);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 550)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->oPos = (data1->oPos + 4);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 550)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 550)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 550)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->fPos = (data1->fPos + 5);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 550)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->oPos = (data1->oPos + 2);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 550)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->oPos = (data1->oPos + 4);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 550)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 550)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 550)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->oPos = (data1->oPos + 4);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 550)										data2->iPos = (data2->iPos + 1);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 550)										data3->fPos = (data3->fPos + 2);
HXDLIN( 550)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 550)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 550)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 550)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 550)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN( 550)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 550)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 551)								bitmap = ( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) );
HXLINE( 552)								repeat = c->buffer->b->__get(c->bPos);
HXLINE( 553)								smooth = c->buffer->b->__get((c->bPos + 1));
HXLINE( 554)								shaderBuffer = null();
HXLINE( 555)								fill = null();
            							}
            							break;
            							case (int)1: {
HXLINE( 558)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 2);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->iPos = (data1->iPos + 1);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 4);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 558)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 558)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 5);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 2);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 4);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 558)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 558)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 4);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 558)										data2->iPos = (data2->iPos + 1);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 558)										data3->fPos = (data3->fPos + 2);
HXDLIN( 558)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 558)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 558)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 558)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 558)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN( 558)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 558)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 559)								int color = ::Std_obj::_hx_int(( (Float)(c->buffer->i->__get(c->iPos)) ));
HXLINE( 560)								int alpha = ::Std_obj::_hx_int((c->buffer->f->__get(c->fPos) * ( (Float)(255) )));
HXLINE( 562)								fill = ((color & 16777215) | (alpha << 24));
HXLINE( 563)								shaderBuffer = null();
HXLINE( 564)								bitmap = null();
            							}
            							break;
            							case (int)3: {
HXLINE( 567)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->oPos = (data1->oPos + 2);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 567)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->iPos = (data1->iPos + 1);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 567)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->oPos = (data1->oPos + 4);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 567)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 567)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 567)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->fPos = (data1->fPos + 5);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 567)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->oPos = (data1->oPos + 2);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 567)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->oPos = (data1->oPos + 4);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 567)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 567)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 567)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->oPos = (data1->oPos + 4);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 567)										data2->iPos = (data2->iPos + 1);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 567)										data3->fPos = (data3->fPos + 2);
HXDLIN( 567)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 567)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 567)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 567)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 567)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN( 567)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 567)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 568)								shaderBuffer = ( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) );
HXLINE( 569)								shaderBufferOffset = 0;
HXLINE( 571)								bool _hx_tmp;
HXDLIN( 571)								bool _hx_tmp1;
HXDLIN( 571)								if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 571)									_hx_tmp1 = ::hx::IsNull( shaderBuffer->shader );
            								}
            								else {
HXLINE( 571)									_hx_tmp1 = true;
            								}
HXDLIN( 571)								if (!(_hx_tmp1)) {
HXLINE( 571)									_hx_tmp = ::hx::IsNull( shaderBuffer->shader->_hx___bitmap );
            								}
            								else {
HXLINE( 571)									_hx_tmp = true;
            								}
HXDLIN( 571)								if (_hx_tmp) {
HXLINE( 573)									bitmap = null();
            								}
            								else {
HXLINE( 577)									bitmap = shaderBuffer->shader->_hx___bitmap->input;
            								}
HXLINE( 580)								fill = null();
            							}
            							break;
            							case (int)8: {
HXLINE( 583)								if (::hx::IsNotNull( bitmap )) {
HXLINE( 585)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->oPos = (data1->oPos + 2);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 585)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->iPos = (data1->iPos + 1);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 585)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->oPos = (data1->oPos + 4);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 585)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 585)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 585)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->fPos = (data1->fPos + 5);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 585)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->oPos = (data1->oPos + 2);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 585)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->oPos = (data1->oPos + 4);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 585)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 585)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 585)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->oPos = (data1->oPos + 4);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 585)											data2->iPos = (data2->iPos + 1);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 585)											data3->fPos = (data3->fPos + 2);
HXDLIN( 585)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 585)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 585)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 585)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 585)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN( 585)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 585)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 586)									 ::openfl::_Vector::FloatVector rects = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 587)									 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 588)									 ::openfl::_Vector::FloatVector transforms = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 591)									::Array< Float > rects1;
HXDLIN( 591)									if (::hx::IsNull( rects )) {
HXLINE( 591)										rects1 = null();
            									}
            									else {
HXLINE( 591)										rects1 = ( (::Array< Float >)(rects->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 592)									::Array< int > indices1;
HXDLIN( 592)									if (::hx::IsNull( indices )) {
HXLINE( 592)										indices1 = null();
            									}
            									else {
HXLINE( 592)										indices1 = ( (::Array< int >)(indices->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 593)									::Array< Float > transforms1;
HXDLIN( 593)									if (::hx::IsNull( transforms )) {
HXLINE( 593)										transforms1 = null();
            									}
            									else {
HXLINE( 593)										transforms1 = ( (::Array< Float >)(transforms->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
            									}
HXLINE( 596)									bool hasIndices = ::hx::IsNotNull( indices1 );
HXLINE( 597)									int length;
HXDLIN( 597)									if (hasIndices) {
HXLINE( 597)										length = indices1->length;
            									}
            									else {
HXLINE( 597)										length = ::Math_obj::floor((( (Float)(rects1->length) ) / ( (Float)(4) )));
            									}
HXLINE( 599)									::Array< Float > uMatrix = renderer->_hx___getMatrix(graphics->_hx___owner->_hx___renderTransform,1);
HXLINE( 600)									 ::openfl::display::Shader shader;
HXLINE( 602)									bool _hx_tmp;
HXDLIN( 602)									if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 602)										_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            									}
            									else {
HXLINE( 602)										_hx_tmp = false;
            									}
HXDLIN( 602)									if (_hx_tmp) {
HXLINE( 604)										shader = renderer->_hx___initShaderBuffer(shaderBuffer);
HXLINE( 606)										renderer->_hx___setShaderBuffer(shaderBuffer);
HXLINE( 607)										renderer->applyMatrix(uMatrix);
HXLINE( 608)										renderer->applyBitmapData(bitmap,false,repeat);
HXLINE( 609)										renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 610)										renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
            									}
            									else {
HXLINE( 615)										if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 615)											shader = renderer->_hx___maskShader;
            										}
            										else {
HXLINE( 615)											shader = renderer->_hx___initGraphicsShader(null());
            										}
HXLINE( 616)										renderer->setShader(shader);
HXLINE( 617)										renderer->applyMatrix(uMatrix);
HXLINE( 618)										renderer->applyBitmapData(bitmap,smooth,repeat);
HXLINE( 619)										renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 620)										renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 621)										renderer->updateShader();
            									}
HXLINE( 624)									int end = (quadBufferPosition + length);
HXLINE( 626)									while((quadBufferPosition < end)){
HXLINE( 628)										length = ::Std_obj::_hx_int(::Math_obj::min(( (Float)((end - quadBufferPosition)) ),( (Float)(context->_hx___quadIndexBufferElements) )));
HXLINE( 629)										if ((length <= 0)) {
HXLINE( 629)											goto _hx_goto_8;
            										}
HXLINE( 631)										bool _hx_tmp;
HXDLIN( 631)										if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 631)											_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            										}
            										else {
HXLINE( 631)											_hx_tmp = false;
            										}
HXDLIN( 631)										if (_hx_tmp) {
HXLINE( 633)											renderer->_hx___updateShaderBuffer(shaderBufferOffset);
            										}
HXLINE( 636)										if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 636)											context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),graphics->_hx___quadBuffer->vertexBuffer,(quadBufferPosition * 16),2);
            										}
HXLINE( 638)										if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 638)											context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),graphics->_hx___quadBuffer->vertexBuffer,((quadBufferPosition * 16) + 2),2);
            										}
HXLINE( 641)										context->drawTriangles(context->_hx___quadIndexBuffer,0,(length * 2));
HXLINE( 643)										shaderBufferOffset = (shaderBufferOffset + (length * 4));
HXLINE( 644)										quadBufferPosition = (quadBufferPosition + length);
            									}
            									_hx_goto_8:;
HXLINE( 651)									renderer->_hx___clearShader();
            								}
            							}
            							break;
            							case (int)9: {
HXLINE( 655)								if (::hx::IsNotNull( fill )) {
HXLINE( 657)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->oPos = (data1->oPos + 2);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 657)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->iPos = (data1->iPos + 1);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 657)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->oPos = (data1->oPos + 4);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 657)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 657)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 657)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->fPos = (data1->fPos + 5);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 657)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->oPos = (data1->oPos + 2);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 657)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->oPos = (data1->oPos + 4);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 657)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 657)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 657)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->oPos = (data1->oPos + 4);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 657)											data2->iPos = (data2->iPos + 1);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 657)											data3->fPos = (data3->fPos + 2);
HXDLIN( 657)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 657)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 657)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 657)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 657)									data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 657)									 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 657)									 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 658)									Float x = c->buffer->f->__get(c->fPos);
HXLINE( 659)									Float y = c->buffer->f->__get((c->fPos + 1));
HXLINE( 660)									Float width = c->buffer->f->__get((c->fPos + 2));
HXLINE( 661)									Float height = c->buffer->f->__get((c->fPos + 3));
HXLINE( 664)									int color = ( (int)(fill) );
HXLINE( 665)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->redOffset = ( (Float)((::hx::UShr(color,16) & 255)) );
HXLINE( 666)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->greenOffset = ( (Float)((::hx::UShr(color,8) & 255)) );
HXLINE( 667)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->blueOffset = ( (Float)((color & 255)) );
HXLINE( 669)									::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform->_hx___combine(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 671)									matrix->identity();
HXLINE( 672)									matrix->scale(width,height);
HXLINE( 673)									matrix->tx = x;
HXLINE( 674)									matrix->ty = y;
HXLINE( 675)									matrix->concat(graphics->_hx___owner->_hx___renderTransform);
HXLINE( 677)									 ::openfl::display::Shader shader;
HXDLIN( 677)									if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 677)										shader = renderer->_hx___maskShader;
            									}
            									else {
HXLINE( 677)										shader = renderer->_hx___initGraphicsShader(null());
            									}
HXLINE( 678)									renderer->setShader(shader);
HXLINE( 679)									renderer->applyMatrix(renderer->_hx___getMatrix(matrix,1));
HXLINE( 680)									renderer->applyBitmapData(::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData,true,repeat);
HXLINE( 682)									renderer->applyAlpha(((( (Float)((::hx::UShr(color,24) & 255)) ) / ( (Float)(255) )) * graphics->_hx___owner->_hx___worldAlpha));
HXLINE( 684)									renderer->applyColorTransform(::openfl::display::_internal::Context3DGraphics_obj::tempColorTransform);
HXLINE( 685)									renderer->updateShader();
HXLINE( 687)									 ::openfl::display3D::VertexBuffer3D vertexBuffer = ::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData->getVertexBuffer(context,null(),null());
HXLINE( 688)									if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 688)										context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,0,3);
            									}
HXLINE( 689)									if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 689)										context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,3,2);
            									}
HXLINE( 690)									 ::openfl::display3D::IndexBuffer3D indexBuffer = ::openfl::display::_internal::Context3DGraphics_obj::blankBitmapData->getIndexBuffer(context,null());
HXLINE( 691)									context->drawTriangles(indexBuffer,null(),null());
HXLINE( 693)									shaderBufferOffset = (shaderBufferOffset + 4);
HXLINE( 699)									renderer->_hx___clearShader();
            								}
            							}
            							break;
            							case (int)12: {
HXLINE( 703)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->oPos = (data1->oPos + 2);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->iPos = (data1->iPos + 1);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->oPos = (data1->oPos + 4);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 703)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 703)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->fPos = (data1->fPos + 5);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->oPos = (data1->oPos + 2);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->oPos = (data1->oPos + 4);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 703)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 703)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->oPos = (data1->oPos + 4);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 703)										data2->iPos = (data2->iPos + 1);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 703)										data3->fPos = (data3->fPos + 2);
HXDLIN( 703)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 703)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 703)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 703)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 703)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 703)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 704)								 ::openfl::_Vector::FloatVector vertices = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) );
HXLINE( 705)								 ::openfl::_Vector::IntVector indices = ( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) );
HXLINE( 706)								 ::openfl::_Vector::FloatVector uvtData = ( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) );
HXLINE( 707)								 ::Dynamic culling = c->buffer->o->__get((c->oPos + 3));
HXLINE( 709)								bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 710)								int numVertices = ::Math_obj::floor((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE( 711)								int length;
HXDLIN( 711)								if (hasIndices) {
HXLINE( 711)									length = indices->get_length();
            								}
            								else {
HXLINE( 711)									length = numVertices;
            								}
HXLINE( 713)								bool hasUVData = ::hx::IsNotNull( uvtData );
HXLINE( 714)								bool hasUVTData;
HXDLIN( 714)								if (hasUVData) {
HXLINE( 714)									hasUVTData = (uvtData->get_length() >= (numVertices * 3));
            								}
            								else {
HXLINE( 714)									hasUVTData = false;
            								}
HXLINE( 715)								int vertLength;
HXDLIN( 715)								if (hasUVTData) {
HXLINE( 715)									vertLength = 4;
            								}
            								else {
HXLINE( 715)									vertLength = 2;
            								}
HXLINE( 716)								int uvStride;
HXDLIN( 716)								if (hasUVTData) {
HXLINE( 716)									uvStride = 3;
            								}
            								else {
HXLINE( 716)									uvStride = 2;
            								}
HXLINE( 718)								int dataPerVertex = (vertLength + 2);
HXLINE( 719)								 ::openfl::display3D::VertexBuffer3D vertexBuffer;
HXDLIN( 719)								if (hasUVTData) {
HXLINE( 719)									vertexBuffer = graphics->_hx___vertexBufferUVT;
            								}
            								else {
HXLINE( 719)									vertexBuffer = graphics->_hx___vertexBuffer;
            								}
HXLINE( 720)								int bufferPosition;
HXDLIN( 720)								if (hasUVTData) {
HXLINE( 720)									bufferPosition = vertexBufferPositionUVT;
            								}
            								else {
HXLINE( 720)									bufferPosition = vertexBufferPosition;
            								}
HXLINE( 722)								::Array< Float > uMatrix = renderer->_hx___getMatrix(graphics->_hx___owner->_hx___renderTransform,1);
HXLINE( 723)								 ::openfl::display::Shader shader;
HXLINE( 725)								bool _hx_tmp;
HXDLIN( 725)								if (::hx::IsNotNull( shaderBuffer )) {
HXLINE( 725)									_hx_tmp = !(::openfl::display::_internal::Context3DGraphics_obj::maskRender);
            								}
            								else {
HXLINE( 725)									_hx_tmp = false;
            								}
HXDLIN( 725)								if (_hx_tmp) {
HXLINE( 727)									shader = renderer->_hx___initShaderBuffer(shaderBuffer);
HXLINE( 729)									renderer->_hx___setShaderBuffer(shaderBuffer);
HXLINE( 730)									renderer->applyMatrix(uMatrix);
HXLINE( 731)									renderer->applyBitmapData(bitmap,false,repeat);
HXLINE( 732)									renderer->applyAlpha(( (Float)(1) ));
HXLINE( 733)									renderer->applyColorTransform(null());
HXLINE( 734)									renderer->_hx___updateShaderBuffer(shaderBufferOffset);
            								}
            								else {
HXLINE( 738)									if (::openfl::display::_internal::Context3DGraphics_obj::maskRender) {
HXLINE( 738)										shader = renderer->_hx___maskShader;
            									}
            									else {
HXLINE( 738)										shader = renderer->_hx___initGraphicsShader(null());
            									}
HXLINE( 739)									renderer->setShader(shader);
HXLINE( 740)									renderer->applyMatrix(uMatrix);
HXLINE( 741)									renderer->applyBitmapData(bitmap,smooth,repeat);
HXLINE( 742)									renderer->applyAlpha(graphics->_hx___owner->_hx___worldAlpha);
HXLINE( 743)									renderer->applyColorTransform(graphics->_hx___owner->_hx___worldColorTransform);
HXLINE( 744)									renderer->updateShader();
            								}
HXLINE( 747)								if (::hx::IsNotNull( shader->_hx___position )) {
HXLINE( 748)									 ::Dynamic _hx_tmp;
HXDLIN( 748)									if (hasUVTData) {
HXLINE( 748)										_hx_tmp = 4;
            									}
            									else {
HXLINE( 748)										_hx_tmp = 2;
            									}
HXLINE( 747)									context->setVertexBufferAt(( (int)(shader->_hx___position->index) ),vertexBuffer,bufferPosition,_hx_tmp);
            								}
HXLINE( 749)								if (::hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 749)									context->setVertexBufferAt(( (int)(shader->_hx___textureCoord->index) ),vertexBuffer,(bufferPosition + vertLength),2);
            								}
HXLINE( 752)								 ::Dynamic _hx_switch_0 = culling;
            								if (  (_hx_switch_0==0) ){
HXLINE( 758)									context->setCulling(0);
HXDLIN( 758)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==1) ){
HXLINE( 761)									context->setCulling(3);
HXDLIN( 761)									goto _hx_goto_9;
            								}
            								if (  (_hx_switch_0==2) ){
HXLINE( 755)									context->setCulling(1);
HXDLIN( 755)									goto _hx_goto_9;
            								}
            								/* default */{
            								}
            								_hx_goto_9:;
HXLINE( 773)								context->_hx___drawTriangles(0,length);
HXLINE( 777)								shaderBufferOffset = (shaderBufferOffset + length);
HXLINE( 778)								if (hasUVTData) {
HXLINE( 780)									vertexBufferPositionUVT = (vertexBufferPositionUVT + (dataPerVertex * length));
            								}
            								else {
HXLINE( 784)									vertexBufferPosition = (vertexBufferPosition + (dataPerVertex * length));
            								}
HXLINE( 789)								 ::Dynamic _hx_switch_1 = culling;
            								if (  (_hx_switch_1==1) ||  (_hx_switch_1==2) ){
HXLINE( 792)									context->setCulling(0);
HXDLIN( 792)									goto _hx_goto_10;
            								}
            								/* default */{
            								}
            								_hx_goto_10:;
HXLINE( 801)								renderer->_hx___clearShader();
            							}
            							break;
            							case (int)13: {
HXLINE( 804)								bitmap = null();
HXLINE( 805)								fill = null();
HXLINE( 806)								shaderBuffer = null();
HXLINE( 807)								{
HXLINE( 807)									switch((int)(data->prev->_hx_getIndex())){
            										case (int)0: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->oPos = (data1->oPos + 2);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 807)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)1: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->iPos = (data1->iPos + 1);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 807)											data2->fPos = (data2->fPos + 1);
            										}
            										break;
            										case (int)2: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->oPos = (data1->oPos + 4);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 807)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 807)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 807)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)3: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)4: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->fPos = (data1->fPos + 6);
            										}
            										break;
            										case (int)5: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)6: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->fPos = (data1->fPos + 3);
            										}
            										break;
            										case (int)7: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)8: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->oPos = (data1->oPos + 3);
            										}
            										break;
            										case (int)9: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->fPos = (data1->fPos + 4);
            										}
            										break;
            										case (int)10: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->fPos = (data1->fPos + 5);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 807)											data2->oPos = (data2->oPos + 1);
            										}
            										break;
            										case (int)12: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->oPos = (data1->oPos + 4);
            										}
            										break;
            										case (int)13: {
            										}
            										break;
            										case (int)14: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->oPos = (data1->oPos + 2);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 807)											data2->bPos = (data2->bPos + 2);
            										}
            										break;
            										case (int)15: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->oPos = (data1->oPos + 4);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 807)											data2->iiPos = (data2->iiPos + 2);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 807)											data3->ffPos = (data3->ffPos + 1);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 807)											data4->fPos = (data4->fPos + 1);
            										}
            										break;
            										case (int)16: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->oPos = (data1->oPos + 4);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 807)											data2->iPos = (data2->iPos + 1);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 807)											data3->fPos = (data3->fPos + 2);
HXDLIN( 807)											 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 807)											data4->bPos = (data4->bPos + 1);
            										}
            										break;
            										case (int)17: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)18: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->fPos = (data1->fPos + 2);
            										}
            										break;
            										case (int)19: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)20: {
HXLINE( 807)											 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 807)											data1->oPos = (data1->oPos + 1);
            										}
            										break;
            										case (int)21: case (int)22: {
            										}
            										break;
            										default:{
            										}
            									}
HXLINE( 807)									data->prev = type;
            								}
HXLINE( 808)								context->setCulling(3);
            							}
            							break;
            							case (int)18: {
HXLINE( 811)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->oPos = (data1->oPos + 2);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 811)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->iPos = (data1->iPos + 1);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 811)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->oPos = (data1->oPos + 4);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 811)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 811)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 811)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->fPos = (data1->fPos + 5);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 811)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->oPos = (data1->oPos + 2);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 811)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->oPos = (data1->oPos + 4);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 811)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 811)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 811)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->oPos = (data1->oPos + 4);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 811)										data2->iPos = (data2->iPos + 1);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 811)										data3->fPos = (data3->fPos + 2);
HXDLIN( 811)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 811)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 811)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 811)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 811)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 811)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 811)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 812)								positionX = c->buffer->f->__get(c->fPos);
HXLINE( 813)								positionY = c->buffer->f->__get((c->fPos + 1));
            							}
            							break;
            							case (int)19: {
HXLINE( 816)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->oPos = (data1->oPos + 2);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 816)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->iPos = (data1->iPos + 1);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 816)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->oPos = (data1->oPos + 4);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 816)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 816)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 816)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->fPos = (data1->fPos + 5);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 816)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->oPos = (data1->oPos + 2);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 816)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->oPos = (data1->oPos + 4);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 816)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 816)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 816)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->oPos = (data1->oPos + 4);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 816)										data2->iPos = (data2->iPos + 1);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 816)										data3->fPos = (data3->fPos + 2);
HXDLIN( 816)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 816)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 816)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 816)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 816)								data->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn();
HXDLIN( 816)								 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 816)								 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 817)								renderer->_hx___setBlendMode(c->buffer->o->__get(c->oPos));
            							}
            							break;
            							default:{
HXLINE( 820)								switch((int)(data->prev->_hx_getIndex())){
            									case (int)0: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->oPos = (data1->oPos + 2);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 820)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)1: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->iPos = (data1->iPos + 1);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 820)										data2->fPos = (data2->fPos + 1);
            									}
            									break;
            									case (int)2: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->oPos = (data1->oPos + 4);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 820)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 820)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 820)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)3: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)4: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->fPos = (data1->fPos + 6);
            									}
            									break;
            									case (int)5: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)6: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->fPos = (data1->fPos + 3);
            									}
            									break;
            									case (int)7: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)8: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->oPos = (data1->oPos + 3);
            									}
            									break;
            									case (int)9: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->fPos = (data1->fPos + 4);
            									}
            									break;
            									case (int)10: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->fPos = (data1->fPos + 5);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 820)										data2->oPos = (data2->oPos + 1);
            									}
            									break;
            									case (int)12: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->oPos = (data1->oPos + 4);
            									}
            									break;
            									case (int)13: {
            									}
            									break;
            									case (int)14: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->oPos = (data1->oPos + 2);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 820)										data2->bPos = (data2->bPos + 2);
            									}
            									break;
            									case (int)15: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->oPos = (data1->oPos + 4);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 820)										data2->iiPos = (data2->iiPos + 2);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 820)										data3->ffPos = (data3->ffPos + 1);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 820)										data4->fPos = (data4->fPos + 1);
            									}
            									break;
            									case (int)16: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->oPos = (data1->oPos + 4);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 820)										data2->iPos = (data2->iPos + 1);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 820)										data3->fPos = (data3->fPos + 2);
HXDLIN( 820)										 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 820)										data4->bPos = (data4->bPos + 1);
            									}
            									break;
            									case (int)17: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)18: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->fPos = (data1->fPos + 2);
            									}
            									break;
            									case (int)19: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)20: {
HXLINE( 820)										 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 820)										data1->oPos = (data1->oPos + 1);
            									}
            									break;
            									case (int)21: case (int)22: {
            									}
            									break;
            									default:{
            									}
            								}
HXLINE( 820)								data->prev = type;
            							}
            						}
            					}
            				}
HXLINE( 824)				::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
            			}
HXLINE( 827)			graphics->_hx___hardwareDirty = false;
HXLINE( 828)			graphics->set___dirty(false);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,render,(void))

void Context3DGraphics_obj::renderMask( ::openfl::display::Graphics graphics, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_14098afca734a8c3_833_renderMask)
HXLINE( 836)		::openfl::display::_internal::Context3DGraphics_obj::maskRender = true;
HXLINE( 837)		::openfl::display::_internal::Context3DGraphics_obj::render(graphics,renderer);
HXLINE( 838)		::openfl::display::_internal::Context3DGraphics_obj::maskRender = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DGraphics_obj,renderMask,(void))

void Context3DGraphics_obj::resizeIndexBuffer( ::openfl::display::Graphics graphics,bool isQuad,int length){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_842_resizeIndexBuffer)
HXLINE( 843)		if (isQuad) {
HXLINE( 843)			return;
            		}
HXLINE( 845)		 ::lime::utils::ArrayBufferView buffer;
HXDLIN( 845)		if (isQuad) {
HXLINE( 845)			buffer = null();
            		}
            		else {
HXLINE( 845)			buffer = graphics->_hx___triangleIndexBufferData;
            		}
HXLINE( 846)		int position = 0;
HXDLIN( 846)		 ::lime::utils::ArrayBufferView newBuffer = null();
HXLINE( 849)		if (::hx::IsNull( buffer )) {
HXLINE( 851)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 851)			::cpp::VirtualArray array = null();
HXDLIN( 851)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 851)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 851)			 ::Dynamic len = null();
HXDLIN( 851)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 851)			if (::hx::IsNotNull( length )) {
HXLINE( 851)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,6);
            			}
            			else {
HXLINE( 851)				if (::hx::IsNotNull( array )) {
HXLINE( 851)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 851)					_this->byteOffset = 0;
HXDLIN( 851)					_this->length = array->get_length();
HXDLIN( 851)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 851)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 851)					_this->buffer = this2;
HXDLIN( 851)					_this->copyFromArray(array,null());
HXDLIN( 851)					this1 = _this;
            				}
            				else {
HXLINE( 851)					if (::hx::IsNotNull( vector )) {
HXLINE( 851)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 851)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 851)						_this->byteOffset = 0;
HXDLIN( 851)						_this->length = array->get_length();
HXDLIN( 851)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 851)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 851)						_this->buffer = this2;
HXDLIN( 851)						_this->copyFromArray(array,null());
HXDLIN( 851)						this1 = _this;
            					}
            					else {
HXLINE( 851)						if (::hx::IsNotNull( view )) {
HXLINE( 851)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 851)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 851)							int srcLength = view->length;
HXDLIN( 851)							int srcByteOffset = view->byteOffset;
HXDLIN( 851)							int srcElementSize = view->bytesPerElement;
HXDLIN( 851)							int elementSize = _this->bytesPerElement;
HXDLIN( 851)							if ((view->type == _this->type)) {
HXLINE( 851)								int srcLength = srcData->length;
HXDLIN( 851)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 851)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 851)								_this->buffer = this1;
HXDLIN( 851)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 851)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 851)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 851)							_this->byteOffset = 0;
HXDLIN( 851)							_this->length = srcLength;
HXDLIN( 851)							this1 = _this;
            						}
            						else {
HXLINE( 851)							if (::hx::IsNotNull( buffer )) {
HXLINE( 851)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 851)								int in_byteOffset = 0;
HXDLIN( 851)								if ((in_byteOffset < 0)) {
HXLINE( 851)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 851)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 851)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 851)								int bufferByteLength = buffer->length;
HXDLIN( 851)								int elementSize = _this->bytesPerElement;
HXDLIN( 851)								int newByteLength = bufferByteLength;
HXDLIN( 851)								if (::hx::IsNull( len )) {
HXLINE( 851)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 851)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 851)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 851)									if ((newByteLength < 0)) {
HXLINE( 851)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 851)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 851)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 851)									if ((newRange > bufferByteLength)) {
HXLINE( 851)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 851)								_this->buffer = buffer;
HXDLIN( 851)								_this->byteOffset = in_byteOffset;
HXDLIN( 851)								_this->byteLength = newByteLength;
HXDLIN( 851)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 851)								this1 = _this;
            							}
            							else {
HXLINE( 851)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 851)			newBuffer = this1;
            		}
            		else {
HXLINE( 853)			if ((length > buffer->length)) {
HXLINE( 855)				 ::haxe::io::Bytes buffer1 = null();
HXDLIN( 855)				::cpp::VirtualArray array = null();
HXDLIN( 855)				 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 855)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 855)				 ::Dynamic len = null();
HXDLIN( 855)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 855)				if (::hx::IsNotNull( length )) {
HXLINE( 855)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,6);
            				}
            				else {
HXLINE( 855)					if (::hx::IsNotNull( array )) {
HXLINE( 855)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 855)						_this->byteOffset = 0;
HXDLIN( 855)						_this->length = array->get_length();
HXDLIN( 855)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 855)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 855)						_this->buffer = this2;
HXDLIN( 855)						_this->copyFromArray(array,null());
HXDLIN( 855)						this1 = _this;
            					}
            					else {
HXLINE( 855)						if (::hx::IsNotNull( vector )) {
HXLINE( 855)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 855)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 855)							_this->byteOffset = 0;
HXDLIN( 855)							_this->length = array->get_length();
HXDLIN( 855)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 855)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 855)							_this->buffer = this2;
HXDLIN( 855)							_this->copyFromArray(array,null());
HXDLIN( 855)							this1 = _this;
            						}
            						else {
HXLINE( 855)							if (::hx::IsNotNull( view )) {
HXLINE( 855)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 855)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 855)								int srcLength = view->length;
HXDLIN( 855)								int srcByteOffset = view->byteOffset;
HXDLIN( 855)								int srcElementSize = view->bytesPerElement;
HXDLIN( 855)								int elementSize = _this->bytesPerElement;
HXDLIN( 855)								if ((view->type == _this->type)) {
HXLINE( 855)									int srcLength = srcData->length;
HXDLIN( 855)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 855)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 855)									_this->buffer = this1;
HXDLIN( 855)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 855)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 855)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 855)								_this->byteOffset = 0;
HXDLIN( 855)								_this->length = srcLength;
HXDLIN( 855)								this1 = _this;
            							}
            							else {
HXLINE( 855)								if (::hx::IsNotNull( buffer1 )) {
HXLINE( 855)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 855)									int in_byteOffset = 0;
HXDLIN( 855)									if ((in_byteOffset < 0)) {
HXLINE( 855)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 855)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 855)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 855)									int bufferByteLength = buffer1->length;
HXDLIN( 855)									int elementSize = _this->bytesPerElement;
HXDLIN( 855)									int newByteLength = bufferByteLength;
HXDLIN( 855)									if (::hx::IsNull( len )) {
HXLINE( 855)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 855)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 855)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 855)										if ((newByteLength < 0)) {
HXLINE( 855)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 855)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 855)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 855)										if ((newRange > bufferByteLength)) {
HXLINE( 855)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 855)									_this->buffer = buffer1;
HXDLIN( 855)									_this->byteOffset = in_byteOffset;
HXDLIN( 855)									_this->byteLength = newByteLength;
HXDLIN( 855)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 855)									this1 = _this;
            								}
            								else {
HXLINE( 855)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 855)				newBuffer = this1;
HXLINE( 856)				{
HXLINE( 856)					::cpp::VirtualArray array1 = null();
HXDLIN( 856)					int offset = 0;
HXDLIN( 856)					bool _hx_tmp;
HXDLIN( 856)					if (::hx::IsNotNull( buffer )) {
HXLINE( 856)						_hx_tmp = ::hx::IsNull( array1 );
            					}
            					else {
HXLINE( 856)						_hx_tmp = false;
            					}
HXDLIN( 856)					if (_hx_tmp) {
HXLINE( 856)						newBuffer->buffer->blit((offset * newBuffer->bytesPerElement),buffer->buffer,buffer->byteOffset,buffer->byteLength);
            					}
            					else {
HXLINE( 856)						bool _hx_tmp;
HXDLIN( 856)						if (::hx::IsNotNull( array1 )) {
HXLINE( 856)							_hx_tmp = ::hx::IsNull( buffer );
            						}
            						else {
HXLINE( 856)							_hx_tmp = false;
            						}
HXDLIN( 856)						if (_hx_tmp) {
HXLINE( 856)							newBuffer->copyFromArray(array1,offset);
            						}
            						else {
HXLINE( 856)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            						}
            					}
            				}
HXLINE( 857)				position = buffer->length;
            			}
            		}
HXLINE( 861)		if (::hx::IsNotNull( newBuffer )) {
HXLINE( 863)			if (!(isQuad)) {
HXLINE( 884)				graphics->_hx___triangleIndexBufferData = newBuffer;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context3DGraphics_obj,resizeIndexBuffer,(void))

void Context3DGraphics_obj::resizeVertexBuffer( ::openfl::display::Graphics graphics,bool hasUVTData,int length){
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_890_resizeVertexBuffer)
HXLINE( 891)		 ::lime::utils::ArrayBufferView buffer;
HXDLIN( 891)		if (hasUVTData) {
HXLINE( 891)			buffer = graphics->_hx___vertexBufferDataUVT;
            		}
            		else {
HXLINE( 891)			buffer = graphics->_hx___vertexBufferData;
            		}
HXLINE( 892)		 ::lime::utils::ArrayBufferView newBuffer = null();
HXLINE( 895)		if (::hx::IsNull( buffer )) {
HXLINE( 897)			 ::haxe::io::Bytes buffer = null();
HXDLIN( 897)			::cpp::VirtualArray array = null();
HXDLIN( 897)			 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 897)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 897)			 ::Dynamic len = null();
HXDLIN( 897)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 897)			if (::hx::IsNotNull( length )) {
HXLINE( 897)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,8);
            			}
            			else {
HXLINE( 897)				if (::hx::IsNotNull( array )) {
HXLINE( 897)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 897)					_this->byteOffset = 0;
HXDLIN( 897)					_this->length = array->get_length();
HXDLIN( 897)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 897)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 897)					_this->buffer = this2;
HXDLIN( 897)					_this->copyFromArray(array,null());
HXDLIN( 897)					this1 = _this;
            				}
            				else {
HXLINE( 897)					if (::hx::IsNotNull( vector )) {
HXLINE( 897)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 897)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 897)						_this->byteOffset = 0;
HXDLIN( 897)						_this->length = array->get_length();
HXDLIN( 897)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 897)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 897)						_this->buffer = this2;
HXDLIN( 897)						_this->copyFromArray(array,null());
HXDLIN( 897)						this1 = _this;
            					}
            					else {
HXLINE( 897)						if (::hx::IsNotNull( view )) {
HXLINE( 897)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 897)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 897)							int srcLength = view->length;
HXDLIN( 897)							int srcByteOffset = view->byteOffset;
HXDLIN( 897)							int srcElementSize = view->bytesPerElement;
HXDLIN( 897)							int elementSize = _this->bytesPerElement;
HXDLIN( 897)							if ((view->type == _this->type)) {
HXLINE( 897)								int srcLength = srcData->length;
HXDLIN( 897)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 897)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 897)								_this->buffer = this1;
HXDLIN( 897)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 897)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 897)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 897)							_this->byteOffset = 0;
HXDLIN( 897)							_this->length = srcLength;
HXDLIN( 897)							this1 = _this;
            						}
            						else {
HXLINE( 897)							if (::hx::IsNotNull( buffer )) {
HXLINE( 897)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 897)								int in_byteOffset = 0;
HXDLIN( 897)								if ((in_byteOffset < 0)) {
HXLINE( 897)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 897)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 897)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 897)								int bufferByteLength = buffer->length;
HXDLIN( 897)								int elementSize = _this->bytesPerElement;
HXDLIN( 897)								int newByteLength = bufferByteLength;
HXDLIN( 897)								if (::hx::IsNull( len )) {
HXLINE( 897)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 897)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 897)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 897)									if ((newByteLength < 0)) {
HXLINE( 897)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 897)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 897)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 897)									if ((newRange > bufferByteLength)) {
HXLINE( 897)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 897)								_this->buffer = buffer;
HXDLIN( 897)								_this->byteOffset = in_byteOffset;
HXDLIN( 897)								_this->byteLength = newByteLength;
HXDLIN( 897)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 897)								this1 = _this;
            							}
            							else {
HXLINE( 897)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 897)			newBuffer = this1;
            		}
            		else {
HXLINE( 899)			if ((length > buffer->length)) {
HXLINE( 901)				 ::haxe::io::Bytes buffer1 = null();
HXDLIN( 901)				::cpp::VirtualArray array = null();
HXDLIN( 901)				 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 901)				 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 901)				 ::Dynamic len = null();
HXDLIN( 901)				 ::lime::utils::ArrayBufferView this1;
HXDLIN( 901)				if (::hx::IsNotNull( length )) {
HXLINE( 901)					this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,8);
            				}
            				else {
HXLINE( 901)					if (::hx::IsNotNull( array )) {
HXLINE( 901)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 901)						_this->byteOffset = 0;
HXDLIN( 901)						_this->length = array->get_length();
HXDLIN( 901)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 901)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 901)						_this->buffer = this2;
HXDLIN( 901)						_this->copyFromArray(array,null());
HXDLIN( 901)						this1 = _this;
            					}
            					else {
HXLINE( 901)						if (::hx::IsNotNull( vector )) {
HXLINE( 901)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 901)							::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 901)							_this->byteOffset = 0;
HXDLIN( 901)							_this->length = array->get_length();
HXDLIN( 901)							_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 901)							 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 901)							_this->buffer = this2;
HXDLIN( 901)							_this->copyFromArray(array,null());
HXDLIN( 901)							this1 = _this;
            						}
            						else {
HXLINE( 901)							if (::hx::IsNotNull( view )) {
HXLINE( 901)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 901)								 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 901)								int srcLength = view->length;
HXDLIN( 901)								int srcByteOffset = view->byteOffset;
HXDLIN( 901)								int srcElementSize = view->bytesPerElement;
HXDLIN( 901)								int elementSize = _this->bytesPerElement;
HXDLIN( 901)								if ((view->type == _this->type)) {
HXLINE( 901)									int srcLength = srcData->length;
HXDLIN( 901)									int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 901)									 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 901)									_this->buffer = this1;
HXDLIN( 901)									_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            								}
            								else {
HXLINE( 901)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            								}
HXDLIN( 901)								_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 901)								_this->byteOffset = 0;
HXDLIN( 901)								_this->length = srcLength;
HXDLIN( 901)								this1 = _this;
            							}
            							else {
HXLINE( 901)								if (::hx::IsNotNull( buffer1 )) {
HXLINE( 901)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 901)									int in_byteOffset = 0;
HXDLIN( 901)									if ((in_byteOffset < 0)) {
HXLINE( 901)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 901)									if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 901)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 901)									int bufferByteLength = buffer1->length;
HXDLIN( 901)									int elementSize = _this->bytesPerElement;
HXDLIN( 901)									int newByteLength = bufferByteLength;
HXDLIN( 901)									if (::hx::IsNull( len )) {
HXLINE( 901)										newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 901)										if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 901)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
HXDLIN( 901)										if ((newByteLength < 0)) {
HXLINE( 901)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
            									else {
HXLINE( 901)										newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 901)										int newRange = (in_byteOffset + newByteLength);
HXDLIN( 901)										if ((newRange > bufferByteLength)) {
HXLINE( 901)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            										}
            									}
HXDLIN( 901)									_this->buffer = buffer1;
HXDLIN( 901)									_this->byteOffset = in_byteOffset;
HXDLIN( 901)									_this->byteLength = newByteLength;
HXDLIN( 901)									_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 901)									this1 = _this;
            								}
            								else {
HXLINE( 901)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            								}
            							}
            						}
            					}
            				}
HXDLIN( 901)				newBuffer = this1;
HXLINE( 902)				{
HXLINE( 902)					::cpp::VirtualArray array1 = null();
HXDLIN( 902)					int offset = 0;
HXDLIN( 902)					bool _hx_tmp;
HXDLIN( 902)					if (::hx::IsNotNull( buffer )) {
HXLINE( 902)						_hx_tmp = ::hx::IsNull( array1 );
            					}
            					else {
HXLINE( 902)						_hx_tmp = false;
            					}
HXDLIN( 902)					if (_hx_tmp) {
HXLINE( 902)						newBuffer->buffer->blit((offset * newBuffer->bytesPerElement),buffer->buffer,buffer->byteOffset,buffer->byteLength);
            					}
            					else {
HXLINE( 902)						bool _hx_tmp;
HXDLIN( 902)						if (::hx::IsNotNull( array1 )) {
HXLINE( 902)							_hx_tmp = ::hx::IsNull( buffer );
            						}
            						else {
HXLINE( 902)							_hx_tmp = false;
            						}
HXDLIN( 902)						if (_hx_tmp) {
HXLINE( 902)							newBuffer->copyFromArray(array1,offset);
            						}
            						else {
HXLINE( 902)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid .set call. either view, or array must be not-null.",64,ba,b7,6c)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 906)		if (::hx::IsNotNull( newBuffer )) {
HXLINE( 908)			if (hasUVTData) {
HXLINE( 908)				graphics->_hx___vertexBufferDataUVT = newBuffer;
            			}
            			else {
HXLINE( 908)				graphics->_hx___vertexBufferData = newBuffer;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Context3DGraphics_obj,resizeVertexBuffer,(void))


Context3DGraphics_obj::Context3DGraphics_obj()
{
}

bool Context3DGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maskRender") ) { outValue = ( maskRender ); return true; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buildBuffer") ) { outValue = buildBuffer_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isCompatible") ) { outValue = isCompatible_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blankBitmapData") ) { outValue = ( blankBitmapData ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resizeIndexBuffer") ) { outValue = resizeIndexBuffer_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tempColorTransform") ) { outValue = ( tempColorTransform ); return true; }
		if (HX_FIELD_EQ(inName,"resizeVertexBuffer") ) { outValue = resizeVertexBuffer_dyn(); return true; }
	}
	return false;
}

bool Context3DGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"maskRender") ) { maskRender=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blankBitmapData") ) { blankBitmapData=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"tempColorTransform") ) { tempColorTransform=ioValue.Cast<  ::openfl::geom::ColorTransform >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DGraphics_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &Context3DGraphics_obj::blankBitmapData,HX_("blankBitmapData",2d,8a,0b,df)},
	{::hx::fsBool,(void *) &Context3DGraphics_obj::maskRender,HX_("maskRender",62,99,0d,1a)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(void *) &Context3DGraphics_obj::tempColorTransform,HX_("tempColorTransform",bd,e9,a6,54)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DGraphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::blankBitmapData,"blankBitmapData");
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::maskRender,"maskRender");
	HX_MARK_MEMBER_NAME(Context3DGraphics_obj::tempColorTransform,"tempColorTransform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DGraphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::blankBitmapData,"blankBitmapData");
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::maskRender,"maskRender");
	HX_VISIT_MEMBER_NAME(Context3DGraphics_obj::tempColorTransform,"tempColorTransform");
};

#endif

::hx::Class Context3DGraphics_obj::__mClass;

static ::String Context3DGraphics_obj_sStaticFields[] = {
	HX_("blankBitmapData",2d,8a,0b,df),
	HX_("maskRender",62,99,0d,1a),
	HX_("tempColorTransform",bd,e9,a6,54),
	HX_("buildBuffer",ce,a2,05,21),
	HX_("isCompatible",de,03,42,0a),
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	HX_("resizeIndexBuffer",1e,c0,ce,b4),
	HX_("resizeVertexBuffer",98,73,d0,f4),
	::String(null())
};

void Context3DGraphics_obj::__register()
{
	Context3DGraphics_obj _hx_dummy;
	Context3DGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DGraphics",cf,76,90,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3DGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = Context3DGraphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DGraphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DGraphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DGraphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DGraphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_14098afca734a8c3_34_boot)
HXDLIN(  34)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_36_boot)
HXDLIN(  36)		blankBitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,1,1,false,0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_14098afca734a8c3_38_boot)
HXDLIN(  38)		tempColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,1,1,1,1,0,0,0,0);
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
