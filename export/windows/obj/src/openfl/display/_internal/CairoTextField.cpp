#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoGlyph
#include <lime/graphics/cairo/CairoGlyph.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
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
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoTextField
#include <openfl/display/_internal/CairoTextField.h>
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
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_32_render,"openfl.display._internal.CairoTextField","render",0x63933503,"openfl.display._internal.CairoTextField.render","openfl/display/_internal/CairoTextField.hx",32,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_447_renderDrawable,"openfl.display._internal.CairoTextField","renderDrawable",0x65cf17c1,"openfl.display._internal.CairoTextField.renderDrawable","openfl/display/_internal/CairoTextField.hx",447,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_467_renderDrawableMask,"openfl.display._internal.CairoTextField","renderDrawableMask",0x842bf94d,"openfl.display._internal.CairoTextField.renderDrawableMask","openfl/display/_internal/CairoTextField.hx",467,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_29_boot,"openfl.display._internal.CairoTextField","boot",0x2185989f,"openfl.display._internal.CairoTextField.boot","openfl/display/_internal/CairoTextField.hx",29,0xd777675a)
namespace openfl{
namespace display{
namespace _internal{

void CairoTextField_obj::__construct() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return new CairoTextField_obj; }

void *CairoTextField_obj::_hx_vtable = 0;

Dynamic CairoTextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoTextField_obj > _hx_result = new CairoTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6fd3cbef;
}

void CairoTextField_obj::render( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer, ::openfl::geom::Matrix transform){
            	HX_GC_STACKFRAME(&_hx_pos_a654946cfcca811d_32_render)
HXLINE(  34)		 ::openfl::text::_internal::TextEngine textEngine = textField->_hx___textEngine;
HXLINE(  37)		bool useTextBounds;
HXDLIN(  37)		if (!(textEngine->background)) {
HXLINE(  37)			useTextBounds = textEngine->border;
            		}
            		else {
HXLINE(  37)			useTextBounds = true;
            		}
HXDLIN(  37)		bool useTextBounds1 = !(useTextBounds);
HXLINE(  38)		 ::openfl::geom::Rectangle bounds;
HXDLIN(  38)		if (useTextBounds1) {
HXLINE(  38)			bounds = textEngine->textBounds;
            		}
            		else {
HXLINE(  38)			bounds = textEngine->bounds;
            		}
HXLINE(  39)		 ::openfl::display::Graphics graphics = textField->_hx___graphics;
HXLINE(  40)		 ::lime::graphics::cairo::Cairo cairo = graphics->_hx___cairo;
HXLINE(  41)		Float cursorOffsetX = ((Float)0.0);
HXLINE(  43)		if (textField->_hx___dirty) {
HXLINE(  45)			textField->_hx___updateLayout();
HXLINE(  47)			if (::hx::IsNull( graphics->_hx___bounds )) {
HXLINE(  49)				graphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXLINE(  52)			if ((textField->get_text().length == 0)) {
HXLINE(  54)				Float boundsWidth = (textEngine->bounds->width - ( (Float)(4) ));
HXLINE(  55)				 ::Dynamic align = textField->get_defaultTextFormat()->align;
HXLINE(  56)				if (::hx::IsEq( align,3 )) {
HXLINE(  56)					cursorOffsetX = ( (Float)(0) );
            				}
            				else {
HXLINE(  56)					if (::hx::IsEq( align,4 )) {
HXLINE(  56)						cursorOffsetX = boundsWidth;
            					}
            					else {
HXLINE(  56)						cursorOffsetX = (boundsWidth / ( (Float)(2) ));
            					}
            				}
HXLINE(  57)				 ::Dynamic _hx_switch_0 = align;
            				if (  (_hx_switch_0==0) ){
HXLINE(  66)					cursorOffsetX = (cursorOffsetX + (( (Float)(textField->get_defaultTextFormat()->leftMargin) ) / ( (Float)(2) )));
HXLINE(  67)					cursorOffsetX = (cursorOffsetX - (( (Float)(textField->get_defaultTextFormat()->rightMargin) ) / ( (Float)(2) )));
HXLINE(  68)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  69)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  65)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE(  76)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE(  73)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->leftMargin);
HXLINE(  74)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  75)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  72)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE(  60)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->leftMargin);
HXLINE(  61)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  62)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  59)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==4) ){
HXLINE(  64)					cursorOffsetX = (cursorOffsetX - ( (Float)(textField->get_defaultTextFormat()->rightMargin) ));
HXDLIN(  64)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==5) ){
HXLINE(  70)					goto _hx_goto_0;
            				}
            				_hx_goto_0:;
