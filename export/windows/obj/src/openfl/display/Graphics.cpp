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
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
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
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#include <openfl/display/GraphicsBitmapFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsEndFill
#include <openfl/display/GraphicsEndFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#include <openfl/display/GraphicsGradientFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsQuadPath
#include <openfl/display/GraphicsQuadPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShaderFill
#include <openfl/display/GraphicsShaderFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#include <openfl/display/GraphicsSolidFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsStroke
#include <openfl/display/GraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsTrianglePath
#include <openfl/display/GraphicsTrianglePath.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DBuffer
#include <openfl/display/_internal/Context3DBuffer.h>
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
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_043516e11ce5c7d5_111_new,"openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",111,0x8d299ce7)
HX_DEFINE_STACK_FRAME(_hx_pos_043516e11ce5c7d5_52_new,"openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",52,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_168_beginBitmapFill,"openfl.display.Graphics","beginBitmapFill",0x31c80e62,"openfl.display.Graphics.beginBitmapFill","openfl/display/Graphics.hx",168,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_189_beginFill,"openfl.display.Graphics","beginFill",0xf44a92d3,"openfl.display.Graphics.beginFill","openfl/display/Graphics.hx",189,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_290_beginGradientFill,"openfl.display.Graphics","beginGradientFill",0x99f380e3,"openfl.display.Graphics.beginGradientFill","openfl/display/Graphics.hx",290,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_381_beginShaderFill,"openfl.display.Graphics","beginShaderFill",0x2f039098,"openfl.display.Graphics.beginShaderFill","openfl/display/Graphics.hx",381,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_399_clear,"openfl.display.Graphics","clear",0x0a9f4794,"openfl.display.Graphics.clear","openfl/display/Graphics.hx",399,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_435_copyFrom,"openfl.display.Graphics","copyFrom",0x0a477418,"openfl.display.Graphics.copyFrom","openfl/display/Graphics.hx",435,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_486_cubicCurveTo,"openfl.display.Graphics","cubicCurveTo",0x467410b9,"openfl.display.Graphics.cubicCurveTo","openfl/display/Graphics.hx",486,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_589_curveTo,"openfl.display.Graphics","curveTo",0x89f305d1,"openfl.display.Graphics.curveTo","openfl/display/Graphics.hx",589,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_627_drawCircle,"openfl.display.Graphics","drawCircle",0xee64ddcd,"openfl.display.Graphics.drawCircle","openfl/display/Graphics.hx",627,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_655_drawEllipse,"openfl.display.Graphics","drawEllipse",0xbfad1a81,"openfl.display.Graphics.drawEllipse","openfl/display/Graphics.hx",655,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_679_drawGraphicsData,"openfl.display.Graphics","drawGraphicsData",0x60ea9412,"openfl.display.Graphics.drawGraphicsData","openfl/display/Graphics.hx",679,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_810_drawPath,"openfl.display.Graphics","drawPath",0xa0a1f822,"openfl.display.Graphics.drawPath","openfl/display/Graphics.hx",810,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_883_drawQuads,"openfl.display.Graphics","drawQuads",0x8da790af,"openfl.display.Graphics.drawQuads","openfl/display/Graphics.hx",883,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_990_drawRect,"openfl.display.Graphics","drawRect",0xa1f75fa1,"openfl.display.Graphics.drawRect","openfl/display/Graphics.hx",990,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1031_drawRoundRect,"openfl.display.Graphics","drawRoundRect",0xb24e78f5,"openfl.display.Graphics.drawRoundRect","openfl/display/Graphics.hx",1031,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1050_drawRoundRectComplex,"openfl.display.Graphics","drawRoundRectComplex",0x06fa4dbb,"openfl.display.Graphics.drawRoundRectComplex","openfl/display/Graphics.hx",1050,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1115_drawTriangles,"openfl.display.Graphics","drawTriangles",0xae0bf90e,"openfl.display.Graphics.drawTriangles","openfl/display/Graphics.hx",1115,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1181_endFill,"openfl.display.Graphics","endFill",0xe14b2dc5,"openfl.display.Graphics.endFill","openfl/display/Graphics.hx",1181,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1215_lineBitmapStyle,"openfl.display.Graphics","lineBitmapStyle",0x0ce183f5,"openfl.display.Graphics.lineBitmapStyle","openfl/display/Graphics.hx",1215,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1294_lineGradientStyle,"openfl.display.Graphics","lineGradientStyle",0x2de26914,"openfl.display.Graphics.lineGradientStyle","openfl/display/Graphics.hx",1294,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1476_lineStyle,"openfl.display.Graphics","lineStyle",0x32cd8e24,"openfl.display.Graphics.lineStyle","openfl/display/Graphics.hx",1476,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1511_lineTo,"openfl.display.Graphics","lineTo",0x25b7b6a8,"openfl.display.Graphics.lineTo","openfl/display/Graphics.hx",1511,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1544_moveTo,"openfl.display.Graphics","moveTo",0x05c44305,"openfl.display.Graphics.moveTo","openfl/display/Graphics.hx",1544,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1553_overrideBlendMode,"openfl.display.Graphics","overrideBlendMode",0x65da3cef,"openfl.display.Graphics.overrideBlendMode","openfl/display/Graphics.hx",1553,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1610_readGraphicsData,"openfl.display.Graphics","readGraphicsData",0x877c6664,"openfl.display.Graphics.readGraphicsData","openfl/display/Graphics.hx",1610,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1618___calculateBezierCubicPoint,"openfl.display.Graphics","__calculateBezierCubicPoint",0xb6679552,"openfl.display.Graphics.__calculateBezierCubicPoint","openfl/display/Graphics.hx",1618,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1625___calculateBezierQuadPoint,"openfl.display.Graphics","__calculateBezierQuadPoint",0x2414b8dd,"openfl.display.Graphics.__calculateBezierQuadPoint","openfl/display/Graphics.hx",1625,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1631___cleanup,"openfl.display.Graphics","__cleanup",0x9445428b,"openfl.display.Graphics.__cleanup","openfl/display/Graphics.hx",1631,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1657___getBounds,"openfl.display.Graphics","__getBounds",0x7b7eedd2,"openfl.display.Graphics.__getBounds","openfl/display/Graphics.hx",1657,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1667___hitTest,"openfl.display.Graphics","__hitTest",0xcb8296ac,"openfl.display.Graphics.__hitTest","openfl/display/Graphics.hx",1667,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1691___inflateBounds,"openfl.display.Graphics","__inflateBounds",0x7eaeb403,"openfl.display.Graphics.__inflateBounds","openfl/display/Graphics.hx",1691,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1725___readGraphicsData,"openfl.display.Graphics","__readGraphicsData",0xf8dcc1c4,"openfl.display.Graphics.__readGraphicsData","openfl/display/Graphics.hx",1725,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1835___update,"openfl.display.Graphics","__update",0x711b5982,"openfl.display.Graphics.__update","openfl/display/Graphics.hx",1835,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_1960_set___dirty,"openfl.display.Graphics","set___dirty",0x3f74a55c,"openfl.display.Graphics.set___dirty","openfl/display/Graphics.hx",1960,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_52_boot,"openfl.display.Graphics","boot",0x557e8c0b,"openfl.display.Graphics.boot","openfl/display/Graphics.hx",52,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_54_boot,"openfl.display.Graphics","boot",0x557e8c0b,"openfl.display.Graphics.boot","openfl/display/Graphics.hx",54,0x8d299ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_043516e11ce5c7d5_55_boot,"openfl.display.Graphics","boot",0x557e8c0b,"openfl.display.Graphics.boot","openfl/display/Graphics.hx",55,0x8d299ce7)
namespace openfl{
namespace display{

void Graphics_obj::__construct( ::openfl::display::DisplayObject owner){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::display::_internal::ShaderBuffer _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_111_new)
HXLINE( 111)			return  ::openfl::display::_internal::ShaderBuffer_obj::__alloc( HX_CTX );
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_52_new)
HXLINE(  59)		this->_hx___dirty = true;
HXLINE(  97)		this->_hx___owner = owner;
HXLINE(  99)		this->_hx___commands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
HXLINE( 100)		this->_hx___strokePadding = ( (Float)(0) );
HXLINE( 101)		this->_hx___positionX = ( (Float)(0) );
HXLINE( 102)		this->_hx___positionY = ( (Float)(0) );
HXLINE( 103)		this->_hx___renderTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 104)		this->_hx___usedShaderBuffers =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 105)		this->_hx___worldTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 106)		this->_hx___width = 0;
HXLINE( 107)		this->_hx___height = 0;
HXLINE( 109)		this->_hx___bitmapScale = ( (Float)(1) );
HXLINE( 111)		this->_hx___shaderBufferPool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()),null(),null());
            	}

Dynamic Graphics_obj::__CreateEmpty() { return new Graphics_obj; }

void *Graphics_obj::_hx_vtable = 0;

Dynamic Graphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Graphics_obj > _hx_result = new Graphics_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Graphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e198379;
}

void Graphics_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_smooth){
            		bool repeat = __o_repeat.Default(true);
            		bool smooth = __o_smooth.Default(false);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_168_beginBitmapFill)
HXLINE( 169)		 ::openfl::display::_internal::DrawCommandBuffer _hx_tmp = this->_hx___commands;
HXDLIN( 169)		 ::openfl::geom::Matrix _hx_tmp1;
HXDLIN( 169)		if (::hx::IsNotNull( matrix )) {
HXLINE( 169)			_hx_tmp1 = matrix->clone();
            		}
            		else {
HXLINE( 169)			_hx_tmp1 = null();
            		}
HXDLIN( 169)		_hx_tmp->beginBitmapFill(bitmap,_hx_tmp1,repeat,smooth);
HXLINE( 171)		this->_hx___visible = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

