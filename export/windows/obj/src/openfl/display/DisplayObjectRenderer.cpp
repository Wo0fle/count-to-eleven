#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectShader
#include <openfl/display/DisplayObjectShader.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DGraphics
#include <openfl/display/_internal/Context3DGraphics.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_Context3DState
#include <openfl/display3D/_internal/Context3DState.h>
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
#ifndef INCLUDED_openfl_events_RenderEvent
#include <openfl/events/RenderEvent.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a81acb3bead7383_61_new,"openfl.display.DisplayObjectRenderer","new",0x2db5f24c,"openfl.display.DisplayObjectRenderer.new","openfl/display/DisplayObjectRenderer.hx",61,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_70___clear,"openfl.display.DisplayObjectRenderer","__clear",0x54d15259,"openfl.display.DisplayObjectRenderer.__clear","openfl/display/DisplayObjectRenderer.hx",70,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_74___getAlpha,"openfl.display.DisplayObjectRenderer","__getAlpha",0x82bb5d9c,"openfl.display.DisplayObjectRenderer.__getAlpha","openfl/display/DisplayObjectRenderer.hx",74,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_79___getColorTransform,"openfl.display.DisplayObjectRenderer","__getColorTransform",0x8add698b,"openfl.display.DisplayObjectRenderer.__getColorTransform","openfl/display/DisplayObjectRenderer.hx",79,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_91___popMask,"openfl.display.DisplayObjectRenderer","__popMask",0xc15a12e9,"openfl.display.DisplayObjectRenderer.__popMask","openfl/display/DisplayObjectRenderer.hx",91,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_93___popMaskObject,"openfl.display.DisplayObjectRenderer","__popMaskObject",0xe6109a88,"openfl.display.DisplayObjectRenderer.__popMaskObject","openfl/display/DisplayObjectRenderer.hx",93,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_95___popMaskRect,"openfl.display.DisplayObjectRenderer","__popMaskRect",0x0ba8b4ad,"openfl.display.DisplayObjectRenderer.__popMaskRect","openfl/display/DisplayObjectRenderer.hx",95,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_97___pushMask,"openfl.display.DisplayObjectRenderer","__pushMask",0x18951a9a,"openfl.display.DisplayObjectRenderer.__pushMask","openfl/display/DisplayObjectRenderer.hx",97,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_99___pushMaskObject,"openfl.display.DisplayObjectRenderer","__pushMaskObject",0xb221fcf9,"openfl.display.DisplayObjectRenderer.__pushMaskObject","openfl/display/DisplayObjectRenderer.hx",99,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_101___pushMaskRect,"openfl.display.DisplayObjectRenderer","__pushMaskRect",0xd45fe8de,"openfl.display.DisplayObjectRenderer.__pushMaskRect","openfl/display/DisplayObjectRenderer.hx",101,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_103___render,"openfl.display.DisplayObjectRenderer","__render",0xdfd83d0a,"openfl.display.DisplayObjectRenderer.__render","openfl/display/DisplayObjectRenderer.hx",103,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_106___renderEvent,"openfl.display.DisplayObjectRenderer","__renderEvent",0x7eae76b0,"openfl.display.DisplayObjectRenderer.__renderEvent","openfl/display/DisplayObjectRenderer.hx",106,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_163___resize,"openfl.display.DisplayObjectRenderer","__resize",0xe32a2ba8,"openfl.display.DisplayObjectRenderer.__resize","openfl/display/DisplayObjectRenderer.hx",163,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_165___setBlendMode,"openfl.display.DisplayObjectRenderer","__setBlendMode",0x84c0b506,"openfl.display.DisplayObjectRenderer.__setBlendMode","openfl/display/DisplayObjectRenderer.hx",165,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_168___shouldCacheHardware,"openfl.display.DisplayObjectRenderer","__shouldCacheHardware",0x0f82bca3,"openfl.display.DisplayObjectRenderer.__shouldCacheHardware","openfl/display/DisplayObjectRenderer.hx",168,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_201___shouldCacheHardware_DisplayObject,"openfl.display.DisplayObjectRenderer","__shouldCacheHardware_DisplayObject",0x716eeea5,"openfl.display.DisplayObjectRenderer.__shouldCacheHardware_DisplayObject","openfl/display/DisplayObjectRenderer.hx",201,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_213___updateCacheBitmap,"openfl.display.DisplayObjectRenderer","__updateCacheBitmap",0xdf40cb14,"openfl.display.DisplayObjectRenderer.__updateCacheBitmap","openfl/display/DisplayObjectRenderer.hx",213,0x59a0b9a6)
HX_LOCAL_STACK_FRAME(_hx_pos_5a81acb3bead7383_43_boot,"openfl.display.DisplayObjectRenderer","boot",0xc99710c6,"openfl.display.DisplayObjectRenderer.boot","openfl/display/DisplayObjectRenderer.hx",43,0x59a0b9a6)
namespace openfl{
namespace display{

void DisplayObjectRenderer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5a81acb3bead7383_61_new)
HXLINE(  62)		super::__construct(null());
HXLINE(  64)		this->_hx___allowSmoothing = true;
HXLINE(  65)		this->_hx___pixelRatio = ( (Float)(1) );
HXLINE(  66)		this->_hx___tempColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  67)		this->_hx___worldAlpha = ( (Float)(1) );
            	}

Dynamic DisplayObjectRenderer_obj::__CreateEmpty() { return new DisplayObjectRenderer_obj; }

void *DisplayObjectRenderer_obj::_hx_vtable = 0;

Dynamic DisplayObjectRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObjectRenderer_obj > _hx_result = new DisplayObjectRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObjectRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x49529132;
	}
}

void DisplayObjectRenderer_obj::_hx___clear(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_70___clear)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___clear,(void))

Float DisplayObjectRenderer_obj::_hx___getAlpha(Float value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_74___getAlpha)
HXDLIN(  74)		return (value * this->_hx___worldAlpha);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___getAlpha,return )

 ::openfl::geom::ColorTransform DisplayObjectRenderer_obj::_hx___getColorTransform( ::openfl::geom::ColorTransform value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_79___getColorTransform)
HXDLIN(  79)		if (::hx::IsNotNull( this->_hx___worldColorTransform )) {
HXLINE(  81)			this->_hx___tempColorTransform->_hx___copyFrom(this->_hx___worldColorTransform);
HXLINE(  82)			this->_hx___tempColorTransform->_hx___combine(value);
HXLINE(  83)			return this->_hx___tempColorTransform;
            		}
            		else {
HXLINE(  87)			return value;
            		}
HXLINE(  79)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___getColorTransform,return )

void DisplayObjectRenderer_obj::_hx___popMask(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_91___popMask)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___popMask,(void))

void DisplayObjectRenderer_obj::_hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_93___popMaskObject)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___popMaskObject,(void))

void DisplayObjectRenderer_obj::_hx___popMaskRect(){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_95___popMaskRect)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectRenderer_obj,_hx___popMaskRect,(void))

void DisplayObjectRenderer_obj::_hx___pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_97___pushMask)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___pushMask,(void))

void DisplayObjectRenderer_obj::_hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  __o_handleScrollRect){
            		bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_99___pushMaskObject)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___pushMaskObject,(void))

void DisplayObjectRenderer_obj::_hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_101___pushMaskRect)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___pushMaskRect,(void))

void DisplayObjectRenderer_obj::_hx___render(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_103___render)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___render,(void))

void DisplayObjectRenderer_obj::_hx___renderEvent( ::openfl::display::DisplayObject displayObject){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_106___renderEvent)
HXLINE( 107)		 ::openfl::display::DisplayObjectRenderer renderer = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 109)		bool _hx_tmp;
HXDLIN( 109)		if (::hx::IsNotNull( displayObject->_hx___customRenderEvent )) {
HXLINE( 109)			_hx_tmp = displayObject->_hx___renderable;
            		}
            		else {
HXLINE( 109)			_hx_tmp = false;
            		}
HXDLIN( 109)		if (_hx_tmp) {
HXLINE( 111)			displayObject->_hx___customRenderEvent->allowSmoothing = renderer->_hx___allowSmoothing;
HXLINE( 112)			displayObject->_hx___customRenderEvent->objectMatrix->copyFrom(displayObject->_hx___renderTransform);
HXLINE( 113)			displayObject->_hx___customRenderEvent->objectColorTransform->_hx___copyFrom(displayObject->_hx___worldColorTransform);
HXLINE( 114)			displayObject->_hx___customRenderEvent->renderer = renderer;
HXLINE( 116)			::String _hx_switch_0 = renderer->_hx___type;
            			if (  (_hx_switch_0==HX_("cairo",88,30,19,41)) ){
HXLINE( 128)				displayObject->_hx___customRenderEvent->type = HX_("renderCairo",52,5d,ca,0c);
HXDLIN( 128)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("canvas",d8,54,42,b8)) ){
HXLINE( 141)				displayObject->_hx___customRenderEvent->type = HX_("renderCanvas",ce,58,98,27);
HXDLIN( 141)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("dom",82,42,4c,00)) ){
HXLINE( 131)				bool _hx_tmp;
HXDLIN( 131)				if (::hx::IsNotNull( displayObject->stage )) {
HXLINE( 131)					_hx_tmp = displayObject->_hx___worldVisible;
            				}
            				else {
HXLINE( 131)					_hx_tmp = false;
            				}
HXDLIN( 131)				if (_hx_tmp) {
HXLINE( 133)					displayObject->_hx___customRenderEvent->type = HX_("renderDOM",cc,ac,57,cd);
            				}
            				else {
HXLINE( 137)					displayObject->_hx___customRenderEvent->type = HX_("clearDOM",f5,22,08,31);
            				}
HXLINE( 131)				goto _hx_goto_11;
            			}
            			if (  (_hx_switch_0==HX_("opengl",6f,64,94,21)) ){
HXLINE( 119)				if (!(renderer->_hx___cleared)) {
HXLINE( 119)					renderer->_hx___clear();
            				}
HXLINE( 121)				 ::openfl::display::OpenGLRenderer renderer1 = ( ( ::openfl::display::OpenGLRenderer)(renderer) );
HXLINE( 122)				renderer1->setShader(displayObject->_hx___worldShader);
HXLINE( 123)				renderer1->_hx___context3D->_hx___flushGL();
HXLINE( 125)				displayObject->_hx___customRenderEvent->type = HX_("renderOpenGL",65,4c,ea,90);
HXLINE( 118)				goto _hx_goto_11;
            			}
            			/* default */{
HXLINE( 144)				return;
            			}
            			_hx_goto_11:;