HXLINE(  79)				if (useTextBounds1) {
HXLINE(  81)					bounds->y = textEngine->bounds->y;
HXLINE(  82)					bounds->x = cursorOffsetX;
            				}
            			}
HXLINE(  86)			graphics->_hx___bounds->copyFrom(bounds);
            		}
HXLINE(  92)		graphics->_hx___update(renderer->_hx___worldTransform);
HXLINE(  97)		Float pixelRatio = renderer->_hx___pixelRatio;
HXLINE( 100)		int width = ::Math_obj::round((( (Float)(graphics->_hx___width) ) * pixelRatio));
HXLINE( 101)		int height = ::Math_obj::round((( (Float)(graphics->_hx___height) ) * pixelRatio));
HXLINE( 103)		bool renderable;
HXDLIN( 103)		bool renderable1;
HXDLIN( 103)		if (!(textEngine->border)) {
HXLINE( 103)			renderable1 = textEngine->background;
            		}
            		else {
HXLINE( 103)			renderable1 = true;
            		}
HXDLIN( 103)		if (!(renderable1)) {
HXLINE( 103)			renderable = ::hx::IsNotNull( textEngine->text );
            		}
            		else {
HXLINE( 103)			renderable = true;
            		}
HXLINE( 104)		bool needsUpscaling = false;
HXLINE( 106)		if (::hx::IsNotNull( cairo )) {
HXLINE( 109)			 ::Dynamic surface = graphics->_hx___bitmap->getSurface();
HXLINE( 111)			bool _hx_tmp;
HXDLIN( 111)			if (graphics->_hx___softwareDirty) {
HXLINE( 111)				if ((width <= ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface))) {
HXLINE( 111)					_hx_tmp = (height > ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface));
            				}
            				else {
HXLINE( 111)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 111)				_hx_tmp = false;
            			}
HXDLIN( 111)			if (_hx_tmp) {
HXLINE( 113)				needsUpscaling = true;
            			}
HXLINE( 116)			bool _hx_tmp1;
HXDLIN( 116)			if (renderable) {
HXLINE( 116)				_hx_tmp1 = needsUpscaling;
            			}
            			else {
HXLINE( 116)				_hx_tmp1 = true;
            			}
HXDLIN( 116)			if (_hx_tmp1) {
HXLINE( 118)				graphics->_hx___cairo = null();
HXLINE( 119)				graphics->_hx___bitmap = null();
HXLINE( 120)				graphics->_hx___visible = false;
HXLINE( 121)				cairo = null();
            			}
            		}
HXLINE( 125)		bool _hx_tmp;
HXDLIN( 125)		bool _hx_tmp1;
HXDLIN( 125)		bool _hx_tmp2;
HXDLIN( 125)		if ((width > 0)) {
HXLINE( 125)			_hx_tmp2 = (height <= 0);
            		}
            		else {
HXLINE( 125)			_hx_tmp2 = true;
            		}
HXDLIN( 125)		if (!(_hx_tmp2)) {
HXLINE( 127)			bool _hx_tmp;
HXDLIN( 127)			if (!(textField->_hx___dirty)) {
HXLINE( 127)				_hx_tmp = !(graphics->_hx___softwareDirty);
            			}
            			else {
HXLINE( 127)				_hx_tmp = false;
            			}
HXDLIN( 127)			if (_hx_tmp) {
HXLINE( 127)				if (graphics->_hx___visible) {
HXLINE( 125)					_hx_tmp1 = ::hx::IsNotNull( graphics->_hx___bitmap );
            				}
            				else {
HXLINE( 125)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 125)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 125)			_hx_tmp1 = true;
            		}
HXDLIN( 125)		if (!(_hx_tmp1)) {
HXLINE( 125)			_hx_tmp = !(renderable);
            		}
            		else {
HXLINE( 125)			_hx_tmp = true;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 130)			textField->_hx___dirty = false;
HXLINE( 131)			return;
            		}