void Graphics_obj::beginFill(::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha){
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(1);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_189_beginFill)
HXLINE( 190)		this->_hx___commands->beginFill((color & 16777215),alpha);
HXLINE( 192)		if ((alpha > 0)) {
HXLINE( 192)			this->_hx___visible = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

void Graphics_obj::beginGradientFill( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic __o_spreadMethod, ::Dynamic __o_interpolationMethod,::hx::Null< Float >  __o_focalPointRatio){
            		 ::Dynamic spreadMethod = __o_spreadMethod;
            		if (::hx::IsNull(__o_spreadMethod)) spreadMethod = 0;
            		 ::Dynamic interpolationMethod = __o_interpolationMethod;
            		if (::hx::IsNull(__o_interpolationMethod)) interpolationMethod = 1;
            		Float focalPointRatio = __o_focalPointRatio.Default(0);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_290_beginGradientFill)
HXLINE( 291)		bool _hx_tmp;
HXDLIN( 291)		if (::hx::IsNotNull( colors )) {
HXLINE( 291)			_hx_tmp = (colors->length == 0);
            		}
            		else {
HXLINE( 291)			_hx_tmp = true;
            		}
HXDLIN( 291)		if (_hx_tmp) {
HXLINE( 291)			return;
            		}
HXLINE( 293)		if (::hx::IsNull( alphas )) {
HXLINE( 295)			alphas = ::Array_obj< Float >::__new(0);
HXLINE( 297)			{
HXLINE( 297)				int _g = 0;
HXDLIN( 297)				int _g1 = colors->length;
HXDLIN( 297)				while((_g < _g1)){
HXLINE( 297)					_g = (_g + 1);
HXDLIN( 297)					int i = (_g - 1);
HXLINE( 299)					alphas->push(1);
            				}
            			}
            		}
HXLINE( 303)		if (::hx::IsNull( ratios )) {
HXLINE( 305)			ratios = ::Array_obj< int >::__new(0);
HXLINE( 307)			{
HXLINE( 307)				int _g = 0;
HXDLIN( 307)				int _g1 = colors->length;
HXDLIN( 307)				while((_g < _g1)){
HXLINE( 307)					_g = (_g + 1);
HXDLIN( 307)					int i = (_g - 1);
HXLINE( 309)					ratios->push(::Math_obj::ceil(((( (Float)(i) ) / ( (Float)(colors->length) )) * ( (Float)(255) ))));
            				}
            			}
            		}
HXLINE( 313)		bool _hx_tmp1;
HXDLIN( 313)		if ((alphas->length >= colors->length)) {
HXLINE( 313)			_hx_tmp1 = (ratios->length < colors->length);
            		}
            		else {
HXLINE( 313)			_hx_tmp1 = true;
            		}
HXDLIN( 313)		if (_hx_tmp1) {
HXLINE( 313)			return;
            		}
HXLINE( 315)		this->_hx___commands->beginGradientFill(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);
HXLINE( 317)		{
HXLINE( 317)			int _g = 0;
HXDLIN( 317)			while((_g < alphas->length)){
HXLINE( 317)				Float alpha = alphas->__get(_g);
HXDLIN( 317)				_g = (_g + 1);
HXLINE( 319)				if ((alpha > 0)) {
HXLINE( 321)					this->_hx___visible = true;
HXLINE( 322)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

void Graphics_obj::beginShaderFill( ::openfl::display::Shader shader, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_381_beginShaderFill)
HXDLIN( 381)		if (::hx::IsNotNull( shader )) {
HXLINE( 384)			 ::openfl::display::_internal::ShaderBuffer shaderBuffer = this->_hx___shaderBufferPool->get().StaticCast<  ::openfl::display::_internal::ShaderBuffer >();
HXLINE( 385)			this->_hx___usedShaderBuffers->add(shaderBuffer);
HXLINE( 386)			shaderBuffer->update(( ( ::openfl::display::GraphicsShader)(shader) ));
HXLINE( 388)			this->_hx___commands->beginShaderFill(shaderBuffer);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginShaderFill,(void))

void Graphics_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_399_clear)
HXLINE( 401)		{
HXLINE( 401)			 ::haxe::ds::_List::ListNode _g_head = this->_hx___usedShaderBuffers->h;
HXDLIN( 401)			while(::hx::IsNotNull( _g_head )){
HXLINE( 401)				 ::openfl::display::_internal::ShaderBuffer val = ( ( ::openfl::display::_internal::ShaderBuffer)(_g_head->item) );
HXDLIN( 401)				_g_head = _g_head->next;
HXDLIN( 401)				 ::openfl::display::_internal::ShaderBuffer shaderBuffer = val;
HXLINE( 403)				this->_hx___shaderBufferPool->release(shaderBuffer);
            			}
            		}
HXLINE( 407)		this->_hx___usedShaderBuffers->clear();
HXLINE( 408)		this->_hx___commands->clear();
HXLINE( 409)		this->_hx___strokePadding = ( (Float)(0) );
HXLINE( 411)		if (::hx::IsNotNull( this->_hx___bounds )) {
HXLINE( 413)			this->set___dirty(true);
HXLINE( 414)			this->_hx___transformDirty = true;
HXLINE( 415)			this->_hx___bounds = null();
            		}
HXLINE( 418)		this->_hx___visible = false;
HXLINE( 419)		this->_hx___positionX = ( (Float)(0) );
HXLINE( 420)		this->_hx___positionY = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

void Graphics_obj::copyFrom( ::openfl::display::Graphics sourceGraphics){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_435_copyFrom)
HXLINE( 436)		 ::openfl::geom::Rectangle _hx_tmp;
HXDLIN( 436)		if (::hx::IsNotNull( sourceGraphics->_hx___bounds )) {
HXLINE( 436)			_hx_tmp = sourceGraphics->_hx___bounds->clone();
            		}
            		else {
HXLINE( 436)			_hx_tmp = null();
            		}
HXDLIN( 436)		this->_hx___bounds = _hx_tmp;
HXLINE( 437)		this->_hx___commands = sourceGraphics->_hx___commands->copy();
HXLINE( 438)		this->set___dirty(true);
HXLINE( 439)		this->_hx___strokePadding = sourceGraphics->_hx___strokePadding;
HXLINE( 440)		this->_hx___positionX = sourceGraphics->_hx___positionX;
HXLINE( 441)		this->_hx___positionY = sourceGraphics->_hx___positionY;
HXLINE( 442)		this->_hx___transformDirty = true;
HXLINE( 443)		this->_hx___visible = sourceGraphics->_hx___visible;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

void Graphics_obj::cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_486_cubicCurveTo)
HXLINE( 487)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE( 488)		this->_hx___inflateBounds((this->_hx___positionX + this->_hx___strokePadding),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE( 490)		Float ix1 = anchorX;
HXDLIN( 490)		Float ix2 = anchorX;
HXLINE( 495)		bool _hx_tmp;
HXDLIN( 495)		bool _hx_tmp1;
HXDLIN( 495)		bool _hx_tmp2;
HXDLIN( 495)		if ((controlX1 < anchorX)) {
HXLINE( 495)			_hx_tmp2 = (controlX1 > this->_hx___positionX);
            		}
            		else {
HXLINE( 495)			_hx_tmp2 = false;
            		}
HXDLIN( 495)		if (!(_hx_tmp2)) {
HXLINE( 495)			if ((controlX1 > anchorX)) {
HXLINE( 495)				_hx_tmp1 = (controlX1 < this->_hx___positionX);
            			}
            			else {
HXLINE( 495)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 495)			_hx_tmp1 = true;
            		}
HXDLIN( 495)		if (_hx_tmp1) {
HXLINE( 496)			bool _hx_tmp1;
HXDLIN( 496)			if ((controlX2 < anchorX)) {
HXLINE( 496)				_hx_tmp1 = (controlX2 > this->_hx___positionX);
            			}
            			else {
HXLINE( 496)				_hx_tmp1 = false;
            			}
HXDLIN( 496)			if (!(_hx_tmp1)) {
HXLINE( 496)				if ((controlX2 > anchorX)) {
HXLINE( 495)					_hx_tmp = (controlX2 < this->_hx___positionX);
            				}
            				else {
HXLINE( 495)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 495)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 495)			_hx_tmp = false;
            		}
HXDLIN( 495)		if (!(_hx_tmp)) {
HXLINE( 498)			Float u = (((( (Float)(2) ) * this->_hx___positionX) - (( (Float)(4) ) * controlX1)) + (( (Float)(2) ) * controlX2));
HXLINE( 499)			Float v = (controlX1 - this->_hx___positionX);
HXLINE( 500)			Float w = (((-(this->_hx___positionX) + (( (Float)(3) ) * controlX1)) + anchorX) - (( (Float)(3) ) * controlX2));
HXLINE( 502)			Float t1 = ((-(u) + ::Math_obj::sqrt(((u * u) - ((( (Float)(4) ) * v) * w)))) / (( (Float)(2) ) * w));
HXLINE( 503)			Float t2 = ((-(u) - ::Math_obj::sqrt(((u * u) - ((( (Float)(4) ) * v) * w)))) / (( (Float)(2) ) * w));
HXLINE( 505)			bool _hx_tmp;
HXDLIN( 505)			if ((t1 > 0)) {
HXLINE( 505)				_hx_tmp = (t1 < 1);
            			}
            			else {
HXLINE( 505)				_hx_tmp = false;
            			}
HXDLIN( 505)			if (_hx_tmp) {
HXLINE( 507)				Float iT = (( (Float)(1) ) - t1);
HXDLIN( 507)				ix1 = ((((this->_hx___positionX * ((iT * iT) * iT)) + (((( (Float)(3) ) * controlX1) * t1) * (iT * iT))) + (((( (Float)(3) ) * controlX2) * iT) * (t1 * t1))) + (anchorX * ((t1 * t1) * t1)));
            			}
HXLINE( 510)			bool _hx_tmp1;
HXDLIN( 510)			if ((t2 > 0)) {
HXLINE( 510)				_hx_tmp1 = (t2 < 1);
            			}
            			else {
HXLINE( 510)				_hx_tmp1 = false;
            			}
HXDLIN( 510)			if (_hx_tmp1) {
HXLINE( 512)				Float iT = (( (Float)(1) ) - t2);
HXDLIN( 512)				ix2 = ((((this->_hx___positionX * ((iT * iT) * iT)) + (((( (Float)(3) ) * controlX1) * t2) * (iT * iT))) + (((( (Float)(3) ) * controlX2) * iT) * (t2 * t2))) + (anchorX * ((t2 * t2) * t2)));
            			}
            		}
HXLINE( 490)		Float iy1 = anchorY;
HXDLIN( 490)		Float iy2 = anchorY;
HXLINE( 519)		bool _hx_tmp3;
HXDLIN( 519)		bool _hx_tmp4;
HXDLIN( 519)		bool _hx_tmp5;
HXDLIN( 519)		if ((controlY1 < anchorY)) {
HXLINE( 519)			_hx_tmp5 = (controlY1 > this->_hx___positionX);
            		}
            		else {
HXLINE( 519)			_hx_tmp5 = false;
            		}
HXDLIN( 519)		if (!(_hx_tmp5)) {
HXLINE( 519)			if ((controlY1 > anchorY)) {
HXLINE( 519)				_hx_tmp4 = (controlY1 < this->_hx___positionX);
            			}
            			else {
HXLINE( 519)				_hx_tmp4 = false;
            			}
            		}
            		else {
HXLINE( 519)			_hx_tmp4 = true;
            		}
HXDLIN( 519)		if (_hx_tmp4) {
HXLINE( 520)			bool _hx_tmp;
HXDLIN( 520)			if ((controlY2 < anchorY)) {
HXLINE( 520)				_hx_tmp = (controlY2 > this->_hx___positionX);
            			}
            			else {
HXLINE( 520)				_hx_tmp = false;
            			}
HXDLIN( 520)			if (!(_hx_tmp)) {
HXLINE( 520)				if ((controlY2 > anchorY)) {
HXLINE( 519)					_hx_tmp3 = (controlY2 < this->_hx___positionX);
            				}
            				else {
HXLINE( 519)					_hx_tmp3 = false;
            				}
            			}
            			else {
HXLINE( 519)				_hx_tmp3 = true;
            			}
            		}
            		else {
HXLINE( 519)			_hx_tmp3 = false;
            		}
HXDLIN( 519)		if (!(_hx_tmp3)) {
HXLINE( 522)			Float u = (((( (Float)(2) ) * this->_hx___positionX) - (( (Float)(4) ) * controlY1)) + (( (Float)(2) ) * controlY2));
HXLINE( 523)			Float v = (controlY1 - this->_hx___positionX);
HXLINE( 524)			Float w = (((-(this->_hx___positionX) + (( (Float)(3) ) * controlY1)) + anchorY) - (( (Float)(3) ) * controlY2));
HXLINE( 526)			Float t1 = ((-(u) + ::Math_obj::sqrt(((u * u) - ((( (Float)(4) ) * v) * w)))) / (( (Float)(2) ) * w));
HXLINE( 527)			Float t2 = ((-(u) - ::Math_obj::sqrt(((u * u) - ((( (Float)(4) ) * v) * w)))) / (( (Float)(2) ) * w));
HXLINE( 529)			bool _hx_tmp;
HXDLIN( 529)			if ((t1 > 0)) {
HXLINE( 529)				_hx_tmp = (t1 < 1);
            			}
            			else {
HXLINE( 529)				_hx_tmp = false;
            			}
HXDLIN( 529)			if (_hx_tmp) {
HXLINE( 531)				Float iT = (( (Float)(1) ) - t1);
HXDLIN( 531)				iy1 = ((((this->_hx___positionX * ((iT * iT) * iT)) + (((( (Float)(3) ) * controlY1) * t1) * (iT * iT))) + (((( (Float)(3) ) * controlY2) * iT) * (t1 * t1))) + (anchorY * ((t1 * t1) * t1)));
            			}
HXLINE( 534)			bool _hx_tmp1;
HXDLIN( 534)			if ((t2 > 0)) {
HXLINE( 534)				_hx_tmp1 = (t2 < 1);
            			}
            			else {
HXLINE( 534)				_hx_tmp1 = false;
            			}
HXDLIN( 534)			if (_hx_tmp1) {
HXLINE( 536)				Float iT = (( (Float)(1) ) - t2);
HXDLIN( 536)				iy2 = ((((this->_hx___positionX * ((iT * iT) * iT)) + (((( (Float)(3) ) * controlY1) * t2) * (iT * iT))) + (((( (Float)(3) ) * controlY2) * iT) * (t2 * t2))) + (anchorY * ((t2 * t2) * t2)));
            			}
            		}
HXLINE( 540)		this->_hx___inflateBounds((ix1 - this->_hx___strokePadding),(iy1 - this->_hx___strokePadding));
HXLINE( 541)		this->_hx___inflateBounds((ix1 + this->_hx___strokePadding),(iy1 + this->_hx___strokePadding));
HXLINE( 542)		this->_hx___inflateBounds((ix2 - this->_hx___strokePadding),(iy2 - this->_hx___strokePadding));
HXLINE( 543)		this->_hx___inflateBounds((ix2 + this->_hx___strokePadding),(iy2 + this->_hx___strokePadding));
HXLINE( 545)		this->_hx___positionX = anchorX;
HXLINE( 546)		this->_hx___positionY = anchorY;
HXLINE( 548)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE( 549)		this->_hx___inflateBounds((this->_hx___positionX + this->_hx___strokePadding),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE( 551)		this->_hx___commands->cubicCurveTo(controlX1,controlY1,controlX2,controlY2,anchorX,anchorY);
HXLINE( 553)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

void Graphics_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_589_curveTo)
HXLINE( 590)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE( 591)		this->_hx___inflateBounds((this->_hx___positionX + this->_hx___strokePadding),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE( 593)		Float ix;
HXDLIN( 593)		Float iy;
HXLINE( 595)		bool _hx_tmp;
HXDLIN( 595)		bool _hx_tmp1;
HXDLIN( 595)		if ((controlX < anchorX)) {
HXLINE( 595)			_hx_tmp1 = (controlX > this->_hx___positionX);
            		}
            		else {
HXLINE( 595)			_hx_tmp1 = false;
            		}
HXDLIN( 595)		if (!(_hx_tmp1)) {
HXLINE( 595)			if ((controlX > anchorX)) {
HXLINE( 595)				_hx_tmp = (controlX < this->_hx___positionX);
            			}
            			else {
HXLINE( 595)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 595)			_hx_tmp = true;
            		}
HXDLIN( 595)		if (_hx_tmp) {
HXLINE( 597)			ix = anchorX;
            		}
            		else {
HXLINE( 601)			Float tx = ((this->_hx___positionX - controlX) / ((this->_hx___positionX - (( (Float)(2) ) * controlX)) + anchorX));
HXLINE( 602)			Float iT = (( (Float)(1) ) - tx);
HXDLIN( 602)			ix = ((((iT * iT) * this->_hx___positionX) + (((( (Float)(2) ) * iT) * tx) * controlX)) + ((tx * tx) * anchorX));
            		}
HXLINE( 605)		bool _hx_tmp2;
HXDLIN( 605)		bool _hx_tmp3;
HXDLIN( 605)		if ((controlY < anchorY)) {
HXLINE( 605)			_hx_tmp3 = (controlY > this->_hx___positionY);
            		}
            		else {
HXLINE( 605)			_hx_tmp3 = false;
            		}
HXDLIN( 605)		if (!(_hx_tmp3)) {
HXLINE( 605)			if ((controlY > anchorY)) {
HXLINE( 605)				_hx_tmp2 = (controlY < this->_hx___positionY);
            			}
            			else {
HXLINE( 605)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE( 605)			_hx_tmp2 = true;
            		}
HXDLIN( 605)		if (_hx_tmp2) {
HXLINE( 607)			iy = anchorY;
            		}
            		else {
HXLINE( 611)			Float ty = ((this->_hx___positionY - controlY) / ((this->_hx___positionY - (( (Float)(2) ) * controlY)) + anchorY));
HXLINE( 612)			Float iT = (( (Float)(1) ) - ty);
HXDLIN( 612)			iy = ((((iT * iT) * this->_hx___positionY) + (((( (Float)(2) ) * iT) * ty) * controlY)) + ((ty * ty) * anchorY));
            		}
HXLINE( 615)		this->_hx___inflateBounds((ix - this->_hx___strokePadding),(iy - this->_hx___strokePadding));
HXLINE( 616)		this->_hx___inflateBounds((ix + this->_hx___strokePadding),(iy + this->_hx___strokePadding));
HXLINE( 618)		this->_hx___positionX = anchorX;
HXLINE( 619)		this->_hx___positionY = anchorY;
HXLINE( 621)		this->_hx___commands->curveTo(controlX,controlY,anchorX,anchorY);
HXLINE( 623)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

void Graphics_obj::drawCircle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_627_drawCircle)
HXLINE( 628)		if ((radius <= 0)) {
HXLINE( 628)			return;
            		}
HXLINE( 630)		this->_hx___inflateBounds(((x - radius) - this->_hx___strokePadding),((y - radius) - this->_hx___strokePadding));
HXLINE( 631)		this->_hx___inflateBounds(((x + radius) + this->_hx___strokePadding),((y + radius) + this->_hx___strokePadding));
HXLINE( 633)		this->_hx___commands->drawCircle(x,y,radius);
HXLINE( 635)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

void Graphics_obj::drawEllipse(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_655_drawEllipse)
HXLINE( 656)		bool _hx_tmp;
HXDLIN( 656)		if (!((width <= 0))) {
HXLINE( 656)			_hx_tmp = (height <= 0);
            		}
            		else {
HXLINE( 656)			_hx_tmp = true;
            		}
HXDLIN( 656)		if (_hx_tmp) {
HXLINE( 656)			return;
            		}
HXLINE( 658)		this->_hx___inflateBounds((x - this->_hx___strokePadding),(y - this->_hx___strokePadding));
HXLINE( 659)		this->_hx___inflateBounds(((x + width) + this->_hx___strokePadding),((y + height) + this->_hx___strokePadding));
HXLINE( 661)		this->_hx___commands->drawEllipse(x,y,width,height);
HXLINE( 663)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

void Graphics_obj::drawGraphicsData( ::openfl::_Vector::ObjectVector graphicsData){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_679_drawGraphicsData)
HXLINE( 680)		 ::openfl::display::GraphicsSolidFill fill;
HXLINE( 681)		 ::openfl::display::GraphicsBitmapFill bitmapFill;
HXLINE( 682)		 ::openfl::display::GraphicsGradientFill gradientFill;
HXLINE( 683)		 ::openfl::display::GraphicsShaderFill shaderFill;
HXLINE( 684)		 ::openfl::display::GraphicsStroke stroke;
HXLINE( 685)		 ::openfl::display::GraphicsPath path;
HXLINE( 686)		 ::openfl::display::GraphicsTrianglePath trianglePath;
HXLINE( 687)		 ::openfl::display::GraphicsQuadPath quadPath;
HXLINE( 689)		{
HXLINE( 689)			 ::Dynamic graphics = graphicsData->iterator();
HXDLIN( 689)			while(( (bool)(graphics->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 689)				::Dynamic graphics1 = graphics->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 691)				switch((int)(( (int)(graphics1->__Field(HX_("__graphicsDataType",0f,5d,4d,46),::hx::paccDynamic)) ))){
            					case (int)0: {
HXLINE( 711)						stroke = ( ( ::openfl::display::GraphicsStroke)(graphics1) );
HXLINE( 713)						if (::hx::IsNotNull( stroke->fill )) {
HXLINE( 715)							 ::Dynamic thickness = stroke->thickness;
HXLINE( 717)							if (::Math_obj::isNaN(( (Float)(thickness) ))) {
HXLINE( 719)								thickness = null();
            							}
HXLINE( 722)							switch((int)(( (int)(stroke->fill->__Field(HX_("__graphicsFillType",e8,75,eb,27),::hx::paccDynamic)) ))){
            								case (int)0: {
HXLINE( 725)									fill = ( ( ::openfl::display::GraphicsSolidFill)(stroke->fill) );
HXLINE( 726)									this->lineStyle(thickness,fill->color,fill->alpha,stroke->pixelHinting,stroke->scaleMode,stroke->caps,stroke->joints,stroke->miterLimit);
            								}
            								break;
            								case (int)1: {
HXLINE( 735)									gradientFill = ( ( ::openfl::display::GraphicsGradientFill)(stroke->fill) );
HXLINE( 736)									this->lineStyle(thickness,0,1,stroke->pixelHinting,stroke->scaleMode,stroke->caps,stroke->joints,stroke->miterLimit);
HXLINE( 737)									this->lineGradientStyle(gradientFill->type,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,gradientFill->matrix,gradientFill->spreadMethod,gradientFill->interpolationMethod,gradientFill->focalPointRatio);
            								}
            								break;
            								case (int)2: {
HXLINE( 730)									bitmapFill = ( ( ::openfl::display::GraphicsBitmapFill)(stroke->fill) );
HXLINE( 731)									this->lineStyle(thickness,0,1,stroke->pixelHinting,stroke->scaleMode,stroke->caps,stroke->joints,stroke->miterLimit);
HXLINE( 732)									this->lineBitmapStyle(bitmapFill->bitmapData,bitmapFill->matrix,bitmapFill->repeat,bitmapFill->smooth);
            								}
            								break;
            								default:{
            								}
            							}
            						}
            						else {
HXLINE( 745)							this->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 694)						fill = ( ( ::openfl::display::GraphicsSolidFill)(graphics1) );
HXLINE( 695)						this->beginFill(fill->color,fill->alpha);
            					}
            					break;
            					case (int)2: {
HXLINE( 702)						gradientFill = ( ( ::openfl::display::GraphicsGradientFill)(graphics1) );
HXLINE( 703)						this->beginGradientFill(gradientFill->type,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,gradientFill->matrix,gradientFill->spreadMethod,gradientFill->interpolationMethod,gradientFill->focalPointRatio);
            					}
            					break;
            					case (int)3: {
HXLINE( 749)						path = ( ( ::openfl::display::GraphicsPath)(graphics1) );
HXLINE( 750)						this->drawPath(path->commands,path->data,path->winding);
            					}
            					break;
            					case (int)4: {
HXLINE( 698)						bitmapFill = ( ( ::openfl::display::GraphicsBitmapFill)(graphics1) );
HXLINE( 699)						this->beginBitmapFill(bitmapFill->bitmapData,bitmapFill->matrix,bitmapFill->repeat,bitmapFill->smooth);
            					}
            					break;
            					case (int)5: {
HXLINE( 757)						this->endFill();
            					}
            					break;
            					case (int)6: {
HXLINE( 760)						quadPath = ( ( ::openfl::display::GraphicsQuadPath)(graphics1) );
HXLINE( 761)						this->drawQuads(quadPath->rects,quadPath->indices,quadPath->transforms);
            					}
            					break;
            					case (int)7: {
HXLINE( 753)						trianglePath = ( ( ::openfl::display::GraphicsTrianglePath)(graphics1) );
HXLINE( 754)						this->drawTriangles(trianglePath->vertices,trianglePath->indices,trianglePath->uvtData,trianglePath->culling);
            					}
            					break;
            					case (int)8: {
HXLINE( 707)						shaderFill = ( ( ::openfl::display::GraphicsShaderFill)(graphics1) );
HXLINE( 708)						this->beginShaderFill(shaderFill->shader,shaderFill->matrix);
            					}
            					break;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

void Graphics_obj::drawPath( ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic __o_winding){
            		 ::Dynamic winding = __o_winding;
            		if (::hx::IsNull(__o_winding)) winding = 0;
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_810_drawPath)
HXLINE( 811)		int dataIndex = 0;
HXLINE( 813)		if (::hx::IsEq( winding,1 )) {
HXLINE( 813)			this->_hx___commands->windingNonZero();
            		}
HXLINE( 815)		{
HXLINE( 815)			 ::Dynamic command = commands->iterator();
HXDLIN( 815)			while(( (bool)(command->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 815)				int command1 = ( (int)(command->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 817)				switch((int)(command1)){
            					case (int)1: {
HXLINE( 820)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 820)						this->moveTo(_hx_tmp,data->get((dataIndex + 1)));
HXLINE( 821)						dataIndex = (dataIndex + 2);
            					}
            					break;
            					case (int)2: {
HXLINE( 824)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 824)						this->lineTo(_hx_tmp,data->get((dataIndex + 1)));
HXLINE( 825)						dataIndex = (dataIndex + 2);
            					}
            					break;
            					case (int)3: {
HXLINE( 838)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 838)						Float _hx_tmp1 = data->get((dataIndex + 1));
HXDLIN( 838)						Float _hx_tmp2 = data->get((dataIndex + 2));
HXDLIN( 838)						this->curveTo(_hx_tmp,_hx_tmp1,_hx_tmp2,data->get((dataIndex + 3)));
HXLINE( 839)						dataIndex = (dataIndex + 4);
            					}
            					break;
            					case (int)4: {
HXLINE( 828)						Float _hx_tmp = data->get((dataIndex + 2));
HXDLIN( 828)						this->moveTo(_hx_tmp,data->get((dataIndex + 3)));
HXLINE( 829)						goto _hx_goto_18;
            					}
            					break;
            					case (int)5: {
HXLINE( 833)						Float _hx_tmp = data->get((dataIndex + 2));
HXDLIN( 833)						this->lineTo(_hx_tmp,data->get((dataIndex + 3)));
HXLINE( 834)						goto _hx_goto_18;
            					}
            					break;
            					case (int)6: {
HXLINE( 842)						Float _hx_tmp = data->get(dataIndex);
HXDLIN( 842)						Float _hx_tmp1 = data->get((dataIndex + 1));
HXDLIN( 842)						Float _hx_tmp2 = data->get((dataIndex + 2));
HXDLIN( 842)						Float _hx_tmp3 = data->get((dataIndex + 3));
HXDLIN( 842)						Float _hx_tmp4 = data->get((dataIndex + 4));
HXDLIN( 842)						this->cubicCurveTo(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,data->get((dataIndex + 5)));
HXLINE( 843)						dataIndex = (dataIndex + 6);
            					}
            					break;
            					default:{
            					}
            				}
            			}
            			_hx_goto_18:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

void Graphics_obj::drawQuads( ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_883_drawQuads)
HXLINE( 884)		if (::hx::IsNull( rects )) {
HXLINE( 884)			return;
            		}
HXLINE( 886)		bool hasIndices = ::hx::IsNotNull( indices );
HXLINE( 887)		bool transformABCD = false;
HXDLIN( 887)		bool transformXY = false;
HXLINE( 889)		int length;
HXDLIN( 889)		if (hasIndices) {
HXLINE( 889)			length = indices->get_length();
            		}
            		else {
HXLINE( 889)			length = ::Math_obj::floor((( (Float)(rects->get_length()) ) / ( (Float)(4) )));
            		}
HXLINE( 890)		if ((length == 0)) {
HXLINE( 890)			return;
            		}
HXLINE( 892)		if (::hx::IsNotNull( transforms )) {
HXLINE( 894)			if ((transforms->get_length() >= (length * 6))) {
HXLINE( 896)				transformABCD = true;
HXLINE( 897)				transformXY = true;
            			}
            			else {
HXLINE( 899)				if ((transforms->get_length() >= (length * 4))) {
HXLINE( 901)					transformABCD = true;
            				}
            				else {
HXLINE( 903)					if ((transforms->get_length() >= (length * 2))) {
HXLINE( 905)						transformXY = true;
            					}
            				}
            			}
            		}
HXLINE( 909)		 ::openfl::geom::Rectangle tileRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 910)		 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 912)		Float minX = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 913)		Float minY = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 914)		Float maxX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 915)		Float maxY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 917)		int ri;
HXDLIN( 917)		int ti;
HXLINE( 919)		{
HXLINE( 919)			int _g = 0;
HXDLIN( 919)			int _g1 = length;
HXDLIN( 919)			while((_g < _g1)){
HXLINE( 919)				_g = (_g + 1);
HXDLIN( 919)				int i = (_g - 1);
HXLINE( 921)				if (hasIndices) {
HXLINE( 921)					ri = (indices->get(i) * 4);
            				}
            				else {
HXLINE( 921)					ri = (i * 4);
            				}
HXLINE( 922)				if ((ri < 0)) {
HXLINE( 922)					continue;
            				}
HXLINE( 923)				Float _hx_tmp = rects->get((ri + 2));
HXDLIN( 923)				tileRect->setTo(( (Float)(0) ),( (Float)(0) ),_hx_tmp,rects->get((ri + 3)));
HXLINE( 925)				bool _hx_tmp1;
HXDLIN( 925)				if (!((tileRect->width <= 0))) {
HXLINE( 925)					_hx_tmp1 = (tileRect->height <= 0);
            				}
            				else {
HXLINE( 925)					_hx_tmp1 = true;
            				}
HXDLIN( 925)				if (_hx_tmp1) {
HXLINE( 927)					continue;
            				}
HXLINE( 930)				bool _hx_tmp2;
HXDLIN( 930)				if (transformABCD) {
HXLINE( 930)					_hx_tmp2 = transformXY;
            				}
            				else {
HXLINE( 930)					_hx_tmp2 = false;
            				}
HXDLIN( 930)				if (_hx_tmp2) {
HXLINE( 932)					ti = (i * 6);
HXLINE( 933)					Float _hx_tmp = transforms->get(ti);
HXDLIN( 933)					Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 933)					Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 933)					Float _hx_tmp3 = transforms->get((ti + 3));
HXDLIN( 933)					Float _hx_tmp4 = transforms->get((ti + 4));
HXDLIN( 933)					tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,transforms->get((ti + 5)));
            				}
            				else {
HXLINE( 935)					if (transformABCD) {
HXLINE( 937)						ti = (i * 4);
HXLINE( 938)						Float _hx_tmp = transforms->get(ti);
HXDLIN( 938)						Float _hx_tmp1 = transforms->get((ti + 1));
HXDLIN( 938)						Float _hx_tmp2 = transforms->get((ti + 2));
HXDLIN( 938)						tileTransform->setTo(_hx_tmp,_hx_tmp1,_hx_tmp2,transforms->get((ti + 3)),tileRect->x,tileRect->y);
            					}
            					else {
HXLINE( 940)						if (transformXY) {
HXLINE( 942)							ti = (i * 2);
HXLINE( 943)							tileTransform->tx = transforms->get(ti);
HXLINE( 944)							tileTransform->ty = transforms->get((ti + 1));
            						}
            						else {
HXLINE( 948)							tileTransform->tx = tileRect->x;
HXLINE( 949)							tileTransform->ty = tileRect->y;
            						}
            					}
            				}