HXLINE( 147)			renderer->_hx___setBlendMode(displayObject->_hx___worldBlendMode);
HXLINE( 148)			renderer->_hx___pushMaskObject(displayObject,null());
HXLINE( 150)			displayObject->dispatchEvent(displayObject->_hx___customRenderEvent);
HXLINE( 152)			renderer->_hx___popMaskObject(displayObject,null());
HXLINE( 154)			if ((renderer->_hx___type == HX_("opengl",6f,64,94,21))) {
HXLINE( 156)				 ::openfl::display::OpenGLRenderer renderer1 = ( ( ::openfl::display::OpenGLRenderer)(renderer) );
HXLINE( 157)				renderer1->setViewport();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___renderEvent,(void))

void DisplayObjectRenderer_obj::_hx___resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_163___resize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___resize,(void))

void DisplayObjectRenderer_obj::_hx___setBlendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_165___setBlendMode)
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectRenderer_obj,_hx___setBlendMode,(void))

 ::Dynamic DisplayObjectRenderer_obj::_hx___shouldCacheHardware( ::openfl::display::DisplayObject displayObject, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_168___shouldCacheHardware)
HXLINE( 169)		if (::hx::IsNull( displayObject )) {
HXLINE( 169)			return null();
            		}
HXLINE( 171)		switch((int)(displayObject->_hx___drawableType)){
            			case (int)4: case (int)5: {
HXLINE( 174)				if (::hx::IsEq( value,true )) {
HXLINE( 174)					return true;
            				}
HXLINE( 175)				value = this->_hx___shouldCacheHardware_DisplayObject(displayObject,value);
HXLINE( 176)				if (::hx::IsEq( value,true )) {
HXLINE( 176)					return true;
            				}
HXLINE( 178)				if (::hx::IsNotNull( displayObject->_hx___children )) {
HXLINE( 180)					int _g = 0;
HXDLIN( 180)					::Array< ::Dynamic> _g1 = displayObject->_hx___children;
HXDLIN( 180)					while((_g < _g1->length)){
HXLINE( 180)						 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 180)						_g = (_g + 1);
HXLINE( 182)						value = this->_hx___shouldCacheHardware_DisplayObject(child,value);
HXLINE( 183)						if (::hx::IsEq( value,true )) {
HXLINE( 183)							return true;
            						}
            					}
            				}
HXLINE( 187)				return value;
            			}
            			break;
            			case (int)7: {
HXLINE( 190)				if (::hx::IsEq( value,true )) {
HXLINE( 190)					return true;
            				}
            				else {
HXLINE( 190)					return false;
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 193)				return true;
            			}
            			break;
            			default:{
HXLINE( 196)				return this->_hx___shouldCacheHardware_DisplayObject(displayObject,value);
            			}
            		}
HXLINE( 171)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___shouldCacheHardware,return )

 ::Dynamic DisplayObjectRenderer_obj::_hx___shouldCacheHardware_DisplayObject( ::openfl::display::DisplayObject displayObject, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_201___shouldCacheHardware_DisplayObject)
HXLINE( 202)		bool _hx_tmp;
HXDLIN( 202)		if (::hx::IsNotEq( value,true )) {
HXLINE( 202)			_hx_tmp = ::hx::IsNotNull( displayObject->_hx___filters );
            		}
            		else {
HXLINE( 202)			_hx_tmp = true;
            		}
HXDLIN( 202)		if (_hx_tmp) {
HXLINE( 202)			return true;
            		}
HXLINE( 204)		bool _hx_tmp1;
HXDLIN( 204)		if (::hx::IsNotEq( value,false )) {
HXLINE( 204)			if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE( 204)				_hx_tmp1 = !(::openfl::display::_internal::Context3DGraphics_obj::isCompatible(displayObject->_hx___graphics));
            			}
            			else {
HXLINE( 204)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 204)			_hx_tmp1 = true;
            		}
HXDLIN( 204)		if (_hx_tmp1) {
HXLINE( 206)			return false;
            		}
HXLINE( 209)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___shouldCacheHardware_DisplayObject,return )