HXLINE( 134)		if (::hx::IsNull( cairo )) {
HXLINE( 136)			int bitmapWidth;
HXDLIN( 136)			if (needsUpscaling) {
HXLINE( 136)				bitmapWidth = ::Std_obj::_hx_int((( (Float)(width) ) * ((Float)1.25)));
            			}
            			else {
HXLINE( 136)				bitmapWidth = width;
            			}
HXLINE( 137)			int bitmapHeight;
HXDLIN( 137)			if (needsUpscaling) {
HXLINE( 137)				bitmapHeight = ::Std_obj::_hx_int((( (Float)(height) ) * ((Float)1.25)));
            			}
            			else {
HXLINE( 137)				bitmapHeight = height;
            			}
HXLINE( 139)			bool _hx_tmp;
HXDLIN( 139)			if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE( 139)				_hx_tmp = ::hx::IsGreater( bitmapWidth,::openfl::display::Graphics_obj::maxTextureWidth );
            			}
            			else {
HXLINE( 139)				_hx_tmp = false;
            			}
HXDLIN( 139)			if (_hx_tmp) {
HXLINE( 141)				bitmapWidth = ( (int)(::openfl::display::Graphics_obj::maxTextureWidth) );
            			}
HXLINE( 144)			bool _hx_tmp1;
HXDLIN( 144)			if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureHeight )) {
HXLINE( 144)				_hx_tmp1 = ::hx::IsGreater( bitmapHeight,::openfl::display::Graphics_obj::maxTextureHeight );
            			}
            			else {
HXLINE( 144)				_hx_tmp1 = false;
            			}
HXDLIN( 144)			if (_hx_tmp1) {
HXLINE( 146)				bitmapHeight = ( (int)(::openfl::display::Graphics_obj::maxTextureHeight) );
            			}
HXLINE( 149)			 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
HXLINE( 150)			 ::Dynamic surface = bitmap->getSurface();
HXLINE( 151)			graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
HXLINE( 152)			graphics->_hx___visible = true;
HXLINE( 153)			graphics->_hx___managed = true;
HXLINE( 155)			graphics->_hx___bitmap = bitmap;
HXLINE( 156)			graphics->_hx___bitmapScale = pixelRatio;
HXLINE( 158)			cairo = graphics->_hx___cairo;
HXLINE( 160)			 ::Dynamic options = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::_new();
HXLINE( 162)			bool _hx_tmp2;
HXDLIN( 162)			if (::hx::IsEq( textEngine->antiAliasType,0 )) {
HXLINE( 162)				_hx_tmp2 = (textEngine->sharpness == 400);
            			}
            			else {
HXLINE( 162)				_hx_tmp2 = false;
            			}
HXDLIN( 162)			if (_hx_tmp2) {
HXLINE( 164)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,1);
HXLINE( 165)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,1);
HXLINE( 166)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,1);
            			}
            			else {
HXLINE( 170)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,2);
HXLINE( 171)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,1);
HXLINE( 172)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,5);
            			}
HXLINE( 175)			cairo->set_fontOptions(options);
            		}
            		else {
HXLINE( 179)			cairo->identityMatrix();
HXLINE( 180)			cairo->resetClip();
HXLINE( 182)			cairo->setOperator(0);
HXLINE( 183)			cairo->paint();
HXLINE( 184)			cairo->setOperator(2);
            		}
HXLINE( 187)		 ::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 188)		matrix->copyFrom(graphics->_hx___renderTransform);
HXLINE( 189)		matrix->scale(pixelRatio,pixelRatio);
HXLINE( 191)		renderer->applyMatrix(matrix,cairo);
HXLINE( 193)		::openfl::geom::Matrix_obj::_hx___pool->release(matrix);
HXLINE( 195)		if (textEngine->border) {
HXLINE( 197)			int _hx_tmp = ::Std_obj::_hx_int((bounds->width - ( (Float)(1) )));
HXDLIN( 197)			cairo->rectangle(((Float)0.5),((Float)0.5),( (Float)(_hx_tmp) ),( (Float)(::Std_obj::_hx_int((bounds->height - ( (Float)(1) )))) ));
            		}
            		else {
HXLINE( 201)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),bounds->width,bounds->height);
            		}