HXLINE( 952)				tileRect->_hx___transform(tileRect,tileTransform);
HXLINE( 954)				if ((minX > tileRect->x)) {
HXLINE( 954)					minX = tileRect->x;
            				}
HXLINE( 955)				if ((minY > tileRect->y)) {
HXLINE( 955)					minY = tileRect->y;
            				}
HXLINE( 956)				if ((maxX < tileRect->get_right())) {
HXLINE( 956)					maxX = tileRect->get_right();
            				}
HXLINE( 957)				if ((maxY < tileRect->get_bottom())) {
HXLINE( 957)					maxY = tileRect->get_bottom();
            				}
            			}
            		}
HXLINE( 960)		this->_hx___inflateBounds(minX,minY);
HXLINE( 961)		this->_hx___inflateBounds(maxX,maxY);
HXLINE( 963)		this->_hx___commands->drawQuads(rects,indices,transforms);
HXLINE( 965)		this->set___dirty(true);
HXLINE( 966)		this->_hx___visible = true;
HXLINE( 968)		::openfl::geom::Rectangle_obj::_hx___pool->release(tileRect);
HXLINE( 969)		::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawQuads,(void))

void Graphics_obj::drawRect(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_990_drawRect)
HXLINE( 991)		bool _hx_tmp;
HXDLIN( 991)		if ((width == 0)) {
HXLINE( 991)			_hx_tmp = (height == 0);
            		}
            		else {
HXLINE( 991)			_hx_tmp = false;
            		}