bool DisplayObjectRenderer_obj::_hx___updateCacheBitmap( ::openfl::display::DisplayObject displayObject,bool force){
            	HX_GC_STACKFRAME(&_hx_pos_5a81acb3bead7383_213___updateCacheBitmap)
HXLINE( 214)		if (::hx::IsNull( displayObject )) {
HXLINE( 214)			return false;
            		}
HXLINE( 215)		 ::openfl::display::DisplayObjectRenderer renderer = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 217)		switch((int)(displayObject->_hx___drawableType)){
            			case (int)2: {
HXLINE( 220)				 ::openfl::display::Bitmap bitmap = ( ( ::openfl::display::Bitmap)(displayObject) );
HXLINE( 222)				bool _hx_tmp;
HXDLIN( 222)				if (::hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXLINE( 223)					bool _hx_tmp1;
HXDLIN( 223)					if (::hx::IsNull( bitmap->_hx___filters )) {
HXLINE( 223)						_hx_tmp1 = (renderer->_hx___type == HX_("opengl",6f,64,94,21));
            					}
            					else {
HXLINE( 223)						_hx_tmp1 = false;
            					}
HXDLIN( 223)					if (_hx_tmp1) {
HXLINE( 222)						_hx_tmp = ::hx::IsNull( bitmap->_hx___cacheBitmap );
            					}
            					else {
HXLINE( 222)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 222)					_hx_tmp = true;
            				}
HXDLIN( 222)				if (_hx_tmp) {
HXLINE( 223)					return false;
            				}
HXLINE( 224)				if (::hx::IsNotNull( bitmap->_hx___bitmapData->image )) {
HXLINE( 224)					force = (bitmap->_hx___bitmapData->image->version != bitmap->_hx___imageVersion);
            				}
            				else {
HXLINE( 224)					force = false;
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 227)				 ::openfl::text::TextField textField = ( ( ::openfl::text::TextField)(displayObject) );
HXLINE( 228)				bool _hx_tmp;
HXDLIN( 228)				bool _hx_tmp1;
HXDLIN( 228)				bool _hx_tmp2;
HXDLIN( 228)				if (::hx::IsNull( textField->_hx___filters )) {
HXLINE( 228)					_hx_tmp2 = (renderer->_hx___type == HX_("opengl",6f,64,94,21));
            				}
            				else {
HXLINE( 228)					_hx_tmp2 = false;
            				}
HXDLIN( 228)				if (_hx_tmp2) {
HXLINE( 228)					_hx_tmp1 = ::hx::IsNull( textField->_hx___cacheBitmap );
            				}
            				else {
HXLINE( 228)					_hx_tmp1 = false;
            				}
HXDLIN( 228)				if (_hx_tmp1) {
HXLINE( 228)					_hx_tmp = !(textField->_hx___domRender);
            				}
            				else {
HXLINE( 228)					_hx_tmp = false;
            				}
HXDLIN( 228)				if (_hx_tmp) {
HXLINE( 229)					return false;
            				}
HXLINE( 230)				if (force) {
HXLINE( 230)					textField->_hx___renderDirty = true;
            				}
HXLINE( 231)				if (!(force)) {
HXLINE( 231)					force = textField->_hx___dirty;
            				}
            				else {
HXLINE( 231)					force = true;
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 234)				 ::openfl::display::Tilemap tilemap = ( ( ::openfl::display::Tilemap)(displayObject) );
HXLINE( 235)				bool _hx_tmp;
HXDLIN( 235)				bool _hx_tmp1;
HXDLIN( 235)				if (::hx::IsNull( tilemap->_hx___filters )) {
HXLINE( 235)					_hx_tmp1 = (renderer->_hx___type == HX_("opengl",6f,64,94,21));
            				}
            				else {
HXLINE( 235)					_hx_tmp1 = false;
            				}
HXDLIN( 235)				if (_hx_tmp1) {
HXLINE( 235)					_hx_tmp = ::hx::IsNull( tilemap->_hx___cacheBitmap );
            				}
            				else {
HXLINE( 235)					_hx_tmp = false;
            				}
HXDLIN( 235)				if (_hx_tmp) {
HXLINE( 235)					return false;
            				}
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 241)		if (displayObject->_hx___isCacheBitmapRender) {
HXLINE( 241)			return false;
            		}
HXLINE( 246)		 ::openfl::geom::ColorTransform colorTransform = ::openfl::geom::ColorTransform_obj::_hx___pool->get().StaticCast<  ::openfl::geom::ColorTransform >();
HXLINE( 247)		colorTransform->_hx___copyFrom(displayObject->_hx___worldColorTransform);
HXLINE( 248)		if (::hx::IsNotNull( renderer->_hx___worldColorTransform )) {
HXLINE( 248)			colorTransform->_hx___combine(renderer->_hx___worldColorTransform);
            		}
HXLINE( 249)		bool updated = false;
HXLINE( 251)		bool _hx_tmp;
HXDLIN( 251)		if (!(displayObject->get_cacheAsBitmap())) {
HXLINE( 251)			if ((renderer->_hx___type != HX_("opengl",6f,64,94,21))) {
HXLINE( 251)				_hx_tmp = !(colorTransform->_hx___isDefault(true));
            			}
            			else {
HXLINE( 251)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 251)			_hx_tmp = true;
            		}
HXDLIN( 251)		if (_hx_tmp) {
HXLINE( 253)			 ::openfl::geom::Rectangle rect = null();
HXLINE( 255)			bool needRender;
HXDLIN( 255)			bool needRender1;
HXDLIN( 255)			if (::hx::IsNotNull( displayObject->_hx___cacheBitmap )) {
HXLINE( 256)				if (displayObject->_hx___renderDirty) {
HXLINE( 256)					if (!(force)) {
HXLINE( 256)						if (::hx::IsNotNull( displayObject->_hx___children )) {
HXLINE( 255)							needRender1 = (displayObject->_hx___children->length > 0);
            						}
            						else {
HXLINE( 255)							needRender1 = false;
            						}
            					}
            					else {
HXLINE( 255)						needRender1 = true;
            					}
            				}
            				else {
HXLINE( 255)					needRender1 = false;
            				}
            			}
            			else {
HXLINE( 255)				needRender1 = true;
            			}
HXDLIN( 255)			if (!(needRender1)) {
HXLINE( 255)				needRender = ::hx::IsNotEq( displayObject->opaqueBackground,displayObject->_hx___cacheBitmapBackground );
            			}
            			else {
HXLINE( 255)				needRender = true;
            			}
HXLINE( 258)			bool softwareDirty;
HXDLIN( 258)			bool softwareDirty1;
HXDLIN( 258)			if (!(needRender)) {
HXLINE( 259)				if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE( 258)					softwareDirty1 = displayObject->_hx___graphics->_hx___softwareDirty;
            				}
            				else {
HXLINE( 258)					softwareDirty1 = false;
            				}
            			}
            			else {
HXLINE( 258)				softwareDirty1 = true;
            			}
HXDLIN( 258)			if (!(softwareDirty1)) {
HXLINE( 258)				softwareDirty = !(displayObject->_hx___cacheBitmapColorTransform->_hx___equals(colorTransform,true));
            			}
            			else {
HXLINE( 258)				softwareDirty = true;
            			}
HXLINE( 261)			bool hardwareDirty;
HXDLIN( 261)			if (!(needRender)) {
HXLINE( 261)				if (::hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE( 261)					hardwareDirty = displayObject->_hx___graphics->_hx___hardwareDirty;
            				}
            				else {
HXLINE( 261)					hardwareDirty = false;
            				}
            			}
            			else {
HXLINE( 261)				hardwareDirty = true;
            			}
HXLINE( 263)			::String renderType = renderer->_hx___type;
HXLINE( 265)			bool _hx_tmp;
HXDLIN( 265)			if (!(softwareDirty)) {
HXLINE( 265)				_hx_tmp = hardwareDirty;
            			}
            			else {
HXLINE( 265)				_hx_tmp = true;
            			}
HXDLIN( 265)			if (_hx_tmp) {
HXLINE( 268)				if ((renderType == HX_("opengl",6f,64,94,21))) {
HXLINE( 270)					if (::hx::IsEq( this->_hx___shouldCacheHardware(displayObject,null()),false )) {
HXLINE( 275)						renderType = HX_("cairo",88,30,19,41);
            					}
            				}
HXLINE( 281)				bool _hx_tmp;
HXDLIN( 281)				if (softwareDirty) {
HXLINE( 281)					if ((renderType != HX_("canvas",d8,54,42,b8))) {
HXLINE( 281)						_hx_tmp = (renderType == HX_("cairo",88,30,19,41));
            					}
            					else {
HXLINE( 281)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 281)					_hx_tmp = false;
            				}
HXDLIN( 281)				if (_hx_tmp) {
HXLINE( 281)					needRender = true;
            				}
HXLINE( 282)				bool _hx_tmp1;
HXDLIN( 282)				if (hardwareDirty) {
HXLINE( 282)					_hx_tmp1 = (renderType == HX_("opengl",6f,64,94,21));
            				}
            				else {
HXLINE( 282)					_hx_tmp1 = false;
            				}
HXDLIN( 282)				if (_hx_tmp1) {
HXLINE( 282)					needRender = true;
            				}
            			}
HXLINE( 285)			bool updateTransform;
HXDLIN( 285)			if (!(needRender)) {
HXLINE( 285)				updateTransform = !(displayObject->_hx___cacheBitmap->_hx___worldTransform->equals(displayObject->_hx___worldTransform));
            			}
            			else {
HXLINE( 285)				updateTransform = true;
            			}
HXLINE( 286)			bool hasFilters = ::hx::IsNotNull( displayObject->_hx___filters );
HXLINE( 289)			bool _hx_tmp1;
HXDLIN( 289)			if ((renderer->_hx___type == HX_("dom",82,42,4c,00))) {
HXLINE( 289)				_hx_tmp1 = !(hasFilters);
            			}
            			else {
HXLINE( 289)				_hx_tmp1 = false;
            			}
HXDLIN( 289)			if (_hx_tmp1) {
HXLINE( 291)				return false;
            			}
HXLINE( 295)			bool _hx_tmp2;
HXDLIN( 295)			if (hasFilters) {
HXLINE( 295)				_hx_tmp2 = !(needRender);
            			}
            			else {
HXLINE( 295)				_hx_tmp2 = false;
            			}
HXDLIN( 295)			if (_hx_tmp2) {
HXLINE( 297)				int _g = 0;
HXDLIN( 297)				::Array< ::Dynamic> _g1 = displayObject->_hx___filters;
HXDLIN( 297)				while((_g < _g1->length)){
HXLINE( 297)					 ::openfl::filters::BitmapFilter filter = _g1->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 297)					_g = (_g + 1);
HXLINE( 299)					if (filter->_hx___renderDirty) {
HXLINE( 301)						needRender = true;
HXLINE( 302)						goto _hx_goto_18;
            					}
            				}
            				_hx_goto_18:;
            			}
HXLINE( 307)			if (::hx::IsNull( displayObject->_hx___cacheBitmapMatrix )) {
HXLINE( 309)				displayObject->_hx___cacheBitmapMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            			}
HXLINE( 312)			 ::openfl::geom::Matrix bitmapMatrix;
HXDLIN( 312)			if (::hx::IsNotNull( displayObject->_hx___cacheAsBitmapMatrix )) {
HXLINE( 312)				bitmapMatrix = displayObject->_hx___cacheAsBitmapMatrix;
            			}
            			else {
HXLINE( 312)				bitmapMatrix = displayObject->_hx___renderTransform;
            			}
HXLINE( 314)			bool _hx_tmp3;
HXDLIN( 314)			if (!(needRender)) {
HXLINE( 315)				bool _hx_tmp;
HXDLIN( 315)				bool _hx_tmp1;
HXDLIN( 315)				if ((bitmapMatrix->a == displayObject->_hx___cacheBitmapMatrix->a)) {
HXLINE( 315)					_hx_tmp1 = (bitmapMatrix->b != displayObject->_hx___cacheBitmapMatrix->b);
            				}
            				else {
HXLINE( 315)					_hx_tmp1 = true;
            				}
HXDLIN( 315)				if (!(_hx_tmp1)) {
HXLINE( 315)					_hx_tmp = (bitmapMatrix->c != displayObject->_hx___cacheBitmapMatrix->c);
            				}
            				else {
HXLINE( 315)					_hx_tmp = true;
            				}
HXDLIN( 315)				if (!(_hx_tmp)) {
HXLINE( 314)					_hx_tmp3 = (bitmapMatrix->d != displayObject->_hx___cacheBitmapMatrix->d);
            				}
            				else {
HXLINE( 314)					_hx_tmp3 = true;
            				}
            			}
            			else {
HXLINE( 314)				_hx_tmp3 = false;
            			}
HXDLIN( 314)			if (_hx_tmp3) {
HXLINE( 320)				needRender = true;
            			}
HXLINE( 323)			bool _hx_tmp4;
HXDLIN( 323)			bool _hx_tmp5;
HXDLIN( 323)			bool _hx_tmp6;
HXDLIN( 323)			bool _hx_tmp7;
HXDLIN( 323)			if (!(needRender)) {
HXLINE( 323)				_hx_tmp7 = (renderer->_hx___type != HX_("opengl",6f,64,94,21));
            			}
            			else {
HXLINE( 323)				_hx_tmp7 = false;
            			}