HXLINE( 204)		if (textEngine->background) {
HXLINE( 206)			int color = textEngine->backgroundColor;
HXLINE( 207)			Float r = (( (Float)(::hx::UShr((color & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 208)			Float g = (( (Float)(::hx::UShr((color & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 209)			Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 211)			cairo->setSourceRGB(r,g,b);
HXLINE( 212)			cairo->fillPreserve();
            		}
HXLINE( 215)		if (textEngine->border) {
HXLINE( 217)			int color = textEngine->borderColor;
HXLINE( 218)			Float r = (( (Float)(::hx::UShr((color & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 219)			Float g = (( (Float)(::hx::UShr((color & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 220)			Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 222)			cairo->setSourceRGB(r,g,b);
HXLINE( 223)			cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 224)			cairo->stroke();
            		}
HXLINE( 227)		bool _hx_tmp3;
HXDLIN( 227)		if (::hx::IsNotNull( textEngine->text )) {
HXLINE( 227)			_hx_tmp3 = (textEngine->text != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 227)			_hx_tmp3 = false;
            		}
HXDLIN( 227)		if (_hx_tmp3) {
HXLINE( 229)			Float bounds1 = bounds->width;
HXDLIN( 229)			int _hx_tmp;
HXDLIN( 229)			if (textField->get_border()) {
HXLINE( 229)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 229)				_hx_tmp = 0;
            			}
HXDLIN( 229)			Float bounds2 = bounds->height;
HXDLIN( 229)			int _hx_tmp1;
HXDLIN( 229)			if (textField->get_border()) {
HXLINE( 229)				_hx_tmp1 = 1;
            			}
            			else {
HXLINE( 229)				_hx_tmp1 = 0;
            			}
HXDLIN( 229)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),(bounds1 - ( (Float)(_hx_tmp) )),(bounds2 - ( (Float)(_hx_tmp1) )));
HXLINE( 230)			cairo->clip();
HXLINE( 232)			::String text = textEngine->text;
HXLINE( 234)			int scrollX = -(textField->get_scrollH());
HXLINE( 235)			Float scrollY = ((Float)0.0);
HXLINE( 237)			{
HXLINE( 237)				int _g = 0;
HXDLIN( 237)				int _g1 = (textField->get_scrollV() - 1);
HXDLIN( 237)				while((_g < _g1)){
HXLINE( 237)					_g = (_g + 1);
HXDLIN( 237)					int i = (_g - 1);
HXLINE( 239)					scrollY = (scrollY - textEngine->lineHeights->get(i));
            				}
            			}
HXLINE( 242)			 ::Dynamic color;
HXDLIN( 242)			Float r;
HXDLIN( 242)			Float g;
HXDLIN( 242)			Float b;
HXDLIN( 242)			 ::openfl::text::Font font;
HXDLIN( 242)			int size;
HXDLIN( 242)			Float advance;
HXLINE( 244)			{
HXLINE( 244)				 ::Dynamic group = textEngine->layoutGroups->iterator();
HXDLIN( 244)				while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 244)					 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 246)					int group2 = group1->lineIndex;
HXDLIN( 246)					if ((group2 < (textField->get_scrollV() - 1))) {
HXLINE( 246)						continue;
            					}
HXLINE( 247)					int group3 = group1->lineIndex;
HXDLIN( 247)					if ((group3 > (textEngine->get_bottomScrollV() - 1))) {
HXLINE( 247)						goto _hx_goto_2;
            					}
HXLINE( 249)					color = group1->format->color;
HXLINE( 250)					r = (( (Float)(::hx::UShr((( (int)(color) ) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 251)					g = (( (Float)(::hx::UShr((( (int)(color) ) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 252)					b = (( (Float)((( (int)(color) ) & 255)) ) / ( (Float)(255) ));
HXLINE( 254)					cairo->setSourceRGB(r,g,b);
HXLINE( 256)					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(group1->format);
HXLINE( 258)					bool _hx_tmp;
HXDLIN( 258)					if (::hx::IsNotNull( font )) {
HXLINE( 258)						_hx_tmp = ::hx::IsNotNull( group1->format->size );
            					}
            					else {
HXLINE( 258)						_hx_tmp = false;
            					}
HXDLIN( 258)					if (_hx_tmp) {
HXLINE( 260)						if (::hx::IsNotNull( textEngine->_hx___cairoFont )) {
HXLINE( 262)							if (::hx::IsInstanceNotEq( textEngine->_hx___font,font )) {
HXLINE( 264)								textEngine->_hx___cairoFont = null();
            							}
            						}
HXLINE( 268)						if (::hx::IsNull( textEngine->_hx___cairoFont )) {
HXLINE( 270)							textEngine->_hx___font = font;
HXLINE( 271)							textEngine->_hx___cairoFont = ::lime::graphics::cairo::_CairoFTFontFace::CairoFTFontFace_Impl__obj::create(font,0);
            						}
HXLINE( 274)						cairo->set_fontFace(textEngine->_hx___cairoFont);
HXLINE( 276)						size = ::Std_obj::_hx_int(( (Float)(group1->format->size) ));
HXLINE( 277)						cairo->setFontSize(( (Float)(size) ));
HXLINE( 279)						cairo->moveTo(((group1->offsetX + scrollX) - bounds->x),(((group1->offsetY + group1->ascent) + scrollY) - bounds->y));
HXLINE( 286)						cairo->translate(( (Float)(0) ),( (Float)(0) ));
HXLINE( 288)						::Array< ::Dynamic> glyphs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 289)						Float x = ((group1->offsetX + scrollX) - bounds->x);
HXLINE( 290)						Float y = (((group1->offsetY + group1->ascent) + scrollY) - bounds->y);
HXLINE( 292)						{
HXLINE( 292)							int _g = 0;
HXDLIN( 292)							::Array< ::Dynamic> _g1 = group1->positions;
HXDLIN( 292)							while((_g < _g1->length)){
HXLINE( 292)								 ::openfl::text::_internal::GlyphPosition position = _g1->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN( 292)								_g = (_g + 1);
HXLINE( 294)								bool _hx_tmp;
HXDLIN( 294)								if (::hx::IsNotNull( position )) {
HXLINE( 294)									_hx_tmp = (position->glyph == 0);
            								}
            								else {
HXLINE( 294)									_hx_tmp = true;
            								}
HXDLIN( 294)								if (_hx_tmp) {
HXLINE( 294)									continue;
            								}
HXLINE( 295)								glyphs->push( ::lime::graphics::cairo::CairoGlyph_obj::__alloc( HX_CTX ,position->glyph,((x + position->offset->x) + ((Float)0.5)),((y - position->offset->y) + ((Float)0.5))));
HXLINE( 296)								x = (x + position->advance->x);
HXLINE( 297)								y = (y - position->advance->y);
            							}
            						}
HXLINE( 300)						cairo->showGlyphs(glyphs);
HXLINE( 303)						bool _hx_tmp;
HXDLIN( 303)						if ((textField->_hx___caretIndex > -1)) {
HXLINE( 303)							_hx_tmp = textEngine->selectable;
            						}
            						else {
HXLINE( 303)							_hx_tmp = false;
            						}
HXDLIN( 303)						if (_hx_tmp) {
HXLINE( 305)							if ((textField->_hx___selectionIndex == textField->_hx___caretIndex)) {
HXLINE( 307)								bool _hx_tmp;
HXDLIN( 307)								bool _hx_tmp1;
HXDLIN( 307)								if (textField->_hx___showCursor) {
HXLINE( 307)									_hx_tmp1 = (group1->startIndex <= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 307)									_hx_tmp1 = false;
            								}
HXDLIN( 307)								if (_hx_tmp1) {
HXLINE( 307)									_hx_tmp = (group1->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 307)									_hx_tmp = false;
            								}
HXDLIN( 307)								if (_hx_tmp) {
HXLINE( 311)									advance = ((Float)0.0);
HXLINE( 313)									{
HXLINE( 313)										int _g = 0;
HXDLIN( 313)										int _g1 = (textField->_hx___caretIndex - group1->startIndex);
HXDLIN( 313)										while((_g < _g1)){
HXLINE( 313)											_g = (_g + 1);
HXDLIN( 313)											int i = (_g - 1);
HXLINE( 315)											if ((group1->positions->length <= i)) {
HXLINE( 315)												goto _hx_goto_4;
            											}
HXLINE( 316)											Float advance1;
HXDLIN( 316)											bool advance2;
HXDLIN( 316)											if ((i >= 0)) {
HXLINE( 316)												advance2 = (i < group1->positions->length);
            											}
            											else {
HXLINE( 316)												advance2 = false;
            											}
HXDLIN( 316)											if (advance2) {
HXLINE( 316)												advance1 = group1->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            											}
            											else {
HXLINE( 316)												advance1 = ( (Float)(0) );
            											}
HXDLIN( 316)											advance = (advance + advance1);
            										}
            										_hx_goto_4:;
            									}
HXLINE( 319)									Float scrollY = ((Float)0.0);
HXLINE( 321)									{
HXLINE( 321)										int _g2 = textField->get_scrollV();
HXDLIN( 321)										int _g3 = (group1->lineIndex + 1);
HXDLIN( 321)										while((_g2 < _g3)){
HXLINE( 321)											_g2 = (_g2 + 1);
HXDLIN( 321)											int i = (_g2 - 1);
HXLINE( 323)											scrollY = (scrollY + textEngine->lineHeights->get((i - 1)));
            										}
            									}
HXLINE( 326)									Float _hx_tmp = (::Math_obj::floor((group1->offsetX + advance)) + ((Float)0.5));
HXDLIN( 326)									Float _hx_tmp1 = (_hx_tmp - ( (Float)(textField->get_scrollH()) ));
HXDLIN( 326)									cairo->moveTo((_hx_tmp1 - bounds->x),((scrollY + ((Float)2.5)) - bounds->y));
HXLINE( 327)									cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 328)									Float _hx_tmp2 = (::Math_obj::floor((group1->offsetX + advance)) + ((Float)0.5));
HXDLIN( 328)									Float _hx_tmp3 = (_hx_tmp2 - ( (Float)(textField->get_scrollH()) ));
HXDLIN( 328)									Float _hx_tmp4 = (_hx_tmp3 - bounds->x);
HXLINE( 332)									Float _hx_tmp5 = ((scrollY + ::openfl::text::_internal::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - ( (Float)(1) ));
HXLINE( 328)									cairo->lineTo(_hx_tmp4,(_hx_tmp5 - bounds->y));
HXLINE( 336)									cairo->stroke();
            								}
            							}
            							else {
HXLINE( 339)								bool _hx_tmp;
HXDLIN( 339)								bool _hx_tmp1;
HXDLIN( 339)								bool _hx_tmp2;
HXDLIN( 339)								bool _hx_tmp3;
HXDLIN( 339)								if ((group1->startIndex <= textField->_hx___caretIndex)) {
HXLINE( 339)									_hx_tmp3 = (group1->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 339)									_hx_tmp3 = false;
            								}
HXDLIN( 339)								if (!(_hx_tmp3)) {
HXLINE( 340)									if ((group1->startIndex <= textField->_hx___selectionIndex)) {
HXLINE( 339)										_hx_tmp2 = (group1->endIndex >= textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 339)										_hx_tmp2 = false;
            									}
            								}
            								else {
HXLINE( 339)									_hx_tmp2 = true;
            								}
HXDLIN( 339)								if (!(_hx_tmp2)) {
HXLINE( 341)									if ((group1->startIndex > textField->_hx___caretIndex)) {
HXLINE( 339)										_hx_tmp1 = (group1->endIndex < textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 339)										_hx_tmp1 = false;
            									}
            								}
            								else {
HXLINE( 339)									_hx_tmp1 = true;
            								}
HXDLIN( 339)								if (!(_hx_tmp1)) {
HXLINE( 342)									if ((group1->startIndex > textField->_hx___selectionIndex)) {
HXLINE( 339)										_hx_tmp = (group1->endIndex < textField->_hx___caretIndex);
            									}
            									else {
HXLINE( 339)										_hx_tmp = false;
            									}
            								}
            								else {
HXLINE( 339)									_hx_tmp = true;
            								}
HXDLIN( 339)								if (_hx_tmp) {
HXLINE( 344)									int selectionStart = ::Std_obj::_hx_int(::Math_obj::min(( (Float)(textField->_hx___selectionIndex) ),( (Float)(textField->_hx___caretIndex) )));
HXLINE( 345)									int selectionEnd = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(textField->_hx___selectionIndex) ),( (Float)(textField->_hx___caretIndex) )));
HXLINE( 347)									if ((group1->startIndex > selectionStart)) {
HXLINE( 349)										selectionStart = group1->startIndex;
            									}
HXLINE( 352)									if ((group1->endIndex < selectionEnd)) {
HXLINE( 354)										selectionEnd = group1->endIndex;
            									}
HXLINE( 357)									 ::openfl::geom::Rectangle end;
HXDLIN( 357)									 ::openfl::geom::Rectangle start = textField->getCharBoundaries(selectionStart);
HXLINE( 361)									if ((selectionEnd >= group1->endIndex)) {
HXLINE( 363)										end = textField->getCharBoundaries((group1->endIndex - 1));
HXLINE( 365)										if (::hx::IsNotNull( end )) {
HXLINE( 367)											 ::openfl::geom::Rectangle end1 = end;
HXDLIN( 367)											end1->x = (end1->x + (end->width + 2));
            										}
            									}
            									else {
HXLINE( 372)										end = textField->getCharBoundaries(selectionEnd);
            									}
HXLINE( 375)									bool _hx_tmp;
HXDLIN( 375)									if (::hx::IsNotNull( start )) {
HXLINE( 375)										_hx_tmp = ::hx::IsNotNull( end );
            									}
            									else {
HXLINE( 375)										_hx_tmp = false;
            									}
HXDLIN( 375)									if (_hx_tmp) {
HXLINE( 377)										cairo->setSourceRGB(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 378)										cairo->rectangle(((scrollX + start->x) - bounds->x),(start->y + scrollY),(end->x - start->x),group1->height);
HXLINE( 379)										cairo->fill();
HXLINE( 380)										cairo->setSourceRGB(( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
HXLINE( 384)										::Array< ::Dynamic> selectedGylphs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 386)										selectionStart = (selectionStart - group1->startIndex);
HXLINE( 387)										selectionEnd = (selectionEnd - group1->startIndex);
HXLINE( 388)										{
HXLINE( 388)											int _g = selectionStart;
HXDLIN( 388)											int _g1 = selectionEnd;
HXDLIN( 388)											while((_g < _g1)){
HXLINE( 388)												_g = (_g + 1);
HXDLIN( 388)												int i = (_g - 1);
HXLINE( 389)												selectedGylphs->push(glyphs->__get(i).StaticCast<  ::lime::graphics::cairo::CairoGlyph >());
            											}
            										}
HXLINE( 390)										cairo->showGlyphs(selectedGylphs);
            									}
            								}
            							}
            						}
HXLINE( 397)						if (( (bool)(group1->format->underline) )) {
HXLINE( 401)							cairo->newPath();
HXLINE( 402)							cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 403)							Float x = ((group1->offsetX + scrollX) - bounds->x);
HXLINE( 404)							Float y = (::Math_obj::ceil((((group1->offsetY + scrollY) + group1->ascent) - bounds->y)) + ((Float)0.5));
HXLINE( 405)							cairo->moveTo(x,y);
HXLINE( 406)							cairo->lineTo((x + group1->width),y);
HXLINE( 407)							cairo->stroke();
HXLINE( 408)							cairo->closePath();
            						}
            					}
            				}
            				_hx_goto_2:;
            			}
            		}
            		else {
HXLINE( 413)			bool _hx_tmp;
HXDLIN( 413)			bool _hx_tmp1;
HXDLIN( 413)			if ((textField->_hx___caretIndex > -1)) {
HXLINE( 413)				_hx_tmp1 = textEngine->selectable;
            			}
            			else {
HXLINE( 413)				_hx_tmp1 = false;
            			}
HXDLIN( 413)			if (_hx_tmp1) {
HXLINE( 413)				_hx_tmp = textField->_hx___showCursor;
            			}
            			else {
HXLINE( 413)				_hx_tmp = false;
            			}
HXDLIN( 413)			if (_hx_tmp) {
HXLINE( 415)				Float scrollX;
HXDLIN( 415)				if (useTextBounds1) {
HXLINE( 415)					scrollX = ( (Float)(0) );
            				}
            				else {
HXLINE( 415)					scrollX = cursorOffsetX;
            				}
HXDLIN( 415)				Float scrollX1 = (-(textField->get_scrollH()) + scrollX);
HXLINE( 416)				Float scrollY = ((Float)0.0);
HXLINE( 418)				{
HXLINE( 418)					int _g = 0;
HXDLIN( 418)					int _g1 = (textField->get_scrollV() - 1);
HXDLIN( 418)					while((_g < _g1)){
HXLINE( 418)						_g = (_g + 1);
HXDLIN( 418)						int i = (_g - 1);
HXLINE( 420)						scrollY = (scrollY + textEngine->lineHeights->get(i));
            					}
            				}
HXLINE( 423)				 ::Dynamic color = textField->get_defaultTextFormat()->color;
HXLINE( 424)				Float r = (( (Float)(::hx::UShr((( (int)(color) ) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 425)				Float g = (( (Float)(::hx::UShr((( (int)(color) ) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 426)				Float b = (( (Float)((( (int)(color) ) & 255)) ) / ( (Float)(255) ));
HXLINE( 428)				cairo->setSourceRGB(r,g,b);
HXLINE( 430)				cairo->newPath();
HXLINE( 431)				cairo->moveTo((scrollX1 + ((Float)2.5)),(scrollY + ((Float)2.5)));
HXLINE( 432)				cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 433)				cairo->lineTo((scrollX1 + ((Float)2.5)),((scrollY + ::openfl::text::_internal::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - ( (Float)(1) )));
HXLINE( 434)				cairo->stroke();
HXLINE( 435)				cairo->closePath();
            			}
            		}
HXLINE( 438)		graphics->_hx___bitmap->image->dirty = true;
HXLINE( 439)		graphics->_hx___bitmap->image->version++;
HXLINE( 440)		textField->_hx___dirty = false;
HXLINE( 441)		graphics->_hx___softwareDirty = false;
HXLINE( 442)		graphics->set___dirty(false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,render,(void))

void CairoTextField_obj::renderDrawable( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_447_renderDrawable)
HXLINE( 449)		renderer->_hx___updateCacheBitmap(textField,textField->_hx___dirty);
HXLINE( 451)		bool _hx_tmp;
HXDLIN( 451)		if (::hx::IsNotNull( textField->_hx___cacheBitmap )) {
HXLINE( 451)			_hx_tmp = !(textField->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 451)			_hx_tmp = false;
            		}
HXDLIN( 451)		if (_hx_tmp) {
HXLINE( 453)			 ::openfl::display::Bitmap bitmap = textField->_hx___cacheBitmap;
HXDLIN( 453)			if (bitmap->_hx___renderable) {
HXLINE( 453)				Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 453)				bool _hx_tmp;
HXDLIN( 453)				bool _hx_tmp1;
HXDLIN( 453)				if ((alpha > 0)) {
HXLINE( 453)					_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXLINE( 453)					_hx_tmp1 = false;
            				}
HXDLIN( 453)				if (_hx_tmp1) {
HXLINE( 453)					_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE( 453)					_hx_tmp = false;
            				}
HXDLIN( 453)				if (_hx_tmp) {
HXLINE( 453)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN( 453)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 453)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN( 453)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 453)					 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 453)					if (::hx::IsNotNull( surface )) {
HXLINE( 453)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 453)						int _hx_tmp;
HXDLIN( 453)						bool _hx_tmp1;
HXDLIN( 453)						if (renderer->_hx___allowSmoothing) {
HXLINE( 453)							_hx_tmp1 = bitmap->smoothing;
            						}
            						else {
HXLINE( 453)							_hx_tmp1 = false;
            						}
HXDLIN( 453)						if (_hx_tmp1) {
HXLINE( 453)							_hx_tmp = 1;
            						}
            						else {
HXLINE( 453)							_hx_tmp = 3;
            						}
HXDLIN( 453)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 453)						cairo->set_source(pattern);
HXDLIN( 453)						if ((alpha == 1)) {
HXLINE( 453)							cairo->paint();
            						}
            						else {
HXLINE( 453)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN( 453)					renderer->_hx___popMaskObject(bitmap,null());
HXDLIN( 453)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
            		else {
HXLINE( 457)			::openfl::display::_internal::CairoTextField_obj::render(textField,renderer,textField->_hx___worldTransform);
HXLINE( 458)			::openfl::display::_internal::CairoDisplayObject_obj::render(textField,renderer);
            		}
HXLINE( 461)		renderer->_hx___renderEvent(textField);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,renderDrawable,(void))

void CairoTextField_obj::renderDrawableMask( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_467_renderDrawableMask)
HXDLIN( 467)		if (::hx::IsNotNull( textField->_hx___graphics )) {
HXDLIN( 467)			::openfl::display::_internal::CairoGraphics_obj::renderMask(textField->_hx___graphics,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,renderDrawableMask,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoTextField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoTextField_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoTextField_obj::__mClass;

static ::String CairoTextField_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoTextField_obj::__register()
{
	CairoTextField_obj _hx_dummy;
	CairoTextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoTextField",21,a3,1c,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoTextField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoTextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoTextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoTextField_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_29_boot)
HXDLIN(  29)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