HXDLIN( 991)		if (_hx_tmp) {
HXLINE( 991)			return;
            		}
HXLINE( 993)		int xSign;
HXDLIN( 993)		if ((width < 0)) {
HXLINE( 993)			xSign = -1;
            		}
            		else {
HXLINE( 993)			xSign = 1;
            		}
HXLINE( 994)		int ySign;
HXDLIN( 994)		if ((height < 0)) {
HXLINE( 994)			ySign = -1;
            		}
            		else {
HXLINE( 994)			ySign = 1;
            		}
HXLINE( 996)		this->_hx___inflateBounds((x - (this->_hx___strokePadding * ( (Float)(xSign) ))),(y - (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE( 997)		this->_hx___inflateBounds(((x + width) + (this->_hx___strokePadding * ( (Float)(xSign) ))),((y + height) + (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE( 999)		this->_hx___commands->drawRect(x,y,width,height);
HXLINE(1001)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

void Graphics_obj::drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1031_drawRoundRect)
HXLINE(1032)		bool _hx_tmp;
HXDLIN(1032)		if ((width == 0)) {
HXLINE(1032)			_hx_tmp = (height == 0);
            		}
            		else {
HXLINE(1032)			_hx_tmp = false;
            		}
HXDLIN(1032)		if (_hx_tmp) {
HXLINE(1032)			return;
            		}
HXLINE(1034)		int xSign;
HXDLIN(1034)		if ((width < 0)) {
HXLINE(1034)			xSign = -1;
            		}
            		else {
HXLINE(1034)			xSign = 1;
            		}
HXLINE(1035)		int ySign;
HXDLIN(1035)		if ((height < 0)) {
HXLINE(1035)			ySign = -1;
            		}
            		else {
HXLINE(1035)			ySign = 1;
            		}
HXLINE(1037)		this->_hx___inflateBounds((x - (this->_hx___strokePadding * ( (Float)(xSign) ))),(y - (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE(1038)		this->_hx___inflateBounds(((x + width) + (this->_hx___strokePadding * ( (Float)(xSign) ))),((y + height) + (this->_hx___strokePadding * ( (Float)(ySign) ))));
HXLINE(1040)		this->_hx___commands->drawRoundRect(x,y,width,height,ellipseWidth,ellipseHeight);
HXLINE(1042)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

void Graphics_obj::drawRoundRectComplex(Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1050_drawRoundRectComplex)
HXLINE(1051)		bool _hx_tmp;
HXDLIN(1051)		if (!((width <= 0))) {
HXLINE(1051)			_hx_tmp = (height <= 0);
            		}
            		else {
HXLINE(1051)			_hx_tmp = true;
            		}
HXDLIN(1051)		if (_hx_tmp) {
HXLINE(1051)			return;
            		}
HXLINE(1053)		this->_hx___inflateBounds((x - this->_hx___strokePadding),(y - this->_hx___strokePadding));
HXLINE(1054)		this->_hx___inflateBounds(((x + width) + this->_hx___strokePadding),((y + height) + this->_hx___strokePadding));
HXLINE(1056)		Float xw = (x + width);
HXLINE(1057)		Float yh = (y + height);
HXLINE(1058)		Float minSize;
HXDLIN(1058)		if ((width < height)) {
HXLINE(1058)			minSize = (width * ( (Float)(2) ));
            		}
            		else {
HXLINE(1058)			minSize = (height * ( (Float)(2) ));
            		}
HXLINE(1059)		if (!((topLeftRadius < minSize))) {
HXLINE(1059)			topLeftRadius = minSize;
            		}
HXLINE(1060)		if (!((topRightRadius < minSize))) {
HXLINE(1060)			topRightRadius = minSize;
            		}
HXLINE(1061)		if (!((bottomLeftRadius < minSize))) {
HXLINE(1061)			bottomLeftRadius = minSize;
            		}
HXLINE(1062)		if (!((bottomRightRadius < minSize))) {
HXLINE(1062)			bottomRightRadius = minSize;
            		}
HXLINE(1064)		Float anchor = (( (Float)(1) ) - ::Math_obj::sin((( (Float)(45) ) * (::Math_obj::PI / ( (Float)(180) )))));
HXLINE(1065)		Float control = (( (Float)(1) ) - ::Math_obj::tan((((Float)22.5) * (::Math_obj::PI / ( (Float)(180) )))));
HXLINE(1067)		Float a = (bottomRightRadius * anchor);
HXLINE(1068)		Float s = (bottomRightRadius * control);
HXLINE(1069)		this->moveTo(xw,(yh - bottomRightRadius));
HXLINE(1070)		this->curveTo(xw,(yh - s),(xw - a),(yh - a));
HXLINE(1071)		this->curveTo((xw - s),yh,(xw - bottomRightRadius),yh);
HXLINE(1073)		a = (bottomLeftRadius * anchor);
HXLINE(1074)		s = (bottomLeftRadius * control);
HXLINE(1075)		this->lineTo((x + bottomLeftRadius),yh);
HXLINE(1076)		this->curveTo((x + s),yh,(x + a),(yh - a));
HXLINE(1077)		this->curveTo(x,(yh - s),x,(yh - bottomLeftRadius));
HXLINE(1079)		a = (topLeftRadius * anchor);
HXLINE(1080)		s = (topLeftRadius * control);
HXLINE(1081)		this->lineTo(x,(y + topLeftRadius));
HXLINE(1082)		this->curveTo(x,(y + s),(x + a),(y + a));
HXLINE(1083)		this->curveTo((x + s),y,(x + topLeftRadius),y);
HXLINE(1085)		a = (topRightRadius * anchor);
HXLINE(1086)		s = (topRightRadius * control);
HXLINE(1087)		this->lineTo((xw - topRightRadius),y);
HXLINE(1088)		this->curveTo((xw - s),y,(xw - a),(y + a));
HXLINE(1089)		this->curveTo(xw,(y + s),xw,(y + topRightRadius));
HXLINE(1090)		this->lineTo(xw,(yh - bottomRightRadius));
HXLINE(1092)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

void Graphics_obj::drawTriangles( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic __o_culling){
            		 ::Dynamic culling = __o_culling;
            		if (::hx::IsNull(__o_culling)) culling = 1;
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1115_drawTriangles)
HXLINE(1116)		bool _hx_tmp;
HXDLIN(1116)		if (::hx::IsNotNull( vertices )) {
HXLINE(1116)			_hx_tmp = (vertices->get_length() == 0);
            		}
            		else {
HXLINE(1116)			_hx_tmp = true;
            		}
HXDLIN(1116)		if (_hx_tmp) {
HXLINE(1116)			return;
            		}
HXLINE(1118)		int vertLength = ::Std_obj::_hx_int((( (Float)(vertices->get_length()) ) / ( (Float)(2) )));
HXLINE(1120)		if (::hx::IsNull( indices )) {
HXLINE(1124)			if ((::hx::Mod(vertLength,3) != 0)) {
HXLINE(1126)				HX_STACK_DO_THROW( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Not enough vertices to close a triangle.",fe,c6,58,0d)));
            			}
HXLINE(1129)			int length = null();
HXDLIN(1129)			bool fixed = null();
HXDLIN(1129)			::Array< int > array = null();
HXDLIN(1129)			indices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
HXLINE(1131)			{
HXLINE(1131)				int _g = 0;
HXDLIN(1131)				int _g1 = vertLength;
HXDLIN(1131)				while((_g < _g1)){
HXLINE(1131)					_g = (_g + 1);
HXDLIN(1131)					int i = (_g - 1);
HXLINE(1133)					indices->push(i);
            				}
            			}
            		}
HXLINE(1137)		if (::hx::IsNull( culling )) {
HXLINE(1139)			culling = 1;
            		}
HXLINE(1142)		Float x;
HXDLIN(1142)		Float y;
HXLINE(1143)		Float minX = ::Math_obj::POSITIVE_INFINITY;
HXLINE(1144)		Float minY = ::Math_obj::POSITIVE_INFINITY;
HXLINE(1145)		Float maxX = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(1146)		Float maxY = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(1148)		{
HXLINE(1148)			int _g = 0;
HXDLIN(1148)			int _g1 = vertLength;
HXDLIN(1148)			while((_g < _g1)){
HXLINE(1148)				_g = (_g + 1);
HXDLIN(1148)				int i = (_g - 1);
HXLINE(1150)				x = vertices->get((i * 2));
HXLINE(1151)				y = vertices->get(((i * 2) + 1));
HXLINE(1153)				if ((minX > x)) {
HXLINE(1153)					minX = x;
            				}
HXLINE(1154)				if ((minY > y)) {
HXLINE(1154)					minY = y;
            				}
HXLINE(1155)				if ((maxX < x)) {
HXLINE(1155)					maxX = x;
            				}
HXLINE(1156)				if ((maxY < y)) {
HXLINE(1156)					maxY = y;
            				}
            			}
            		}
HXLINE(1159)		this->_hx___inflateBounds(minX,minY);
HXLINE(1160)		this->_hx___inflateBounds(maxX,maxY);
HXLINE(1162)		this->_hx___commands->drawTriangles(vertices,indices,uvtData,culling);
HXLINE(1164)		this->set___dirty(true);
HXLINE(1165)		this->_hx___visible = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawTriangles,(void))

void Graphics_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1181_endFill)
HXDLIN(1181)		this->_hx___commands->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

void Graphics_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,::hx::Null< bool >  __o_repeat,::hx::Null< bool >  __o_smooth){
            		bool repeat = __o_repeat.Default(true);
            		bool smooth = __o_smooth.Default(false);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1215_lineBitmapStyle)
HXDLIN(1215)		 ::openfl::display::_internal::DrawCommandBuffer _hx_tmp = this->_hx___commands;
HXDLIN(1215)		 ::openfl::geom::Matrix _hx_tmp1;
HXDLIN(1215)		if (::hx::IsNotNull( matrix )) {
HXDLIN(1215)			_hx_tmp1 = matrix->clone();
            		}
            		else {
HXDLIN(1215)			_hx_tmp1 = null();
            		}
HXDLIN(1215)		_hx_tmp->lineBitmapStyle(bitmap,_hx_tmp1,repeat,smooth);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

void Graphics_obj::lineGradientStyle( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic __o_spreadMethod, ::Dynamic __o_interpolationMethod,::hx::Null< Float >  __o_focalPointRatio){
            		 ::Dynamic spreadMethod = __o_spreadMethod;
            		if (::hx::IsNull(__o_spreadMethod)) spreadMethod = 0;
            		 ::Dynamic interpolationMethod = __o_interpolationMethod;
            		if (::hx::IsNull(__o_interpolationMethod)) interpolationMethod = 1;
            		Float focalPointRatio = __o_focalPointRatio.Default(0);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1294_lineGradientStyle)
HXDLIN(1294)		this->_hx___commands->lineGradientStyle(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

void Graphics_obj::lineStyle( ::Dynamic thickness,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha,::hx::Null< bool >  __o_pixelHinting, ::Dynamic __o_scaleMode, ::Dynamic caps, ::Dynamic joints,::hx::Null< Float >  __o_miterLimit){
            		int color = __o_color.Default(0);
            		Float alpha = __o_alpha.Default(1);
            		bool pixelHinting = __o_pixelHinting.Default(false);
            		 ::Dynamic scaleMode = __o_scaleMode;
            		if (::hx::IsNull(__o_scaleMode)) scaleMode = 2;
            		Float miterLimit = __o_miterLimit.Default(3);
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1476_lineStyle)
HXLINE(1477)		if (::hx::IsNotNull( thickness )) {
HXLINE(1479)			if (::hx::IsEq( joints,1 )) {
HXLINE(1481)				if (::hx::IsGreater( thickness,this->_hx___strokePadding )) {
HXLINE(1481)					this->_hx___strokePadding = ( (Float)(::Math_obj::ceil(( (Float)(thickness) ))) );
            				}
            			}
            			else {
HXLINE(1485)				if (((( (Float)(thickness) ) / ( (Float)(2) )) > this->_hx___strokePadding)) {
HXLINE(1485)					this->_hx___strokePadding = ( (Float)(::Math_obj::ceil((( (Float)(thickness) ) / ( (Float)(2) )))) );
            				}
            			}
            		}
HXLINE(1489)		this->_hx___commands->lineStyle(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit);
HXLINE(1491)		if (::hx::IsNotNull( thickness )) {
HXLINE(1491)			this->_hx___visible = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

void Graphics_obj::lineTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1511_lineTo)
HXLINE(1512)		bool _hx_tmp;
HXDLIN(1512)		if (::Math_obj::isFinite(x)) {
HXLINE(1512)			_hx_tmp = !(::Math_obj::isFinite(y));
            		}
            		else {
HXLINE(1512)			_hx_tmp = true;
            		}
HXDLIN(1512)		if (_hx_tmp) {
HXLINE(1514)			return;
            		}
HXLINE(1519)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE(1520)		this->_hx___inflateBounds((this->_hx___positionX + this->_hx___strokePadding),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE(1522)		this->_hx___positionX = x;
HXLINE(1523)		this->_hx___positionY = y;
HXLINE(1525)		this->_hx___inflateBounds((this->_hx___positionX - this->_hx___strokePadding),(this->_hx___positionY - this->_hx___strokePadding));
HXLINE(1526)		this->_hx___inflateBounds((this->_hx___positionX + (this->_hx___strokePadding * ( (Float)(2) ))),(this->_hx___positionY + this->_hx___strokePadding));
HXLINE(1528)		this->_hx___commands->lineTo(x,y);
HXLINE(1530)		this->set___dirty(true);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

void Graphics_obj::moveTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1544_moveTo)
HXLINE(1545)		this->_hx___positionX = x;
HXLINE(1546)		this->_hx___positionY = y;
HXLINE(1548)		this->_hx___commands->moveTo(x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

void Graphics_obj::overrideBlendMode( ::Dynamic blendMode){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1553_overrideBlendMode)
HXLINE(1554)		if (::hx::IsNull( blendMode )) {
HXLINE(1554)			blendMode = 10;
            		}
HXLINE(1555)		this->_hx___commands->overrideBlendMode(blendMode);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,overrideBlendMode,(void))

 ::openfl::_Vector::ObjectVector Graphics_obj::readGraphicsData(::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1610_readGraphicsData)
HXLINE(1611)		int length = null();
HXDLIN(1611)		bool fixed = null();
HXDLIN(1611)		::Array< ::Dynamic> array = null();
HXDLIN(1611)		 ::openfl::_Vector::ObjectVector graphicsData =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE(1612)		this->_hx___owner->_hx___readGraphicsData(graphicsData,recurse);
HXLINE(1613)		return graphicsData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,readGraphicsData,return )

Float Graphics_obj::_hx___calculateBezierCubicPoint(Float t,Float p1,Float p2,Float p3,Float p4){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1618___calculateBezierCubicPoint)
HXLINE(1619)		Float iT = (( (Float)(1) ) - t);
HXLINE(1620)		return ((((p1 * ((iT * iT) * iT)) + (((( (Float)(3) ) * p2) * t) * (iT * iT))) + (((( (Float)(3) ) * p3) * iT) * (t * t))) + (p4 * ((t * t) * t)));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,_hx___calculateBezierCubicPoint,return )

Float Graphics_obj::_hx___calculateBezierQuadPoint(Float t,Float p1,Float p2,Float p3){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1625___calculateBezierQuadPoint)
HXLINE(1626)		Float iT = (( (Float)(1) ) - t);
HXLINE(1627)		return ((((iT * iT) * p1) + (((( (Float)(2) ) * iT) * t) * p2)) + ((t * t) * p3));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,_hx___calculateBezierQuadPoint,return )

void Graphics_obj::_hx___cleanup(){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1631___cleanup)
HXLINE(1639)		if (::hx::IsNotNull( this->_hx___bounds )) {
HXLINE(1641)			this->set___dirty(true);
HXLINE(1642)			this->_hx___transformDirty = true;
            		}
HXLINE(1646)		this->_hx___bitmap = null();
HXLINE(1652)		this->_hx___cairo = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,_hx___cleanup,(void))

void Graphics_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1657___getBounds)
HXLINE(1658)		if (::hx::IsNull( this->_hx___bounds )) {
HXLINE(1658)			return;
            		}
HXLINE(1660)		 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(1661)		this->_hx___bounds->_hx___transform(bounds,matrix);
HXLINE(1662)		rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE(1663)		::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,_hx___getBounds,(void))

bool Graphics_obj::_hx___hitTest(Float x,Float y,bool shapeFlag, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1667___hitTest)
HXLINE(1668)		if (::hx::IsNull( this->_hx___bounds )) {
HXLINE(1668)			return false;
            		}
HXLINE(1670)		Float norm = ((matrix->a * matrix->d) - (matrix->b * matrix->c));
HXDLIN(1670)		Float px;
HXDLIN(1670)		if ((norm == 0)) {
HXLINE(1670)			px = -(matrix->tx);
            		}
            		else {
HXLINE(1670)			px = ((((Float)1.0) / norm) * ((matrix->c * (matrix->ty - y)) + (matrix->d * (x - matrix->tx))));
            		}
HXLINE(1671)		Float norm1 = ((matrix->a * matrix->d) - (matrix->b * matrix->c));
HXDLIN(1671)		Float py;
HXDLIN(1671)		if ((norm1 == 0)) {
HXLINE(1671)			py = -(matrix->ty);
            		}
            		else {
HXLINE(1671)			py = ((((Float)1.0) / norm1) * ((matrix->a * (y - matrix->ty)) + (matrix->b * (matrix->tx - x))));
            		}
HXLINE(1673)		bool _hx_tmp;
HXDLIN(1673)		bool _hx_tmp1;
HXDLIN(1673)		if ((px > this->_hx___bounds->x)) {
HXLINE(1673)			_hx_tmp1 = (py > this->_hx___bounds->y);
            		}
            		else {
HXLINE(1673)			_hx_tmp1 = false;
            		}
HXDLIN(1673)		if (_hx_tmp1) {
HXLINE(1673)			_hx_tmp = this->_hx___bounds->contains(px,py);
            		}
            		else {
HXLINE(1673)			_hx_tmp = false;
            		}
HXDLIN(1673)		if (_hx_tmp) {
HXLINE(1675)			if (shapeFlag) {
HXLINE(1680)				return ::openfl::display::_internal::CairoGraphics_obj::hitTest(::hx::ObjectPtr<OBJ_>(this),px,py);
            			}
HXLINE(1684)			return true;
            		}
HXLINE(1687)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,_hx___hitTest,return )