HXDLIN( 323)			if (_hx_tmp7) {
HXLINE( 323)				_hx_tmp6 = ::hx::IsNotNull( displayObject->_hx___cacheBitmapData );
            			}
            			else {
HXLINE( 323)				_hx_tmp6 = false;
            			}
HXDLIN( 323)			if (_hx_tmp6) {
HXLINE( 323)				_hx_tmp5 = ::hx::IsNotNull( displayObject->_hx___cacheBitmapData->image );
            			}
            			else {
HXLINE( 323)				_hx_tmp5 = false;
            			}
HXDLIN( 323)			if (_hx_tmp5) {
HXLINE( 323)				_hx_tmp4 = (displayObject->_hx___cacheBitmapData->image->version < displayObject->_hx___cacheBitmapData->_hx___textureVersion);
            			}
            			else {
HXLINE( 323)				_hx_tmp4 = false;
            			}
HXDLIN( 323)			if (_hx_tmp4) {
HXLINE( 329)				needRender = true;
            			}
HXLINE( 332)			displayObject->_hx___cacheBitmapMatrix->copyFrom(bitmapMatrix);
HXLINE( 333)			displayObject->_hx___cacheBitmapMatrix->tx = ( (Float)(0) );
HXLINE( 334)			displayObject->_hx___cacheBitmapMatrix->ty = ( (Float)(0) );
HXLINE( 338)			int bitmapWidth = 0;
HXDLIN( 338)			int bitmapHeight = 0;
HXLINE( 339)			int filterWidth = 0;
HXDLIN( 339)			int filterHeight = 0;
HXLINE( 340)			Float offsetX = ((Float)0.);
HXDLIN( 340)			Float offsetY = ((Float)0.);
HXLINE( 345)			Float pixelRatio = this->_hx___pixelRatio;
HXLINE( 348)			bool _hx_tmp8;
HXDLIN( 348)			if (!(updateTransform)) {
HXLINE( 348)				_hx_tmp8 = needRender;
            			}
            			else {
HXLINE( 348)				_hx_tmp8 = true;
            			}
HXDLIN( 348)			if (_hx_tmp8) {
HXLINE( 350)				rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 352)				displayObject->_hx___getFilterBounds(rect,displayObject->_hx___cacheBitmapMatrix);
HXLINE( 354)				filterWidth = ::Math_obj::ceil((rect->width * pixelRatio));
HXLINE( 355)				filterHeight = ::Math_obj::ceil((rect->height * pixelRatio));
HXLINE( 357)				if ((rect->x > 0)) {
HXLINE( 357)					offsetX = ( (Float)(::Math_obj::ceil(rect->x)) );
            				}
            				else {
HXLINE( 357)					offsetX = ( (Float)(::Math_obj::floor(rect->x)) );
            				}
HXLINE( 358)				if ((rect->y > 0)) {
HXLINE( 358)					offsetY = ( (Float)(::Math_obj::ceil(rect->y)) );
            				}
            				else {
HXLINE( 358)					offsetY = ( (Float)(::Math_obj::floor(rect->y)) );
            				}
HXLINE( 360)				if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData )) {
HXLINE( 362)					bool _hx_tmp;
HXDLIN( 362)					if ((filterWidth <= displayObject->_hx___cacheBitmapData->width)) {
HXLINE( 362)						_hx_tmp = (filterHeight > displayObject->_hx___cacheBitmapData->height);
            					}
            					else {
HXLINE( 362)						_hx_tmp = true;
            					}
HXDLIN( 362)					if (_hx_tmp) {
HXLINE( 364)						bitmapWidth = ::Math_obj::ceil(::Math_obj::max((( (Float)(filterWidth) ) * ((Float)1.25)),( (Float)(displayObject->_hx___cacheBitmapData->width) )));
HXLINE( 365)						bitmapHeight = ::Math_obj::ceil(::Math_obj::max((( (Float)(filterHeight) ) * ((Float)1.25)),( (Float)(displayObject->_hx___cacheBitmapData->height) )));
HXLINE( 366)						needRender = true;
            					}
            					else {
HXLINE( 370)						bitmapWidth = displayObject->_hx___cacheBitmapData->width;
HXLINE( 371)						bitmapHeight = displayObject->_hx___cacheBitmapData->height;
            					}
            				}
            				else {
HXLINE( 376)					bitmapWidth = filterWidth;
HXLINE( 377)					bitmapHeight = filterHeight;
            				}
            			}
HXLINE( 381)			if (needRender) {
HXLINE( 383)				updateTransform = true;
HXLINE( 384)				displayObject->_hx___cacheBitmapBackground = displayObject->opaqueBackground;
HXLINE( 386)				bool _hx_tmp;
HXDLIN( 386)				if ((filterWidth >= ((Float)0.5))) {
HXLINE( 386)					_hx_tmp = (filterHeight >= ((Float)0.5));
            				}
            				else {
HXLINE( 386)					_hx_tmp = false;
            				}
HXDLIN( 386)				if (_hx_tmp) {
HXLINE( 388)					bool needsFill;
HXDLIN( 388)					if (::hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE( 389)						if ((bitmapWidth == filterWidth)) {
HXLINE( 388)							needsFill = (bitmapHeight != filterHeight);
            						}
            						else {
HXLINE( 388)							needsFill = true;
            						}
            					}
            					else {
HXLINE( 388)						needsFill = false;
            					}
HXLINE( 390)					int fillColor;
HXDLIN( 390)					if (::hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE( 390)						fillColor = (-16777216 | ( (int)(displayObject->opaqueBackground) ));
            					}
            					else {
HXLINE( 390)						fillColor = 0;
            					}
HXLINE( 391)					int bitmapColor;
HXDLIN( 391)					if (needsFill) {
HXLINE( 391)						bitmapColor = 0;
            					}
            					else {
HXLINE( 391)						bitmapColor = fillColor;
            					}
HXLINE( 392)					bool allowFramebuffer = (renderer->_hx___type == HX_("opengl",6f,64,94,21));
HXLINE( 394)					bool _hx_tmp;
HXDLIN( 394)					bool _hx_tmp1;
HXDLIN( 394)					if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData )) {
HXLINE( 394)						_hx_tmp1 = (bitmapWidth > displayObject->_hx___cacheBitmapData->width);
            					}
            					else {
HXLINE( 394)						_hx_tmp1 = true;
            					}
HXDLIN( 394)					if (!(_hx_tmp1)) {
HXLINE( 394)						_hx_tmp = (bitmapHeight > displayObject->_hx___cacheBitmapData->height);
            					}
            					else {
HXLINE( 394)						_hx_tmp = true;
            					}
HXDLIN( 394)					if (_hx_tmp) {
HXLINE( 398)						displayObject->_hx___cacheBitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,bitmapColor);
HXLINE( 400)						if (::hx::IsNull( displayObject->_hx___cacheBitmap )) {
HXLINE( 400)							displayObject->_hx___cacheBitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,null(),null(),null());
            						}
HXLINE( 401)						displayObject->_hx___cacheBitmap->_hx___bitmapData = displayObject->_hx___cacheBitmapData;
HXLINE( 402)						displayObject->_hx___cacheBitmapRenderer = null();
            					}
            					else {
HXLINE( 406)						displayObject->_hx___cacheBitmapData->_hx___fillRect(displayObject->_hx___cacheBitmapData->rect,bitmapColor,allowFramebuffer);
            					}
HXLINE( 409)					if (needsFill) {
HXLINE( 411)						rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(filterWidth) ),( (Float)(filterHeight) ));
HXLINE( 412)						displayObject->_hx___cacheBitmapData->_hx___fillRect(rect,fillColor,allowFramebuffer);
            					}
            				}
            				else {
HXLINE( 417)					::openfl::geom::ColorTransform_obj::_hx___pool->release(colorTransform);
HXLINE( 419)					displayObject->_hx___cacheBitmap = null();
HXLINE( 420)					displayObject->_hx___cacheBitmapData = null();
HXLINE( 421)					displayObject->_hx___cacheBitmapData2 = null();
HXLINE( 422)					displayObject->_hx___cacheBitmapData3 = null();
HXLINE( 423)					displayObject->_hx___cacheBitmapRenderer = null();
HXLINE( 425)					if ((displayObject->_hx___drawableType == 7)) {
HXLINE( 427)						 ::openfl::text::TextField textField = ( ( ::openfl::text::TextField)(displayObject) );
HXLINE( 428)						if (::hx::IsNotNull( textField->_hx___cacheBitmap )) {
HXLINE( 430)							 ::openfl::geom::Matrix fh = textField->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 430)							fh->tx = (fh->tx - (textField->_hx___offsetX * pixelRatio));
HXLINE( 431)							 ::openfl::geom::Matrix fh1 = textField->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 431)							fh1->ty = (fh1->ty - (textField->_hx___offsetY * pixelRatio));
            						}
            					}
HXLINE( 435)					return true;
            				}
            			}
            			else {
HXLINE( 442)				displayObject->_hx___cacheBitmapData = displayObject->_hx___cacheBitmap->get_bitmapData();
HXLINE( 443)				displayObject->_hx___cacheBitmapData2 = null();
HXLINE( 444)				displayObject->_hx___cacheBitmapData3 = null();
            			}