void Graphics_obj::_hx___inflateBounds(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1691___inflateBounds)
HXLINE(1692)		if (::hx::IsNull( this->_hx___bounds )) {
HXLINE(1694)			this->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,0,0);
HXLINE(1695)			this->_hx___transformDirty = true;
HXLINE(1696)			return;
            		}
HXLINE(1699)		if ((x < this->_hx___bounds->x)) {
HXLINE(1701)			 ::openfl::geom::Rectangle fh = this->_hx___bounds;
HXDLIN(1701)			fh->width = (fh->width + (this->_hx___bounds->x - x));
HXLINE(1702)			this->_hx___bounds->x = x;
HXLINE(1703)			this->_hx___transformDirty = true;
            		}
HXLINE(1706)		if ((y < this->_hx___bounds->y)) {
HXLINE(1708)			 ::openfl::geom::Rectangle fh = this->_hx___bounds;
HXDLIN(1708)			fh->height = (fh->height + (this->_hx___bounds->y - y));
HXLINE(1709)			this->_hx___bounds->y = y;
HXLINE(1710)			this->_hx___transformDirty = true;
            		}
HXLINE(1713)		if ((x > (this->_hx___bounds->x + this->_hx___bounds->width))) {
HXLINE(1715)			this->_hx___bounds->width = (x - this->_hx___bounds->x);
            		}
HXLINE(1718)		if ((y > (this->_hx___bounds->y + this->_hx___bounds->height))) {
HXLINE(1720)			this->_hx___bounds->height = (y - this->_hx___bounds->y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,_hx___inflateBounds,(void))

void Graphics_obj::_hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData){
            	HX_GC_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1725___readGraphicsData)
HXLINE(1726)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,this->_hx___commands);
HXLINE(1727)		 ::openfl::display::GraphicsPath path = null();
HXDLIN(1727)		 ::openfl::display::GraphicsStroke stroke;
HXLINE(1729)		{
HXLINE(1729)			int _g = 0;
HXDLIN(1729)			::Array< ::Dynamic> _g1 = this->_hx___commands->types;
HXDLIN(1729)			while((_g < _g1->length)){
HXLINE(1729)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(1729)				_g = (_g + 1);
HXLINE(1731)				switch((int)(type->_hx_getIndex())){
            					case (int)4: case (int)5: case (int)6: case (int)7: case (int)9: case (int)10: case (int)17: case (int)18: {
HXLINE(1734)						if (::hx::IsNull( path )) {
HXLINE(1736)							path =  ::openfl::display::GraphicsPath_obj::__alloc( HX_CTX ,null(),null(),null());
            						}
            					}
            					break;
            					default:{
HXLINE(1740)						if (::hx::IsNotNull( path )) {
HXLINE(1742)							graphicsData->push(path);
HXLINE(1743)							path = null();
            						}
            					}
            				}
HXLINE(1747)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE(1809)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->oPos = (data1->oPos + 2);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1809)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->iPos = (data1->iPos + 1);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1809)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->oPos = (data1->oPos + 4);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1809)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1809)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1809)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->fPos = (data1->fPos + 5);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1809)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->oPos = (data1->oPos + 2);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1809)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->oPos = (data1->oPos + 4);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1809)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1809)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1809)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->oPos = (data1->oPos + 4);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1809)								data2->iPos = (data2->iPos + 1);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1809)								data3->fPos = (data3->fPos + 2);
HXDLIN(1809)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1809)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1809)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1809)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1809)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(1809)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1809)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1810)						graphicsData->push( ::openfl::display::GraphicsBitmapFill_obj::__alloc( HX_CTX ,( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1))));
            					}
            					break;
            					case (int)1: {
HXLINE(1813)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->oPos = (data1->oPos + 2);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1813)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->iPos = (data1->iPos + 1);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1813)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->oPos = (data1->oPos + 4);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1813)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1813)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1813)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->fPos = (data1->fPos + 5);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1813)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->oPos = (data1->oPos + 2);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1813)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->oPos = (data1->oPos + 4);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1813)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1813)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1813)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->oPos = (data1->oPos + 4);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1813)								data2->iPos = (data2->iPos + 1);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1813)								data3->fPos = (data3->fPos + 2);
HXDLIN(1813)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1813)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1813)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1813)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1813)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN(1813)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1813)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1814)						graphicsData->push( ::openfl::display::GraphicsSolidFill_obj::__alloc( HX_CTX ,c->buffer->i->__get(c->iPos),1));
            					}
            					break;
            					case (int)2: {
HXLINE(1817)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->oPos = (data1->oPos + 2);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1817)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->iPos = (data1->iPos + 1);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1817)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->oPos = (data1->oPos + 4);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1817)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1817)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1817)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->fPos = (data1->fPos + 5);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1817)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->oPos = (data1->oPos + 2);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1817)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->oPos = (data1->oPos + 4);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1817)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1817)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1817)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->oPos = (data1->oPos + 4);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1817)								data2->iPos = (data2->iPos + 1);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1817)								data3->fPos = (data3->fPos + 2);
HXDLIN(1817)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1817)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1817)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1817)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1817)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN(1817)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1817)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1818)						graphicsData->push( ::openfl::display::GraphicsGradientFill_obj::__alloc( HX_CTX ,c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos)));
            					}
            					break;
            					case (int)3: {
            					}
            					break;
            					case (int)4: {
HXLINE(1750)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->oPos = (data1->oPos + 2);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1750)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->iPos = (data1->iPos + 1);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1750)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->oPos = (data1->oPos + 4);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1750)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1750)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1750)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->fPos = (data1->fPos + 5);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1750)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->oPos = (data1->oPos + 2);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1750)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->oPos = (data1->oPos + 4);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1750)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1750)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1750)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->oPos = (data1->oPos + 4);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1750)								data2->iPos = (data2->iPos + 1);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1750)								data3->fPos = (data3->fPos + 2);
HXDLIN(1750)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1750)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1750)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1750)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1750)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(1750)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1750)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1751)						path->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            					}
            					break;
            					case (int)5: {
HXLINE(1754)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->oPos = (data1->oPos + 2);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1754)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->iPos = (data1->iPos + 1);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1754)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->oPos = (data1->oPos + 4);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1754)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1754)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1754)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->fPos = (data1->fPos + 5);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1754)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->oPos = (data1->oPos + 2);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1754)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->oPos = (data1->oPos + 4);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1754)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1754)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1754)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->oPos = (data1->oPos + 4);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1754)								data2->iPos = (data2->iPos + 1);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1754)								data3->fPos = (data3->fPos + 2);
HXDLIN(1754)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1754)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1754)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1754)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1754)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(1754)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1754)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1755)						path->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)6: {
HXLINE(1766)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->oPos = (data1->oPos + 2);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1766)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->iPos = (data1->iPos + 1);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1766)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->oPos = (data1->oPos + 4);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1766)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1766)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1766)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->fPos = (data1->fPos + 5);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1766)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->oPos = (data1->oPos + 2);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1766)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->oPos = (data1->oPos + 4);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1766)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1766)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1766)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->oPos = (data1->oPos + 4);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1766)								data2->iPos = (data2->iPos + 1);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1766)								data3->fPos = (data3->fPos + 2);
HXDLIN(1766)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1766)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1766)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1766)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1766)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(1766)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1766)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1767)						path->_hx___drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            					}
            					break;
            					case (int)7: {
HXLINE(1770)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->oPos = (data1->oPos + 2);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1770)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->iPos = (data1->iPos + 1);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1770)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->oPos = (data1->oPos + 4);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1770)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1770)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1770)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->fPos = (data1->fPos + 5);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1770)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->oPos = (data1->oPos + 2);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1770)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->oPos = (data1->oPos + 4);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1770)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1770)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1770)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->oPos = (data1->oPos + 4);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1770)								data2->iPos = (data2->iPos + 1);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1770)								data3->fPos = (data3->fPos + 2);
HXDLIN(1770)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1770)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1770)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1770)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1770)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN(1770)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1770)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1771)						path->_hx___drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)9: {
HXLINE(1774)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->oPos = (data1->oPos + 2);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1774)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->iPos = (data1->iPos + 1);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1774)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->oPos = (data1->oPos + 4);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1774)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1774)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1774)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->fPos = (data1->fPos + 5);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1774)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->oPos = (data1->oPos + 2);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1774)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->oPos = (data1->oPos + 4);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1774)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1774)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1774)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->oPos = (data1->oPos + 4);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1774)								data2->iPos = (data2->iPos + 1);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1774)								data3->fPos = (data3->fPos + 2);
HXDLIN(1774)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1774)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1774)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1774)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1774)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN(1774)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1774)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1775)						path->_hx___drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)10: {
HXLINE(1778)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->oPos = (data1->oPos + 2);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1778)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->iPos = (data1->iPos + 1);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1778)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->oPos = (data1->oPos + 4);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1778)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1778)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1778)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->fPos = (data1->fPos + 5);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1778)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->oPos = (data1->oPos + 2);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1778)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->oPos = (data1->oPos + 4);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1778)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1778)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1778)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->oPos = (data1->oPos + 4);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1778)								data2->iPos = (data2->iPos + 1);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1778)								data3->fPos = (data3->fPos + 2);
HXDLIN(1778)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1778)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1778)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1778)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1778)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN(1778)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1778)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1779)						Float _hx_tmp;
HXDLIN(1779)						if (::hx::IsNotNull( c->buffer->o->__get(c->oPos) )) {
HXLINE(1779)							_hx_tmp = ( (Float)(c->buffer->o->__get(c->oPos)) );
            						}
            						else {
HXLINE(1779)							_hx_tmp = c->buffer->f->__get((c->fPos + 4));
            						}
HXDLIN(1779)						path->_hx___drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),_hx_tmp);
            					}
            					break;
            					case (int)13: {
HXLINE(1805)						{
HXLINE(1805)							switch((int)(data->prev->_hx_getIndex())){
            								case (int)0: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->oPos = (data1->oPos + 2);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1805)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)1: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->iPos = (data1->iPos + 1);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1805)									data2->fPos = (data2->fPos + 1);
            								}
            								break;
            								case (int)2: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->oPos = (data1->oPos + 4);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1805)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1805)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1805)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)3: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)4: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->fPos = (data1->fPos + 6);
            								}
            								break;
            								case (int)5: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)6: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->fPos = (data1->fPos + 3);
            								}
            								break;
            								case (int)7: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)8: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->oPos = (data1->oPos + 3);
            								}
            								break;
            								case (int)9: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->fPos = (data1->fPos + 4);
            								}
            								break;
            								case (int)10: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->fPos = (data1->fPos + 5);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1805)									data2->oPos = (data2->oPos + 1);
            								}
            								break;
            								case (int)12: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->oPos = (data1->oPos + 4);
            								}
            								break;
            								case (int)13: {
            								}
            								break;
            								case (int)14: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->oPos = (data1->oPos + 2);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1805)									data2->bPos = (data2->bPos + 2);
            								}
            								break;
            								case (int)15: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->oPos = (data1->oPos + 4);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1805)									data2->iiPos = (data2->iiPos + 2);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1805)									data3->ffPos = (data3->ffPos + 1);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1805)									data4->fPos = (data4->fPos + 1);
            								}
            								break;
            								case (int)16: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->oPos = (data1->oPos + 4);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1805)									data2->iPos = (data2->iPos + 1);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1805)									data3->fPos = (data3->fPos + 2);
HXDLIN(1805)									 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1805)									data4->bPos = (data4->bPos + 1);
            								}
            								break;
            								case (int)17: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)18: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->fPos = (data1->fPos + 2);
            								}
            								break;
            								case (int)19: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)20: {
HXLINE(1805)									 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1805)									data1->oPos = (data1->oPos + 1);
            								}
            								break;
            								case (int)21: case (int)22: {
            								}
            								break;
            								default:{
            								}
            							}
HXLINE(1805)							data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN(1805)							 ::openfl::display::_internal::DrawCommandReader this1 = data;
            						}
HXLINE(1806)						graphicsData->push( ::openfl::display::GraphicsEndFill_obj::__alloc( HX_CTX ));
            					}
            					break;
            					case (int)14: {
HXLINE(1792)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 2);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->iPos = (data1->iPos + 1);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 4);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1792)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1792)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 5);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 2);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 4);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1792)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1792)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 4);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1792)								data2->iPos = (data2->iPos + 1);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1792)								data3->fPos = (data3->fPos + 2);
HXDLIN(1792)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1792)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1792)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1792)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1792)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN(1792)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1792)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1793)						path = null();
            					}
            					break;
            					case (int)15: {
HXLINE(1784)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->oPos = (data1->oPos + 2);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1784)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->iPos = (data1->iPos + 1);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1784)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->oPos = (data1->oPos + 4);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1784)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1784)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1784)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->fPos = (data1->fPos + 5);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1784)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->oPos = (data1->oPos + 2);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1784)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->oPos = (data1->oPos + 4);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1784)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1784)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1784)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->oPos = (data1->oPos + 4);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1784)								data2->iPos = (data2->iPos + 1);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1784)								data3->fPos = (data3->fPos + 2);
HXDLIN(1784)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1784)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1784)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1784)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1784)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN(1784)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1784)						 ::openfl::display::_internal::DrawCommandReader c = this1;
            					}
            					break;
            					case (int)16: {
HXLINE(1799)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->oPos = (data1->oPos + 2);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1799)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->iPos = (data1->iPos + 1);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1799)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->oPos = (data1->oPos + 4);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1799)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1799)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1799)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->fPos = (data1->fPos + 5);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1799)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->oPos = (data1->oPos + 2);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1799)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->oPos = (data1->oPos + 4);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1799)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1799)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1799)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->oPos = (data1->oPos + 4);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1799)								data2->iPos = (data2->iPos + 1);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1799)								data3->fPos = (data3->fPos + 2);
HXDLIN(1799)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1799)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1799)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1799)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1799)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN(1799)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1799)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1800)						stroke =  ::openfl::display::GraphicsStroke_obj::__alloc( HX_CTX ,c->buffer->o->__get(c->oPos),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)),null());
HXLINE(1801)						stroke->fill =  ::openfl::display::GraphicsSolidFill_obj::__alloc( HX_CTX ,c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
HXLINE(1802)						graphicsData->push(stroke);
            					}
            					break;
            					case (int)17: {
HXLINE(1758)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->oPos = (data1->oPos + 2);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1758)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->iPos = (data1->iPos + 1);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1758)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->oPos = (data1->oPos + 4);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1758)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1758)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1758)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->fPos = (data1->fPos + 5);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1758)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->oPos = (data1->oPos + 2);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1758)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->oPos = (data1->oPos + 4);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1758)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1758)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1758)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->oPos = (data1->oPos + 4);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1758)								data2->iPos = (data2->iPos + 1);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1758)								data3->fPos = (data3->fPos + 2);
HXDLIN(1758)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1758)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1758)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1758)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1758)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN(1758)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1758)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1759)						path->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					case (int)18: {
HXLINE(1762)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->oPos = (data1->oPos + 2);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1762)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->iPos = (data1->iPos + 1);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1762)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->oPos = (data1->oPos + 4);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1762)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1762)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1762)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->fPos = (data1->fPos + 5);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1762)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->oPos = (data1->oPos + 2);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1762)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->oPos = (data1->oPos + 4);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1762)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1762)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1762)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->oPos = (data1->oPos + 4);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1762)								data2->iPos = (data2->iPos + 1);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1762)								data3->fPos = (data3->fPos + 2);
HXDLIN(1762)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1762)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1762)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1762)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1762)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN(1762)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(1762)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(1763)						path->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					default:{
HXLINE(1824)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 2);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->iPos = (data1->iPos + 1);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 4);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1824)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1824)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 5);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 2);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 4);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1824)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1824)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 4);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(1824)								data2->iPos = (data2->iPos + 1);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(1824)								data3->fPos = (data3->fPos + 2);
HXDLIN(1824)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(1824)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(1824)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(1824)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(1824)						data->prev = type;
            					}
            				}
            			}
            		}
HXLINE(1828)		if (::hx::IsNotNull( path )) {
HXLINE(1830)			graphicsData->push(path);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,_hx___readGraphicsData,(void))

void Graphics_obj::_hx___update( ::openfl::geom::Matrix displayMatrix){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1835___update)
HXLINE(1836)		bool _hx_tmp;
HXDLIN(1836)		bool _hx_tmp1;
HXDLIN(1836)		if (::hx::IsNotNull( this->_hx___bounds )) {
HXLINE(1836)			_hx_tmp1 = (this->_hx___bounds->width <= 0);
            		}
            		else {
HXLINE(1836)			_hx_tmp1 = true;
            		}
HXDLIN(1836)		if (!(_hx_tmp1)) {
HXLINE(1836)			_hx_tmp = (this->_hx___bounds->height <= 0);
            		}
            		else {
HXLINE(1836)			_hx_tmp = true;
            		}
HXDLIN(1836)		if (_hx_tmp) {
HXLINE(1836)			return;
            		}
HXLINE(1838)		 ::openfl::geom::Matrix parentTransform = this->_hx___owner->_hx___renderTransform;
HXLINE(1839)		Float scaleX = ((Float)1.0);
HXDLIN(1839)		Float scaleY = ((Float)1.0);
HXLINE(1841)		if (::hx::IsNotNull( parentTransform )) {
HXLINE(1843)			if ((parentTransform->b == 0)) {
HXLINE(1845)				scaleX = ::Math_obj::abs(parentTransform->a);
            			}
            			else {
HXLINE(1849)				scaleX = ::Math_obj::sqrt(((parentTransform->a * parentTransform->a) + (parentTransform->b * parentTransform->b)));
            			}
HXLINE(1852)			if ((parentTransform->c == 0)) {
HXLINE(1854)				scaleY = ::Math_obj::abs(parentTransform->d);
            			}
            			else {
HXLINE(1858)				scaleY = ::Math_obj::sqrt(((parentTransform->c * parentTransform->c) + (parentTransform->d * parentTransform->d)));
            			}
            		}
            		else {
HXLINE(1863)			return;
            		}
HXLINE(1866)		if (::hx::IsNotNull( displayMatrix )) {
HXLINE(1868)			if ((displayMatrix->b == 0)) {
HXLINE(1870)				scaleX = (scaleX * displayMatrix->a);
            			}
            			else {
HXLINE(1874)				scaleX = (scaleX * ::Math_obj::sqrt(((displayMatrix->a * displayMatrix->a) + (displayMatrix->b * displayMatrix->b))));
            			}
HXLINE(1877)			if ((displayMatrix->c == 0)) {
HXLINE(1879)				scaleY = (scaleY * displayMatrix->d);
            			}
            			else {
HXLINE(1883)				scaleY = (scaleY * ::Math_obj::sqrt(((displayMatrix->c * displayMatrix->c) + (displayMatrix->d * displayMatrix->d))));
            			}
            		}
HXLINE(1892)		Float width = (this->_hx___bounds->width * scaleX);
HXLINE(1893)		Float height = (this->_hx___bounds->height * scaleY);
HXLINE(1895)		bool _hx_tmp2;
HXDLIN(1895)		if (!((width < 1))) {
HXLINE(1895)			_hx_tmp2 = (height < 1);
            		}
            		else {
HXLINE(1895)			_hx_tmp2 = true;
            		}
HXDLIN(1895)		if (_hx_tmp2) {
HXLINE(1897)			bool _hx_tmp;
HXDLIN(1897)			if ((this->_hx___width < 1)) {
HXLINE(1897)				_hx_tmp = (this->_hx___height >= 1);
            			}
            			else {
HXLINE(1897)				_hx_tmp = true;
            			}
HXDLIN(1897)			if (_hx_tmp) {
HXLINE(1897)				this->set___dirty(true);
            			}
HXLINE(1898)			this->_hx___width = 0;
HXLINE(1899)			this->_hx___height = 0;
HXLINE(1900)			return;
            		}