HXLINE( 447)			bool _hx_tmp9;
HXDLIN( 447)			if (!(updateTransform)) {
HXLINE( 447)				_hx_tmp9 = needRender;
            			}
            			else {
HXLINE( 447)				_hx_tmp9 = true;
            			}
HXDLIN( 447)			if (_hx_tmp9) {
HXLINE( 449)				displayObject->_hx___cacheBitmap->_hx___worldTransform->copyFrom(displayObject->_hx___worldTransform);
HXLINE( 451)				if (::hx::IsInstanceEq( bitmapMatrix,displayObject->_hx___renderTransform )) {
HXLINE( 453)					displayObject->_hx___cacheBitmap->_hx___renderTransform->identity();
HXLINE( 454)					displayObject->_hx___cacheBitmap->_hx___renderTransform->scale((( (Float)(1) ) / pixelRatio),(( (Float)(1) ) / pixelRatio));
HXLINE( 455)					displayObject->_hx___cacheBitmap->_hx___renderTransform->tx = (displayObject->_hx___renderTransform->tx + offsetX);
HXLINE( 456)					displayObject->_hx___cacheBitmap->_hx___renderTransform->ty = (displayObject->_hx___renderTransform->ty + offsetY);
            				}
            				else {
HXLINE( 460)					displayObject->_hx___cacheBitmap->_hx___renderTransform->copyFrom(displayObject->_hx___cacheBitmapMatrix);
HXLINE( 461)					displayObject->_hx___cacheBitmap->_hx___renderTransform->invert();
HXLINE( 462)					displayObject->_hx___cacheBitmap->_hx___renderTransform->concat(displayObject->_hx___renderTransform);
HXLINE( 463)					 ::openfl::geom::Matrix fh = displayObject->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 463)					fh->a = (fh->a * (( (Float)(1) ) / pixelRatio));
HXLINE( 464)					 ::openfl::geom::Matrix fh1 = displayObject->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 464)					fh1->d = (fh1->d * (( (Float)(1) ) / pixelRatio));
HXLINE( 465)					 ::openfl::geom::Matrix fh2 = displayObject->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 465)					fh2->tx = (fh2->tx + offsetX);
HXLINE( 466)					 ::openfl::geom::Matrix fh3 = displayObject->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 466)					fh3->ty = (fh3->ty + offsetY);
            				}
            			}
HXLINE( 470)			displayObject->_hx___cacheBitmap->smoothing = renderer->_hx___allowSmoothing;
HXLINE( 471)			displayObject->_hx___cacheBitmap->_hx___renderable = displayObject->_hx___renderable;
HXLINE( 472)			displayObject->_hx___cacheBitmap->_hx___worldAlpha = displayObject->_hx___worldAlpha;
HXLINE( 473)			displayObject->_hx___cacheBitmap->_hx___worldBlendMode = displayObject->_hx___worldBlendMode;
HXLINE( 474)			displayObject->_hx___cacheBitmap->_hx___worldShader = displayObject->_hx___worldShader;
HXLINE( 477)			displayObject->_hx___cacheBitmap->set_mask(displayObject->_hx___mask);
HXLINE( 479)			if (needRender) {
HXLINE( 482)				bool _hx_tmp;
HXDLIN( 482)				if (::hx::IsNotNull( displayObject->_hx___cacheBitmapRenderer )) {
HXLINE( 482)					_hx_tmp = (renderType != displayObject->_hx___cacheBitmapRenderer->_hx___type);
            				}
            				else {
HXLINE( 482)					_hx_tmp = true;
            				}
HXDLIN( 482)				if (_hx_tmp) {
HXLINE( 484)					if ((renderType == HX_("opengl",6f,64,94,21))) {
HXLINE( 486)						displayObject->_hx___cacheBitmapRenderer =  ::openfl::display::OpenGLRenderer_obj::__alloc( HX_CTX ,::hx::TCast<  ::openfl::display::OpenGLRenderer >::cast(renderer)->_hx___context3D,displayObject->_hx___cacheBitmapData);
            					}
            					else {
HXLINE( 490)						if (::hx::IsNull( displayObject->_hx___cacheBitmapData->image )) {
HXLINE( 492)							int color;
HXDLIN( 492)							if (::hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE( 492)								color = (-16777216 | ( (int)(displayObject->opaqueBackground) ));
            							}
            							else {
HXLINE( 492)								color = 0;
            							}
HXLINE( 493)							displayObject->_hx___cacheBitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,color);
HXLINE( 494)							displayObject->_hx___cacheBitmap->_hx___bitmapData = displayObject->_hx___cacheBitmapData;
            						}
HXLINE( 501)						displayObject->_hx___cacheBitmapRenderer =  ::openfl::display::CairoRenderer_obj::__alloc( HX_CTX , ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,displayObject->_hx___cacheBitmapData->getSurface()));
            					}
HXLINE( 505)					displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 506)					displayObject->_hx___cacheBitmapRenderer->_hx___worldColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            				}
HXLINE( 512)				if (::hx::IsNull( displayObject->_hx___cacheBitmapColorTransform )) {
HXLINE( 512)					displayObject->_hx___cacheBitmapColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            				}
HXLINE( 514)				displayObject->_hx___cacheBitmapRenderer->_hx___stage = displayObject->stage;
HXLINE( 516)				displayObject->_hx___cacheBitmapRenderer->_hx___allowSmoothing = renderer->_hx___allowSmoothing;
HXLINE( 517)				displayObject->_hx___cacheBitmapRenderer->_hx___setBlendMode(10);
HXLINE( 518)				displayObject->_hx___cacheBitmapRenderer->_hx___worldAlpha = (( (Float)(1) ) / displayObject->_hx___worldAlpha);
HXLINE( 520)				displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform->copyFrom(displayObject->_hx___renderTransform);
HXLINE( 521)				displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform->invert();
HXLINE( 522)				displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform->concat(displayObject->_hx___cacheBitmapMatrix);
HXLINE( 523)				 ::openfl::geom::Matrix fh = displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform;
HXDLIN( 523)				fh->tx = (fh->tx - offsetX);
HXLINE( 524)				 ::openfl::geom::Matrix fh1 = displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform;
HXDLIN( 524)				fh1->ty = (fh1->ty - offsetY);
HXLINE( 525)				displayObject->_hx___cacheBitmapRenderer->_hx___worldTransform->scale(pixelRatio,pixelRatio);
HXLINE( 527)				displayObject->_hx___cacheBitmapRenderer->_hx___pixelRatio = pixelRatio;
HXLINE( 529)				displayObject->_hx___cacheBitmapRenderer->_hx___worldColorTransform->_hx___copyFrom(colorTransform);
HXLINE( 530)				displayObject->_hx___cacheBitmapRenderer->_hx___worldColorTransform->_hx___invert();
HXLINE( 532)				displayObject->_hx___isCacheBitmapRender = true;
HXLINE( 534)				if ((displayObject->_hx___cacheBitmapRenderer->_hx___type == HX_("opengl",6f,64,94,21))) {
HXLINE( 536)					 ::openfl::display::OpenGLRenderer parentRenderer = ( ( ::openfl::display::OpenGLRenderer)(renderer) );
HXLINE( 537)					 ::openfl::display::OpenGLRenderer childRenderer = ( ( ::openfl::display::OpenGLRenderer)(displayObject->_hx___cacheBitmapRenderer) );
HXLINE( 539)					 ::openfl::display3D::Context3D context = childRenderer->_hx___context3D;
HXLINE( 541)					 ::openfl::display3D::textures::TextureBase cacheRTT = context->_hx___state->renderToTexture;
HXLINE( 542)					bool cacheRTTDepthStencil = context->_hx___state->renderToTextureDepthStencil;
HXLINE( 543)					int cacheRTTAntiAlias = context->_hx___state->renderToTextureAntiAlias;
HXLINE( 544)					int cacheRTTSurfaceSelector = context->_hx___state->renderToTextureSurfaceSelector;
HXLINE( 548)					 ::Dynamic cacheBlendMode = parentRenderer->_hx___blendMode;
HXLINE( 549)					parentRenderer->_hx___suspendClipAndMask();
HXLINE( 550)					childRenderer->_hx___copyShader(parentRenderer);
HXLINE( 553)					displayObject->_hx___cacheBitmapData->_hx___setUVRect(context,( (Float)(0) ),( (Float)(0) ),( (Float)(filterWidth) ),( (Float)(filterHeight) ));
HXLINE( 554)					childRenderer->_hx___setRenderTarget(displayObject->_hx___cacheBitmapData);
HXLINE( 555)					if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData->image )) {
HXLINE( 556)						displayObject->_hx___cacheBitmapData->_hx___textureVersion = (displayObject->_hx___cacheBitmapData->image->version + 1);
            					}
HXLINE( 559)					displayObject->_hx___cacheBitmapData->_hx___drawGL(displayObject,childRenderer);
HXLINE( 561)					if (hasFilters) {
HXLINE( 563)						bool needSecondBitmapData = true;
HXLINE( 564)						bool needCopyOfOriginal = false;
HXLINE( 566)						{
HXLINE( 566)							int _g = 0;
HXDLIN( 566)							::Array< ::Dynamic> _g1 = displayObject->_hx___filters;
HXDLIN( 566)							while((_g < _g1->length)){
HXLINE( 566)								 ::openfl::filters::BitmapFilter filter = _g1->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 566)								_g = (_g + 1);
HXLINE( 571)								if (filter->_hx___preserveObject) {
HXLINE( 573)									needCopyOfOriginal = true;
            								}
            							}
            						}