HXLINE(1903)		bool _hx_tmp3;
HXDLIN(1903)		if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE(1903)			_hx_tmp3 = ::hx::IsGreater( width,::openfl::display::Graphics_obj::maxTextureWidth );
            		}
            		else {
HXLINE(1903)			_hx_tmp3 = false;
            		}
HXDLIN(1903)		if (_hx_tmp3) {
HXLINE(1905)			width = ( (Float)(::openfl::display::Graphics_obj::maxTextureWidth) );
HXLINE(1906)			scaleX = (( (Float)(::openfl::display::Graphics_obj::maxTextureWidth) ) / this->_hx___bounds->width);
            		}
HXLINE(1909)		bool _hx_tmp4;
HXDLIN(1909)		if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE(1909)			_hx_tmp4 = ::hx::IsGreater( height,::openfl::display::Graphics_obj::maxTextureHeight );
            		}
            		else {
HXLINE(1909)			_hx_tmp4 = false;
            		}
HXDLIN(1909)		if (_hx_tmp4) {
HXLINE(1911)			height = ( (Float)(::openfl::display::Graphics_obj::maxTextureHeight) );
HXLINE(1912)			scaleY = (( (Float)(::openfl::display::Graphics_obj::maxTextureHeight) ) / this->_hx___bounds->height);
            		}
HXLINE(1915)		this->_hx___renderTransform->a = (width / this->_hx___bounds->width);
HXLINE(1916)		this->_hx___renderTransform->d = (height / this->_hx___bounds->height);
HXLINE(1917)		Float inverseA = (( (Float)(1) ) / this->_hx___renderTransform->a);
HXLINE(1918)		Float inverseD = (( (Float)(1) ) / this->_hx___renderTransform->d);
HXLINE(1921)		this->_hx___worldTransform->a = (inverseA * parentTransform->a);
HXLINE(1922)		this->_hx___worldTransform->b = (inverseA * parentTransform->b);
HXLINE(1923)		this->_hx___worldTransform->c = (inverseD * parentTransform->c);
HXLINE(1924)		this->_hx___worldTransform->d = (inverseD * parentTransform->d);
HXLINE(1926)		Float x = this->_hx___bounds->x;
HXLINE(1927)		Float y = this->_hx___bounds->y;
HXLINE(1928)		Float tx = (((x * parentTransform->a) + (y * parentTransform->c)) + parentTransform->tx);
HXLINE(1929)		Float ty = (((x * parentTransform->b) + (y * parentTransform->d)) + parentTransform->ty);
HXLINE(1932)		this->_hx___worldTransform->tx = ::Math_obj::fround(tx);
HXLINE(1933)		this->_hx___worldTransform->ty = ::Math_obj::fround(ty);
HXLINE(1936)		 ::openfl::geom::Matrix _this = this->_hx___worldTransform;
HXDLIN(1936)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(1936)		Float _hx_tmp5;
HXDLIN(1936)		if ((norm == 0)) {
HXLINE(1936)			_hx_tmp5 = -(_this->tx);
            		}
            		else {
HXLINE(1936)			_hx_tmp5 = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - ty)) + (_this->d * (tx - _this->tx))));
            		}
HXDLIN(1936)		this->_hx___renderTransform->tx = _hx_tmp5;
HXLINE(1937)		 ::openfl::geom::Matrix _this1 = this->_hx___worldTransform;
HXDLIN(1937)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN(1937)		Float _hx_tmp6;
HXDLIN(1937)		if ((norm1 == 0)) {
HXLINE(1937)			_hx_tmp6 = -(_this1->ty);
            		}
            		else {
HXLINE(1937)			_hx_tmp6 = ((((Float)1.0) / norm1) * ((_this1->a * (ty - _this1->ty)) + (_this1->b * (_this1->tx - tx))));
            		}
HXDLIN(1937)		this->_hx___renderTransform->ty = _hx_tmp6;
HXLINE(1943)		int newWidth = ::Math_obj::ceil((width + ((Float)1.0)));
HXLINE(1944)		int newHeight = ::Math_obj::ceil((height + ((Float)1.0)));
HXLINE(1947)		bool _hx_tmp7;
HXDLIN(1947)		if ((newWidth == this->_hx___width)) {
HXLINE(1947)			_hx_tmp7 = (newHeight != this->_hx___height);
            		}
            		else {
HXLINE(1947)			_hx_tmp7 = true;
            		}
HXDLIN(1947)		if (_hx_tmp7) {
HXLINE(1950)			this->set___dirty(true);
            		}
HXLINE(1954)		this->_hx___width = newWidth;
HXLINE(1955)		this->_hx___height = newHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,_hx___update,(void))

bool Graphics_obj::set___dirty(bool value){
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_1960_set___dirty)
HXLINE(1961)		bool _hx_tmp;
HXDLIN(1961)		if (value) {
HXLINE(1961)			_hx_tmp = ::hx::IsNotNull( this->_hx___owner );
            		}
            		else {
HXLINE(1961)			_hx_tmp = false;
            		}
HXDLIN(1961)		if (_hx_tmp) {
HXLINE(1963)			 ::openfl::display::DisplayObject _this = this->_hx___owner;
HXDLIN(1963)			if (!(_this->_hx___renderDirty)) {
HXLINE(1963)				_this->_hx___renderDirty = true;
HXDLIN(1963)				_this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE(1966)		if (value) {
HXLINE(1968)			this->_hx___softwareDirty = true;
HXLINE(1969)			this->_hx___hardwareDirty = true;
            		}
HXLINE(1972)		return (this->_hx___dirty = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set___dirty,return )

 ::Dynamic Graphics_obj::maxTextureHeight;

 ::Dynamic Graphics_obj::maxTextureWidth;


::hx::ObjectPtr< Graphics_obj > Graphics_obj::__new( ::openfl::display::DisplayObject owner) {
	::hx::ObjectPtr< Graphics_obj > __this = new Graphics_obj();
	__this->__construct(owner);
	return __this;
}

::hx::ObjectPtr< Graphics_obj > Graphics_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject owner) {
	Graphics_obj *__this = (Graphics_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Graphics_obj), true, "openfl.display.Graphics"));
	*(void **)__this = Graphics_obj::_hx_vtable;
	__this->__construct(owner);
	return __this;
}

Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(_hx___bounds,"__bounds");
	HX_MARK_MEMBER_NAME(_hx___commands,"__commands");
	HX_MARK_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_MARK_MEMBER_NAME(_hx___hardwareDirty,"__hardwareDirty");
	HX_MARK_MEMBER_NAME(_hx___height,"__height");
	HX_MARK_MEMBER_NAME(_hx___managed,"__managed");
	HX_MARK_MEMBER_NAME(_hx___positionX,"__positionX");
	HX_MARK_MEMBER_NAME(_hx___positionY,"__positionY");
	HX_MARK_MEMBER_NAME(_hx___quadBuffer,"__quadBuffer");
	HX_MARK_MEMBER_NAME(_hx___renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(_hx___shaderBufferPool,"__shaderBufferPool");
	HX_MARK_MEMBER_NAME(_hx___softwareDirty,"__softwareDirty");
	HX_MARK_MEMBER_NAME(_hx___strokePadding,"__strokePadding");
	HX_MARK_MEMBER_NAME(_hx___transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(_hx___triangleIndexBuffer,"__triangleIndexBuffer");
	HX_MARK_MEMBER_NAME(_hx___triangleIndexBufferCount,"__triangleIndexBufferCount");
	HX_MARK_MEMBER_NAME(_hx___triangleIndexBufferData,"__triangleIndexBufferData");
	HX_MARK_MEMBER_NAME(_hx___usedShaderBuffers,"__usedShaderBuffers");
	HX_MARK_MEMBER_NAME(_hx___vertexBuffer,"__vertexBuffer");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferCount,"__vertexBufferCount");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferCountUVT,"__vertexBufferCountUVT");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferData,"__vertexBufferData");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferDataUVT,"__vertexBufferDataUVT");
	HX_MARK_MEMBER_NAME(_hx___vertexBufferUVT,"__vertexBufferUVT");
	HX_MARK_MEMBER_NAME(_hx___visible,"__visible");
	HX_MARK_MEMBER_NAME(_hx___owner,"__owner");
	HX_MARK_MEMBER_NAME(_hx___width,"__width");
	HX_MARK_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(_hx___cairo,"__cairo");
	HX_MARK_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_MARK_MEMBER_NAME(_hx___bitmapScale,"__bitmapScale");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(_hx___commands,"__commands");
	HX_VISIT_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(_hx___hardwareDirty,"__hardwareDirty");
	HX_VISIT_MEMBER_NAME(_hx___height,"__height");
	HX_VISIT_MEMBER_NAME(_hx___managed,"__managed");
	HX_VISIT_MEMBER_NAME(_hx___positionX,"__positionX");
	HX_VISIT_MEMBER_NAME(_hx___positionY,"__positionY");
	HX_VISIT_MEMBER_NAME(_hx___quadBuffer,"__quadBuffer");
	HX_VISIT_MEMBER_NAME(_hx___renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(_hx___shaderBufferPool,"__shaderBufferPool");
	HX_VISIT_MEMBER_NAME(_hx___softwareDirty,"__softwareDirty");
	HX_VISIT_MEMBER_NAME(_hx___strokePadding,"__strokePadding");
	HX_VISIT_MEMBER_NAME(_hx___transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(_hx___triangleIndexBuffer,"__triangleIndexBuffer");
	HX_VISIT_MEMBER_NAME(_hx___triangleIndexBufferCount,"__triangleIndexBufferCount");
	HX_VISIT_MEMBER_NAME(_hx___triangleIndexBufferData,"__triangleIndexBufferData");
	HX_VISIT_MEMBER_NAME(_hx___usedShaderBuffers,"__usedShaderBuffers");
	HX_VISIT_MEMBER_NAME(_hx___vertexBuffer,"__vertexBuffer");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferCount,"__vertexBufferCount");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferCountUVT,"__vertexBufferCountUVT");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferData,"__vertexBufferData");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferDataUVT,"__vertexBufferDataUVT");
	HX_VISIT_MEMBER_NAME(_hx___vertexBufferUVT,"__vertexBufferUVT");
	HX_VISIT_MEMBER_NAME(_hx___visible,"__visible");
	HX_VISIT_MEMBER_NAME(_hx___owner,"__owner");
	HX_VISIT_MEMBER_NAME(_hx___width,"__width");
	HX_VISIT_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(_hx___cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(_hx___bitmap,"__bitmap");
	HX_VISIT_MEMBER_NAME(_hx___bitmapScale,"__bitmapScale");
}

::hx::Val Graphics_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return ::hx::Val( _hx___dirty ); }
		if (HX_FIELD_EQ(inName,"__owner") ) { return ::hx::Val( _hx___owner ); }
		if (HX_FIELD_EQ(inName,"__width") ) { return ::hx::Val( _hx___width ); }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return ::hx::Val( _hx___cairo ); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return ::hx::Val( curveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return ::hx::Val( endFill_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { return ::hx::Val( _hx___bounds ); }
		if (HX_FIELD_EQ(inName,"__height") ) { return ::hx::Val( _hx___height ); }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return ::hx::Val( _hx___bitmap ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return ::hx::Val( drawPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return ::hx::Val( drawRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__managed") ) { return ::hx::Val( _hx___managed ); }
		if (HX_FIELD_EQ(inName,"__visible") ) { return ::hx::Val( _hx___visible ); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return ::hx::Val( beginFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawQuads") ) { return ::hx::Val( drawQuads_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return ::hx::Val( lineStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return ::hx::Val( _hx___cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { return ::hx::Val( _hx___commands ); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return ::hx::Val( drawCircle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__positionX") ) { return ::hx::Val( _hx___positionX ); }
		if (HX_FIELD_EQ(inName,"__positionY") ) { return ::hx::Val( _hx___positionY ); }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return ::hx::Val( drawEllipse_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set___dirty") ) { return ::hx::Val( set___dirty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__quadBuffer") ) { return ::hx::Val( _hx___quadBuffer ); }
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return ::hx::Val( cubicCurveTo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bitmapScale") ) { return ::hx::Val( _hx___bitmapScale ); }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return ::hx::Val( drawRoundRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return ::hx::Val( drawTriangles_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexBuffer") ) { return ::hx::Val( _hx___vertexBuffer ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__hardwareDirty") ) { return ::hx::Val( _hx___hardwareDirty ); }
		if (HX_FIELD_EQ(inName,"__softwareDirty") ) { return ::hx::Val( _hx___softwareDirty ); }
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { return ::hx::Val( _hx___strokePadding ); }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return ::hx::Val( beginBitmapFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"beginShaderFill") ) { return ::hx::Val( beginShaderFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return ::hx::Val( lineBitmapStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"__inflateBounds") ) { return ::hx::Val( _hx___inflateBounds_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return ::hx::Val( _hx___transformDirty ); }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return ::hx::Val( _hx___worldTransform ); }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return ::hx::Val( drawGraphicsData_dyn() ); }
		if (HX_FIELD_EQ(inName,"readGraphicsData") ) { return ::hx::Val( readGraphicsData_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return ::hx::Val( _hx___renderTransform ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferUVT") ) { return ::hx::Val( _hx___vertexBufferUVT ); }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return ::hx::Val( beginGradientFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return ::hx::Val( lineGradientStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"overrideBlendMode") ) { return ::hx::Val( overrideBlendMode_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__shaderBufferPool") ) { return ::hx::Val( _hx___shaderBufferPool ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferData") ) { return ::hx::Val( _hx___vertexBufferData ); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return ::hx::Val( _hx___readGraphicsData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__usedShaderBuffers") ) { return ::hx::Val( _hx___usedShaderBuffers ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferCount") ) { return ::hx::Val( _hx___vertexBufferCount ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return ::hx::Val( drawRoundRectComplex_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__triangleIndexBuffer") ) { return ::hx::Val( _hx___triangleIndexBuffer ); }
		if (HX_FIELD_EQ(inName,"__vertexBufferDataUVT") ) { return ::hx::Val( _hx___vertexBufferDataUVT ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__vertexBufferCountUVT") ) { return ::hx::Val( _hx___vertexBufferCountUVT ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferData") ) { return ::hx::Val( _hx___triangleIndexBufferData ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferCount") ) { return ::hx::Val( _hx___triangleIndexBufferCount ); }
		if (HX_FIELD_EQ(inName,"__calculateBezierQuadPoint") ) { return ::hx::Val( _hx___calculateBezierQuadPoint_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__calculateBezierCubicPoint") ) { return ::hx::Val( _hx___calculateBezierCubicPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Graphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"maxTextureWidth") ) { outValue = ( maxTextureWidth ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxTextureHeight") ) { outValue = ( maxTextureHeight ); return true; }
	}
	return false;
}

::hx::Val Graphics_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set___dirty(inValue.Cast< bool >()) );_hx___dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__owner") ) { _hx___owner=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { _hx___cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { _hx___bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { _hx___bitmap=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__managed") ) { _hx___managed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { _hx___visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__commands") ) { _hx___commands=inValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__positionX") ) { _hx___positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { _hx___positionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__quadBuffer") ) { _hx___quadBuffer=inValue.Cast<  ::openfl::display::_internal::Context3DBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bitmapScale") ) { _hx___bitmapScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexBuffer") ) { _hx___vertexBuffer=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__hardwareDirty") ) { _hx___hardwareDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__softwareDirty") ) { _hx___softwareDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { _hx___strokePadding=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { _hx___transformDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { _hx___worldTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { _hx___renderTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferUVT") ) { _hx___vertexBufferUVT=inValue.Cast<  ::openfl::display3D::VertexBuffer3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__shaderBufferPool") ) { _hx___shaderBufferPool=inValue.Cast<  ::lime::utils::ObjectPool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferData") ) { _hx___vertexBufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__usedShaderBuffers") ) { _hx___usedShaderBuffers=inValue.Cast<  ::haxe::ds::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferCount") ) { _hx___vertexBufferCount=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__triangleIndexBuffer") ) { _hx___triangleIndexBuffer=inValue.Cast<  ::openfl::display3D::IndexBuffer3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexBufferDataUVT") ) { _hx___vertexBufferDataUVT=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__vertexBufferCountUVT") ) { _hx___vertexBufferCountUVT=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferData") ) { _hx___triangleIndexBufferData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__triangleIndexBufferCount") ) { _hx___triangleIndexBufferCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"maxTextureWidth") ) { maxTextureWidth=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"maxTextureHeight") ) { maxTextureHeight=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__bounds",95,f1,4c,0e));
	outFields->push(HX_("__commands",e8,23,8e,61));
	outFields->push(HX_("__dirty",f2,a8,2e,44));
	outFields->push(HX_("__hardwareDirty",2a,75,7d,55));
	outFields->push(HX_("__height",07,73,7b,aa));
	outFields->push(HX_("__managed",3f,e3,0f,95));
	outFields->push(HX_("__positionX",6f,3c,7e,fe));
	outFields->push(HX_("__positionY",70,3c,7e,fe));
	outFields->push(HX_("__quadBuffer",47,34,70,71));
	outFields->push(HX_("__renderTransform",16,b8,95,b1));
	outFields->push(HX_("__shaderBufferPool",a1,80,f9,54));
	outFields->push(HX_("__softwareDirty",4b,4f,75,e7));
	outFields->push(HX_("__strokePadding",d9,6d,da,c4));
	outFields->push(HX_("__transformDirty",26,f6,91,84));
	outFields->push(HX_("__triangleIndexBuffer",aa,c4,11,a7));
	outFields->push(HX_("__triangleIndexBufferCount",c5,c7,43,e4));
	outFields->push(HX_("__triangleIndexBufferData",f4,e3,9e,9c));
	outFields->push(HX_("__usedShaderBuffers",31,ef,1d,4f));
	outFields->push(HX_("__vertexBuffer",a4,32,6a,91));
	outFields->push(HX_("__vertexBufferCount",8b,6f,78,56));
	outFields->push(HX_("__vertexBufferCountUVT",28,64,58,bf));
	outFields->push(HX_("__vertexBufferData",ee,d6,5e,32));
	outFields->push(HX_("__vertexBufferDataUVT",a5,7c,9c,2d));
	outFields->push(HX_("__vertexBufferUVT",af,d6,28,26));
	outFields->push(HX_("__visible",52,c9,72,24));
	outFields->push(HX_("__owner",13,f1,d4,a2));
	outFields->push(HX_("__width",e6,0e,c1,34));
	outFields->push(HX_("__worldTransform",da,a7,d8,9a));
	outFields->push(HX_("__cairo",68,89,77,ab));
	outFields->push(HX_("__bitmap",0f,7b,3b,99));
	outFields->push(HX_("__bitmapScale",fb,4c,9d,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Graphics_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(Graphics_obj,_hx___bounds),HX_("__bounds",95,f1,4c,0e)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(int)offsetof(Graphics_obj,_hx___commands),HX_("__commands",e8,23,8e,61)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___dirty),HX_("__dirty",f2,a8,2e,44)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___hardwareDirty),HX_("__hardwareDirty",2a,75,7d,55)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___height),HX_("__height",07,73,7b,aa)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___managed),HX_("__managed",3f,e3,0f,95)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___positionX),HX_("__positionX",6f,3c,7e,fe)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___positionY),HX_("__positionY",70,3c,7e,fe)},
	{::hx::fsObject /*  ::openfl::display::_internal::Context3DBuffer */ ,(int)offsetof(Graphics_obj,_hx___quadBuffer),HX_("__quadBuffer",47,34,70,71)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(Graphics_obj,_hx___renderTransform),HX_("__renderTransform",16,b8,95,b1)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(int)offsetof(Graphics_obj,_hx___shaderBufferPool),HX_("__shaderBufferPool",a1,80,f9,54)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___softwareDirty),HX_("__softwareDirty",4b,4f,75,e7)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___strokePadding),HX_("__strokePadding",d9,6d,da,c4)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___transformDirty),HX_("__transformDirty",26,f6,91,84)},
	{::hx::fsObject /*  ::openfl::display3D::IndexBuffer3D */ ,(int)offsetof(Graphics_obj,_hx___triangleIndexBuffer),HX_("__triangleIndexBuffer",aa,c4,11,a7)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___triangleIndexBufferCount),HX_("__triangleIndexBufferCount",c5,c7,43,e4)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Graphics_obj,_hx___triangleIndexBufferData),HX_("__triangleIndexBufferData",f4,e3,9e,9c)},
	{::hx::fsObject /*  ::haxe::ds::List */ ,(int)offsetof(Graphics_obj,_hx___usedShaderBuffers),HX_("__usedShaderBuffers",31,ef,1d,4f)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(Graphics_obj,_hx___vertexBuffer),HX_("__vertexBuffer",a4,32,6a,91)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___vertexBufferCount),HX_("__vertexBufferCount",8b,6f,78,56)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___vertexBufferCountUVT),HX_("__vertexBufferCountUVT",28,64,58,bf)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Graphics_obj,_hx___vertexBufferData),HX_("__vertexBufferData",ee,d6,5e,32)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(Graphics_obj,_hx___vertexBufferDataUVT),HX_("__vertexBufferDataUVT",a5,7c,9c,2d)},
	{::hx::fsObject /*  ::openfl::display3D::VertexBuffer3D */ ,(int)offsetof(Graphics_obj,_hx___vertexBufferUVT),HX_("__vertexBufferUVT",af,d6,28,26)},
	{::hx::fsBool,(int)offsetof(Graphics_obj,_hx___visible),HX_("__visible",52,c9,72,24)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Graphics_obj,_hx___owner),HX_("__owner",13,f1,d4,a2)},
	{::hx::fsInt,(int)offsetof(Graphics_obj,_hx___width),HX_("__width",e6,0e,c1,34)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(Graphics_obj,_hx___worldTransform),HX_("__worldTransform",da,a7,d8,9a)},
	{::hx::fsObject /*  ::lime::graphics::cairo::Cairo */ ,(int)offsetof(Graphics_obj,_hx___cairo),HX_("__cairo",68,89,77,ab)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(Graphics_obj,_hx___bitmap),HX_("__bitmap",0f,7b,3b,99)},
	{::hx::fsFloat,(int)offsetof(Graphics_obj,_hx___bitmapScale),HX_("__bitmapScale",fb,4c,9d,01)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Graphics_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Graphics_obj::maxTextureHeight,HX_("maxTextureHeight",de,49,6c,61)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Graphics_obj::maxTextureWidth,HX_("maxTextureWidth",ef,1f,1f,70)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Graphics_obj_sMemberFields[] = {
	HX_("__bounds",95,f1,4c,0e),
	HX_("__commands",e8,23,8e,61),
	HX_("__dirty",f2,a8,2e,44),
	HX_("__hardwareDirty",2a,75,7d,55),
	HX_("__height",07,73,7b,aa),
	HX_("__managed",3f,e3,0f,95),
	HX_("__positionX",6f,3c,7e,fe),
	HX_("__positionY",70,3c,7e,fe),
	HX_("__quadBuffer",47,34,70,71),
	HX_("__renderTransform",16,b8,95,b1),
	HX_("__shaderBufferPool",a1,80,f9,54),
	HX_("__softwareDirty",4b,4f,75,e7),
	HX_("__strokePadding",d9,6d,da,c4),
	HX_("__transformDirty",26,f6,91,84),
	HX_("__triangleIndexBuffer",aa,c4,11,a7),
	HX_("__triangleIndexBufferCount",c5,c7,43,e4),
	HX_("__triangleIndexBufferData",f4,e3,9e,9c),
	HX_("__usedShaderBuffers",31,ef,1d,4f),
	HX_("__vertexBuffer",a4,32,6a,91),
	HX_("__vertexBufferCount",8b,6f,78,56),
	HX_("__vertexBufferCountUVT",28,64,58,bf),
	HX_("__vertexBufferData",ee,d6,5e,32),
	HX_("__vertexBufferDataUVT",a5,7c,9c,2d),
	HX_("__vertexBufferUVT",af,d6,28,26),
	HX_("__visible",52,c9,72,24),
	HX_("__owner",13,f1,d4,a2),
	HX_("__width",e6,0e,c1,34),
	HX_("__worldTransform",da,a7,d8,9a),
	HX_("__cairo",68,89,77,ab),
	HX_("__bitmap",0f,7b,3b,99),
	HX_("__bitmapScale",fb,4c,9d,01),
	HX_("beginBitmapFill",9b,c9,07,6a),
	HX_("beginFill",4c,ad,95,8c),
	HX_("beginGradientFill",5c,3c,03,2e),
	HX_("beginShaderFill",d1,4b,43,67),
	HX_("clear",8d,71,5b,48),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("cubicCurveTo",e0,07,90,2e),
	HX_("curveTo",0a,60,88,ce),
	HX_("drawCircle",34,ed,d0,97),
	HX_("drawEllipse",3a,85,ce,54),
	HX_("drawGraphicsData",b9,aa,6e,60),
	HX_("drawPath",c9,8f,bb,5e),
	HX_("drawQuads",28,ab,f2,25),
	HX_("drawRect",48,f7,10,60),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("drawRoundRectComplex",e2,43,2c,11),
	HX_("drawTriangles",07,44,68,de),
	HX_("endFill",fe,87,e0,25),
	HX_("lineBitmapStyle",2e,3f,21,45),
	HX_("lineGradientStyle",8d,24,f2,c1),
	HX_("lineStyle",9d,a8,18,cb),
	HX_("lineTo",8f,46,a0,ec),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("overrideBlendMode",68,f8,e9,f9),
	HX_("readGraphicsData",0b,7d,00,87),
	HX_("__calculateBezierCubicPoint",0b,c2,af,f4),
	HX_("__calculateBezierQuadPoint",44,46,e8,5e),
	HX_("__cleanup",04,5d,90,2c),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__inflateBounds",3c,6f,ee,b6),
	HX_("__readGraphicsData",2b,10,91,f2),
	HX_("__update",29,f1,34,2f),
	HX_("set___dirty",15,10,96,d4),
	::String(null()) };

static void Graphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::maxTextureHeight,"maxTextureHeight");
	HX_MARK_MEMBER_NAME(Graphics_obj::maxTextureWidth,"maxTextureWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Graphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::maxTextureHeight,"maxTextureHeight");
	HX_VISIT_MEMBER_NAME(Graphics_obj::maxTextureWidth,"maxTextureWidth");
};

#endif

::hx::Class Graphics_obj::__mClass;

static ::String Graphics_obj_sStaticFields[] = {
	HX_("maxTextureHeight",de,49,6c,61),
	HX_("maxTextureWidth",ef,1f,1f,70),
	::String(null())
};

void Graphics_obj::__register()
{
	Graphics_obj _hx_dummy;
	Graphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Graphics",35,67,20,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Graphics_obj::__GetStatic;
	__mClass->mSetStaticField = &Graphics_obj::__SetStatic;
	__mClass->mMarkFunc = Graphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Graphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Graphics_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Graphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Graphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Graphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Graphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Graphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_52_boot)
HXDLIN(  52)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("__cairo",68,89,77,ab), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("overrideBlendMode",68,f8,e9,f9), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_54_boot)
HXDLIN(  54)		maxTextureHeight = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_043516e11ce5c7d5_55_boot)
HXDLIN(  55)		maxTextureWidth = null();
            	}
}

} // end namespace openfl
} // end namespace display