HXLINE( 577)						 ::openfl::display::BitmapData bitmap = displayObject->_hx___cacheBitmapData;
HXLINE( 578)						 ::openfl::display::BitmapData bitmap2 = null();
HXLINE( 579)						 ::openfl::display::BitmapData bitmap3 = null();
HXLINE( 582)						bool _hx_tmp;
HXDLIN( 582)						bool _hx_tmp1;
HXDLIN( 582)						if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData2 )) {
HXLINE( 582)							_hx_tmp1 = (bitmapWidth > displayObject->_hx___cacheBitmapData2->width);
            						}
            						else {
HXLINE( 582)							_hx_tmp1 = true;
            						}
HXDLIN( 582)						if (!(_hx_tmp1)) {
HXLINE( 582)							_hx_tmp = (bitmapHeight > displayObject->_hx___cacheBitmapData2->height);
            						}
            						else {
HXLINE( 582)							_hx_tmp = true;
            						}
HXDLIN( 582)						if (_hx_tmp) {
HXLINE( 586)							displayObject->_hx___cacheBitmapData2 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
            						}
            						else {
HXLINE( 590)							displayObject->_hx___cacheBitmapData2->fillRect(displayObject->_hx___cacheBitmapData2->rect,0);
HXLINE( 591)							if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData2->image )) {
HXLINE( 593)								displayObject->_hx___cacheBitmapData2->_hx___textureVersion = (displayObject->_hx___cacheBitmapData2->image->version + 1);
            							}
            						}
HXLINE( 596)						displayObject->_hx___cacheBitmapData2->_hx___setUVRect(context,( (Float)(0) ),( (Float)(0) ),( (Float)(filterWidth) ),( (Float)(filterHeight) ));
HXLINE( 597)						bitmap2 = displayObject->_hx___cacheBitmapData2;
HXLINE( 602)						if (needCopyOfOriginal) {
HXLINE( 604)							bool _hx_tmp;
HXDLIN( 604)							bool _hx_tmp1;
HXDLIN( 604)							if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData3 )) {
HXLINE( 604)								_hx_tmp1 = (bitmapWidth > displayObject->_hx___cacheBitmapData3->width);
            							}
            							else {
HXLINE( 604)								_hx_tmp1 = true;
            							}
HXDLIN( 604)							if (!(_hx_tmp1)) {
HXLINE( 604)								_hx_tmp = (bitmapHeight > displayObject->_hx___cacheBitmapData3->height);
            							}
            							else {
HXLINE( 604)								_hx_tmp = true;
            							}
HXDLIN( 604)							if (_hx_tmp) {
HXLINE( 608)								displayObject->_hx___cacheBitmapData3 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
            							}
            							else {
HXLINE( 612)								displayObject->_hx___cacheBitmapData3->fillRect(displayObject->_hx___cacheBitmapData3->rect,0);
HXLINE( 613)								if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData3->image )) {
HXLINE( 615)									displayObject->_hx___cacheBitmapData3->_hx___textureVersion = (displayObject->_hx___cacheBitmapData3->image->version + 1);
            								}
            							}
HXLINE( 618)							displayObject->_hx___cacheBitmapData3->_hx___setUVRect(context,( (Float)(0) ),( (Float)(0) ),( (Float)(filterWidth) ),( (Float)(filterHeight) ));
HXLINE( 619)							bitmap3 = displayObject->_hx___cacheBitmapData3;
            						}
HXLINE( 622)						childRenderer->_hx___setBlendMode(10);
HXLINE( 623)						childRenderer->_hx___worldAlpha = ( (Float)(1) );
HXLINE( 624)						childRenderer->_hx___worldTransform->identity();
HXLINE( 625)						childRenderer->_hx___worldColorTransform->_hx___identity();
HXLINE( 630)						 ::openfl::display::Shader shader;
HXDLIN( 630)						 ::openfl::display::BitmapData cacheBitmap;
HXLINE( 632)						{
HXLINE( 632)							int _g2 = 0;
HXDLIN( 632)							::Array< ::Dynamic> _g3 = displayObject->_hx___filters;
HXDLIN( 632)							while((_g2 < _g3->length)){
HXLINE( 632)								 ::openfl::filters::BitmapFilter filter = _g3->__get(_g2).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 632)								_g2 = (_g2 + 1);
HXLINE( 634)								if (filter->_hx___preserveObject) {
HXLINE( 636)									childRenderer->_hx___setRenderTarget(bitmap3);
HXLINE( 637)									childRenderer->_hx___renderFilterPass(bitmap,childRenderer->_hx___defaultDisplayShader,filter->_hx___smooth,null());
            								}
HXLINE( 640)								{
HXLINE( 640)									int _g = 0;
HXDLIN( 640)									int _g1 = filter->_hx___numShaderPasses;
HXDLIN( 640)									while((_g < _g1)){
HXLINE( 640)										_g = (_g + 1);
HXDLIN( 640)										int i = (_g - 1);
HXLINE( 642)										 ::openfl::display::BitmapData shader1;
HXDLIN( 642)										if (filter->_hx___preserveObject) {
HXLINE( 642)											shader1 = bitmap3;
            										}
            										else {
HXLINE( 642)											shader1 = null();
            										}
HXDLIN( 642)										shader = filter->_hx___initShader(childRenderer,i,shader1);
HXLINE( 643)										childRenderer->_hx___setBlendMode(filter->_hx___shaderBlendMode);
HXLINE( 644)										childRenderer->_hx___setRenderTarget(bitmap2);
HXLINE( 645)										childRenderer->_hx___renderFilterPass(bitmap,shader,filter->_hx___smooth,null());
HXLINE( 647)										cacheBitmap = bitmap;
HXLINE( 648)										bitmap = bitmap2;
HXLINE( 649)										bitmap2 = cacheBitmap;
            									}
            								}
HXLINE( 652)								filter->_hx___renderDirty = false;
            							}
            						}
HXLINE( 655)						displayObject->_hx___cacheBitmap->_hx___bitmapData = bitmap;
            					}
HXLINE( 658)					parentRenderer->_hx___blendMode = 10;
HXLINE( 659)					parentRenderer->_hx___setBlendMode(cacheBlendMode);
HXLINE( 660)					parentRenderer->_hx___copyShader(childRenderer);
HXLINE( 662)					if (::hx::IsNotNull( cacheRTT )) {
HXLINE( 664)						context->setRenderToTexture(cacheRTT,cacheRTTDepthStencil,cacheRTTAntiAlias,cacheRTTSurfaceSelector);
            					}
            					else {
HXLINE( 668)						context->setRenderToBackBuffer();
            					}
HXLINE( 674)					parentRenderer->_hx___resumeClipAndMask(childRenderer);
HXLINE( 675)					parentRenderer->setViewport();
HXLINE( 677)					displayObject->_hx___cacheBitmapColorTransform->_hx___copyFrom(colorTransform);
            				}
            				else {
HXLINE( 684)					displayObject->_hx___cacheBitmapData->_hx___drawCairo(displayObject,( ( ::openfl::display::CairoRenderer)(displayObject->_hx___cacheBitmapRenderer) ));
HXLINE( 687)					if (hasFilters) {
HXLINE( 689)						bool needSecondBitmapData = false;
HXLINE( 690)						bool needCopyOfOriginal = false;
HXLINE( 692)						{
HXLINE( 692)							int _g = 0;
HXDLIN( 692)							::Array< ::Dynamic> _g1 = displayObject->_hx___filters;
HXDLIN( 692)							while((_g < _g1->length)){
HXLINE( 692)								 ::openfl::filters::BitmapFilter filter = _g1->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 692)								_g = (_g + 1);
HXLINE( 694)								if (filter->_hx___needSecondBitmapData) {
HXLINE( 696)									needSecondBitmapData = true;
            								}
HXLINE( 698)								if (filter->_hx___preserveObject) {
HXLINE( 700)									needCopyOfOriginal = true;
            								}
            							}
            						}
HXLINE( 704)						 ::openfl::display::BitmapData bitmap = displayObject->_hx___cacheBitmapData;
HXLINE( 705)						 ::openfl::display::BitmapData bitmap2 = null();
HXLINE( 706)						 ::openfl::display::BitmapData bitmap3 = null();
HXLINE( 708)						if (needSecondBitmapData) {
HXLINE( 710)							bool _hx_tmp;
HXDLIN( 710)							bool _hx_tmp1;
HXDLIN( 710)							bool _hx_tmp2;
HXDLIN( 710)							if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData2 )) {
HXLINE( 710)								_hx_tmp2 = ::hx::IsNull( displayObject->_hx___cacheBitmapData2->image );
            							}
            							else {
HXLINE( 710)								_hx_tmp2 = true;
            							}
HXDLIN( 710)							if (!(_hx_tmp2)) {
HXLINE( 710)								_hx_tmp1 = (bitmapWidth > displayObject->_hx___cacheBitmapData2->width);
            							}
            							else {
HXLINE( 710)								_hx_tmp1 = true;
            							}
HXDLIN( 710)							if (!(_hx_tmp1)) {
HXLINE( 710)								_hx_tmp = (bitmapHeight > displayObject->_hx___cacheBitmapData2->height);
            							}
            							else {
HXLINE( 710)								_hx_tmp = true;
            							}
HXDLIN( 710)							if (_hx_tmp) {
HXLINE( 715)								displayObject->_hx___cacheBitmapData2 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
            							}
            							else {
HXLINE( 719)								displayObject->_hx___cacheBitmapData2->fillRect(displayObject->_hx___cacheBitmapData2->rect,0);
            							}
HXLINE( 721)							bitmap2 = displayObject->_hx___cacheBitmapData2;
            						}
            						else {
HXLINE( 725)							bitmap2 = bitmap;
            						}
HXLINE( 728)						if (needCopyOfOriginal) {
HXLINE( 730)							bool _hx_tmp;
HXDLIN( 730)							bool _hx_tmp1;
HXDLIN( 730)							bool _hx_tmp2;
HXDLIN( 730)							if (::hx::IsNotNull( displayObject->_hx___cacheBitmapData3 )) {
HXLINE( 730)								_hx_tmp2 = ::hx::IsNull( displayObject->_hx___cacheBitmapData3->image );
            							}
            							else {
HXLINE( 730)								_hx_tmp2 = true;
            							}
HXDLIN( 730)							if (!(_hx_tmp2)) {
HXLINE( 730)								_hx_tmp1 = (bitmapWidth > displayObject->_hx___cacheBitmapData3->width);
            							}
            							else {
HXLINE( 730)								_hx_tmp1 = true;
            							}
HXDLIN( 730)							if (!(_hx_tmp1)) {
HXLINE( 730)								_hx_tmp = (bitmapHeight > displayObject->_hx___cacheBitmapData3->height);
            							}
            							else {
HXLINE( 730)								_hx_tmp = true;
            							}
HXDLIN( 730)							if (_hx_tmp) {
HXLINE( 735)								displayObject->_hx___cacheBitmapData3 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
            							}
            							else {
HXLINE( 739)								displayObject->_hx___cacheBitmapData3->fillRect(displayObject->_hx___cacheBitmapData3->rect,0);
            							}
HXLINE( 741)							bitmap3 = displayObject->_hx___cacheBitmapData3;
            						}
HXLINE( 744)						if (::hx::IsNull( displayObject->_hx___tempPoint )) {
HXLINE( 744)							displayObject->_hx___tempPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            						}
HXLINE( 745)						 ::openfl::geom::Point destPoint = displayObject->_hx___tempPoint;
HXLINE( 746)						 ::openfl::display::BitmapData cacheBitmap;
HXDLIN( 746)						 ::openfl::display::BitmapData lastBitmap;
HXLINE( 748)						{
HXLINE( 748)							int _g2 = 0;
HXDLIN( 748)							::Array< ::Dynamic> _g3 = displayObject->_hx___filters;
HXDLIN( 748)							while((_g2 < _g3->length)){
HXLINE( 748)								 ::openfl::filters::BitmapFilter filter = _g3->__get(_g2).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 748)								_g2 = (_g2 + 1);
HXLINE( 750)								if (filter->_hx___preserveObject) {
HXLINE( 752)									bitmap3->copyPixels(bitmap,bitmap->rect,destPoint,null(),null(),null());
            								}
HXLINE( 755)								lastBitmap = filter->_hx___applyFilter(bitmap2,bitmap,bitmap->rect,destPoint);
HXLINE( 757)								if (filter->_hx___preserveObject) {
HXLINE( 760)									 ::openfl::geom::ColorTransform _hx_tmp;
HXDLIN( 760)									if (::hx::IsNotNull( displayObject->_hx___objectTransform )) {
HXLINE( 760)										_hx_tmp = displayObject->_hx___objectTransform->_hx___colorTransform;
            									}
            									else {
HXLINE( 760)										_hx_tmp = null();
            									}
HXLINE( 759)									lastBitmap->draw(bitmap3,null(),_hx_tmp,null(),null(),null());
            								}
HXLINE( 762)								filter->_hx___renderDirty = false;
HXLINE( 764)								bool _hx_tmp;
HXDLIN( 764)								if (needSecondBitmapData) {
HXLINE( 764)									_hx_tmp = ::hx::IsInstanceEq( lastBitmap,bitmap2 );
            								}
            								else {
HXLINE( 764)									_hx_tmp = false;
            								}
HXDLIN( 764)								if (_hx_tmp) {
HXLINE( 766)									cacheBitmap = bitmap;
HXLINE( 767)									bitmap = bitmap2;
HXLINE( 768)									bitmap2 = cacheBitmap;
            								}
            							}
            						}
HXLINE( 772)						if (::hx::IsInstanceNotEq( displayObject->_hx___cacheBitmapData,bitmap )) {
HXLINE( 778)							cacheBitmap = displayObject->_hx___cacheBitmapData;
HXLINE( 779)							displayObject->_hx___cacheBitmapData = bitmap;
HXLINE( 780)							displayObject->_hx___cacheBitmapData2 = cacheBitmap;
HXLINE( 781)							displayObject->_hx___cacheBitmap->_hx___bitmapData = displayObject->_hx___cacheBitmapData;
HXLINE( 782)							displayObject->_hx___cacheBitmapRenderer = null();
            						}
HXLINE( 785)						displayObject->_hx___cacheBitmap->_hx___imageVersion = displayObject->_hx___cacheBitmapData->_hx___textureVersion;
            					}
HXLINE( 788)					displayObject->_hx___cacheBitmapColorTransform->_hx___copyFrom(colorTransform);
HXLINE( 790)					if (!(displayObject->_hx___cacheBitmapColorTransform->_hx___isDefault(true))) {
HXLINE( 792)						displayObject->_hx___cacheBitmapColorTransform->alphaMultiplier = ( (Float)(1) );
HXLINE( 793)						displayObject->_hx___cacheBitmapData->colorTransform(displayObject->_hx___cacheBitmapData->rect,displayObject->_hx___cacheBitmapColorTransform);
            					}
            				}
HXLINE( 797)				displayObject->_hx___isCacheBitmapRender = false;
            			}
HXLINE( 800)			bool _hx_tmp10;
HXDLIN( 800)			if (!(updateTransform)) {
HXLINE( 800)				_hx_tmp10 = needRender;
            			}
            			else {
HXLINE( 800)				_hx_tmp10 = true;
            			}
HXDLIN( 800)			if (_hx_tmp10) {
HXLINE( 802)				::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            			}
HXLINE( 805)			updated = updateTransform;
            		}
            		else {
HXLINE( 807)			if (::hx::IsNotNull( displayObject->_hx___cacheBitmap )) {
HXLINE( 809)				if ((renderer->_hx___type == HX_("dom",82,42,4c,00))) {
HXLINE( 811)					 ::openfl::display::DOMRenderer domRenderer = ( ( ::openfl::display::DOMRenderer)(renderer) );
HXLINE( 812)					domRenderer->_hx___renderDrawableClear(displayObject->_hx___cacheBitmap);
            				}
HXLINE( 815)				displayObject->_hx___cacheBitmap = null();
HXLINE( 816)				displayObject->_hx___cacheBitmapData = null();
HXLINE( 817)				displayObject->_hx___cacheBitmapData2 = null();
HXLINE( 818)				displayObject->_hx___cacheBitmapData3 = null();
HXLINE( 819)				displayObject->_hx___cacheBitmapColorTransform = null();
HXLINE( 820)				displayObject->_hx___cacheBitmapRenderer = null();
HXLINE( 822)				updated = true;
            			}
            		}
HXLINE( 825)		::openfl::geom::ColorTransform_obj::_hx___pool->release(colorTransform);
HXLINE( 827)		bool _hx_tmp1;
HXDLIN( 827)		if (updated) {
HXLINE( 827)			_hx_tmp1 = (displayObject->_hx___drawableType == 7);
            		}
            		else {
HXLINE( 827)			_hx_tmp1 = false;
            		}
HXDLIN( 827)		if (_hx_tmp1) {
HXLINE( 829)			 ::openfl::text::TextField textField = ( ( ::openfl::text::TextField)(displayObject) );
HXLINE( 830)			if (::hx::IsNotNull( textField->_hx___cacheBitmap )) {
HXLINE( 832)				 ::openfl::geom::Matrix fh = textField->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 832)				fh->tx = (fh->tx - textField->_hx___offsetX);
HXLINE( 833)				 ::openfl::geom::Matrix fh1 = textField->_hx___cacheBitmap->_hx___renderTransform;
HXDLIN( 833)				fh1->ty = (fh1->ty - textField->_hx___offsetY);
            			}
            		}
HXLINE( 837)		return updated;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectRenderer_obj,_hx___updateCacheBitmap,return )


::hx::ObjectPtr< DisplayObjectRenderer_obj > DisplayObjectRenderer_obj::__new() {
	::hx::ObjectPtr< DisplayObjectRenderer_obj > __this = new DisplayObjectRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DisplayObjectRenderer_obj > DisplayObjectRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DisplayObjectRenderer_obj *__this = (DisplayObjectRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectRenderer_obj), true, "openfl.display.DisplayObjectRenderer"));
	*(void **)__this = DisplayObjectRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DisplayObjectRenderer_obj::DisplayObjectRenderer_obj()
{
}

void DisplayObjectRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectRenderer);
	HX_MARK_MEMBER_NAME(_hx___allowSmoothing,"__allowSmoothing");
	HX_MARK_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(_hx___cleared,"__cleared");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___overrideBlendMode,"__overrideBlendMode");
	HX_MARK_MEMBER_NAME(_hx___pixelRatio,"__pixelRatio");
	HX_MARK_MEMBER_NAME(_hx___roundPixels,"__roundPixels");
	HX_MARK_MEMBER_NAME(_hx___stage,"__stage");
	HX_MARK_MEMBER_NAME(_hx___tempColorTransform,"__tempColorTransform");
	HX_MARK_MEMBER_NAME(_hx___transparent,"__transparent");
	HX_MARK_MEMBER_NAME(_hx___type,"__type");
	HX_MARK_MEMBER_NAME(_hx___worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(_hx___worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___allowSmoothing,"__allowSmoothing");
	HX_VISIT_MEMBER_NAME(_hx___blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(_hx___cleared,"__cleared");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___overrideBlendMode,"__overrideBlendMode");
	HX_VISIT_MEMBER_NAME(_hx___pixelRatio,"__pixelRatio");
	HX_VISIT_MEMBER_NAME(_hx___roundPixels,"__roundPixels");
	HX_VISIT_MEMBER_NAME(_hx___stage,"__stage");
	HX_VISIT_MEMBER_NAME(_hx___tempColorTransform,"__tempColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___transparent,"__transparent");
	HX_VISIT_MEMBER_NAME(_hx___type,"__type");
	HX_VISIT_MEMBER_NAME(_hx___worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(_hx___worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(_hx___worldTransform,"__worldTransform");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplayObjectRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__type") ) { return ::hx::Val( _hx___type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__stage") ) { return ::hx::Val( _hx___stage ); }
		if (HX_FIELD_EQ(inName,"__clear") ) { return ::hx::Val( _hx___clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return ::hx::Val( _hx___render_dyn() ); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return ::hx::Val( _hx___resize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleared") ) { return ::hx::Val( _hx___cleared ); }
		if (HX_FIELD_EQ(inName,"__context") ) { return ::hx::Val( _hx___context ); }
		if (HX_FIELD_EQ(inName,"__popMask") ) { return ::hx::Val( _hx___popMask_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__getAlpha") ) { return ::hx::Val( _hx___getAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"__pushMask") ) { return ::hx::Val( _hx___pushMask_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return ::hx::Val( _hx___blendMode ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__pixelRatio") ) { return ::hx::Val( _hx___pixelRatio ); }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return ::hx::Val( _hx___worldAlpha ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__roundPixels") ) { return ::hx::Val( _hx___roundPixels ); }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return ::hx::Val( _hx___transparent ); }
		if (HX_FIELD_EQ(inName,"__popMaskRect") ) { return ::hx::Val( _hx___popMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderEvent") ) { return ::hx::Val( _hx___renderEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__pushMaskRect") ) { return ::hx::Val( _hx___pushMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setBlendMode") ) { return ::hx::Val( _hx___setBlendMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__popMaskObject") ) { return ::hx::Val( _hx___popMaskObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__allowSmoothing") ) { return ::hx::Val( _hx___allowSmoothing ); }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return ::hx::Val( _hx___worldTransform ); }
		if (HX_FIELD_EQ(inName,"__pushMaskObject") ) { return ::hx::Val( _hx___pushMaskObject_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__overrideBlendMode") ) { return ::hx::Val( _hx___overrideBlendMode ); }
		if (HX_FIELD_EQ(inName,"__getColorTransform") ) { return ::hx::Val( _hx___getColorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"__updateCacheBitmap") ) { return ::hx::Val( _hx___updateCacheBitmap_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__tempColorTransform") ) { return ::hx::Val( _hx___tempColorTransform ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return ::hx::Val( _hx___worldColorTransform ); }
		if (HX_FIELD_EQ(inName,"__shouldCacheHardware") ) { return ::hx::Val( _hx___shouldCacheHardware_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"__shouldCacheHardware_DisplayObject") ) { return ::hx::Val( _hx___shouldCacheHardware_DisplayObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DisplayObjectRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__type") ) { _hx___type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__stage") ) { _hx___stage=inValue.Cast<  ::openfl::display::Stage >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleared") ) { _hx___cleared=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { _hx___blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__pixelRatio") ) { _hx___pixelRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { _hx___worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__roundPixels") ) { _hx___roundPixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { _hx___transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__allowSmoothing") ) { _hx___allowSmoothing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { _hx___worldTransform=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__overrideBlendMode") ) { _hx___overrideBlendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__tempColorTransform") ) { _hx___tempColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { _hx___worldColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__allowSmoothing",cb,42,a6,9c));
	outFields->push(HX_("__blendMode",34,2d,64,3a));
	outFields->push(HX_("__cleared",0c,58,93,2c));
	outFields->push(HX_("__context",cf,e6,c5,9a));
	outFields->push(HX_("__overrideBlendMode",48,21,da,ac));
	outFields->push(HX_("__pixelRatio",c5,f3,a5,bb));
	outFields->push(HX_("__roundPixels",fb,ca,70,07));
	outFields->push(HX_("__stage",9e,c3,69,ee));
	outFields->push(HX_("__tempColorTransform",dd,84,da,33));
	outFields->push(HX_("__transparent",32,6c,32,6b));
	outFields->push(HX_("__type",da,55,01,fc));
	outFields->push(HX_("__worldAlpha",cc,d2,d6,c5));
	outFields->push(HX_("__worldColorTransform",5b,ce,21,a3));
	outFields->push(HX_("__worldTransform",da,a7,d8,9a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObjectRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___allowSmoothing),HX_("__allowSmoothing",cb,42,a6,9c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___blendMode),HX_("__blendMode",34,2d,64,3a)},
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___cleared),HX_("__cleared",0c,58,93,2c)},
	{::hx::fsObject /*  ::lime::graphics::RenderContext */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___context),HX_("__context",cf,e6,c5,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___overrideBlendMode),HX_("__overrideBlendMode",48,21,da,ac)},
	{::hx::fsFloat,(int)offsetof(DisplayObjectRenderer_obj,_hx___pixelRatio),HX_("__pixelRatio",c5,f3,a5,bb)},
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___roundPixels),HX_("__roundPixels",fb,ca,70,07)},
	{::hx::fsObject /*  ::openfl::display::Stage */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___stage),HX_("__stage",9e,c3,69,ee)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___tempColorTransform),HX_("__tempColorTransform",dd,84,da,33)},
	{::hx::fsBool,(int)offsetof(DisplayObjectRenderer_obj,_hx___transparent),HX_("__transparent",32,6c,32,6b)},
	{::hx::fsString,(int)offsetof(DisplayObjectRenderer_obj,_hx___type),HX_("__type",da,55,01,fc)},
	{::hx::fsFloat,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldAlpha),HX_("__worldAlpha",cc,d2,d6,c5)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldColorTransform),HX_("__worldColorTransform",5b,ce,21,a3)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(DisplayObjectRenderer_obj,_hx___worldTransform),HX_("__worldTransform",da,a7,d8,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DisplayObjectRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectRenderer_obj_sMemberFields[] = {
	HX_("__allowSmoothing",cb,42,a6,9c),
	HX_("__blendMode",34,2d,64,3a),
	HX_("__cleared",0c,58,93,2c),
	HX_("__context",cf,e6,c5,9a),
	HX_("__overrideBlendMode",48,21,da,ac),
	HX_("__pixelRatio",c5,f3,a5,bb),
	HX_("__roundPixels",fb,ca,70,07),
	HX_("__stage",9e,c3,69,ee),
	HX_("__tempColorTransform",dd,84,da,33),
	HX_("__transparent",32,6c,32,6b),
	HX_("__type",da,55,01,fc),
	HX_("__worldAlpha",cc,d2,d6,c5),
	HX_("__worldColorTransform",5b,ce,21,a3),
	HX_("__worldTransform",da,a7,d8,9a),
	HX_("__clear",6d,ca,b9,b2),
	HX_("__getAlpha",08,2a,a6,24),
	HX_("__getColorTransform",9f,af,a3,d2),
	HX_("__popMask",fd,b7,5f,c4),
	HX_("__popMaskObject",9c,46,0d,10),
	HX_("__popMaskRect",c1,73,e8,16),
	HX_("__pushMask",06,e7,7f,ba),
	HX_("__pushMaskObject",65,e2,3b,45),
	HX_("__pushMaskRect",4a,5b,e7,a0),
	HX_("__render",76,d6,58,ad),
	HX_("__renderEvent",c4,35,ee,89),
	HX_("__resize",14,c5,aa,b0),
	HX_("__setBlendMode",72,27,48,51),
	HX_("__shouldCacheHardware",b7,af,f5,89),
	HX_("__shouldCacheHardware_DisplayObject",b9,9c,ad,0b),
	HX_("__updateCacheBitmap",28,11,07,27),
	::String(null()) };

::hx::Class DisplayObjectRenderer_obj::__mClass;

void DisplayObjectRenderer_obj::__register()
{
	DisplayObjectRenderer_obj _hx_dummy;
	DisplayObjectRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DisplayObjectRenderer",5a,1c,ac,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObjectRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObjectRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DisplayObjectRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5a81acb3bead7383_43_boot)
HXDLIN(  43)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("__context",cf,e6,c5,9a), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("__type",da,55,01,fc), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
