#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
#ifndef INCLUDED_openfl_text__internal_ShapeCache
#include <openfl/text/_internal/ShapeCache.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextFormatRange
#include <openfl/text/_internal/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayout
#include <openfl/text/_internal/TextLayout.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_text__internal__TextEngine_DefaultFontSet
#include <openfl/text/_internal/_TextEngine/DefaultFontSet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81873a2f4b2980c0_111_new,"openfl.text._internal.TextEngine","new",0xa9ba7af6,"openfl.text._internal.TextEngine.new","openfl/text/_internal/TextEngine.hx",111,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_175_createRestrictRegexp,"openfl.text._internal.TextEngine","createRestrictRegexp",0x6873dceb,"openfl.text._internal.TextEngine.createRestrictRegexp","openfl/text/_internal/TextEngine.hx",175,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_169_createRestrictRegexp,"openfl.text._internal.TextEngine","createRestrictRegexp",0x6873dceb,"openfl.text._internal.TextEngine.createRestrictRegexp","openfl/text/_internal/TextEngine.hx",169,0xb85e1839)
static const ::String _hx_array_data_7e808804_3[] = {
	HX_("",00,00,00,00),
};
static const bool _hx_array_data_7e808804_4[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_264_getBounds,"openfl.text._internal.TextEngine","getBounds",0x3ac9cec1,"openfl.text._internal.TextEngine.getBounds","openfl/text/_internal/TextEngine.hx",264,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_544_getLine,"openfl.text._internal.TextEngine","getLine",0xeb547540,"openfl.text._internal.TextEngine.getLine","openfl/text/_internal/TextEngine.hx",544,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_561_getLineBreaks,"openfl.text._internal.TextEngine","getLineBreaks",0x21405c34,"openfl.text._internal.TextEngine.getLineBreaks","openfl/text/_internal/TextEngine.hx",561,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_581_getLineBreakIndex,"openfl.text._internal.TextEngine","getLineBreakIndex",0xa9a1db33,"openfl.text._internal.TextEngine.getLineBreakIndex","openfl/text/_internal/TextEngine.hx",581,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_591_getLineMeasurements,"openfl.text._internal.TextEngine","getLineMeasurements",0x50395657,"openfl.text._internal.TextEngine.getLineMeasurements","openfl/text/_internal/TextEngine.hx",591,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_750_getLayoutGroups,"openfl.text._internal.TextEngine","getLayoutGroups",0x36de2bea,"openfl.text._internal.TextEngine.getLayoutGroups","openfl/text/_internal/TextEngine.hx",750,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1675_restrictText,"openfl.text._internal.TextEngine","restrictText",0x4d5464b3,"openfl.text._internal.TextEngine.restrictText","openfl/text/_internal/TextEngine.hx",1675,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1696_setTextAlignment,"openfl.text._internal.TextEngine","setTextAlignment",0x7bf8ff1e,"openfl.text._internal.TextEngine.setTextAlignment","openfl/text/_internal/TextEngine.hx",1696,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1803_trimText,"openfl.text._internal.TextEngine","trimText",0x8f1ce459,"openfl.text._internal.TextEngine.trimText","openfl/text/_internal/TextEngine.hx",1803,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1818_update,"openfl.text._internal.TextEngine","update",0x02cb1d33,"openfl.text._internal.TextEngine.update","openfl/text/_internal/TextEngine.hx",1818,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1851_get_bottomScrollV,"openfl.text._internal.TextEngine","get_bottomScrollV",0x0563c86b,"openfl.text._internal.TextEngine.get_bottomScrollV","openfl/text/_internal/TextEngine.hx",1851,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1898_get_maxScrollV,"openfl.text._internal.TextEngine","get_maxScrollV",0x5a4206d8,"openfl.text._internal.TextEngine.get_maxScrollV","openfl/text/_internal/TextEngine.hx",1898,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1939_set_restrict,"openfl.text._internal.TextEngine","set_restrict",0xd4c7f563,"openfl.text._internal.TextEngine.set_restrict","openfl/text/_internal/TextEngine.hx",1939,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1960_get_scrollV,"openfl.text._internal.TextEngine","get_scrollV",0x1f66c456,"openfl.text._internal.TextEngine.get_scrollV","openfl/text/_internal/TextEngine.hx",1960,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1972_set_scrollV,"openfl.text._internal.TextEngine","set_scrollV",0x29d3cb62,"openfl.text._internal.TextEngine.set_scrollV","openfl/text/_internal/TextEngine.hx",1972,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_1981_set_text,"openfl.text._internal.TextEngine","set_text",0xa4cb1754,"openfl.text._internal.TextEngine.set_text","openfl/text/_internal/TextEngine.hx",1981,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_202_findFont,"openfl.text._internal.TextEngine","findFont",0xc00da052,"openfl.text._internal.TextEngine.findFont","openfl/text/_internal/TextEngine.hx",202,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_239_findFontVariant,"openfl.text._internal.TextEngine","findFontVariant",0x8f425653,"openfl.text._internal.TextEngine.findFontVariant","openfl/text/_internal/TextEngine.hx",239,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_296_getDefaultFont,"openfl.text._internal.TextEngine","getDefaultFont",0xe66d7b64,"openfl.text._internal.TextEngine.getDefaultFont","openfl/text/_internal/TextEngine.hx",296,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_305_getDefaultFont,"openfl.text._internal.TextEngine","getDefaultFont",0xe66d7b64,"openfl.text._internal.TextEngine.getDefaultFont","openfl/text/_internal/TextEngine.hx",305,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_417_getFormatHeight,"openfl.text._internal.TextEngine","getFormatHeight",0x3ed257ca,"openfl.text._internal.TextEngine.getFormatHeight","openfl/text/_internal/TextEngine.hx",417,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_457_getFont,"openfl.text._internal.TextEngine","getFont",0xe761bb1b,"openfl.text._internal.TextEngine.getFont","openfl/text/_internal/TextEngine.hx",457,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_515_getFontInstance,"openfl.text._internal.TextEngine","getFontInstance",0x7b1da9d0,"openfl.text._internal.TextEngine.getFontInstance","openfl/text/_internal/TextEngine.hx",515,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_38_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",38,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_40_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",40,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_41_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",41,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_42_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",42,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_43_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",43,0xb85e1839)
HX_LOCAL_STACK_FRAME(_hx_pos_81873a2f4b2980c0_44_boot,"openfl.text._internal.TextEngine","boot",0xd18a1cdc,"openfl.text._internal.TextEngine.boot","openfl/text/_internal/TextEngine.hx",44,0xb85e1839)
namespace openfl{
namespace text{
namespace _internal{

void TextEngine_obj::__construct( ::openfl::text::TextField textField){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_111_new)
HXLINE( 112)		this->_hx___shapeCache =  ::openfl::text::_internal::ShapeCache_obj::__alloc( HX_CTX );
HXLINE( 113)		this->textField = textField;
HXLINE( 115)		this->width = ( (Float)(100) );
HXLINE( 116)		this->height = ( (Float)(100) );
HXLINE( 117)		this->set_text(HX_("",00,00,00,00));
HXLINE( 119)		this->bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE( 120)		this->textBounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,0,0);
HXLINE( 122)		this->type = 0;
HXLINE( 123)		this->autoSize = 2;
HXLINE( 124)		this->embedFonts = false;
HXLINE( 125)		this->selectable = true;
HXLINE( 126)		this->borderColor = 0;
HXLINE( 127)		this->border = false;
HXLINE( 128)		this->backgroundColor = 16777215;
HXLINE( 129)		this->background = false;
HXLINE( 130)		this->gridFitType = 1;
HXLINE( 131)		this->maxChars = 0;
HXLINE( 132)		this->multiline = false;
HXLINE( 133)		this->numLines = 1;
HXLINE( 134)		this->sharpness = ( (Float)(0) );
HXLINE( 135)		this->scrollH = 0;
HXLINE( 136)		this->set_scrollV(1);
HXLINE( 137)		this->wordWrap = false;
HXLINE( 139)		int length = null();
HXDLIN( 139)		bool fixed = null();
HXDLIN( 139)		::Array< Float > array = null();
HXDLIN( 139)		this->lineAscents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 140)		int length1 = null();
HXDLIN( 140)		bool fixed1 = null();
HXDLIN( 140)		::Array< int > array1 = null();
HXDLIN( 140)		this->lineBreaks =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length1,fixed1,array1);
HXLINE( 141)		int length2 = null();
HXDLIN( 141)		bool fixed2 = null();
HXDLIN( 141)		::Array< Float > array2 = null();
HXDLIN( 141)		this->lineDescents =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length2,fixed2,array2,true);
HXLINE( 142)		int length3 = null();
HXDLIN( 142)		bool fixed3 = null();
HXDLIN( 142)		::Array< Float > array3 = null();
HXDLIN( 142)		this->lineLeadings =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length3,fixed3,array3,true);
HXLINE( 143)		int length4 = null();
HXDLIN( 143)		bool fixed4 = null();
HXDLIN( 143)		::Array< Float > array4 = null();
HXDLIN( 143)		this->lineHeights =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length4,fixed4,array4,true);
HXLINE( 144)		int length5 = null();
HXDLIN( 144)		bool fixed5 = null();
HXDLIN( 144)		::Array< Float > array5 = null();
HXDLIN( 144)		this->lineWidths =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length5,fixed5,array5,true);
HXLINE( 145)		int length6 = null();
HXDLIN( 145)		bool fixed6 = null();
HXDLIN( 145)		::Array< ::Dynamic> array6 = null();
HXDLIN( 145)		this->layoutGroups =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length6,fixed6,array6,true);
HXLINE( 146)		int length7 = null();
HXDLIN( 146)		bool fixed7 = null();
HXDLIN( 146)		::Array< ::Dynamic> array7 = null();
HXDLIN( 146)		this->textFormatRanges =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length7,fixed7,array7,true);
            	}

Dynamic TextEngine_obj::__CreateEmpty() { return new TextEngine_obj; }

void *TextEngine_obj::_hx_vtable = 0;

Dynamic TextEngine_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextEngine_obj > _hx_result = new TextEngine_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextEngine_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dd5980a;
}

 ::EReg TextEngine_obj::createRestrictRegexp(::String restrict){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,declined,::Array< bool >,accepting) HXARGC(1)
            		::String _hx_run( ::EReg ereg){
            			HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_175_createRestrictRegexp)
HXLINE( 176)			if (accepting->__get(0)) {
HXLINE( 178)				accepting[0] = !(accepting->__get(0));
HXLINE( 179)				return ereg->matched(1);
            			}
HXLINE( 181)			::Array< ::String > declined1 = declined;
HXDLIN( 181)			int accepted = 0;
HXDLIN( 181)			::String declined2 = declined1->__get(accepted);
HXDLIN( 181)			declined1[accepted] = (declined2 + ereg->matched(1));
HXLINE( 182)			accepting[0] = !(accepting->__get(0));
HXLINE( 183)			return HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_169_createRestrictRegexp)
HXLINE( 170)		 ::EReg declinedRange =  ::EReg_obj::__alloc( HX_CTX ,HX_("\\^([^\\^]+)",d0,bc,3c,14),HX_("gu",2e,5a,00,00));
HXLINE( 171)		::Array< ::String > declined = ::Array_obj< ::String >::fromData( _hx_array_data_7e808804_3,1);
HXLINE( 173)		::Array< bool > accepting = ::Array_obj< bool >::fromData( _hx_array_data_7e808804_4,1);
HXLINE( 174)		::String accepted = declinedRange->map(restrict, ::Dynamic(new _hx_Closure_0(declined,accepting)));
HXLINE( 186)		::Array< ::String > testRegexpParts = ::Array_obj< ::String >::__new(0);
HXLINE( 188)		if ((accepted.length > 0)) {
HXLINE( 190)			testRegexpParts->push(((HX_("[^",a3,4f,00,00) + accepted) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 193)		if ((declined->__get(0).length > 0)) {
HXLINE( 195)			testRegexpParts->push(((HX_("[",5b,00,00,00) + declined->__get(0)) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 198)		return  ::EReg_obj::__alloc( HX_CTX ,((HX_("(",28,00,00,00) + testRegexpParts->join(HX_("|",7c,00,00,00))) + HX_(")",29,00,00,00)),HX_("g",67,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,createRestrictRegexp,return )

void TextEngine_obj::getBounds(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_264_getBounds)
HXLINE( 265)		int padding;
HXDLIN( 265)		if (this->border) {
HXLINE( 265)			padding = 1;
            		}
            		else {
HXLINE( 265)			padding = 0;
            		}
HXLINE( 267)		this->bounds->width = (this->width + padding);
HXLINE( 268)		this->bounds->height = (this->height + padding);
HXLINE( 270)		Float x = this->width;
HXDLIN( 270)		Float y = this->height;
HXLINE( 272)		int lastIndex = (this->layoutGroups->get_length() - 1);
HXLINE( 273)		{
HXLINE( 273)			int _g = 0;
HXDLIN( 273)			int _g1 = this->layoutGroups->get_length();
HXDLIN( 273)			while((_g < _g1)){
HXLINE( 273)				_g = (_g + 1);
HXDLIN( 273)				int i = (_g - 1);
HXLINE( 275)				 ::openfl::text::_internal::TextLayoutGroup group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE( 276)				bool _hx_tmp;
HXDLIN( 276)				bool _hx_tmp1;
HXDLIN( 276)				if ((i == lastIndex)) {
HXLINE( 276)					_hx_tmp1 = (group->startIndex == group->endIndex);
            				}
            				else {
HXLINE( 276)					_hx_tmp1 = false;
            				}
HXDLIN( 276)				if (_hx_tmp1) {
HXLINE( 276)					_hx_tmp = ::hx::IsNotEq( this->type,1 );
            				}
            				else {
HXLINE( 276)					_hx_tmp = false;
            				}
HXDLIN( 276)				if (_hx_tmp) {
HXLINE( 279)					continue;
            				}
HXLINE( 281)				if ((group->offsetX < x)) {
HXLINE( 281)					x = group->offsetX;
            				}
HXLINE( 282)				if ((group->offsetY < y)) {
HXLINE( 282)					y = group->offsetY;
            				}
            			}
            		}
HXLINE( 285)		if ((x >= this->width)) {
HXLINE( 285)			x = ( (Float)(2) );
            		}
HXLINE( 286)		if ((y >= this->height)) {
HXLINE( 286)			y = ( (Float)(2) );
            		}
HXLINE( 292)		this->textBounds->setTo(::Math_obj::max((x - ( (Float)(2) )),( (Float)(0) )),::Math_obj::max((y - ( (Float)(2) )),( (Float)(0) )),::Math_obj::min((this->textWidth + 4),(this->bounds->width + 4)),::Math_obj::min((this->textHeight + 4),(this->bounds->height + 4)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getBounds,(void))

::String TextEngine_obj::getLine(int index){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_544_getLine)
HXLINE( 545)		bool _hx_tmp;
HXDLIN( 545)		if ((index >= 0)) {
HXLINE( 545)			_hx_tmp = (index > (this->lineBreaks->get_length() + 1));
            		}
            		else {
HXLINE( 545)			_hx_tmp = true;
            		}
HXDLIN( 545)		if (_hx_tmp) {
HXLINE( 547)			return null();
            		}
HXLINE( 550)		if ((this->lineBreaks->get_length() == 0)) {
HXLINE( 552)			return this->text;
            		}
            		else {
HXLINE( 556)			::String _hx_tmp = this->text;
HXDLIN( 556)			int _hx_tmp1;
HXDLIN( 556)			if ((index > 0)) {
HXLINE( 556)				_hx_tmp1 = this->lineBreaks->get((index - 1));
            			}
            			else {
HXLINE( 556)				_hx_tmp1 = 0;
            			}
HXDLIN( 556)			return _hx_tmp.substring(_hx_tmp1,this->lineBreaks->get(index));
            		}
HXLINE( 550)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLine,return )

void TextEngine_obj::getLineBreaks(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_561_getLineBreaks)
HXLINE( 562)		this->lineBreaks->set_length(0);
HXLINE( 564)		int index = -1;
HXLINE( 566)		int cr = -1;
HXDLIN( 566)		int lf = -1;
HXLINE( 567)		while((index < this->text.length)){
HXLINE( 569)			lf = this->text.indexOf(HX_("\n",0a,00,00,00),(index + 1));
HXLINE( 570)			cr = this->text.indexOf(HX_("\r",0d,00,00,00),(index + 1));
HXLINE( 572)			if ((cr == -1)) {
HXLINE( 572)				index = lf;
            			}
            			else {
HXLINE( 572)				if ((lf == -1)) {
HXLINE( 572)					index = cr;
            				}
            				else {
HXLINE( 572)					if ((cr < lf)) {
HXLINE( 572)						index = cr;
            					}
            					else {
HXLINE( 572)						index = lf;
            					}
            				}
            			}
HXLINE( 574)			if ((index > -1)) {
HXLINE( 574)				this->lineBreaks->push(index);
            			}
            			else {
HXLINE( 576)				goto _hx_goto_8;
            			}
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineBreaks,(void))

int TextEngine_obj::getLineBreakIndex(::hx::Null< int >  __o_startIndex){
            		int startIndex = __o_startIndex.Default(0);
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_581_getLineBreakIndex)
HXLINE( 582)		{
HXLINE( 582)			 ::Dynamic lineBreak = this->lineBreaks->iterator();
HXDLIN( 582)			while(( (bool)(lineBreak->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 582)				int lineBreak1 = ( (int)(lineBreak->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 584)				if ((lineBreak1 >= startIndex)) {
HXLINE( 584)					return lineBreak1;
            				}
            			}
            		}
HXLINE( 587)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLineBreakIndex,return )

void TextEngine_obj::getLineMeasurements(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_591_getLineMeasurements)
HXLINE( 592)		this->lineAscents->set_length(0);
HXLINE( 593)		this->lineDescents->set_length(0);
HXLINE( 594)		this->lineLeadings->set_length(0);
HXLINE( 595)		this->lineHeights->set_length(0);
HXLINE( 596)		this->lineWidths->set_length(0);
HXLINE( 598)		Float currentLineAscent = ((Float)0.0);
HXLINE( 599)		Float currentLineDescent = ((Float)0.0);
HXLINE( 600)		 ::Dynamic currentLineLeading = null();
HXLINE( 601)		Float currentLineHeight = ((Float)0.0);
HXLINE( 602)		Float currentLineWidth = ((Float)0.0);
HXLINE( 603)		Float currentTextHeight = ((Float)0.0);
HXLINE( 605)		this->textWidth = ( (Float)(0) );
HXLINE( 606)		this->textHeight = ( (Float)(0) );
HXLINE( 607)		this->numLines = 1;
HXLINE( 608)		this->maxScrollH = 0;
HXLINE( 610)		int lastIndex = (this->layoutGroups->get_length() - 1);
HXLINE( 611)		{
HXLINE( 611)			int _g = 0;
HXDLIN( 611)			int _g1 = this->layoutGroups->get_length();
HXDLIN( 611)			while((_g < _g1)){
HXLINE( 611)				_g = (_g + 1);
HXDLIN( 611)				int i = (_g - 1);
HXLINE( 613)				 ::openfl::text::_internal::TextLayoutGroup group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE( 615)				bool _hx_tmp;
HXDLIN( 615)				bool _hx_tmp1;
HXDLIN( 615)				if ((i == lastIndex)) {
HXLINE( 615)					_hx_tmp1 = (group->startIndex == group->endIndex);
            				}
            				else {
HXLINE( 615)					_hx_tmp1 = false;
            				}
HXDLIN( 615)				if (_hx_tmp1) {
HXLINE( 615)					_hx_tmp = ::hx::IsNotEq( this->type,1 );
            				}
            				else {
HXLINE( 615)					_hx_tmp = false;
            				}
HXDLIN( 615)				if (_hx_tmp) {
HXLINE( 618)					continue;
            				}
HXLINE( 621)				while((group->lineIndex > (this->numLines - 1))){
HXLINE( 623)					this->lineAscents->push(currentLineAscent);
HXLINE( 624)					this->lineDescents->push(currentLineDescent);
HXLINE( 625)					{
HXLINE( 625)						Float _hx_tmp;
HXDLIN( 625)						if (::hx::IsNotNull( currentLineLeading )) {
HXLINE( 625)							_hx_tmp = ( (Float)(currentLineLeading) );
            						}
            						else {
HXLINE( 625)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 625)						this->lineLeadings->push(_hx_tmp);
            					}
HXLINE( 626)					this->lineHeights->push(currentLineHeight);
HXLINE( 627)					this->lineWidths->push(currentLineWidth);
HXLINE( 629)					currentLineAscent = ( (Float)(0) );
HXLINE( 630)					currentLineDescent = ( (Float)(0) );
HXLINE( 631)					currentLineLeading = null();
HXLINE( 632)					currentLineHeight = ( (Float)(0) );
HXLINE( 633)					currentLineWidth = ( (Float)(0) );
HXLINE( 635)					this->numLines++;
            				}
HXLINE( 638)				currentLineAscent = ::Math_obj::max(currentLineAscent,group->ascent);
HXLINE( 639)				currentLineDescent = ::Math_obj::max(currentLineDescent,group->descent);
HXLINE( 641)				if (::hx::IsNull( currentLineLeading )) {
HXLINE( 643)					currentLineLeading = group->leading;
            				}
            				else {
HXLINE( 647)					currentLineLeading = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(currentLineLeading) ),( (Float)(group->leading) )));
            				}
HXLINE( 650)				currentLineHeight = ::Math_obj::max(currentLineHeight,group->height);
HXLINE( 651)				currentLineWidth = ((group->offsetX - ( (Float)(2) )) + group->width);
HXLINE( 653)				if ((currentLineWidth > this->textWidth)) {
HXLINE( 655)					this->textWidth = currentLineWidth;
            				}
HXLINE( 658)				currentTextHeight = ( (Float)(::Math_obj::ceil((((group->offsetY - ( (Float)(2) )) + group->ascent) + group->descent))) );
HXLINE( 660)				if ((currentTextHeight > this->textHeight)) {
HXLINE( 662)					this->textHeight = currentTextHeight;
            				}
            			}
            		}
HXLINE( 666)		bool _hx_tmp;
HXDLIN( 666)		bool _hx_tmp1;
HXDLIN( 666)		if ((this->textHeight == 0)) {
HXLINE( 666)			_hx_tmp1 = ::hx::IsNotNull( this->textField );
            		}
            		else {
HXLINE( 666)			_hx_tmp1 = false;
            		}
HXDLIN( 666)		if (_hx_tmp1) {
HXLINE( 666)			_hx_tmp = ::hx::IsEq( this->type,1 );
            		}
            		else {
HXLINE( 666)			_hx_tmp = false;
            		}
HXDLIN( 666)		if (_hx_tmp) {
HXLINE( 668)			 ::openfl::text::TextFormat currentFormat = this->textField->_hx___textFormat;
HXLINE( 669)			Float ascent;
HXDLIN( 669)			Float descent;
HXLINE( 671)			 ::openfl::text::Font font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXLINE( 673)			if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE( 675)				ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXLINE( 676)				descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            			}
            			else {
HXLINE( 678)				bool _hx_tmp;
HXDLIN( 678)				if (::hx::IsNotNull( font )) {
HXLINE( 678)					_hx_tmp = (font->unitsPerEM != 0);
            				}
            				else {
HXLINE( 678)					_hx_tmp = false;
            				}
HXDLIN( 678)				if (_hx_tmp) {
HXLINE( 681)					ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXLINE( 682)					descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            				}
            				else {
HXLINE( 690)					ascent = ( (Float)(currentFormat->size) );
HXLINE( 691)					descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            				}
            			}
HXLINE( 669)			 ::Dynamic leading = currentFormat->leading;
HXDLIN( 669)			int heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXLINE( 698)			currentLineAscent = ascent;
HXLINE( 699)			currentLineDescent = descent;
HXLINE( 700)			currentLineLeading = leading;
HXLINE( 702)			currentTextHeight = ( (Float)(::Math_obj::ceil((ascent + descent))) );
HXLINE( 703)			this->textHeight = currentTextHeight;
            		}
HXLINE( 706)		this->lineAscents->push(currentLineAscent);
HXLINE( 707)		this->lineDescents->push(currentLineDescent);
HXLINE( 708)		{
HXLINE( 708)			Float _hx_tmp2;
HXDLIN( 708)			if (::hx::IsNotNull( currentLineLeading )) {
HXLINE( 708)				_hx_tmp2 = ( (Float)(currentLineLeading) );
            			}
            			else {
HXLINE( 708)				_hx_tmp2 = ( (Float)(0) );
            			}
HXDLIN( 708)			this->lineLeadings->push(_hx_tmp2);
            		}
HXLINE( 709)		this->lineHeights->push(currentLineHeight);
HXLINE( 710)		this->lineWidths->push(currentLineWidth);
HXLINE( 712)		if ((this->numLines == 1)) {
HXLINE( 714)			if (::hx::IsGreater( currentLineLeading,0 )) {
HXLINE( 716)				 ::openfl::text::_internal::TextEngine _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 716)				_hx_tmp->textHeight = (_hx_tmp->textHeight + currentLineLeading);
            			}
            		}
HXLINE( 720)		if (::hx::IsNotEq( this->autoSize,2 )) {
HXLINE( 722)			 ::Dynamic _hx_switch_0 = this->autoSize;
            			if (  (_hx_switch_0==0) ||  (_hx_switch_0==1) ||  (_hx_switch_0==3) ){
HXLINE( 725)				if (!(this->wordWrap)) {
HXLINE( 727)					this->width = (this->textWidth + 4);
            				}
HXLINE( 730)				this->height = (this->textHeight + 4);
HXLINE( 731)				this->bottomScrollV = this->numLines;
HXLINE( 724)				goto _hx_goto_14;
            			}
            			/* default */{
            			}
            			_hx_goto_14:;
            		}
HXLINE( 737)		if ((this->textWidth > (this->width - ( (Float)(4) )))) {
HXLINE( 739)			this->maxScrollH = ::Std_obj::_hx_int(((this->textWidth - this->width) + 4));
            		}
            		else {
HXLINE( 743)			this->maxScrollH = 0;
            		}
HXLINE( 746)		if ((this->scrollH > this->maxScrollH)) {
HXLINE( 746)			this->scrollH = this->maxScrollH;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineMeasurements,(void))

void TextEngine_obj::getLayoutGroups(){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_750_getLayoutGroups)
HXDLIN( 750)		 ::openfl::text::_internal::TextEngine _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 751)		this->layoutGroups->set_length(0);
HXLINE( 753)		bool _hx_tmp;
HXDLIN( 753)		if (::hx::IsNotNull( this->text )) {
HXLINE( 753)			_hx_tmp = (this->text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 753)			_hx_tmp = true;
            		}
HXDLIN( 753)		if (_hx_tmp) {
HXLINE( 753)			return;
            		}
HXLINE( 755)		int rangeIndex = -1;
HXLINE( 756)		 ::openfl::text::_internal::TextFormatRange formatRange = null();
HXLINE( 757)		 ::lime::text::Font font = null();
HXLINE( 759)		 ::openfl::text::TextFormat currentFormat = ::openfl::text::TextField_obj::_hx___defaultTextFormat->clone();
HXLINE( 762)		int leading = 0;
HXLINE( 763)		Float ascent = ((Float)0.0);
HXDLIN( 763)		Float maxAscent = ((Float)0.0);
HXLINE( 764)		Float descent = ((Float)0.0);
HXLINE( 767)		 ::Dynamic align = 3;
HXLINE( 768)		int blockIndent = 0;
HXLINE( 769)		bool bullet = false;
HXLINE( 770)		int indent = 0;
HXLINE( 771)		int leftMargin = 0;
HXLINE( 772)		int rightMargin = 0;
HXLINE( 773)		bool firstLineOfParagraph = true;
HXLINE( 775)		 ::Dynamic tabStops = null();
HXLINE( 777)		 ::openfl::text::_internal::TextLayoutGroup layoutGroup = null();
HXDLIN( 777)		::Array< ::Dynamic> positions = null();
HXLINE( 778)		Float widthValue = ((Float)0.0);
HXDLIN( 778)		int heightValue = 0;
HXDLIN( 778)		int maxHeightValue = 0;
HXLINE( 779)		int previousSpaceIndex = -2;
HXLINE( 780)		int previousBreakIndex = -1;
HXLINE( 781)		int spaceIndex = this->text.indexOf(HX_(" ",20,00,00,00),null());
HXLINE( 782)		int breakCount = 0;
HXLINE( 783)		int breakIndex;
HXDLIN( 783)		if ((breakCount < this->lineBreaks->get_length())) {
HXLINE( 783)			breakIndex = this->lineBreaks->get(breakCount);
            		}
            		else {
HXLINE( 783)			breakIndex = -1;
            		}
HXLINE( 785)		Float offsetX = ((Float)0.0);
HXLINE( 786)		Float offsetY = ((Float)0.0);
HXLINE( 787)		int textIndex = 0;
HXLINE( 788)		int lineIndex = 0;
HXLINE(1336)		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1336)			rangeIndex = (rangeIndex + 1);
HXDLIN(1336)			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1336)			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1336)			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            		}
HXLINE(1337)		{
HXLINE(1337)			firstLineOfParagraph = true;
HXDLIN(1337)			if (::hx::IsNotNull( currentFormat->align )) {
HXLINE(1337)				align = currentFormat->align;
            			}
            			else {
HXLINE(1337)				align = 3;
            			}
HXDLIN(1337)			if (::hx::IsNotNull( currentFormat->blockIndent )) {
HXLINE(1337)				blockIndent = ( (int)(currentFormat->blockIndent) );
            			}
            			else {
HXLINE(1337)				blockIndent = 0;
            			}
HXDLIN(1337)			if (::hx::IsNotNull( currentFormat->indent )) {
HXLINE(1337)				indent = ( (int)(currentFormat->indent) );
            			}
            			else {
HXLINE(1337)				indent = 0;
            			}
HXDLIN(1337)			if (::hx::IsNotNull( currentFormat->leftMargin )) {
HXLINE(1337)				leftMargin = ( (int)(currentFormat->leftMargin) );
            			}
            			else {
HXLINE(1337)				leftMargin = 0;
            			}
HXDLIN(1337)			if (::hx::IsNotNull( currentFormat->rightMargin )) {
HXLINE(1337)				rightMargin = ( (int)(currentFormat->rightMargin) );
            			}
            			else {
HXLINE(1337)				rightMargin = 0;
            			}
HXDLIN(1337)			bool _hx_tmp1 = ::hx::IsNotNull( currentFormat->bullet );
HXDLIN(1337)			bool _hx_tmp2 = ::hx::IsNotNull( currentFormat->tabStops );
            		}
HXLINE(1338)		{
HXLINE(1338)			if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1338)				ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1338)				descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            			}
            			else {
HXLINE(1338)				bool _hx_tmp;
HXDLIN(1338)				if (::hx::IsNotNull( font )) {
HXLINE(1338)					_hx_tmp = (font->unitsPerEM != 0);
            				}
            				else {
HXLINE(1338)					_hx_tmp = false;
            				}
HXDLIN(1338)				if (_hx_tmp) {
HXLINE(1338)					ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1338)					descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            				}
            				else {
HXLINE(1338)					ascent = ( (Float)(currentFormat->size) );
HXDLIN(1338)					descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            				}
            			}
HXDLIN(1338)			leading = ( (int)(currentFormat->leading) );
HXDLIN(1338)			heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1338)			if ((heightValue > maxHeightValue)) {
HXLINE(1338)				maxHeightValue = heightValue;
            			}
HXDLIN(1338)			if ((ascent > maxAscent)) {
HXLINE(1338)				maxAscent = ascent;
            			}
            		}
HXLINE(1340)		bool wrap;
HXLINE(1341)		int maxLoops = (this->text.length + 1);
HXLINE(1345)		while((textIndex < maxLoops)){
HXLINE(1347)			bool _hx_tmp;
HXDLIN(1347)			if ((breakIndex > -1)) {
HXLINE(1347)				if ((spaceIndex != -1)) {
HXLINE(1347)					_hx_tmp = (breakIndex < spaceIndex);
            				}
            				else {
HXLINE(1347)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE(1347)				_hx_tmp = false;
            			}
HXDLIN(1347)			if (_hx_tmp) {
HXLINE(1351)				if ((textIndex <= breakIndex)) {
HXLINE(1353)					if ((textIndex >= breakIndex)) {
HXLINE(1353)						positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1353)						widthValue = ( (Float)(0) );
            					}
            					else {
HXLINE(1353)						if ((breakIndex <= formatRange->end)) {
HXLINE(1353)							::String text = _gthis->text;
HXDLIN(1353)							Float letterSpacing = ((Float)0.0);
HXDLIN(1353)							if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1353)								letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            							}
HXDLIN(1353)							if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1353)								_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            							}
HXDLIN(1353)							_gthis->_hx___textLayout->set_text(null());
HXDLIN(1353)							_gthis->_hx___textLayout->set_font(font);
HXDLIN(1353)							if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1353)								_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            							}
HXDLIN(1353)							_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1353)							bool positions1;
HXDLIN(1353)							if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1353)								positions1 = (_gthis->sharpness < 400);
            							}
            							else {
HXLINE(1353)								positions1 = true;
            							}
HXDLIN(1353)							_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1353)							 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1353)							_gthis1->set_text(text.substring(textIndex,breakIndex));
HXDLIN(1353)							if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1353)								positions = _gthis->_hx___textLayout->get_positions();
            							}
            							else {
HXLINE(1353)								positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            							}
HXDLIN(1353)							Float width = ((Float)0.0);
HXDLIN(1353)							{
HXLINE(1353)								int _g = 0;
HXDLIN(1353)								while((_g < positions->length)){
HXLINE(1353)									 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1353)									_g = (_g + 1);
HXDLIN(1353)									width = (width + position->advance->x);
            								}
            							}
HXDLIN(1353)							widthValue = width;
            						}
            						else {
HXLINE(1353)							int tempIndex = textIndex;
HXDLIN(1353)							int tempRangeEnd = formatRange->end;
HXDLIN(1353)							int countRanges = 0;
HXDLIN(1353)							positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1353)							widthValue = ( (Float)(0) );
HXDLIN(1353)							while(true){
HXLINE(1353)								if ((tempIndex != tempRangeEnd)) {
HXLINE(1353)									::String text = _gthis->text;
HXDLIN(1353)									Float letterSpacing = ((Float)0.0);
HXDLIN(1353)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1353)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1353)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1353)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1353)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1353)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1353)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1353)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1353)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1353)									bool _hx_tmp;
HXDLIN(1353)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1353)										_hx_tmp = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1353)										_hx_tmp = true;
            									}
HXDLIN(1353)									_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1353)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1353)									_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1353)									::Array< ::Dynamic> tempPositions;
HXDLIN(1353)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1353)										tempPositions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1353)										tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1353)									positions = positions->concat(tempPositions);
            								}
HXDLIN(1353)								if ((tempRangeEnd != breakIndex)) {
HXLINE(1353)									bool _hx_tmp;
HXDLIN(1353)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1353)										rangeIndex = (rangeIndex + 1);
HXDLIN(1353)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1353)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1353)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1353)										_hx_tmp = true;
            									}
            									else {
HXLINE(1353)										_hx_tmp = false;
            									}
HXDLIN(1353)									if (!(_hx_tmp)) {
HXLINE(1353)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1353)										goto _hx_goto_18;
            									}
HXDLIN(1353)									tempIndex = tempRangeEnd;
HXDLIN(1353)									if ((breakIndex < formatRange->end)) {
HXLINE(1353)										tempRangeEnd = breakIndex;
            									}
            									else {
HXLINE(1353)										tempRangeEnd = formatRange->end;
            									}
HXDLIN(1353)									countRanges = (countRanges + 1);
            								}
            								else {
HXLINE(1353)									Float width = ((Float)0.0);
HXDLIN(1353)									{
HXLINE(1353)										int _g = 0;
HXDLIN(1353)										while((_g < positions->length)){
HXLINE(1353)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1353)											_g = (_g + 1);
HXDLIN(1353)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1353)									widthValue = width;
HXDLIN(1353)									goto _hx_goto_18;
            								}
            							}
            							_hx_goto_18:;
HXDLIN(1353)							rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1353)							if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1353)								rangeIndex = (rangeIndex + 1);
HXDLIN(1353)								formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1353)								currentFormat->_hx___merge(formatRange->format);
HXDLIN(1353)								font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            							}
            						}
            					}
HXLINE(1354)					{
HXLINE(1354)						bool _hx_tmp;
HXDLIN(1354)						if ((_gthis->width >= 4)) {
HXLINE(1354)							_hx_tmp = _gthis->wordWrap;
            						}
            						else {
HXLINE(1354)							_hx_tmp = false;
            						}
HXDLIN(1354)						if (_hx_tmp) {
HXLINE(1354)							::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1354)							int bufferCount;
HXDLIN(1354)							int placeIndex;
HXDLIN(1354)							Float positionWidth;
HXDLIN(1354)							 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1354)							Float width = ((Float)0.0);
HXDLIN(1354)							{
HXLINE(1354)								int _g = 0;
HXDLIN(1354)								while((_g < remainingPositions->length)){
HXLINE(1354)									 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)									_g = (_g + 1);
HXDLIN(1354)									width = (width + position->advance->x);
            								}
            							}
HXDLIN(1354)							Float tempWidth = width;
HXDLIN(1354)							int i = (remainingPositions->length - 1);
HXDLIN(1354)							while((i >= 0)){
HXLINE(1354)								 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1354)								bool _hx_tmp;
HXDLIN(1354)								if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1354)									_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            								}
            								else {
HXLINE(1354)									_hx_tmp = false;
            								}
HXDLIN(1354)								if (_hx_tmp) {
HXLINE(1354)									goto _hx_goto_21;
            								}
HXDLIN(1354)								 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)								tempWidth = (tempWidth - position->advance->x);
HXDLIN(1354)								i = (i - 1);
            							}
            							_hx_goto_21:;
HXDLIN(1354)							while(true){
HXLINE(1354)								bool _hx_tmp;
HXDLIN(1354)								if ((remainingPositions->length > 0)) {
HXLINE(1354)									int _hx_tmp1;
HXDLIN(1354)									if (firstLineOfParagraph) {
HXLINE(1354)										_hx_tmp1 = indent;
            									}
            									else {
HXLINE(1354)										_hx_tmp1 = 0;
            									}
HXDLIN(1354)									_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            								}
            								else {
HXLINE(1354)									_hx_tmp = false;
            								}
HXDLIN(1354)								if (!(_hx_tmp)) {
HXLINE(1354)									goto _hx_goto_22;
            								}
HXDLIN(1354)								bufferCount = 0;
HXDLIN(1354)								i = bufferCount;
HXDLIN(1354)								positionWidth = ((Float)0.0);
HXDLIN(1354)								while(true){
HXLINE(1354)									int _hx_tmp;
HXDLIN(1354)									if (firstLineOfParagraph) {
HXLINE(1354)										_hx_tmp = indent;
            									}
            									else {
HXLINE(1354)										_hx_tmp = 0;
            									}
HXDLIN(1354)									if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1354)										goto _hx_goto_23;
            									}
HXDLIN(1354)									currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)									if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1354)										i = (i + 1);
HXDLIN(1354)										bufferCount = (bufferCount + 1);
            									}
            									else {
HXLINE(1354)										positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1354)										i = (i + 1);
            									}
            								}
            								_hx_goto_23:;
HXDLIN(1354)								if ((i == bufferCount)) {
HXLINE(1354)									i = (bufferCount + 1);
            								}
            								else {
HXLINE(1354)									while(true){
HXLINE(1354)										bool _hx_tmp;
HXDLIN(1354)										if ((i > 1)) {
HXLINE(1354)											int _hx_tmp1;
HXDLIN(1354)											if (firstLineOfParagraph) {
HXLINE(1354)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1354)												_hx_tmp1 = 0;
            											}
HXDLIN(1354)											_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            										}
            										else {
HXLINE(1354)											_hx_tmp = false;
            										}
HXDLIN(1354)										if (!(_hx_tmp)) {
HXLINE(1354)											goto _hx_goto_24;
            										}
HXDLIN(1354)										i = (i - 1);
HXDLIN(1354)										if (((i - bufferCount) > 0)) {
HXLINE(1354)											{
HXLINE(1354)												int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1354)												if ((textIndex >= endIndex)) {
HXLINE(1354)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1354)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1354)													if ((endIndex <= formatRange->end)) {
HXLINE(1354)														::String text = _gthis->text;
HXDLIN(1354)														Float letterSpacing = ((Float)0.0);
HXDLIN(1354)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1354)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1354)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1354)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1354)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1354)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1354)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1354)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1354)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1354)														bool positions1;
HXDLIN(1354)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1354)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1354)															positions1 = true;
            														}
HXDLIN(1354)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1354)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1354)														_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1354)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1354)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1354)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1354)														Float width = ((Float)0.0);
HXDLIN(1354)														{
HXLINE(1354)															int _g = 0;
HXDLIN(1354)															while((_g < positions->length)){
HXLINE(1354)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)																_g = (_g + 1);
HXDLIN(1354)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1354)														widthValue = width;
            													}
            													else {
HXLINE(1354)														int tempIndex = textIndex;
HXDLIN(1354)														int tempRangeEnd = formatRange->end;
HXDLIN(1354)														int countRanges = 0;
HXDLIN(1354)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1354)														widthValue = ( (Float)(0) );
HXDLIN(1354)														while(true){
HXLINE(1354)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1354)																::String text = _gthis->text;
HXDLIN(1354)																Float letterSpacing = ((Float)0.0);
HXDLIN(1354)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1354)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1354)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1354)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1354)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1354)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1354)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1354)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1354)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1354)																bool _hx_tmp;
HXDLIN(1354)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1354)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1354)																	_hx_tmp = true;
            																}
HXDLIN(1354)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1354)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1354)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1354)																::Array< ::Dynamic> tempPositions;
HXDLIN(1354)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1354)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1354)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1354)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1354)															if ((tempRangeEnd != endIndex)) {
HXLINE(1354)																bool _hx_tmp;
HXDLIN(1354)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1354)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1354)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1354)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1354)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1354)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1354)																	_hx_tmp = false;
            																}
HXDLIN(1354)																if (!(_hx_tmp)) {
HXLINE(1354)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1354)																	goto _hx_goto_26;
            																}
HXDLIN(1354)																tempIndex = tempRangeEnd;
HXDLIN(1354)																if ((endIndex < formatRange->end)) {
HXLINE(1354)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1354)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1354)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1354)																Float width = ((Float)0.0);
HXDLIN(1354)																{
HXLINE(1354)																	int _g = 0;
HXDLIN(1354)																	while((_g < positions->length)){
HXLINE(1354)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)																		_g = (_g + 1);
HXDLIN(1354)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1354)																widthValue = width;
HXDLIN(1354)																goto _hx_goto_26;
            															}
            														}
            														_hx_goto_26:;
HXDLIN(1354)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1354)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1354)															rangeIndex = (rangeIndex + 1);
HXDLIN(1354)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1354)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1354)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
            											}
HXDLIN(1354)											positionWidth = widthValue;
            										}
            										else {
HXLINE(1354)											i = 1;
HXDLIN(1354)											bufferCount = 0;
HXDLIN(1354)											{
HXLINE(1354)												int endIndex = (textIndex + 1);
HXDLIN(1354)												if ((textIndex >= endIndex)) {
HXLINE(1354)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1354)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1354)													if ((endIndex <= formatRange->end)) {
HXLINE(1354)														::String text = _gthis->text;
HXDLIN(1354)														Float letterSpacing = ((Float)0.0);
HXDLIN(1354)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1354)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1354)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1354)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1354)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1354)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1354)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1354)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1354)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1354)														bool positions1;
HXDLIN(1354)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1354)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1354)															positions1 = true;
            														}
HXDLIN(1354)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1354)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1354)														_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1354)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1354)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1354)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1354)														Float width = ((Float)0.0);
HXDLIN(1354)														{
HXLINE(1354)															int _g = 0;
HXDLIN(1354)															while((_g < positions->length)){
HXLINE(1354)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)																_g = (_g + 1);
HXDLIN(1354)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1354)														widthValue = width;
            													}
            													else {
HXLINE(1354)														int tempIndex = textIndex;
HXDLIN(1354)														int tempRangeEnd = formatRange->end;
HXDLIN(1354)														int countRanges = 0;
HXDLIN(1354)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1354)														widthValue = ( (Float)(0) );
HXDLIN(1354)														while(true){
HXLINE(1354)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1354)																::String text = _gthis->text;
HXDLIN(1354)																Float letterSpacing = ((Float)0.0);
HXDLIN(1354)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1354)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1354)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1354)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1354)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1354)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1354)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1354)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1354)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1354)																bool _hx_tmp;
HXDLIN(1354)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1354)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1354)																	_hx_tmp = true;
            																}
HXDLIN(1354)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1354)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1354)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1354)																::Array< ::Dynamic> tempPositions;
HXDLIN(1354)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1354)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1354)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1354)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1354)															if ((tempRangeEnd != endIndex)) {
HXLINE(1354)																bool _hx_tmp;
HXDLIN(1354)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1354)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1354)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1354)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1354)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1354)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1354)																	_hx_tmp = false;
            																}
HXDLIN(1354)																if (!(_hx_tmp)) {
HXLINE(1354)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1354)																	goto _hx_goto_29;
            																}
HXDLIN(1354)																tempIndex = tempRangeEnd;
HXDLIN(1354)																if ((endIndex < formatRange->end)) {
HXLINE(1354)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1354)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1354)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1354)																Float width = ((Float)0.0);
HXDLIN(1354)																{
HXLINE(1354)																	int _g = 0;
HXDLIN(1354)																	while((_g < positions->length)){
HXLINE(1354)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)																		_g = (_g + 1);
HXDLIN(1354)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1354)																widthValue = width;
HXDLIN(1354)																goto _hx_goto_29;
            															}
            														}
            														_hx_goto_29:;
HXDLIN(1354)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1354)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1354)															rangeIndex = (rangeIndex + 1);
HXDLIN(1354)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1354)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1354)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
            											}
HXDLIN(1354)											positionWidth = ( (Float)(0) );
            										}
            									}
            									_hx_goto_24:;
            								}
HXDLIN(1354)								placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1354)								{
HXLINE(1354)									if ((placeIndex <= formatRange->end)) {
HXLINE(1354)										::String text = _gthis->text;
HXDLIN(1354)										Float letterSpacing = ((Float)0.0);
HXDLIN(1354)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1354)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1354)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1354)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1354)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1354)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1354)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1354)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1354)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1354)										bool positions1;
HXDLIN(1354)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1354)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1354)											positions1 = true;
            										}
HXDLIN(1354)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1354)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1354)										_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1354)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1354)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1354)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1354)										Float width = ((Float)0.0);
HXDLIN(1354)										{
HXLINE(1354)											int _g = 0;
HXDLIN(1354)											while((_g < positions->length)){
HXLINE(1354)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)												_g = (_g + 1);
HXDLIN(1354)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1354)										widthValue = width;
HXDLIN(1354)										bool _hx_tmp;
HXDLIN(1354)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1354)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1354)											_hx_tmp = true;
            										}
HXDLIN(1354)										if (_hx_tmp) {
HXLINE(1354)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1354)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1354)											layoutGroup->format = formatRange->format;
HXDLIN(1354)											layoutGroup->startIndex = textIndex;
HXDLIN(1354)											layoutGroup->endIndex = placeIndex;
            										}
HXDLIN(1354)										layoutGroup->positions = positions;
HXDLIN(1354)										int _hx_tmp1;
HXDLIN(1354)										if (firstLineOfParagraph) {
HXLINE(1354)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1354)											_hx_tmp1 = 0;
            										}
HXDLIN(1354)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1354)										layoutGroup->ascent = ascent;
HXDLIN(1354)										layoutGroup->descent = descent;
HXDLIN(1354)										layoutGroup->leading = leading;
HXDLIN(1354)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1354)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1354)										layoutGroup->width = widthValue;
HXDLIN(1354)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1354)										offsetX = (offsetX + widthValue);
HXDLIN(1354)										if ((placeIndex == formatRange->end)) {
HXLINE(1354)											layoutGroup = null();
HXDLIN(1354)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1354)												rangeIndex = (rangeIndex + 1);
HXDLIN(1354)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1354)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1354)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
HXDLIN(1354)											{
HXLINE(1354)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1354)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1354)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1354)													bool _hx_tmp;
HXDLIN(1354)													if (::hx::IsNotNull( font )) {
HXLINE(1354)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1354)														_hx_tmp = false;
            													}
HXDLIN(1354)													if (_hx_tmp) {
HXLINE(1354)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1354)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1354)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1354)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1354)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1354)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1354)												if ((heightValue > maxHeightValue)) {
HXLINE(1354)													maxHeightValue = heightValue;
            												}
HXDLIN(1354)												if ((ascent > maxAscent)) {
HXLINE(1354)													maxAscent = ascent;
            												}
            											}
            										}
            									}
            									else {
HXLINE(1354)										while(true){
HXLINE(1354)											int tempRangeEnd;
HXDLIN(1354)											if ((placeIndex < formatRange->end)) {
HXLINE(1354)												tempRangeEnd = placeIndex;
            											}
            											else {
HXLINE(1354)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1354)											if ((textIndex != tempRangeEnd)) {
HXLINE(1354)												::String text = _gthis->text;
HXDLIN(1354)												Float letterSpacing = ((Float)0.0);
HXDLIN(1354)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1354)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1354)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1354)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1354)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1354)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1354)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1354)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1354)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1354)												bool positions1;
HXDLIN(1354)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1354)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1354)													positions1 = true;
            												}
HXDLIN(1354)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1354)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1354)												_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1354)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1354)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1354)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1354)												Float width = ((Float)0.0);
HXDLIN(1354)												{
HXLINE(1354)													int _g = 0;
HXDLIN(1354)													while((_g < positions->length)){
HXLINE(1354)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)														_g = (_g + 1);
HXDLIN(1354)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1354)												widthValue = width;
HXDLIN(1354)												bool _hx_tmp;
HXDLIN(1354)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1354)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1354)													_hx_tmp = true;
            												}
HXDLIN(1354)												if (_hx_tmp) {
HXLINE(1354)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1354)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1354)													layoutGroup->format = formatRange->format;
HXDLIN(1354)													layoutGroup->startIndex = textIndex;
HXDLIN(1354)													layoutGroup->endIndex = tempRangeEnd;
            												}
HXDLIN(1354)												layoutGroup->positions = positions;
HXDLIN(1354)												int _hx_tmp1;
HXDLIN(1354)												if (firstLineOfParagraph) {
HXLINE(1354)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1354)													_hx_tmp1 = 0;
            												}
HXDLIN(1354)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1354)												layoutGroup->ascent = ascent;
HXDLIN(1354)												layoutGroup->descent = descent;
HXDLIN(1354)												layoutGroup->leading = leading;
HXDLIN(1354)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1354)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1354)												layoutGroup->width = widthValue;
HXDLIN(1354)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1354)												offsetX = (offsetX + widthValue);
HXDLIN(1354)												textIndex = tempRangeEnd;
            											}
HXDLIN(1354)											if ((tempRangeEnd == formatRange->end)) {
HXLINE(1354)												layoutGroup = null();
            											}
HXDLIN(1354)											if ((tempRangeEnd == placeIndex)) {
HXLINE(1354)												goto _hx_goto_32;
            											}
HXDLIN(1354)											bool _hx_tmp;
HXDLIN(1354)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1354)												rangeIndex = (rangeIndex + 1);
HXDLIN(1354)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1354)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1354)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1354)												_hx_tmp = true;
            											}
            											else {
HXLINE(1354)												_hx_tmp = false;
            											}
HXDLIN(1354)											if (!(_hx_tmp)) {
HXLINE(1354)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1184,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1354)												goto _hx_goto_32;
            											}
HXDLIN(1354)											{
HXLINE(1354)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1354)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1354)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1354)													bool _hx_tmp;
HXDLIN(1354)													if (::hx::IsNotNull( font )) {
HXLINE(1354)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1354)														_hx_tmp = false;
            													}
HXDLIN(1354)													if (_hx_tmp) {
HXLINE(1354)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1354)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1354)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1354)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1354)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1354)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1354)												if ((heightValue > maxHeightValue)) {
HXLINE(1354)													maxHeightValue = heightValue;
            												}
HXDLIN(1354)												if ((ascent > maxAscent)) {
HXLINE(1354)													maxAscent = ascent;
            												}
            											}
            										}
            										_hx_goto_32:;
            									}
HXDLIN(1354)									textIndex = placeIndex;
            								}
HXDLIN(1354)								{
HXLINE(1354)									{
HXLINE(1354)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1354)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1354)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1354)											bool _hx_tmp;
HXDLIN(1354)											if (::hx::IsNotNull( font )) {
HXLINE(1354)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1354)												_hx_tmp = false;
            											}
HXDLIN(1354)											if (_hx_tmp) {
HXLINE(1354)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1354)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1354)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1354)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1354)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1354)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1354)										if ((heightValue > maxHeightValue)) {
HXLINE(1354)											maxHeightValue = heightValue;
            										}
HXDLIN(1354)										if ((ascent > maxAscent)) {
HXLINE(1354)											maxAscent = ascent;
            										}
            									}
HXDLIN(1354)									int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1354)									while(true){
HXLINE(1354)										i1 = (i1 - 1);
HXDLIN(1354)										if (!((i1 > -1))) {
HXLINE(1354)											goto _hx_goto_34;
            										}
HXDLIN(1354)										 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1354)										if ((lg->lineIndex < lineIndex)) {
HXLINE(1354)											goto _hx_goto_34;
            										}
HXDLIN(1354)										if ((lg->lineIndex > lineIndex)) {
HXLINE(1354)											continue;
            										}
HXDLIN(1354)										lg->ascent = maxAscent;
HXDLIN(1354)										lg->height = ( (Float)(maxHeightValue) );
            									}
            									_hx_goto_34:;
HXDLIN(1354)									offsetY = (offsetY + maxHeightValue);
HXDLIN(1354)									maxAscent = ((Float)0.0);
HXDLIN(1354)									maxHeightValue = 0;
HXDLIN(1354)									lineIndex = (lineIndex + 1);
HXDLIN(1354)									offsetX = ( (Float)(0) );
HXDLIN(1354)									firstLineOfParagraph = false;
            								}
HXDLIN(1354)								if ((placeIndex >= breakIndex)) {
HXLINE(1354)									positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1354)									widthValue = ( (Float)(0) );
            								}
            								else {
HXLINE(1354)									if ((breakIndex <= formatRange->end)) {
HXLINE(1354)										::String text = _gthis->text;
HXDLIN(1354)										Float letterSpacing = ((Float)0.0);
HXDLIN(1354)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1354)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1354)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1354)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1354)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1354)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1354)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1354)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1354)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1354)										bool positions1;
HXDLIN(1354)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1354)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1354)											positions1 = true;
            										}
HXDLIN(1354)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1354)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1354)										_gthis1->set_text(text.substring(placeIndex,breakIndex));
HXDLIN(1354)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1354)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1354)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1354)										Float width = ((Float)0.0);
HXDLIN(1354)										{
HXLINE(1354)											int _g = 0;
HXDLIN(1354)											while((_g < positions->length)){
HXLINE(1354)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)												_g = (_g + 1);
HXDLIN(1354)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1354)										widthValue = width;
            									}
            									else {
HXLINE(1354)										int tempIndex = placeIndex;
HXDLIN(1354)										int tempRangeEnd = formatRange->end;
HXDLIN(1354)										int countRanges = 0;
HXDLIN(1354)										positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1354)										widthValue = ( (Float)(0) );
HXDLIN(1354)										while(true){
HXLINE(1354)											if ((tempIndex != tempRangeEnd)) {
HXLINE(1354)												::String text = _gthis->text;
HXDLIN(1354)												Float letterSpacing = ((Float)0.0);
HXDLIN(1354)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1354)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1354)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1354)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1354)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1354)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1354)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1354)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1354)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1354)												bool _hx_tmp;
HXDLIN(1354)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1354)													_hx_tmp = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1354)													_hx_tmp = true;
            												}
HXDLIN(1354)												_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1354)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1354)												_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1354)												::Array< ::Dynamic> tempPositions;
HXDLIN(1354)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1354)													tempPositions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1354)													tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1354)												positions = positions->concat(tempPositions);
            											}
HXDLIN(1354)											if ((tempRangeEnd != breakIndex)) {
HXLINE(1354)												bool _hx_tmp;
HXDLIN(1354)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1354)													rangeIndex = (rangeIndex + 1);
HXDLIN(1354)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1354)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1354)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1354)													_hx_tmp = true;
            												}
            												else {
HXLINE(1354)													_hx_tmp = false;
            												}
HXDLIN(1354)												if (!(_hx_tmp)) {
HXLINE(1354)													::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1354)													goto _hx_goto_36;
            												}
HXDLIN(1354)												tempIndex = tempRangeEnd;
HXDLIN(1354)												if ((breakIndex < formatRange->end)) {
HXLINE(1354)													tempRangeEnd = breakIndex;
            												}
            												else {
HXLINE(1354)													tempRangeEnd = formatRange->end;
            												}
HXDLIN(1354)												countRanges = (countRanges + 1);
            											}
            											else {
HXLINE(1354)												Float width = ((Float)0.0);
HXDLIN(1354)												{
HXLINE(1354)													int _g = 0;
HXDLIN(1354)													while((_g < positions->length)){
HXLINE(1354)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)														_g = (_g + 1);
HXDLIN(1354)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1354)												widthValue = width;
HXDLIN(1354)												goto _hx_goto_36;
            											}
            										}
            										_hx_goto_36:;
HXDLIN(1354)										rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1354)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1354)											rangeIndex = (rangeIndex + 1);
HXDLIN(1354)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1354)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1354)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
            									}
            								}
HXDLIN(1354)								remainingPositions = positions;
HXDLIN(1354)								tempWidth = widthValue;
            							}
            							_hx_goto_22:;
            						}
HXDLIN(1354)						{
HXLINE(1354)							if ((breakIndex <= formatRange->end)) {
HXLINE(1354)								::String text = _gthis->text;
HXDLIN(1354)								Float letterSpacing = ((Float)0.0);
HXDLIN(1354)								if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1354)									letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            								}
HXDLIN(1354)								if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1354)									_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            								}
HXDLIN(1354)								_gthis->_hx___textLayout->set_text(null());
HXDLIN(1354)								_gthis->_hx___textLayout->set_font(font);
HXDLIN(1354)								if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1354)									_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            								}
HXDLIN(1354)								_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1354)								bool positions1;
HXDLIN(1354)								if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1354)									positions1 = (_gthis->sharpness < 400);
            								}
            								else {
HXLINE(1354)									positions1 = true;
            								}
HXDLIN(1354)								_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1354)								 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1354)								_gthis1->set_text(text.substring(textIndex,breakIndex));
HXDLIN(1354)								if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1354)									positions = _gthis->_hx___textLayout->get_positions();
            								}
            								else {
HXLINE(1354)									positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            								}
HXDLIN(1354)								Float width = ((Float)0.0);
HXDLIN(1354)								{
HXLINE(1354)									int _g = 0;
HXDLIN(1354)									while((_g < positions->length)){
HXLINE(1354)										 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)										_g = (_g + 1);
HXDLIN(1354)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1354)								widthValue = width;
HXDLIN(1354)								bool _hx_tmp;
HXDLIN(1354)								if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1354)									_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            								}
            								else {
HXLINE(1354)									_hx_tmp = true;
            								}
HXDLIN(1354)								if (_hx_tmp) {
HXLINE(1354)									layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,breakIndex);
HXDLIN(1354)									_gthis->layoutGroups->push(layoutGroup);
            								}
            								else {
HXLINE(1354)									layoutGroup->format = formatRange->format;
HXDLIN(1354)									layoutGroup->startIndex = textIndex;
HXDLIN(1354)									layoutGroup->endIndex = breakIndex;
            								}
HXDLIN(1354)								layoutGroup->positions = positions;
HXDLIN(1354)								int _hx_tmp1;
HXDLIN(1354)								if (firstLineOfParagraph) {
HXLINE(1354)									_hx_tmp1 = indent;
            								}
            								else {
HXLINE(1354)									_hx_tmp1 = 0;
            								}
HXDLIN(1354)								layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1354)								layoutGroup->ascent = ascent;
HXDLIN(1354)								layoutGroup->descent = descent;
HXDLIN(1354)								layoutGroup->leading = leading;
HXDLIN(1354)								layoutGroup->lineIndex = lineIndex;
HXDLIN(1354)								layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1354)								layoutGroup->width = widthValue;
HXDLIN(1354)								layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1354)								offsetX = (offsetX + widthValue);
HXDLIN(1354)								if ((breakIndex == formatRange->end)) {
HXLINE(1354)									layoutGroup = null();
HXDLIN(1354)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1354)										rangeIndex = (rangeIndex + 1);
HXDLIN(1354)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1354)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1354)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            									}
HXDLIN(1354)									{
HXLINE(1354)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1354)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1354)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1354)											bool _hx_tmp;
HXDLIN(1354)											if (::hx::IsNotNull( font )) {
HXLINE(1354)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1354)												_hx_tmp = false;
            											}
HXDLIN(1354)											if (_hx_tmp) {
HXLINE(1354)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1354)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1354)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1354)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1354)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1354)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1354)										if ((heightValue > maxHeightValue)) {
HXLINE(1354)											maxHeightValue = heightValue;
            										}
HXDLIN(1354)										if ((ascent > maxAscent)) {
HXLINE(1354)											maxAscent = ascent;
            										}
            									}
            								}
            							}
            							else {
HXLINE(1354)								while(true){
HXLINE(1354)									int tempRangeEnd;
HXDLIN(1354)									if ((breakIndex < formatRange->end)) {
HXLINE(1354)										tempRangeEnd = breakIndex;
            									}
            									else {
HXLINE(1354)										tempRangeEnd = formatRange->end;
            									}
HXDLIN(1354)									if ((textIndex != tempRangeEnd)) {
HXLINE(1354)										::String text = _gthis->text;
HXDLIN(1354)										Float letterSpacing = ((Float)0.0);
HXDLIN(1354)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1354)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1354)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1354)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1354)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1354)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1354)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1354)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1354)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1354)										bool positions1;
HXDLIN(1354)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1354)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1354)											positions1 = true;
            										}
HXDLIN(1354)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1354)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1354)										_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1354)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1354)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1354)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1354)										Float width = ((Float)0.0);
HXDLIN(1354)										{
HXLINE(1354)											int _g = 0;
HXDLIN(1354)											while((_g < positions->length)){
HXLINE(1354)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1354)												_g = (_g + 1);
HXDLIN(1354)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1354)										widthValue = width;
HXDLIN(1354)										bool _hx_tmp;
HXDLIN(1354)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1354)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1354)											_hx_tmp = true;
            										}
HXDLIN(1354)										if (_hx_tmp) {
HXLINE(1354)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1354)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1354)											layoutGroup->format = formatRange->format;
HXDLIN(1354)											layoutGroup->startIndex = textIndex;
HXDLIN(1354)											layoutGroup->endIndex = tempRangeEnd;
            										}
HXDLIN(1354)										layoutGroup->positions = positions;
HXDLIN(1354)										int _hx_tmp1;
HXDLIN(1354)										if (firstLineOfParagraph) {
HXLINE(1354)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1354)											_hx_tmp1 = 0;
            										}
HXDLIN(1354)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1354)										layoutGroup->ascent = ascent;
HXDLIN(1354)										layoutGroup->descent = descent;
HXDLIN(1354)										layoutGroup->leading = leading;
HXDLIN(1354)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1354)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1354)										layoutGroup->width = widthValue;
HXDLIN(1354)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1354)										offsetX = (offsetX + widthValue);
HXDLIN(1354)										textIndex = tempRangeEnd;
            									}
HXDLIN(1354)									if ((tempRangeEnd == formatRange->end)) {
HXLINE(1354)										layoutGroup = null();
            									}
HXDLIN(1354)									if ((tempRangeEnd == breakIndex)) {
HXLINE(1354)										goto _hx_goto_39;
            									}
HXDLIN(1354)									bool _hx_tmp;
HXDLIN(1354)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1354)										rangeIndex = (rangeIndex + 1);
HXDLIN(1354)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1354)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1354)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1354)										_hx_tmp = true;
            									}
            									else {
HXLINE(1354)										_hx_tmp = false;
            									}
HXDLIN(1354)									if (!(_hx_tmp)) {
HXLINE(1354)										::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1184,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1354)										goto _hx_goto_39;
            									}
HXDLIN(1354)									{
HXLINE(1354)										if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1354)											ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1354)											descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            										}
            										else {
HXLINE(1354)											bool _hx_tmp;
HXDLIN(1354)											if (::hx::IsNotNull( font )) {
HXLINE(1354)												_hx_tmp = (font->unitsPerEM != 0);
            											}
            											else {
HXLINE(1354)												_hx_tmp = false;
            											}
HXDLIN(1354)											if (_hx_tmp) {
HXLINE(1354)												ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1354)												descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            											}
            											else {
HXLINE(1354)												ascent = ( (Float)(currentFormat->size) );
HXDLIN(1354)												descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            											}
            										}
HXDLIN(1354)										leading = ( (int)(currentFormat->leading) );
HXDLIN(1354)										heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1354)										if ((heightValue > maxHeightValue)) {
HXLINE(1354)											maxHeightValue = heightValue;
            										}
HXDLIN(1354)										if ((ascent > maxAscent)) {
HXLINE(1354)											maxAscent = ascent;
            										}
            									}
            								}
            								_hx_goto_39:;
            							}
HXDLIN(1354)							textIndex = breakIndex;
            						}
            					}
HXLINE(1356)					layoutGroup = null();
            				}
            				else {
HXLINE(1358)					bool _hx_tmp;
HXDLIN(1358)					if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1358)						_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            					}
            					else {
HXLINE(1358)						_hx_tmp = false;
            					}
HXDLIN(1358)					if (_hx_tmp) {
HXLINE(1361)						if ((layoutGroup->endIndex == spaceIndex)) {
HXLINE(1363)							 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1363)							int index = (layoutGroup->positions->length - 1);
HXDLIN(1363)							Float _hx_tmp;
HXDLIN(1363)							bool _hx_tmp1;
HXDLIN(1363)							if ((index >= 0)) {
HXLINE(1363)								_hx_tmp1 = (index < layoutGroup->positions->length);
            							}
            							else {
HXLINE(1363)								_hx_tmp1 = false;
            							}
HXDLIN(1363)							if (_hx_tmp1) {
HXLINE(1363)								_hx_tmp = layoutGroup->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            							}
            							else {
HXLINE(1363)								_hx_tmp = ( (Float)(0) );
            							}
HXDLIN(1363)							layoutGroup1->width = (layoutGroup1->width - _hx_tmp);
            						}
HXLINE(1366)						layoutGroup = null();
            					}
            				}
HXLINE(1369)				{
HXLINE(1369)					{
HXLINE(1369)						if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1369)							ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1369)							descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            						}
            						else {
HXLINE(1369)							bool _hx_tmp;
HXDLIN(1369)							if (::hx::IsNotNull( font )) {
HXLINE(1369)								_hx_tmp = (font->unitsPerEM != 0);
            							}
            							else {
HXLINE(1369)								_hx_tmp = false;
            							}
HXDLIN(1369)							if (_hx_tmp) {
HXLINE(1369)								ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1369)								descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            							}
            							else {
HXLINE(1369)								ascent = ( (Float)(currentFormat->size) );
HXDLIN(1369)								descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            							}
            						}
HXDLIN(1369)						leading = ( (int)(currentFormat->leading) );
HXDLIN(1369)						heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1369)						if ((heightValue > maxHeightValue)) {
HXLINE(1369)							maxHeightValue = heightValue;
            						}
HXDLIN(1369)						if ((ascent > maxAscent)) {
HXLINE(1369)							maxAscent = ascent;
            						}
            					}
HXDLIN(1369)					int i = _gthis->layoutGroups->get_length();
HXDLIN(1369)					while(true){
HXLINE(1369)						i = (i - 1);
HXDLIN(1369)						if (!((i > -1))) {
HXLINE(1369)							goto _hx_goto_41;
            						}
HXDLIN(1369)						 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1369)						if ((lg->lineIndex < lineIndex)) {
HXLINE(1369)							goto _hx_goto_41;
            						}
HXDLIN(1369)						if ((lg->lineIndex > lineIndex)) {
HXLINE(1369)							continue;
            						}
HXDLIN(1369)						lg->ascent = maxAscent;
HXDLIN(1369)						lg->height = ( (Float)(maxHeightValue) );
            					}
            					_hx_goto_41:;
HXDLIN(1369)					offsetY = (offsetY + maxHeightValue);
HXDLIN(1369)					maxAscent = ((Float)0.0);
HXDLIN(1369)					maxHeightValue = 0;
HXDLIN(1369)					lineIndex = (lineIndex + 1);
HXDLIN(1369)					offsetX = ( (Float)(0) );
HXDLIN(1369)					firstLineOfParagraph = false;
            				}
HXLINE(1372)				if ((formatRange->end == breakIndex)) {
HXLINE(1374)					if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1374)						rangeIndex = (rangeIndex + 1);
HXDLIN(1374)						formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1374)						currentFormat->_hx___merge(formatRange->format);
HXDLIN(1374)						font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            					}
HXLINE(1375)					{
HXLINE(1375)						if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1375)							ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1375)							descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            						}
            						else {
HXLINE(1375)							bool _hx_tmp;
HXDLIN(1375)							if (::hx::IsNotNull( font )) {
HXLINE(1375)								_hx_tmp = (font->unitsPerEM != 0);
            							}
            							else {
HXLINE(1375)								_hx_tmp = false;
            							}
HXDLIN(1375)							if (_hx_tmp) {
HXLINE(1375)								ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1375)								descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            							}
            							else {
HXLINE(1375)								ascent = ( (Float)(currentFormat->size) );
HXDLIN(1375)								descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            							}
            						}
HXDLIN(1375)						leading = ( (int)(currentFormat->leading) );
HXDLIN(1375)						heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1375)						if ((heightValue > maxHeightValue)) {
HXLINE(1375)							maxHeightValue = heightValue;
            						}
HXDLIN(1375)						if ((ascent > maxAscent)) {
HXLINE(1375)							maxAscent = ascent;
            						}
            					}
            				}
HXLINE(1378)				textIndex = (breakIndex + 1);
HXLINE(1379)				previousBreakIndex = breakIndex;
HXLINE(1380)				breakCount = (breakCount + 1);
HXLINE(1381)				if ((breakCount < this->lineBreaks->get_length())) {
HXLINE(1381)					breakIndex = this->lineBreaks->get(breakCount);
            				}
            				else {
HXLINE(1381)					breakIndex = -1;
            				}
HXLINE(1383)				{
HXLINE(1383)					firstLineOfParagraph = true;
HXDLIN(1383)					if (::hx::IsNotNull( currentFormat->align )) {
HXLINE(1383)						align = currentFormat->align;
            					}
            					else {
HXLINE(1383)						align = 3;
            					}
HXDLIN(1383)					if (::hx::IsNotNull( currentFormat->blockIndent )) {
HXLINE(1383)						blockIndent = ( (int)(currentFormat->blockIndent) );
            					}
            					else {
HXLINE(1383)						blockIndent = 0;
            					}
HXDLIN(1383)					if (::hx::IsNotNull( currentFormat->indent )) {
HXLINE(1383)						indent = ( (int)(currentFormat->indent) );
            					}
            					else {
HXLINE(1383)						indent = 0;
            					}
HXDLIN(1383)					if (::hx::IsNotNull( currentFormat->leftMargin )) {
HXLINE(1383)						leftMargin = ( (int)(currentFormat->leftMargin) );
            					}
            					else {
HXLINE(1383)						leftMargin = 0;
            					}
HXDLIN(1383)					if (::hx::IsNotNull( currentFormat->rightMargin )) {
HXLINE(1383)						rightMargin = ( (int)(currentFormat->rightMargin) );
            					}
            					else {
HXLINE(1383)						rightMargin = 0;
            					}
HXDLIN(1383)					bool _hx_tmp = ::hx::IsNotNull( currentFormat->bullet );
HXDLIN(1383)					bool _hx_tmp1 = ::hx::IsNotNull( currentFormat->tabStops );
            				}
            			}
            			else {
HXLINE(1385)				if ((spaceIndex > -1)) {
HXLINE(1389)					bool _hx_tmp;
HXDLIN(1389)					if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1389)						_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            					}
            					else {
HXLINE(1389)						_hx_tmp = false;
            					}
HXDLIN(1389)					if (_hx_tmp) {
HXLINE(1391)						layoutGroup = null();
            					}
HXLINE(1394)					wrap = false;
HXLINE(1396)					while((textIndex < this->text.length)){
HXLINE(1400)						int endIndex = -1;
HXLINE(1402)						if ((spaceIndex == -1)) {
HXLINE(1404)							endIndex = breakIndex;
            						}
            						else {
HXLINE(1408)							endIndex = (spaceIndex + 1);
HXLINE(1410)							bool _hx_tmp;
HXDLIN(1410)							if ((breakIndex > -1)) {
HXLINE(1410)								_hx_tmp = (breakIndex < endIndex);
            							}
            							else {
HXLINE(1410)								_hx_tmp = false;
            							}
HXDLIN(1410)							if (_hx_tmp) {
HXLINE(1412)								endIndex = breakIndex;
            							}
            						}
HXLINE(1416)						if ((endIndex == -1)) {
HXLINE(1418)							endIndex = this->text.length;
            						}
HXLINE(1421)						if ((textIndex >= endIndex)) {
HXLINE(1421)							positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1421)							widthValue = ( (Float)(0) );
            						}
            						else {
HXLINE(1421)							if ((endIndex <= formatRange->end)) {
HXLINE(1421)								::String text = _gthis->text;
HXDLIN(1421)								Float letterSpacing = ((Float)0.0);
HXDLIN(1421)								if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1421)									letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            								}
HXDLIN(1421)								if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1421)									_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            								}
HXDLIN(1421)								_gthis->_hx___textLayout->set_text(null());
HXDLIN(1421)								_gthis->_hx___textLayout->set_font(font);
HXDLIN(1421)								if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1421)									_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            								}
HXDLIN(1421)								_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1421)								bool positions1;
HXDLIN(1421)								if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1421)									positions1 = (_gthis->sharpness < 400);
            								}
            								else {
HXLINE(1421)									positions1 = true;
            								}
HXDLIN(1421)								_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1421)								 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1421)								_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1421)								if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1421)									positions = _gthis->_hx___textLayout->get_positions();
            								}
            								else {
HXLINE(1421)									positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            								}
HXDLIN(1421)								Float width = ((Float)0.0);
HXDLIN(1421)								{
HXLINE(1421)									int _g = 0;
HXDLIN(1421)									while((_g < positions->length)){
HXLINE(1421)										 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1421)										_g = (_g + 1);
HXDLIN(1421)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1421)								widthValue = width;
            							}
            							else {
HXLINE(1421)								int tempIndex = textIndex;
HXDLIN(1421)								int tempRangeEnd = formatRange->end;
HXDLIN(1421)								int countRanges = 0;
HXDLIN(1421)								positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1421)								widthValue = ( (Float)(0) );
HXDLIN(1421)								while(true){
HXLINE(1421)									if ((tempIndex != tempRangeEnd)) {
HXLINE(1421)										::String text = _gthis->text;
HXDLIN(1421)										Float letterSpacing = ((Float)0.0);
HXDLIN(1421)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1421)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1421)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1421)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1421)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1421)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1421)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1421)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1421)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1421)										bool _hx_tmp;
HXDLIN(1421)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1421)											_hx_tmp = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1421)											_hx_tmp = true;
            										}
HXDLIN(1421)										_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1421)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1421)										_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1421)										::Array< ::Dynamic> tempPositions;
HXDLIN(1421)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1421)											tempPositions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1421)											tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1421)										positions = positions->concat(tempPositions);
            									}
HXDLIN(1421)									if ((tempRangeEnd != endIndex)) {
HXLINE(1421)										bool _hx_tmp;
HXDLIN(1421)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1421)											rangeIndex = (rangeIndex + 1);
HXDLIN(1421)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1421)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1421)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1421)											_hx_tmp = true;
            										}
            										else {
HXLINE(1421)											_hx_tmp = false;
            										}
HXDLIN(1421)										if (!(_hx_tmp)) {
HXLINE(1421)											::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1421)											goto _hx_goto_44;
            										}
HXDLIN(1421)										tempIndex = tempRangeEnd;
HXDLIN(1421)										if ((endIndex < formatRange->end)) {
HXLINE(1421)											tempRangeEnd = endIndex;
            										}
            										else {
HXLINE(1421)											tempRangeEnd = formatRange->end;
            										}
HXDLIN(1421)										countRanges = (countRanges + 1);
            									}
            									else {
HXLINE(1421)										Float width = ((Float)0.0);
HXDLIN(1421)										{
HXLINE(1421)											int _g = 0;
HXDLIN(1421)											while((_g < positions->length)){
HXLINE(1421)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1421)												_g = (_g + 1);
HXDLIN(1421)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1421)										widthValue = width;
HXDLIN(1421)										goto _hx_goto_44;
            									}
            								}
            								_hx_goto_44:;
HXDLIN(1421)								rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1421)								if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1421)									rangeIndex = (rangeIndex + 1);
HXDLIN(1421)									formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1421)									currentFormat->_hx___merge(formatRange->format);
HXDLIN(1421)									font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            								}
            							}
            						}
HXLINE(1423)						if (::hx::IsEq( align,2 )) {
HXLINE(1425)							bool _hx_tmp;
HXDLIN(1425)							if ((positions->length > 0)) {
HXLINE(1425)								_hx_tmp = (textIndex == previousSpaceIndex);
            							}
            							else {
HXLINE(1425)								_hx_tmp = false;
            							}
HXDLIN(1425)							if (_hx_tmp) {
HXLINE(1428)								textIndex = (textIndex + 1);
HXLINE(1430)								Float spaceWidth = positions->shift().StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
HXLINE(1431)								widthValue = (widthValue - spaceWidth);
HXLINE(1432)								offsetX = (offsetX + spaceWidth);
            							}
HXLINE(1435)							bool _hx_tmp1;
HXDLIN(1435)							if ((positions->length > 0)) {
HXLINE(1435)								_hx_tmp1 = (endIndex == (spaceIndex + 1));
            							}
            							else {
HXLINE(1435)								_hx_tmp1 = false;
            							}
HXDLIN(1435)							if (_hx_tmp1) {
HXLINE(1438)								endIndex = (endIndex - 1);
HXLINE(1440)								Float spaceWidth = positions->pop().StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
HXLINE(1441)								widthValue = (widthValue - spaceWidth);
            							}
            						}
HXLINE(1445)						if (this->wordWrap) {
HXLINE(1447)							int _hx_tmp;
HXDLIN(1447)							if (firstLineOfParagraph) {
HXLINE(1447)								_hx_tmp = indent;
            							}
            							else {
HXLINE(1447)								_hx_tmp = 0;
            							}
HXDLIN(1447)							if (((offsetX + widthValue) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) )))) {
HXLINE(1449)								wrap = true;
HXLINE(1451)								bool _hx_tmp;
HXDLIN(1451)								if ((positions->length > 0)) {
HXLINE(1451)									_hx_tmp = (endIndex == (spaceIndex + 1));
            								}
            								else {
HXLINE(1451)									_hx_tmp = false;
            								}
HXDLIN(1451)								if (_hx_tmp) {
HXLINE(1455)									 ::openfl::text::_internal::GlyphPosition lastPosition = positions->__get((positions->length - 1)).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXLINE(1456)									Float spaceWidth = lastPosition->advance->x;
HXLINE(1458)									int _hx_tmp;
HXDLIN(1458)									if (firstLineOfParagraph) {
HXLINE(1458)										_hx_tmp = indent;
            									}
            									else {
HXLINE(1458)										_hx_tmp = 0;
            									}
HXDLIN(1458)									if ((((offsetX + widthValue) - spaceWidth) <= (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) )))) {
HXLINE(1460)										wrap = false;
            									}
            								}
            							}
            						}
HXLINE(1466)						if (wrap) {
HXLINE(1468)							bool _hx_tmp;
HXDLIN(1468)							if (::hx::IsNotEq( align,2 )) {
HXLINE(1468)								if (::hx::IsNull( layoutGroup )) {
HXLINE(1468)									_hx_tmp = (this->layoutGroups->get_length() > 0);
            								}
            								else {
HXLINE(1468)									_hx_tmp = true;
            								}
            							}
            							else {
HXLINE(1468)								_hx_tmp = false;
            							}
HXDLIN(1468)							if (_hx_tmp) {
HXLINE(1470)								 ::openfl::text::_internal::TextLayoutGroup previous = layoutGroup;
HXLINE(1471)								if (::hx::IsNull( previous )) {
HXLINE(1473)									::Dynamic this1 = this->layoutGroups;
HXDLIN(1473)									previous = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
            								}
HXLINE(1477)								 ::openfl::text::_internal::TextLayoutGroup previous1 = previous;
HXDLIN(1477)								int index = (previous->positions->length - 1);
HXDLIN(1477)								Float _hx_tmp;
HXDLIN(1477)								bool _hx_tmp1;
HXDLIN(1477)								if ((index >= 0)) {
HXLINE(1477)									_hx_tmp1 = (index < previous->positions->length);
            								}
            								else {
HXLINE(1477)									_hx_tmp1 = false;
            								}
HXDLIN(1477)								if (_hx_tmp1) {
HXLINE(1477)									_hx_tmp = previous->positions->__get(index).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            								}
            								else {
HXLINE(1477)									_hx_tmp = ( (Float)(0) );
            								}
HXDLIN(1477)								previous1->width = (previous1->width - _hx_tmp);
HXLINE(1478)								previous->endIndex--;
            							}
HXLINE(1481)							int i = (this->layoutGroups->get_length() - 1);
HXLINE(1482)							int offsetCount = 0;
HXLINE(1484)							while((i >= 0)){
HXLINE(1486)								layoutGroup = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1488)								bool _hx_tmp;
HXDLIN(1488)								if ((i > 0)) {
HXLINE(1488)									_hx_tmp = (layoutGroup->startIndex > previousSpaceIndex);
            								}
            								else {
HXLINE(1488)									_hx_tmp = false;
            								}
HXDLIN(1488)								if (_hx_tmp) {
HXLINE(1490)									offsetCount = (offsetCount + 1);
            								}
            								else {
HXLINE(1494)									goto _hx_goto_46;
            								}
HXLINE(1497)								i = (i - 1);
            							}
            							_hx_goto_46:;
HXLINE(1500)							if ((textIndex == (previousSpaceIndex + 1))) {
HXLINE(1502)								{
HXLINE(1502)									if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1502)										ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1502)										descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            									}
            									else {
HXLINE(1502)										bool _hx_tmp;
HXDLIN(1502)										if (::hx::IsNotNull( font )) {
HXLINE(1502)											_hx_tmp = (font->unitsPerEM != 0);
            										}
            										else {
HXLINE(1502)											_hx_tmp = false;
            										}
HXDLIN(1502)										if (_hx_tmp) {
HXLINE(1502)											ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1502)											descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            										}
            										else {
HXLINE(1502)											ascent = ( (Float)(currentFormat->size) );
HXDLIN(1502)											descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            										}
            									}
HXDLIN(1502)									leading = ( (int)(currentFormat->leading) );
HXDLIN(1502)									heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1502)									if ((heightValue > maxHeightValue)) {
HXLINE(1502)										maxHeightValue = heightValue;
            									}
HXDLIN(1502)									if ((ascent > maxAscent)) {
HXLINE(1502)										maxAscent = ascent;
            									}
            								}
HXDLIN(1502)								int i = _gthis->layoutGroups->get_length();
HXDLIN(1502)								while(true){
HXLINE(1502)									i = (i - 1);
HXDLIN(1502)									if (!((i > -1))) {
HXLINE(1502)										goto _hx_goto_47;
            									}
HXDLIN(1502)									 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1502)									if ((lg->lineIndex < lineIndex)) {
HXLINE(1502)										goto _hx_goto_47;
            									}
HXDLIN(1502)									if ((lg->lineIndex > lineIndex)) {
HXLINE(1502)										continue;
            									}
HXDLIN(1502)									lg->ascent = maxAscent;
HXDLIN(1502)									lg->height = ( (Float)(maxHeightValue) );
            								}
            								_hx_goto_47:;
HXDLIN(1502)								offsetY = (offsetY + maxHeightValue);
HXDLIN(1502)								maxAscent = ((Float)0.0);
HXDLIN(1502)								maxHeightValue = 0;
HXDLIN(1502)								lineIndex = (lineIndex + 1);
HXDLIN(1502)								offsetX = ( (Float)(0) );
HXDLIN(1502)								firstLineOfParagraph = false;
            							}
HXLINE(1505)							offsetX = ( (Float)(0) );
HXLINE(1507)							if ((offsetCount > 0)) {
HXLINE(1509)								::Dynamic this1 = this->layoutGroups;
HXDLIN(1509)								Float bumpX = ( ( ::openfl::_Vector::ObjectVector)(this1) )->get((this->layoutGroups->get_length() - offsetCount)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->offsetX;
HXLINE(1511)								{
HXLINE(1511)									int _g = (this->layoutGroups->get_length() - offsetCount);
HXDLIN(1511)									int _g1 = this->layoutGroups->get_length();
HXDLIN(1511)									while((_g < _g1)){
HXLINE(1511)										_g = (_g + 1);
HXDLIN(1511)										int i = (_g - 1);
HXLINE(1513)										layoutGroup = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1514)										 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1514)										layoutGroup1->offsetX = (layoutGroup1->offsetX - bumpX);
HXLINE(1515)										layoutGroup->offsetY = (offsetY + 2);
HXLINE(1516)										layoutGroup->lineIndex = lineIndex;
HXLINE(1517)										offsetX = (offsetX + layoutGroup->width);
            									}
            								}
            							}
HXLINE(1521)							{
HXLINE(1521)								bool _hx_tmp1;
HXDLIN(1521)								if ((_gthis->width >= 4)) {
HXLINE(1521)									_hx_tmp1 = _gthis->wordWrap;
            								}
            								else {
HXLINE(1521)									_hx_tmp1 = false;
            								}
HXDLIN(1521)								if (_hx_tmp1) {
HXLINE(1521)									::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1521)									int bufferCount;
HXDLIN(1521)									int placeIndex;
HXDLIN(1521)									Float positionWidth;
HXDLIN(1521)									 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1521)									Float width = ((Float)0.0);
HXDLIN(1521)									{
HXLINE(1521)										int _g = 0;
HXDLIN(1521)										while((_g < remainingPositions->length)){
HXLINE(1521)											 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)											_g = (_g + 1);
HXDLIN(1521)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1521)									Float tempWidth = width;
HXDLIN(1521)									int i = (remainingPositions->length - 1);
HXDLIN(1521)									while((i >= 0)){
HXLINE(1521)										 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1521)										bool _hx_tmp;
HXDLIN(1521)										if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1521)											_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            										}
            										else {
HXLINE(1521)											_hx_tmp = false;
            										}
HXDLIN(1521)										if (_hx_tmp) {
HXLINE(1521)											goto _hx_goto_50;
            										}
HXDLIN(1521)										 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)										tempWidth = (tempWidth - position->advance->x);
HXDLIN(1521)										i = (i - 1);
            									}
            									_hx_goto_50:;
HXDLIN(1521)									while(true){
HXLINE(1521)										bool _hx_tmp;
HXDLIN(1521)										if ((remainingPositions->length > 0)) {
HXLINE(1521)											int _hx_tmp1;
HXDLIN(1521)											if (firstLineOfParagraph) {
HXLINE(1521)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1521)												_hx_tmp1 = 0;
            											}
HXDLIN(1521)											_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            										}
            										else {
HXLINE(1521)											_hx_tmp = false;
            										}
HXDLIN(1521)										if (!(_hx_tmp)) {
HXLINE(1521)											goto _hx_goto_51;
            										}
HXDLIN(1521)										bufferCount = 0;
HXDLIN(1521)										i = bufferCount;
HXDLIN(1521)										positionWidth = ((Float)0.0);
HXDLIN(1521)										while(true){
HXLINE(1521)											int _hx_tmp;
HXDLIN(1521)											if (firstLineOfParagraph) {
HXLINE(1521)												_hx_tmp = indent;
            											}
            											else {
HXLINE(1521)												_hx_tmp = 0;
            											}
HXDLIN(1521)											if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1521)												goto _hx_goto_52;
            											}
HXDLIN(1521)											currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)											if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1521)												i = (i + 1);
HXDLIN(1521)												bufferCount = (bufferCount + 1);
            											}
            											else {
HXLINE(1521)												positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1521)												i = (i + 1);
            											}
            										}
            										_hx_goto_52:;
HXDLIN(1521)										if ((i == bufferCount)) {
HXLINE(1521)											i = (bufferCount + 1);
            										}
            										else {
HXLINE(1521)											while(true){
HXLINE(1521)												bool _hx_tmp;
HXDLIN(1521)												if ((i > 1)) {
HXLINE(1521)													int _hx_tmp1;
HXDLIN(1521)													if (firstLineOfParagraph) {
HXLINE(1521)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1521)														_hx_tmp1 = 0;
            													}
HXDLIN(1521)													_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            												}
            												else {
HXLINE(1521)													_hx_tmp = false;
            												}
HXDLIN(1521)												if (!(_hx_tmp)) {
HXLINE(1521)													goto _hx_goto_53;
            												}
HXDLIN(1521)												i = (i - 1);
HXDLIN(1521)												if (((i - bufferCount) > 0)) {
HXLINE(1521)													{
HXLINE(1521)														int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1521)														if ((textIndex >= endIndex)) {
HXLINE(1521)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1521)															widthValue = ( (Float)(0) );
            														}
            														else {
HXLINE(1521)															if ((endIndex <= formatRange->end)) {
HXLINE(1521)																::String text = _gthis->text;
HXDLIN(1521)																Float letterSpacing = ((Float)0.0);
HXDLIN(1521)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1521)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1521)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1521)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1521)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1521)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1521)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1521)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1521)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1521)																bool positions1;
HXDLIN(1521)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1521)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1521)																	positions1 = true;
            																}
HXDLIN(1521)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1521)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1521)																_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1521)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1521)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1521)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1521)																Float width = ((Float)0.0);
HXDLIN(1521)																{
HXLINE(1521)																	int _g = 0;
HXDLIN(1521)																	while((_g < positions->length)){
HXLINE(1521)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)																		_g = (_g + 1);
HXDLIN(1521)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1521)																widthValue = width;
            															}
            															else {
HXLINE(1521)																int tempIndex = textIndex;
HXDLIN(1521)																int tempRangeEnd = formatRange->end;
HXDLIN(1521)																int countRanges = 0;
HXDLIN(1521)																positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1521)																widthValue = ( (Float)(0) );
HXDLIN(1521)																while(true){
HXLINE(1521)																	if ((tempIndex != tempRangeEnd)) {
HXLINE(1521)																		::String text = _gthis->text;
HXDLIN(1521)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1521)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1521)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1521)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1521)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1521)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1521)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1521)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1521)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1521)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1521)																		bool _hx_tmp;
HXDLIN(1521)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1521)																			_hx_tmp = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1521)																			_hx_tmp = true;
            																		}
HXDLIN(1521)																		_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1521)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1521)																		_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1521)																		::Array< ::Dynamic> tempPositions;
HXDLIN(1521)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1521)																			tempPositions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1521)																			tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1521)																		positions = positions->concat(tempPositions);
            																	}
HXDLIN(1521)																	if ((tempRangeEnd != endIndex)) {
HXLINE(1521)																		bool _hx_tmp;
HXDLIN(1521)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1521)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1521)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1521)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1521)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1521)																			_hx_tmp = true;
            																		}
            																		else {
HXLINE(1521)																			_hx_tmp = false;
            																		}
HXDLIN(1521)																		if (!(_hx_tmp)) {
HXLINE(1521)																			::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1521)																			goto _hx_goto_55;
            																		}
HXDLIN(1521)																		tempIndex = tempRangeEnd;
HXDLIN(1521)																		if ((endIndex < formatRange->end)) {
HXLINE(1521)																			tempRangeEnd = endIndex;
            																		}
            																		else {
HXLINE(1521)																			tempRangeEnd = formatRange->end;
            																		}
HXDLIN(1521)																		countRanges = (countRanges + 1);
            																	}
            																	else {
HXLINE(1521)																		Float width = ((Float)0.0);
HXDLIN(1521)																		{
HXLINE(1521)																			int _g = 0;
HXDLIN(1521)																			while((_g < positions->length)){
HXLINE(1521)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)																				_g = (_g + 1);
HXDLIN(1521)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1521)																		widthValue = width;
HXDLIN(1521)																		goto _hx_goto_55;
            																	}
            																}
            																_hx_goto_55:;
HXDLIN(1521)																rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1521)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1521)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1521)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1521)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1521)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																}
            															}
            														}
            													}
HXDLIN(1521)													positionWidth = widthValue;
            												}
            												else {
HXLINE(1521)													i = 1;
HXDLIN(1521)													bufferCount = 0;
HXDLIN(1521)													{
HXLINE(1521)														int endIndex = (textIndex + 1);
HXDLIN(1521)														if ((textIndex >= endIndex)) {
HXLINE(1521)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1521)															widthValue = ( (Float)(0) );
            														}
            														else {
HXLINE(1521)															if ((endIndex <= formatRange->end)) {
HXLINE(1521)																::String text = _gthis->text;
HXDLIN(1521)																Float letterSpacing = ((Float)0.0);
HXDLIN(1521)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1521)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1521)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1521)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1521)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1521)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1521)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1521)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1521)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1521)																bool positions1;
HXDLIN(1521)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1521)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1521)																	positions1 = true;
            																}
HXDLIN(1521)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1521)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1521)																_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1521)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1521)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1521)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1521)																Float width = ((Float)0.0);
HXDLIN(1521)																{
HXLINE(1521)																	int _g = 0;
HXDLIN(1521)																	while((_g < positions->length)){
HXLINE(1521)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)																		_g = (_g + 1);
HXDLIN(1521)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1521)																widthValue = width;
            															}
            															else {
HXLINE(1521)																int tempIndex = textIndex;
HXDLIN(1521)																int tempRangeEnd = formatRange->end;
HXDLIN(1521)																int countRanges = 0;
HXDLIN(1521)																positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1521)																widthValue = ( (Float)(0) );
HXDLIN(1521)																while(true){
HXLINE(1521)																	if ((tempIndex != tempRangeEnd)) {
HXLINE(1521)																		::String text = _gthis->text;
HXDLIN(1521)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1521)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1521)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1521)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1521)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1521)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1521)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1521)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1521)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1521)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1521)																		bool _hx_tmp;
HXDLIN(1521)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1521)																			_hx_tmp = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1521)																			_hx_tmp = true;
            																		}
HXDLIN(1521)																		_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1521)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1521)																		_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1521)																		::Array< ::Dynamic> tempPositions;
HXDLIN(1521)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1521)																			tempPositions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1521)																			tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1521)																		positions = positions->concat(tempPositions);
            																	}
HXDLIN(1521)																	if ((tempRangeEnd != endIndex)) {
HXLINE(1521)																		bool _hx_tmp;
HXDLIN(1521)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1521)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1521)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1521)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1521)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1521)																			_hx_tmp = true;
            																		}
            																		else {
HXLINE(1521)																			_hx_tmp = false;
            																		}
HXDLIN(1521)																		if (!(_hx_tmp)) {
HXLINE(1521)																			::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1521)																			goto _hx_goto_58;
            																		}
HXDLIN(1521)																		tempIndex = tempRangeEnd;
HXDLIN(1521)																		if ((endIndex < formatRange->end)) {
HXLINE(1521)																			tempRangeEnd = endIndex;
            																		}
            																		else {
HXLINE(1521)																			tempRangeEnd = formatRange->end;
            																		}
HXDLIN(1521)																		countRanges = (countRanges + 1);
            																	}
            																	else {
HXLINE(1521)																		Float width = ((Float)0.0);
HXDLIN(1521)																		{
HXLINE(1521)																			int _g = 0;
HXDLIN(1521)																			while((_g < positions->length)){
HXLINE(1521)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)																				_g = (_g + 1);
HXDLIN(1521)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1521)																		widthValue = width;
HXDLIN(1521)																		goto _hx_goto_58;
            																	}
            																}
            																_hx_goto_58:;
HXDLIN(1521)																rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1521)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1521)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1521)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1521)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1521)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																}
            															}
            														}
            													}
HXDLIN(1521)													positionWidth = ( (Float)(0) );
            												}
            											}
            											_hx_goto_53:;
            										}
HXDLIN(1521)										placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1521)										{
HXLINE(1521)											if ((placeIndex <= formatRange->end)) {
HXLINE(1521)												::String text = _gthis->text;
HXDLIN(1521)												Float letterSpacing = ((Float)0.0);
HXDLIN(1521)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1521)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1521)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1521)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1521)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1521)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1521)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1521)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1521)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1521)												bool positions1;
HXDLIN(1521)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1521)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1521)													positions1 = true;
            												}
HXDLIN(1521)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1521)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1521)												_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1521)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1521)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1521)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1521)												Float width = ((Float)0.0);
HXDLIN(1521)												{
HXLINE(1521)													int _g = 0;
HXDLIN(1521)													while((_g < positions->length)){
HXLINE(1521)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)														_g = (_g + 1);
HXDLIN(1521)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1521)												widthValue = width;
HXDLIN(1521)												bool _hx_tmp;
HXDLIN(1521)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1521)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1521)													_hx_tmp = true;
            												}
HXDLIN(1521)												if (_hx_tmp) {
HXLINE(1521)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1521)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1521)													layoutGroup->format = formatRange->format;
HXDLIN(1521)													layoutGroup->startIndex = textIndex;
HXDLIN(1521)													layoutGroup->endIndex = placeIndex;
            												}
HXDLIN(1521)												layoutGroup->positions = positions;
HXDLIN(1521)												int _hx_tmp1;
HXDLIN(1521)												if (firstLineOfParagraph) {
HXLINE(1521)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1521)													_hx_tmp1 = 0;
            												}
HXDLIN(1521)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1521)												layoutGroup->ascent = ascent;
HXDLIN(1521)												layoutGroup->descent = descent;
HXDLIN(1521)												layoutGroup->leading = leading;
HXDLIN(1521)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1521)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1521)												layoutGroup->width = widthValue;
HXDLIN(1521)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1521)												offsetX = (offsetX + widthValue);
HXDLIN(1521)												if ((placeIndex == formatRange->end)) {
HXLINE(1521)													layoutGroup = null();
HXDLIN(1521)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1521)														rangeIndex = (rangeIndex + 1);
HXDLIN(1521)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1521)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1521)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1521)													{
HXLINE(1521)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1521)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1521)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1521)															bool _hx_tmp;
HXDLIN(1521)															if (::hx::IsNotNull( font )) {
HXLINE(1521)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1521)																_hx_tmp = false;
            															}
HXDLIN(1521)															if (_hx_tmp) {
HXLINE(1521)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1521)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1521)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1521)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1521)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1521)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1521)														if ((heightValue > maxHeightValue)) {
HXLINE(1521)															maxHeightValue = heightValue;
            														}
HXDLIN(1521)														if ((ascent > maxAscent)) {
HXLINE(1521)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1521)												while(true){
HXLINE(1521)													int tempRangeEnd;
HXDLIN(1521)													if ((placeIndex < formatRange->end)) {
HXLINE(1521)														tempRangeEnd = placeIndex;
            													}
            													else {
HXLINE(1521)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1521)													if ((textIndex != tempRangeEnd)) {
HXLINE(1521)														::String text = _gthis->text;
HXDLIN(1521)														Float letterSpacing = ((Float)0.0);
HXDLIN(1521)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1521)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1521)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1521)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1521)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1521)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1521)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1521)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1521)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1521)														bool positions1;
HXDLIN(1521)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1521)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1521)															positions1 = true;
            														}
HXDLIN(1521)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1521)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1521)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1521)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1521)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1521)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1521)														Float width = ((Float)0.0);
HXDLIN(1521)														{
HXLINE(1521)															int _g = 0;
HXDLIN(1521)															while((_g < positions->length)){
HXLINE(1521)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)																_g = (_g + 1);
HXDLIN(1521)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1521)														widthValue = width;
HXDLIN(1521)														bool _hx_tmp;
HXDLIN(1521)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1521)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1521)															_hx_tmp = true;
            														}
HXDLIN(1521)														if (_hx_tmp) {
HXLINE(1521)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1521)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1521)															layoutGroup->format = formatRange->format;
HXDLIN(1521)															layoutGroup->startIndex = textIndex;
HXDLIN(1521)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1521)														layoutGroup->positions = positions;
HXDLIN(1521)														int _hx_tmp1;
HXDLIN(1521)														if (firstLineOfParagraph) {
HXLINE(1521)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1521)															_hx_tmp1 = 0;
            														}
HXDLIN(1521)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1521)														layoutGroup->ascent = ascent;
HXDLIN(1521)														layoutGroup->descent = descent;
HXDLIN(1521)														layoutGroup->leading = leading;
HXDLIN(1521)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1521)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1521)														layoutGroup->width = widthValue;
HXDLIN(1521)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1521)														offsetX = (offsetX + widthValue);
HXDLIN(1521)														textIndex = tempRangeEnd;
            													}
HXDLIN(1521)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1521)														layoutGroup = null();
            													}
HXDLIN(1521)													if ((tempRangeEnd == placeIndex)) {
HXLINE(1521)														goto _hx_goto_61;
            													}
HXDLIN(1521)													bool _hx_tmp;
HXDLIN(1521)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1521)														rangeIndex = (rangeIndex + 1);
HXDLIN(1521)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1521)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1521)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1521)														_hx_tmp = true;
            													}
            													else {
HXLINE(1521)														_hx_tmp = false;
            													}
HXDLIN(1521)													if (!(_hx_tmp)) {
HXLINE(1521)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1184,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1521)														goto _hx_goto_61;
            													}
HXDLIN(1521)													{
HXLINE(1521)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1521)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1521)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1521)															bool _hx_tmp;
HXDLIN(1521)															if (::hx::IsNotNull( font )) {
HXLINE(1521)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1521)																_hx_tmp = false;
            															}
HXDLIN(1521)															if (_hx_tmp) {
HXLINE(1521)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1521)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1521)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1521)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1521)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1521)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1521)														if ((heightValue > maxHeightValue)) {
HXLINE(1521)															maxHeightValue = heightValue;
            														}
HXDLIN(1521)														if ((ascent > maxAscent)) {
HXLINE(1521)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_61:;
            											}
HXDLIN(1521)											textIndex = placeIndex;
            										}
HXDLIN(1521)										{
HXLINE(1521)											{
HXLINE(1521)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1521)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1521)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1521)													bool _hx_tmp;
HXDLIN(1521)													if (::hx::IsNotNull( font )) {
HXLINE(1521)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1521)														_hx_tmp = false;
            													}
HXDLIN(1521)													if (_hx_tmp) {
HXLINE(1521)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1521)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1521)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1521)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1521)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1521)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1521)												if ((heightValue > maxHeightValue)) {
HXLINE(1521)													maxHeightValue = heightValue;
            												}
HXDLIN(1521)												if ((ascent > maxAscent)) {
HXLINE(1521)													maxAscent = ascent;
            												}
            											}
HXDLIN(1521)											int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1521)											while(true){
HXLINE(1521)												i1 = (i1 - 1);
HXDLIN(1521)												if (!((i1 > -1))) {
HXLINE(1521)													goto _hx_goto_63;
            												}
HXDLIN(1521)												 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1521)												if ((lg->lineIndex < lineIndex)) {
HXLINE(1521)													goto _hx_goto_63;
            												}
HXDLIN(1521)												if ((lg->lineIndex > lineIndex)) {
HXLINE(1521)													continue;
            												}
HXDLIN(1521)												lg->ascent = maxAscent;
HXDLIN(1521)												lg->height = ( (Float)(maxHeightValue) );
            											}
            											_hx_goto_63:;
HXDLIN(1521)											offsetY = (offsetY + maxHeightValue);
HXDLIN(1521)											maxAscent = ((Float)0.0);
HXDLIN(1521)											maxHeightValue = 0;
HXDLIN(1521)											lineIndex = (lineIndex + 1);
HXDLIN(1521)											offsetX = ( (Float)(0) );
HXDLIN(1521)											firstLineOfParagraph = false;
            										}
HXDLIN(1521)										if ((placeIndex >= endIndex)) {
HXLINE(1521)											positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1521)											widthValue = ( (Float)(0) );
            										}
            										else {
HXLINE(1521)											if ((endIndex <= formatRange->end)) {
HXLINE(1521)												::String text = _gthis->text;
HXDLIN(1521)												Float letterSpacing = ((Float)0.0);
HXDLIN(1521)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1521)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1521)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1521)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1521)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1521)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1521)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1521)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1521)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1521)												bool positions1;
HXDLIN(1521)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1521)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1521)													positions1 = true;
            												}
HXDLIN(1521)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1521)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1521)												_gthis1->set_text(text.substring(placeIndex,endIndex));
HXDLIN(1521)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1521)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1521)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1521)												Float width = ((Float)0.0);
HXDLIN(1521)												{
HXLINE(1521)													int _g = 0;
HXDLIN(1521)													while((_g < positions->length)){
HXLINE(1521)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)														_g = (_g + 1);
HXDLIN(1521)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1521)												widthValue = width;
            											}
            											else {
HXLINE(1521)												int tempIndex = placeIndex;
HXDLIN(1521)												int tempRangeEnd = formatRange->end;
HXDLIN(1521)												int countRanges = 0;
HXDLIN(1521)												positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1521)												widthValue = ( (Float)(0) );
HXDLIN(1521)												while(true){
HXLINE(1521)													if ((tempIndex != tempRangeEnd)) {
HXLINE(1521)														::String text = _gthis->text;
HXDLIN(1521)														Float letterSpacing = ((Float)0.0);
HXDLIN(1521)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1521)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1521)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1521)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1521)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1521)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1521)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1521)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1521)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1521)														bool _hx_tmp;
HXDLIN(1521)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1521)															_hx_tmp = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1521)															_hx_tmp = true;
            														}
HXDLIN(1521)														_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1521)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1521)														_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1521)														::Array< ::Dynamic> tempPositions;
HXDLIN(1521)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1521)															tempPositions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1521)															tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1521)														positions = positions->concat(tempPositions);
            													}
HXDLIN(1521)													if ((tempRangeEnd != endIndex)) {
HXLINE(1521)														bool _hx_tmp;
HXDLIN(1521)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1521)															rangeIndex = (rangeIndex + 1);
HXDLIN(1521)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1521)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1521)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1521)															_hx_tmp = true;
            														}
            														else {
HXLINE(1521)															_hx_tmp = false;
            														}
HXDLIN(1521)														if (!(_hx_tmp)) {
HXLINE(1521)															::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1521)															goto _hx_goto_65;
            														}
HXDLIN(1521)														tempIndex = tempRangeEnd;
HXDLIN(1521)														if ((endIndex < formatRange->end)) {
HXLINE(1521)															tempRangeEnd = endIndex;
            														}
            														else {
HXLINE(1521)															tempRangeEnd = formatRange->end;
            														}
HXDLIN(1521)														countRanges = (countRanges + 1);
            													}
            													else {
HXLINE(1521)														Float width = ((Float)0.0);
HXDLIN(1521)														{
HXLINE(1521)															int _g = 0;
HXDLIN(1521)															while((_g < positions->length)){
HXLINE(1521)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)																_g = (_g + 1);
HXDLIN(1521)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1521)														widthValue = width;
HXDLIN(1521)														goto _hx_goto_65;
            													}
            												}
            												_hx_goto_65:;
HXDLIN(1521)												rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1521)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1521)													rangeIndex = (rangeIndex + 1);
HXDLIN(1521)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1521)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1521)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            												}
            											}
            										}
HXDLIN(1521)										remainingPositions = positions;
HXDLIN(1521)										tempWidth = widthValue;
            									}
            									_hx_goto_51:;
            								}
HXDLIN(1521)								{
HXLINE(1521)									if ((endIndex <= formatRange->end)) {
HXLINE(1521)										::String text = _gthis->text;
HXDLIN(1521)										Float letterSpacing = ((Float)0.0);
HXDLIN(1521)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1521)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1521)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1521)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1521)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1521)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1521)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1521)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1521)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1521)										bool positions1;
HXDLIN(1521)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1521)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1521)											positions1 = true;
            										}
HXDLIN(1521)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1521)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1521)										_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1521)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1521)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1521)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXDLIN(1521)										Float width = ((Float)0.0);
HXDLIN(1521)										{
HXLINE(1521)											int _g = 0;
HXDLIN(1521)											while((_g < positions->length)){
HXLINE(1521)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)												_g = (_g + 1);
HXDLIN(1521)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1521)										widthValue = width;
HXDLIN(1521)										bool _hx_tmp;
HXDLIN(1521)										if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1521)											_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            										}
            										else {
HXLINE(1521)											_hx_tmp = true;
            										}
HXDLIN(1521)										if (_hx_tmp) {
HXLINE(1521)											layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1521)											_gthis->layoutGroups->push(layoutGroup);
            										}
            										else {
HXLINE(1521)											layoutGroup->format = formatRange->format;
HXDLIN(1521)											layoutGroup->startIndex = textIndex;
HXDLIN(1521)											layoutGroup->endIndex = endIndex;
            										}
HXDLIN(1521)										layoutGroup->positions = positions;
HXDLIN(1521)										int _hx_tmp1;
HXDLIN(1521)										if (firstLineOfParagraph) {
HXLINE(1521)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1521)											_hx_tmp1 = 0;
            										}
HXDLIN(1521)										layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1521)										layoutGroup->ascent = ascent;
HXDLIN(1521)										layoutGroup->descent = descent;
HXDLIN(1521)										layoutGroup->leading = leading;
HXDLIN(1521)										layoutGroup->lineIndex = lineIndex;
HXDLIN(1521)										layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1521)										layoutGroup->width = widthValue;
HXDLIN(1521)										layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1521)										offsetX = (offsetX + widthValue);
HXDLIN(1521)										if ((endIndex == formatRange->end)) {
HXLINE(1521)											layoutGroup = null();
HXDLIN(1521)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1521)												rangeIndex = (rangeIndex + 1);
HXDLIN(1521)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1521)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1521)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
HXDLIN(1521)											{
HXLINE(1521)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1521)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1521)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1521)													bool _hx_tmp;
HXDLIN(1521)													if (::hx::IsNotNull( font )) {
HXLINE(1521)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1521)														_hx_tmp = false;
            													}
HXDLIN(1521)													if (_hx_tmp) {
HXLINE(1521)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1521)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1521)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1521)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1521)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1521)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1521)												if ((heightValue > maxHeightValue)) {
HXLINE(1521)													maxHeightValue = heightValue;
            												}
HXDLIN(1521)												if ((ascent > maxAscent)) {
HXLINE(1521)													maxAscent = ascent;
            												}
            											}
            										}
            									}
            									else {
HXLINE(1521)										while(true){
HXLINE(1521)											int tempRangeEnd;
HXDLIN(1521)											if ((endIndex < formatRange->end)) {
HXLINE(1521)												tempRangeEnd = endIndex;
            											}
            											else {
HXLINE(1521)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1521)											if ((textIndex != tempRangeEnd)) {
HXLINE(1521)												::String text = _gthis->text;
HXDLIN(1521)												Float letterSpacing = ((Float)0.0);
HXDLIN(1521)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1521)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1521)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1521)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1521)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1521)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1521)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1521)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1521)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1521)												bool positions1;
HXDLIN(1521)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1521)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1521)													positions1 = true;
            												}
HXDLIN(1521)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1521)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1521)												_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1521)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1521)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1521)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1521)												Float width = ((Float)0.0);
HXDLIN(1521)												{
HXLINE(1521)													int _g = 0;
HXDLIN(1521)													while((_g < positions->length)){
HXLINE(1521)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1521)														_g = (_g + 1);
HXDLIN(1521)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1521)												widthValue = width;
HXDLIN(1521)												bool _hx_tmp;
HXDLIN(1521)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1521)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1521)													_hx_tmp = true;
            												}
HXDLIN(1521)												if (_hx_tmp) {
HXLINE(1521)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1521)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1521)													layoutGroup->format = formatRange->format;
HXDLIN(1521)													layoutGroup->startIndex = textIndex;
HXDLIN(1521)													layoutGroup->endIndex = tempRangeEnd;
            												}
HXDLIN(1521)												layoutGroup->positions = positions;
HXDLIN(1521)												int _hx_tmp1;
HXDLIN(1521)												if (firstLineOfParagraph) {
HXLINE(1521)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1521)													_hx_tmp1 = 0;
            												}
HXDLIN(1521)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1521)												layoutGroup->ascent = ascent;
HXDLIN(1521)												layoutGroup->descent = descent;
HXDLIN(1521)												layoutGroup->leading = leading;
HXDLIN(1521)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1521)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1521)												layoutGroup->width = widthValue;
HXDLIN(1521)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1521)												offsetX = (offsetX + widthValue);
HXDLIN(1521)												textIndex = tempRangeEnd;
            											}
HXDLIN(1521)											if ((tempRangeEnd == formatRange->end)) {
HXLINE(1521)												layoutGroup = null();
            											}
HXDLIN(1521)											if ((tempRangeEnd == endIndex)) {
HXLINE(1521)												goto _hx_goto_68;
            											}
HXDLIN(1521)											bool _hx_tmp;
HXDLIN(1521)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1521)												rangeIndex = (rangeIndex + 1);
HXDLIN(1521)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1521)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1521)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1521)												_hx_tmp = true;
            											}
            											else {
HXLINE(1521)												_hx_tmp = false;
            											}
HXDLIN(1521)											if (!(_hx_tmp)) {
HXLINE(1521)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1184,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1521)												goto _hx_goto_68;
            											}
HXDLIN(1521)											{
HXLINE(1521)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1521)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1521)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1521)													bool _hx_tmp;
HXDLIN(1521)													if (::hx::IsNotNull( font )) {
HXLINE(1521)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1521)														_hx_tmp = false;
            													}
HXDLIN(1521)													if (_hx_tmp) {
HXLINE(1521)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1521)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1521)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1521)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1521)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1521)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1521)												if ((heightValue > maxHeightValue)) {
HXLINE(1521)													maxHeightValue = heightValue;
            												}
HXDLIN(1521)												if ((ascent > maxAscent)) {
HXLINE(1521)													maxAscent = ascent;
            												}
            											}
            										}
            										_hx_goto_68:;
            									}
HXDLIN(1521)									textIndex = endIndex;
            								}
            							}
HXLINE(1523)							wrap = false;
            						}
            						else {
HXLINE(1527)							bool _hx_tmp;
HXDLIN(1527)							bool _hx_tmp1;
HXDLIN(1527)							if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1527)								_hx_tmp1 = (textIndex == spaceIndex);
            							}
            							else {
HXLINE(1527)								_hx_tmp1 = false;
            							}
HXDLIN(1527)							if (_hx_tmp1) {
HXLINE(1527)								_hx_tmp = (previousSpaceIndex != (spaceIndex - 1));
            							}
            							else {
HXLINE(1527)								_hx_tmp = false;
            							}
HXDLIN(1527)							if (_hx_tmp) {
HXLINE(1530)								if (::hx::IsNotEq( align,2 )) {
HXLINE(1532)									layoutGroup->endIndex = spaceIndex;
HXLINE(1533)									layoutGroup->positions = layoutGroup->positions->concat(positions);
HXLINE(1534)									 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1534)									layoutGroup1->width = (layoutGroup1->width + widthValue);
            								}
HXLINE(1536)								offsetX = (offsetX + widthValue);
HXLINE(1538)								textIndex = endIndex;
            							}
            							else {
HXLINE(1540)								bool _hx_tmp;
HXDLIN(1540)								if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1540)									_hx_tmp = ::hx::IsEq( align,2 );
            								}
            								else {
HXLINE(1540)									_hx_tmp = true;
            								}
HXDLIN(1540)								if (_hx_tmp) {
HXLINE(1542)									{
HXLINE(1542)										bool _hx_tmp;
HXDLIN(1542)										if ((_gthis->width >= 4)) {
HXLINE(1542)											_hx_tmp = _gthis->wordWrap;
            										}
            										else {
HXLINE(1542)											_hx_tmp = false;
            										}
HXDLIN(1542)										if (_hx_tmp) {
HXLINE(1542)											::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1542)											int bufferCount;
HXDLIN(1542)											int placeIndex;
HXDLIN(1542)											Float positionWidth;
HXDLIN(1542)											 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1542)											Float width = ((Float)0.0);
HXDLIN(1542)											{
HXLINE(1542)												int _g = 0;
HXDLIN(1542)												while((_g < remainingPositions->length)){
HXLINE(1542)													 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)													_g = (_g + 1);
HXDLIN(1542)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1542)											Float tempWidth = width;
HXDLIN(1542)											int i = (remainingPositions->length - 1);
HXDLIN(1542)											while((i >= 0)){
HXLINE(1542)												 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1542)												bool _hx_tmp;
HXDLIN(1542)												if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1542)													_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            												}
            												else {
HXLINE(1542)													_hx_tmp = false;
            												}
HXDLIN(1542)												if (_hx_tmp) {
HXLINE(1542)													goto _hx_goto_71;
            												}
HXDLIN(1542)												 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)												tempWidth = (tempWidth - position->advance->x);
HXDLIN(1542)												i = (i - 1);
            											}
            											_hx_goto_71:;
HXDLIN(1542)											while(true){
HXLINE(1542)												bool _hx_tmp;
HXDLIN(1542)												if ((remainingPositions->length > 0)) {
HXLINE(1542)													int _hx_tmp1;
HXDLIN(1542)													if (firstLineOfParagraph) {
HXLINE(1542)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1542)														_hx_tmp1 = 0;
            													}
HXDLIN(1542)													_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            												}
            												else {
HXLINE(1542)													_hx_tmp = false;
            												}
HXDLIN(1542)												if (!(_hx_tmp)) {
HXLINE(1542)													goto _hx_goto_72;
            												}
HXDLIN(1542)												bufferCount = 0;
HXDLIN(1542)												i = bufferCount;
HXDLIN(1542)												positionWidth = ((Float)0.0);
HXDLIN(1542)												while(true){
HXLINE(1542)													int _hx_tmp;
HXDLIN(1542)													if (firstLineOfParagraph) {
HXLINE(1542)														_hx_tmp = indent;
            													}
            													else {
HXLINE(1542)														_hx_tmp = 0;
            													}
HXDLIN(1542)													if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1542)														goto _hx_goto_73;
            													}
HXDLIN(1542)													currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)													if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1542)														i = (i + 1);
HXDLIN(1542)														bufferCount = (bufferCount + 1);
            													}
            													else {
HXLINE(1542)														positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1542)														i = (i + 1);
            													}
            												}
            												_hx_goto_73:;
HXDLIN(1542)												if ((i == bufferCount)) {
HXLINE(1542)													i = (bufferCount + 1);
            												}
            												else {
HXLINE(1542)													while(true){
HXLINE(1542)														bool _hx_tmp;
HXDLIN(1542)														if ((i > 1)) {
HXLINE(1542)															int _hx_tmp1;
HXDLIN(1542)															if (firstLineOfParagraph) {
HXLINE(1542)																_hx_tmp1 = indent;
            															}
            															else {
HXLINE(1542)																_hx_tmp1 = 0;
            															}
HXDLIN(1542)															_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            														}
            														else {
HXLINE(1542)															_hx_tmp = false;
            														}
HXDLIN(1542)														if (!(_hx_tmp)) {
HXLINE(1542)															goto _hx_goto_74;
            														}
HXDLIN(1542)														i = (i - 1);
HXDLIN(1542)														if (((i - bufferCount) > 0)) {
HXLINE(1542)															{
HXLINE(1542)																int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1542)																if ((textIndex >= endIndex)) {
HXLINE(1542)																	positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)																	widthValue = ( (Float)(0) );
            																}
            																else {
HXLINE(1542)																	if ((endIndex <= formatRange->end)) {
HXLINE(1542)																		::String text = _gthis->text;
HXDLIN(1542)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1542)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1542)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)																		bool positions1;
HXDLIN(1542)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)																			positions1 = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1542)																			positions1 = true;
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)																		_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1542)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)																			positions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1542)																			positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1542)																		Float width = ((Float)0.0);
HXDLIN(1542)																		{
HXLINE(1542)																			int _g = 0;
HXDLIN(1542)																			while((_g < positions->length)){
HXLINE(1542)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																				_g = (_g + 1);
HXDLIN(1542)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1542)																		widthValue = width;
            																	}
            																	else {
HXLINE(1542)																		int tempIndex = textIndex;
HXDLIN(1542)																		int tempRangeEnd = formatRange->end;
HXDLIN(1542)																		int countRanges = 0;
HXDLIN(1542)																		positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)																		widthValue = ( (Float)(0) );
HXDLIN(1542)																		while(true){
HXLINE(1542)																			if ((tempIndex != tempRangeEnd)) {
HXLINE(1542)																				::String text = _gthis->text;
HXDLIN(1542)																				Float letterSpacing = ((Float)0.0);
HXDLIN(1542)																				if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)																					letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																				}
HXDLIN(1542)																				if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)																					_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																				}
HXDLIN(1542)																				_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)																				_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)																				if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)																					_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																				}
HXDLIN(1542)																				_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)																				bool _hx_tmp;
HXDLIN(1542)																				if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)																					_hx_tmp = (_gthis->sharpness < 400);
            																				}
            																				else {
HXLINE(1542)																					_hx_tmp = true;
            																				}
HXDLIN(1542)																				_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1542)																				 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)																				_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1542)																				::Array< ::Dynamic> tempPositions;
HXDLIN(1542)																				if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)																					tempPositions = _gthis->_hx___textLayout->get_positions();
            																				}
            																				else {
HXLINE(1542)																					tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																				}
HXDLIN(1542)																				positions = positions->concat(tempPositions);
            																			}
HXDLIN(1542)																			if ((tempRangeEnd != endIndex)) {
HXLINE(1542)																				bool _hx_tmp;
HXDLIN(1542)																				if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																					rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																					formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																					currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1542)																					_hx_tmp = true;
            																				}
            																				else {
HXLINE(1542)																					_hx_tmp = false;
            																				}
HXDLIN(1542)																				if (!(_hx_tmp)) {
HXLINE(1542)																					::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1542)																					goto _hx_goto_76;
            																				}
HXDLIN(1542)																				tempIndex = tempRangeEnd;
HXDLIN(1542)																				if ((endIndex < formatRange->end)) {
HXLINE(1542)																					tempRangeEnd = endIndex;
            																				}
            																				else {
HXLINE(1542)																					tempRangeEnd = formatRange->end;
            																				}
HXDLIN(1542)																				countRanges = (countRanges + 1);
            																			}
            																			else {
HXLINE(1542)																				Float width = ((Float)0.0);
HXDLIN(1542)																				{
HXLINE(1542)																					int _g = 0;
HXDLIN(1542)																					while((_g < positions->length)){
HXLINE(1542)																						 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																						_g = (_g + 1);
HXDLIN(1542)																						width = (width + position->advance->x);
            																					}
            																				}
HXDLIN(1542)																				widthValue = width;
HXDLIN(1542)																				goto _hx_goto_76;
            																			}
            																		}
            																		_hx_goto_76:;
HXDLIN(1542)																		rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1542)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																		}
            																	}
            																}
            															}
HXDLIN(1542)															positionWidth = widthValue;
            														}
            														else {
HXLINE(1542)															i = 1;
HXDLIN(1542)															bufferCount = 0;
HXDLIN(1542)															{
HXLINE(1542)																int endIndex = (textIndex + 1);
HXDLIN(1542)																if ((textIndex >= endIndex)) {
HXLINE(1542)																	positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)																	widthValue = ( (Float)(0) );
            																}
            																else {
HXLINE(1542)																	if ((endIndex <= formatRange->end)) {
HXLINE(1542)																		::String text = _gthis->text;
HXDLIN(1542)																		Float letterSpacing = ((Float)0.0);
HXDLIN(1542)																		if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)																			letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																		}
HXDLIN(1542)																		if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)																			_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)																		_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)																		if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)																			_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)																		bool positions1;
HXDLIN(1542)																		if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)																			positions1 = (_gthis->sharpness < 400);
            																		}
            																		else {
HXLINE(1542)																			positions1 = true;
            																		}
HXDLIN(1542)																		_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)																		 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)																		_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1542)																		if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)																			positions = _gthis->_hx___textLayout->get_positions();
            																		}
            																		else {
HXLINE(1542)																			positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																		}
HXDLIN(1542)																		Float width = ((Float)0.0);
HXDLIN(1542)																		{
HXLINE(1542)																			int _g = 0;
HXDLIN(1542)																			while((_g < positions->length)){
HXLINE(1542)																				 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																				_g = (_g + 1);
HXDLIN(1542)																				width = (width + position->advance->x);
            																			}
            																		}
HXDLIN(1542)																		widthValue = width;
            																	}
            																	else {
HXLINE(1542)																		int tempIndex = textIndex;
HXDLIN(1542)																		int tempRangeEnd = formatRange->end;
HXDLIN(1542)																		int countRanges = 0;
HXDLIN(1542)																		positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)																		widthValue = ( (Float)(0) );
HXDLIN(1542)																		while(true){
HXLINE(1542)																			if ((tempIndex != tempRangeEnd)) {
HXLINE(1542)																				::String text = _gthis->text;
HXDLIN(1542)																				Float letterSpacing = ((Float)0.0);
HXDLIN(1542)																				if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)																					letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																				}
HXDLIN(1542)																				if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)																					_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																				}
HXDLIN(1542)																				_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)																				_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)																				if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)																					_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																				}
HXDLIN(1542)																				_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)																				bool _hx_tmp;
HXDLIN(1542)																				if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)																					_hx_tmp = (_gthis->sharpness < 400);
            																				}
            																				else {
HXLINE(1542)																					_hx_tmp = true;
            																				}
HXDLIN(1542)																				_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1542)																				 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)																				_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1542)																				::Array< ::Dynamic> tempPositions;
HXDLIN(1542)																				if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)																					tempPositions = _gthis->_hx___textLayout->get_positions();
            																				}
            																				else {
HXLINE(1542)																					tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																				}
HXDLIN(1542)																				positions = positions->concat(tempPositions);
            																			}
HXDLIN(1542)																			if ((tempRangeEnd != endIndex)) {
HXLINE(1542)																				bool _hx_tmp;
HXDLIN(1542)																				if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																					rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																					formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																					currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1542)																					_hx_tmp = true;
            																				}
            																				else {
HXLINE(1542)																					_hx_tmp = false;
            																				}
HXDLIN(1542)																				if (!(_hx_tmp)) {
HXLINE(1542)																					::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1542)																					goto _hx_goto_79;
            																				}
HXDLIN(1542)																				tempIndex = tempRangeEnd;
HXDLIN(1542)																				if ((endIndex < formatRange->end)) {
HXLINE(1542)																					tempRangeEnd = endIndex;
            																				}
            																				else {
HXLINE(1542)																					tempRangeEnd = formatRange->end;
            																				}
HXDLIN(1542)																				countRanges = (countRanges + 1);
            																			}
            																			else {
HXLINE(1542)																				Float width = ((Float)0.0);
HXDLIN(1542)																				{
HXLINE(1542)																					int _g = 0;
HXDLIN(1542)																					while((_g < positions->length)){
HXLINE(1542)																						 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																						_g = (_g + 1);
HXDLIN(1542)																						width = (width + position->advance->x);
            																					}
            																				}
HXDLIN(1542)																				widthValue = width;
HXDLIN(1542)																				goto _hx_goto_79;
            																			}
            																		}
            																		_hx_goto_79:;
HXDLIN(1542)																		rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1542)																		if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																			rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																			formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																			currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																			font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            																		}
            																	}
            																}
            															}
HXDLIN(1542)															positionWidth = ( (Float)(0) );
            														}
            													}
            													_hx_goto_74:;
            												}
HXDLIN(1542)												placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1542)												{
HXLINE(1542)													if ((placeIndex <= formatRange->end)) {
HXLINE(1542)														::String text = _gthis->text;
HXDLIN(1542)														Float letterSpacing = ((Float)0.0);
HXDLIN(1542)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1542)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)														bool positions1;
HXDLIN(1542)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1542)															positions1 = true;
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)														_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1542)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1542)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1542)														Float width = ((Float)0.0);
HXDLIN(1542)														{
HXLINE(1542)															int _g = 0;
HXDLIN(1542)															while((_g < positions->length)){
HXLINE(1542)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																_g = (_g + 1);
HXDLIN(1542)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1542)														widthValue = width;
HXDLIN(1542)														bool _hx_tmp;
HXDLIN(1542)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1542)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1542)															_hx_tmp = true;
            														}
HXDLIN(1542)														if (_hx_tmp) {
HXLINE(1542)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1542)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1542)															layoutGroup->format = formatRange->format;
HXDLIN(1542)															layoutGroup->startIndex = textIndex;
HXDLIN(1542)															layoutGroup->endIndex = placeIndex;
            														}
HXDLIN(1542)														layoutGroup->positions = positions;
HXDLIN(1542)														int _hx_tmp1;
HXDLIN(1542)														if (firstLineOfParagraph) {
HXLINE(1542)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1542)															_hx_tmp1 = 0;
            														}
HXDLIN(1542)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1542)														layoutGroup->ascent = ascent;
HXDLIN(1542)														layoutGroup->descent = descent;
HXDLIN(1542)														layoutGroup->leading = leading;
HXDLIN(1542)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1542)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1542)														layoutGroup->width = widthValue;
HXDLIN(1542)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1542)														offsetX = (offsetX + widthValue);
HXDLIN(1542)														if ((placeIndex == formatRange->end)) {
HXLINE(1542)															layoutGroup = null();
HXDLIN(1542)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
HXDLIN(1542)															{
HXLINE(1542)																if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1542)																	ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1542)																	descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            																}
            																else {
HXLINE(1542)																	bool _hx_tmp;
HXDLIN(1542)																	if (::hx::IsNotNull( font )) {
HXLINE(1542)																		_hx_tmp = (font->unitsPerEM != 0);
            																	}
            																	else {
HXLINE(1542)																		_hx_tmp = false;
            																	}
HXDLIN(1542)																	if (_hx_tmp) {
HXLINE(1542)																		ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1542)																		descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            																	}
            																	else {
HXLINE(1542)																		ascent = ( (Float)(currentFormat->size) );
HXDLIN(1542)																		descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            																	}
            																}
HXDLIN(1542)																leading = ( (int)(currentFormat->leading) );
HXDLIN(1542)																heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1542)																if ((heightValue > maxHeightValue)) {
HXLINE(1542)																	maxHeightValue = heightValue;
            																}
HXDLIN(1542)																if ((ascent > maxAscent)) {
HXLINE(1542)																	maxAscent = ascent;
            																}
            															}
            														}
            													}
            													else {
HXLINE(1542)														while(true){
HXLINE(1542)															int tempRangeEnd;
HXDLIN(1542)															if ((placeIndex < formatRange->end)) {
HXLINE(1542)																tempRangeEnd = placeIndex;
            															}
            															else {
HXLINE(1542)																tempRangeEnd = formatRange->end;
            															}
HXDLIN(1542)															if ((textIndex != tempRangeEnd)) {
HXLINE(1542)																::String text = _gthis->text;
HXDLIN(1542)																Float letterSpacing = ((Float)0.0);
HXDLIN(1542)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1542)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)																bool positions1;
HXDLIN(1542)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)																	positions1 = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1542)																	positions1 = true;
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)																_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1542)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)																	positions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1542)																	positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1542)																Float width = ((Float)0.0);
HXDLIN(1542)																{
HXLINE(1542)																	int _g = 0;
HXDLIN(1542)																	while((_g < positions->length)){
HXLINE(1542)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																		_g = (_g + 1);
HXDLIN(1542)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1542)																widthValue = width;
HXDLIN(1542)																bool _hx_tmp;
HXDLIN(1542)																if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1542)																	_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            																}
            																else {
HXLINE(1542)																	_hx_tmp = true;
            																}
HXDLIN(1542)																if (_hx_tmp) {
HXLINE(1542)																	layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1542)																	_gthis->layoutGroups->push(layoutGroup);
            																}
            																else {
HXLINE(1542)																	layoutGroup->format = formatRange->format;
HXDLIN(1542)																	layoutGroup->startIndex = textIndex;
HXDLIN(1542)																	layoutGroup->endIndex = tempRangeEnd;
            																}
HXDLIN(1542)																layoutGroup->positions = positions;
HXDLIN(1542)																int _hx_tmp1;
HXDLIN(1542)																if (firstLineOfParagraph) {
HXLINE(1542)																	_hx_tmp1 = indent;
            																}
            																else {
HXLINE(1542)																	_hx_tmp1 = 0;
            																}
HXDLIN(1542)																layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1542)																layoutGroup->ascent = ascent;
HXDLIN(1542)																layoutGroup->descent = descent;
HXDLIN(1542)																layoutGroup->leading = leading;
HXDLIN(1542)																layoutGroup->lineIndex = lineIndex;
HXDLIN(1542)																layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1542)																layoutGroup->width = widthValue;
HXDLIN(1542)																layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1542)																offsetX = (offsetX + widthValue);
HXDLIN(1542)																textIndex = tempRangeEnd;
            															}
HXDLIN(1542)															if ((tempRangeEnd == formatRange->end)) {
HXLINE(1542)																layoutGroup = null();
            															}
HXDLIN(1542)															if ((tempRangeEnd == placeIndex)) {
HXLINE(1542)																goto _hx_goto_82;
            															}
HXDLIN(1542)															bool _hx_tmp;
HXDLIN(1542)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1542)																_hx_tmp = true;
            															}
            															else {
HXLINE(1542)																_hx_tmp = false;
            															}
HXDLIN(1542)															if (!(_hx_tmp)) {
HXLINE(1542)																::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1184,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1542)																goto _hx_goto_82;
            															}
HXDLIN(1542)															{
HXLINE(1542)																if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1542)																	ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1542)																	descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            																}
            																else {
HXLINE(1542)																	bool _hx_tmp;
HXDLIN(1542)																	if (::hx::IsNotNull( font )) {
HXLINE(1542)																		_hx_tmp = (font->unitsPerEM != 0);
            																	}
            																	else {
HXLINE(1542)																		_hx_tmp = false;
            																	}
HXDLIN(1542)																	if (_hx_tmp) {
HXLINE(1542)																		ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1542)																		descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            																	}
            																	else {
HXLINE(1542)																		ascent = ( (Float)(currentFormat->size) );
HXDLIN(1542)																		descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            																	}
            																}
HXDLIN(1542)																leading = ( (int)(currentFormat->leading) );
HXDLIN(1542)																heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1542)																if ((heightValue > maxHeightValue)) {
HXLINE(1542)																	maxHeightValue = heightValue;
            																}
HXDLIN(1542)																if ((ascent > maxAscent)) {
HXLINE(1542)																	maxAscent = ascent;
            																}
            															}
            														}
            														_hx_goto_82:;
            													}
HXDLIN(1542)													textIndex = placeIndex;
            												}
HXDLIN(1542)												{
HXLINE(1542)													{
HXLINE(1542)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1542)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1542)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1542)															bool _hx_tmp;
HXDLIN(1542)															if (::hx::IsNotNull( font )) {
HXLINE(1542)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1542)																_hx_tmp = false;
            															}
HXDLIN(1542)															if (_hx_tmp) {
HXLINE(1542)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1542)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1542)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1542)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1542)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1542)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1542)														if ((heightValue > maxHeightValue)) {
HXLINE(1542)															maxHeightValue = heightValue;
            														}
HXDLIN(1542)														if ((ascent > maxAscent)) {
HXLINE(1542)															maxAscent = ascent;
            														}
            													}
HXDLIN(1542)													int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1542)													while(true){
HXLINE(1542)														i1 = (i1 - 1);
HXDLIN(1542)														if (!((i1 > -1))) {
HXLINE(1542)															goto _hx_goto_84;
            														}
HXDLIN(1542)														 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1542)														if ((lg->lineIndex < lineIndex)) {
HXLINE(1542)															goto _hx_goto_84;
            														}
HXDLIN(1542)														if ((lg->lineIndex > lineIndex)) {
HXLINE(1542)															continue;
            														}
HXDLIN(1542)														lg->ascent = maxAscent;
HXDLIN(1542)														lg->height = ( (Float)(maxHeightValue) );
            													}
            													_hx_goto_84:;
HXDLIN(1542)													offsetY = (offsetY + maxHeightValue);
HXDLIN(1542)													maxAscent = ((Float)0.0);
HXDLIN(1542)													maxHeightValue = 0;
HXDLIN(1542)													lineIndex = (lineIndex + 1);
HXDLIN(1542)													offsetX = ( (Float)(0) );
HXDLIN(1542)													firstLineOfParagraph = false;
            												}
HXDLIN(1542)												if ((placeIndex >= endIndex)) {
HXLINE(1542)													positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)													widthValue = ( (Float)(0) );
            												}
            												else {
HXLINE(1542)													if ((endIndex <= formatRange->end)) {
HXLINE(1542)														::String text = _gthis->text;
HXDLIN(1542)														Float letterSpacing = ((Float)0.0);
HXDLIN(1542)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1542)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)														bool positions1;
HXDLIN(1542)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1542)															positions1 = true;
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)														_gthis1->set_text(text.substring(placeIndex,endIndex));
HXDLIN(1542)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1542)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1542)														Float width = ((Float)0.0);
HXDLIN(1542)														{
HXLINE(1542)															int _g = 0;
HXDLIN(1542)															while((_g < positions->length)){
HXLINE(1542)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																_g = (_g + 1);
HXDLIN(1542)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1542)														widthValue = width;
            													}
            													else {
HXLINE(1542)														int tempIndex = placeIndex;
HXDLIN(1542)														int tempRangeEnd = formatRange->end;
HXDLIN(1542)														int countRanges = 0;
HXDLIN(1542)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1542)														widthValue = ( (Float)(0) );
HXDLIN(1542)														while(true){
HXLINE(1542)															if ((tempIndex != tempRangeEnd)) {
HXLINE(1542)																::String text = _gthis->text;
HXDLIN(1542)																Float letterSpacing = ((Float)0.0);
HXDLIN(1542)																if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)																	letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																}
HXDLIN(1542)																if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)																	_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)																_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)																if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)																	_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)																bool _hx_tmp;
HXDLIN(1542)																if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)																	_hx_tmp = (_gthis->sharpness < 400);
            																}
            																else {
HXLINE(1542)																	_hx_tmp = true;
            																}
HXDLIN(1542)																_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1542)																 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)																_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1542)																::Array< ::Dynamic> tempPositions;
HXDLIN(1542)																if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)																	tempPositions = _gthis->_hx___textLayout->get_positions();
            																}
            																else {
HXLINE(1542)																	tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																}
HXDLIN(1542)																positions = positions->concat(tempPositions);
            															}
HXDLIN(1542)															if ((tempRangeEnd != endIndex)) {
HXLINE(1542)																bool _hx_tmp;
HXDLIN(1542)																if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)																	rangeIndex = (rangeIndex + 1);
HXDLIN(1542)																	formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)																	currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)																	font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1542)																	_hx_tmp = true;
            																}
            																else {
HXLINE(1542)																	_hx_tmp = false;
            																}
HXDLIN(1542)																if (!(_hx_tmp)) {
HXLINE(1542)																	::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1542)																	goto _hx_goto_86;
            																}
HXDLIN(1542)																tempIndex = tempRangeEnd;
HXDLIN(1542)																if ((endIndex < formatRange->end)) {
HXLINE(1542)																	tempRangeEnd = endIndex;
            																}
            																else {
HXLINE(1542)																	tempRangeEnd = formatRange->end;
            																}
HXDLIN(1542)																countRanges = (countRanges + 1);
            															}
            															else {
HXLINE(1542)																Float width = ((Float)0.0);
HXDLIN(1542)																{
HXLINE(1542)																	int _g = 0;
HXDLIN(1542)																	while((_g < positions->length)){
HXLINE(1542)																		 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																		_g = (_g + 1);
HXDLIN(1542)																		width = (width + position->advance->x);
            																	}
            																}
HXDLIN(1542)																widthValue = width;
HXDLIN(1542)																goto _hx_goto_86;
            															}
            														}
            														_hx_goto_86:;
HXDLIN(1542)														rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1542)														if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)															rangeIndex = (rangeIndex + 1);
HXDLIN(1542)															formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)															currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)															font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            														}
            													}
            												}
HXDLIN(1542)												remainingPositions = positions;
HXDLIN(1542)												tempWidth = widthValue;
            											}
            											_hx_goto_72:;
            										}
HXDLIN(1542)										{
HXLINE(1542)											if ((endIndex <= formatRange->end)) {
HXLINE(1542)												::String text = _gthis->text;
HXDLIN(1542)												Float letterSpacing = ((Float)0.0);
HXDLIN(1542)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1542)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)												bool positions1;
HXDLIN(1542)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1542)													positions1 = true;
            												}
HXDLIN(1542)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)												_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1542)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1542)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1542)												Float width = ((Float)0.0);
HXDLIN(1542)												{
HXLINE(1542)													int _g = 0;
HXDLIN(1542)													while((_g < positions->length)){
HXLINE(1542)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)														_g = (_g + 1);
HXDLIN(1542)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1542)												widthValue = width;
HXDLIN(1542)												bool _hx_tmp;
HXDLIN(1542)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1542)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1542)													_hx_tmp = true;
            												}
HXDLIN(1542)												if (_hx_tmp) {
HXLINE(1542)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1542)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1542)													layoutGroup->format = formatRange->format;
HXDLIN(1542)													layoutGroup->startIndex = textIndex;
HXDLIN(1542)													layoutGroup->endIndex = endIndex;
            												}
HXDLIN(1542)												layoutGroup->positions = positions;
HXDLIN(1542)												int _hx_tmp1;
HXDLIN(1542)												if (firstLineOfParagraph) {
HXLINE(1542)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1542)													_hx_tmp1 = 0;
            												}
HXDLIN(1542)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1542)												layoutGroup->ascent = ascent;
HXDLIN(1542)												layoutGroup->descent = descent;
HXDLIN(1542)												layoutGroup->leading = leading;
HXDLIN(1542)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1542)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1542)												layoutGroup->width = widthValue;
HXDLIN(1542)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1542)												offsetX = (offsetX + widthValue);
HXDLIN(1542)												if ((endIndex == formatRange->end)) {
HXLINE(1542)													layoutGroup = null();
HXDLIN(1542)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)														rangeIndex = (rangeIndex + 1);
HXDLIN(1542)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1542)													{
HXLINE(1542)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1542)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1542)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1542)															bool _hx_tmp;
HXDLIN(1542)															if (::hx::IsNotNull( font )) {
HXLINE(1542)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1542)																_hx_tmp = false;
            															}
HXDLIN(1542)															if (_hx_tmp) {
HXLINE(1542)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1542)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1542)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1542)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1542)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1542)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1542)														if ((heightValue > maxHeightValue)) {
HXLINE(1542)															maxHeightValue = heightValue;
            														}
HXDLIN(1542)														if ((ascent > maxAscent)) {
HXLINE(1542)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1542)												while(true){
HXLINE(1542)													int tempRangeEnd;
HXDLIN(1542)													if ((endIndex < formatRange->end)) {
HXLINE(1542)														tempRangeEnd = endIndex;
            													}
            													else {
HXLINE(1542)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1542)													if ((textIndex != tempRangeEnd)) {
HXLINE(1542)														::String text = _gthis->text;
HXDLIN(1542)														Float letterSpacing = ((Float)0.0);
HXDLIN(1542)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1542)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1542)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1542)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1542)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1542)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1542)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1542)														bool positions1;
HXDLIN(1542)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1542)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1542)															positions1 = true;
            														}
HXDLIN(1542)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1542)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1542)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1542)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1542)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1542)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1542)														Float width = ((Float)0.0);
HXDLIN(1542)														{
HXLINE(1542)															int _g = 0;
HXDLIN(1542)															while((_g < positions->length)){
HXLINE(1542)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1542)																_g = (_g + 1);
HXDLIN(1542)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1542)														widthValue = width;
HXDLIN(1542)														bool _hx_tmp;
HXDLIN(1542)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1542)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1542)															_hx_tmp = true;
            														}
HXDLIN(1542)														if (_hx_tmp) {
HXLINE(1542)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1542)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1542)															layoutGroup->format = formatRange->format;
HXDLIN(1542)															layoutGroup->startIndex = textIndex;
HXDLIN(1542)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1542)														layoutGroup->positions = positions;
HXDLIN(1542)														int _hx_tmp1;
HXDLIN(1542)														if (firstLineOfParagraph) {
HXLINE(1542)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1542)															_hx_tmp1 = 0;
            														}
HXDLIN(1542)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1542)														layoutGroup->ascent = ascent;
HXDLIN(1542)														layoutGroup->descent = descent;
HXDLIN(1542)														layoutGroup->leading = leading;
HXDLIN(1542)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1542)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1542)														layoutGroup->width = widthValue;
HXDLIN(1542)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1542)														offsetX = (offsetX + widthValue);
HXDLIN(1542)														textIndex = tempRangeEnd;
            													}
HXDLIN(1542)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1542)														layoutGroup = null();
            													}
HXDLIN(1542)													if ((tempRangeEnd == endIndex)) {
HXLINE(1542)														goto _hx_goto_89;
            													}
HXDLIN(1542)													bool _hx_tmp;
HXDLIN(1542)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1542)														rangeIndex = (rangeIndex + 1);
HXDLIN(1542)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1542)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1542)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1542)														_hx_tmp = true;
            													}
            													else {
HXLINE(1542)														_hx_tmp = false;
            													}
HXDLIN(1542)													if (!(_hx_tmp)) {
HXLINE(1542)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1184,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1542)														goto _hx_goto_89;
            													}
HXDLIN(1542)													{
HXLINE(1542)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1542)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1542)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1542)															bool _hx_tmp;
HXDLIN(1542)															if (::hx::IsNotNull( font )) {
HXLINE(1542)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1542)																_hx_tmp = false;
            															}
HXDLIN(1542)															if (_hx_tmp) {
HXLINE(1542)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1542)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1542)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1542)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1542)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1542)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1542)														if ((heightValue > maxHeightValue)) {
HXLINE(1542)															maxHeightValue = heightValue;
            														}
HXDLIN(1542)														if ((ascent > maxAscent)) {
HXLINE(1542)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_89:;
            											}
HXDLIN(1542)											textIndex = endIndex;
            										}
            									}
HXLINE(1543)									if ((endIndex == this->text.length)) {
HXLINE(1543)										{
HXLINE(1543)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1543)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1543)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1543)												bool _hx_tmp;
HXDLIN(1543)												if (::hx::IsNotNull( font )) {
HXLINE(1543)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1543)													_hx_tmp = false;
            												}
HXDLIN(1543)												if (_hx_tmp) {
HXLINE(1543)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1543)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1543)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1543)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1543)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1543)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1543)											if ((heightValue > maxHeightValue)) {
HXLINE(1543)												maxHeightValue = heightValue;
            											}
HXDLIN(1543)											if ((ascent > maxAscent)) {
HXLINE(1543)												maxAscent = ascent;
            											}
            										}
HXDLIN(1543)										int i = _gthis->layoutGroups->get_length();
HXDLIN(1543)										while(true){
HXLINE(1543)											i = (i - 1);
HXDLIN(1543)											if (!((i > -1))) {
HXLINE(1543)												goto _hx_goto_91;
            											}
HXDLIN(1543)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1543)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1543)												goto _hx_goto_91;
            											}
HXDLIN(1543)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1543)												continue;
            											}
HXDLIN(1543)											lg->ascent = maxAscent;
HXDLIN(1543)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_91:;
HXDLIN(1543)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1543)										maxAscent = ((Float)0.0);
HXDLIN(1543)										maxHeightValue = 0;
HXDLIN(1543)										lineIndex = (lineIndex + 1);
HXDLIN(1543)										offsetX = ( (Float)(0) );
HXDLIN(1543)										firstLineOfParagraph = false;
            									}
            								}
            								else {
HXLINE(1547)									int tempRangeEnd;
HXDLIN(1547)									if ((endIndex < formatRange->end)) {
HXLINE(1547)										tempRangeEnd = endIndex;
            									}
            									else {
HXLINE(1547)										tempRangeEnd = formatRange->end;
            									}
HXLINE(1549)									if ((tempRangeEnd < endIndex)) {
HXLINE(1551)										::String text = this->text;
HXDLIN(1551)										Float letterSpacing = ((Float)0.0);
HXDLIN(1551)										if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1551)											letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            										}
HXDLIN(1551)										if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1551)											_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            										}
HXDLIN(1551)										_gthis->_hx___textLayout->set_text(null());
HXDLIN(1551)										_gthis->_hx___textLayout->set_font(font);
HXDLIN(1551)										if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1551)											_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            										}
HXDLIN(1551)										_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1551)										bool positions1;
HXDLIN(1551)										if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1551)											positions1 = (_gthis->sharpness < 400);
            										}
            										else {
HXLINE(1551)											positions1 = true;
            										}
HXDLIN(1551)										_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1551)										 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1551)										_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1551)										if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1551)											positions = _gthis->_hx___textLayout->get_positions();
            										}
            										else {
HXLINE(1551)											positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            										}
HXLINE(1552)										Float width = ((Float)0.0);
HXDLIN(1552)										{
HXLINE(1552)											int _g = 0;
HXDLIN(1552)											while((_g < positions->length)){
HXLINE(1552)												 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1552)												_g = (_g + 1);
HXDLIN(1552)												width = (width + position->advance->x);
            											}
            										}
HXDLIN(1552)										widthValue = width;
            									}
HXLINE(1555)									layoutGroup->endIndex = tempRangeEnd;
HXLINE(1556)									layoutGroup->positions = layoutGroup->positions->concat(positions);
HXLINE(1557)									 ::openfl::text::_internal::TextLayoutGroup layoutGroup1 = layoutGroup;
HXDLIN(1557)									layoutGroup1->width = (layoutGroup1->width + widthValue);
HXLINE(1559)									offsetX = (offsetX + widthValue);
HXLINE(1561)									if ((tempRangeEnd == formatRange->end)) {
HXLINE(1563)										layoutGroup = null();
HXLINE(1564)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1564)											rangeIndex = (rangeIndex + 1);
HXDLIN(1564)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1564)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1564)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
HXLINE(1565)										{
HXLINE(1565)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1565)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1565)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1565)												bool _hx_tmp;
HXDLIN(1565)												if (::hx::IsNotNull( font )) {
HXLINE(1565)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1565)													_hx_tmp = false;
            												}
HXDLIN(1565)												if (_hx_tmp) {
HXLINE(1565)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1565)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1565)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1565)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1565)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1565)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1565)											if ((heightValue > maxHeightValue)) {
HXLINE(1565)												maxHeightValue = heightValue;
            											}
HXDLIN(1565)											if ((ascent > maxAscent)) {
HXLINE(1565)												maxAscent = ascent;
            											}
            										}
HXLINE(1567)										textIndex = tempRangeEnd;
HXLINE(1569)										if ((tempRangeEnd != endIndex)) {
HXLINE(1571)											if ((endIndex <= formatRange->end)) {
HXLINE(1571)												::String text = _gthis->text;
HXDLIN(1571)												Float letterSpacing = ((Float)0.0);
HXDLIN(1571)												if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1571)													letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            												}
HXDLIN(1571)												if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1571)													_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            												}
HXDLIN(1571)												_gthis->_hx___textLayout->set_text(null());
HXDLIN(1571)												_gthis->_hx___textLayout->set_font(font);
HXDLIN(1571)												if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1571)													_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            												}
HXDLIN(1571)												_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1571)												bool positions1;
HXDLIN(1571)												if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1571)													positions1 = (_gthis->sharpness < 400);
            												}
            												else {
HXLINE(1571)													positions1 = true;
            												}
HXDLIN(1571)												_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1571)												 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1571)												_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1571)												if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1571)													positions = _gthis->_hx___textLayout->get_positions();
            												}
            												else {
HXLINE(1571)													positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            												}
HXDLIN(1571)												Float width = ((Float)0.0);
HXDLIN(1571)												{
HXLINE(1571)													int _g = 0;
HXDLIN(1571)													while((_g < positions->length)){
HXLINE(1571)														 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1571)														_g = (_g + 1);
HXDLIN(1571)														width = (width + position->advance->x);
            													}
            												}
HXDLIN(1571)												widthValue = width;
HXDLIN(1571)												bool _hx_tmp;
HXDLIN(1571)												if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1571)													_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            												}
            												else {
HXLINE(1571)													_hx_tmp = true;
            												}
HXDLIN(1571)												if (_hx_tmp) {
HXLINE(1571)													layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex);
HXDLIN(1571)													_gthis->layoutGroups->push(layoutGroup);
            												}
            												else {
HXLINE(1571)													layoutGroup->format = formatRange->format;
HXDLIN(1571)													layoutGroup->startIndex = textIndex;
HXDLIN(1571)													layoutGroup->endIndex = endIndex;
            												}
HXDLIN(1571)												layoutGroup->positions = positions;
HXDLIN(1571)												int _hx_tmp1;
HXDLIN(1571)												if (firstLineOfParagraph) {
HXLINE(1571)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1571)													_hx_tmp1 = 0;
            												}
HXDLIN(1571)												layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1571)												layoutGroup->ascent = ascent;
HXDLIN(1571)												layoutGroup->descent = descent;
HXDLIN(1571)												layoutGroup->leading = leading;
HXDLIN(1571)												layoutGroup->lineIndex = lineIndex;
HXDLIN(1571)												layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1571)												layoutGroup->width = widthValue;
HXDLIN(1571)												layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1571)												offsetX = (offsetX + widthValue);
HXDLIN(1571)												if ((endIndex == formatRange->end)) {
HXLINE(1571)													layoutGroup = null();
HXDLIN(1571)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1571)														rangeIndex = (rangeIndex + 1);
HXDLIN(1571)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1571)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1571)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            													}
HXDLIN(1571)													{
HXLINE(1571)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1571)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1571)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1571)															bool _hx_tmp;
HXDLIN(1571)															if (::hx::IsNotNull( font )) {
HXLINE(1571)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1571)																_hx_tmp = false;
            															}
HXDLIN(1571)															if (_hx_tmp) {
HXLINE(1571)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1571)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1571)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1571)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1571)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1571)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1571)														if ((heightValue > maxHeightValue)) {
HXLINE(1571)															maxHeightValue = heightValue;
            														}
HXDLIN(1571)														if ((ascent > maxAscent)) {
HXLINE(1571)															maxAscent = ascent;
            														}
            													}
            												}
            											}
            											else {
HXLINE(1571)												while(true){
HXLINE(1571)													int tempRangeEnd;
HXDLIN(1571)													if ((endIndex < formatRange->end)) {
HXLINE(1571)														tempRangeEnd = endIndex;
            													}
            													else {
HXLINE(1571)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1571)													if ((textIndex != tempRangeEnd)) {
HXLINE(1571)														::String text = _gthis->text;
HXDLIN(1571)														Float letterSpacing = ((Float)0.0);
HXDLIN(1571)														if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1571)															letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            														}
HXDLIN(1571)														if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1571)															_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            														}
HXDLIN(1571)														_gthis->_hx___textLayout->set_text(null());
HXDLIN(1571)														_gthis->_hx___textLayout->set_font(font);
HXDLIN(1571)														if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1571)															_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            														}
HXDLIN(1571)														_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1571)														bool positions1;
HXDLIN(1571)														if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1571)															positions1 = (_gthis->sharpness < 400);
            														}
            														else {
HXLINE(1571)															positions1 = true;
            														}
HXDLIN(1571)														_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1571)														 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1571)														_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1571)														if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1571)															positions = _gthis->_hx___textLayout->get_positions();
            														}
            														else {
HXLINE(1571)															positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            														}
HXDLIN(1571)														Float width = ((Float)0.0);
HXDLIN(1571)														{
HXLINE(1571)															int _g = 0;
HXDLIN(1571)															while((_g < positions->length)){
HXLINE(1571)																 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1571)																_g = (_g + 1);
HXDLIN(1571)																width = (width + position->advance->x);
            															}
            														}
HXDLIN(1571)														widthValue = width;
HXDLIN(1571)														bool _hx_tmp;
HXDLIN(1571)														if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1571)															_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            														}
            														else {
HXLINE(1571)															_hx_tmp = true;
            														}
HXDLIN(1571)														if (_hx_tmp) {
HXLINE(1571)															layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1571)															_gthis->layoutGroups->push(layoutGroup);
            														}
            														else {
HXLINE(1571)															layoutGroup->format = formatRange->format;
HXDLIN(1571)															layoutGroup->startIndex = textIndex;
HXDLIN(1571)															layoutGroup->endIndex = tempRangeEnd;
            														}
HXDLIN(1571)														layoutGroup->positions = positions;
HXDLIN(1571)														int _hx_tmp1;
HXDLIN(1571)														if (firstLineOfParagraph) {
HXLINE(1571)															_hx_tmp1 = indent;
            														}
            														else {
HXLINE(1571)															_hx_tmp1 = 0;
            														}
HXDLIN(1571)														layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1571)														layoutGroup->ascent = ascent;
HXDLIN(1571)														layoutGroup->descent = descent;
HXDLIN(1571)														layoutGroup->leading = leading;
HXDLIN(1571)														layoutGroup->lineIndex = lineIndex;
HXDLIN(1571)														layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1571)														layoutGroup->width = widthValue;
HXDLIN(1571)														layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1571)														offsetX = (offsetX + widthValue);
HXDLIN(1571)														textIndex = tempRangeEnd;
            													}
HXDLIN(1571)													if ((tempRangeEnd == formatRange->end)) {
HXLINE(1571)														layoutGroup = null();
            													}
HXDLIN(1571)													if ((tempRangeEnd == endIndex)) {
HXLINE(1571)														goto _hx_goto_94;
            													}
HXDLIN(1571)													bool _hx_tmp;
HXDLIN(1571)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1571)														rangeIndex = (rangeIndex + 1);
HXDLIN(1571)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1571)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1571)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1571)														_hx_tmp = true;
            													}
            													else {
HXLINE(1571)														_hx_tmp = false;
            													}
HXDLIN(1571)													if (!(_hx_tmp)) {
HXLINE(1571)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1184,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1571)														goto _hx_goto_94;
            													}
HXDLIN(1571)													{
HXLINE(1571)														if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1571)															ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1571)															descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            														}
            														else {
HXLINE(1571)															bool _hx_tmp;
HXDLIN(1571)															if (::hx::IsNotNull( font )) {
HXLINE(1571)																_hx_tmp = (font->unitsPerEM != 0);
            															}
            															else {
HXLINE(1571)																_hx_tmp = false;
            															}
HXDLIN(1571)															if (_hx_tmp) {
HXLINE(1571)																ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1571)																descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            															}
            															else {
HXLINE(1571)																ascent = ( (Float)(currentFormat->size) );
HXDLIN(1571)																descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            															}
            														}
HXDLIN(1571)														leading = ( (int)(currentFormat->leading) );
HXDLIN(1571)														heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1571)														if ((heightValue > maxHeightValue)) {
HXLINE(1571)															maxHeightValue = heightValue;
            														}
HXDLIN(1571)														if ((ascent > maxAscent)) {
HXLINE(1571)															maxAscent = ascent;
            														}
            													}
            												}
            												_hx_goto_94:;
            											}
HXDLIN(1571)											textIndex = endIndex;
            										}
            									}
HXLINE(1577)									if ((breakIndex == endIndex)) {
HXLINE(1577)										endIndex = (endIndex + 1);
            									}
HXLINE(1579)									textIndex = endIndex;
HXLINE(1581)									if ((endIndex == this->text.length)) {
HXLINE(1583)										{
HXLINE(1583)											{
HXLINE(1583)												if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1583)													ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1583)													descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            												}
            												else {
HXLINE(1583)													bool _hx_tmp;
HXDLIN(1583)													if (::hx::IsNotNull( font )) {
HXLINE(1583)														_hx_tmp = (font->unitsPerEM != 0);
            													}
            													else {
HXLINE(1583)														_hx_tmp = false;
            													}
HXDLIN(1583)													if (_hx_tmp) {
HXLINE(1583)														ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1583)														descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            													}
            													else {
HXLINE(1583)														ascent = ( (Float)(currentFormat->size) );
HXDLIN(1583)														descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            													}
            												}
HXDLIN(1583)												leading = ( (int)(currentFormat->leading) );
HXDLIN(1583)												heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1583)												if ((heightValue > maxHeightValue)) {
HXLINE(1583)													maxHeightValue = heightValue;
            												}
HXDLIN(1583)												if ((ascent > maxAscent)) {
HXLINE(1583)													maxAscent = ascent;
            												}
            											}
HXDLIN(1583)											int i = _gthis->layoutGroups->get_length();
HXDLIN(1583)											while(true){
HXLINE(1583)												i = (i - 1);
HXDLIN(1583)												if (!((i > -1))) {
HXLINE(1583)													goto _hx_goto_96;
            												}
HXDLIN(1583)												 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1583)												if ((lg->lineIndex < lineIndex)) {
HXLINE(1583)													goto _hx_goto_96;
            												}
HXDLIN(1583)												if ((lg->lineIndex > lineIndex)) {
HXLINE(1583)													continue;
            												}
HXDLIN(1583)												lg->ascent = maxAscent;
HXDLIN(1583)												lg->height = ( (Float)(maxHeightValue) );
            											}
            											_hx_goto_96:;
HXDLIN(1583)											offsetY = (offsetY + maxHeightValue);
HXDLIN(1583)											maxAscent = ((Float)0.0);
HXDLIN(1583)											maxHeightValue = 0;
HXDLIN(1583)											lineIndex = (lineIndex + 1);
HXDLIN(1583)											offsetX = ( (Float)(0) );
HXDLIN(1583)											firstLineOfParagraph = false;
            										}
HXLINE(1585)										if ((breakIndex != -1)) {
HXLINE(1587)											previousBreakIndex = breakIndex;
HXLINE(1588)											breakCount = (breakCount + 1);
HXLINE(1589)											if ((breakCount < this->lineBreaks->get_length())) {
HXLINE(1589)												breakIndex = this->lineBreaks->get(breakCount);
            											}
            											else {
HXLINE(1589)												breakIndex = -1;
            											}
            										}
            									}
            								}
            							}
            						}
HXLINE(1595)						int nextSpaceIndex = this->text.indexOf(HX_(" ",20,00,00,00),textIndex);
HXLINE(1600)						if ((breakIndex == previousSpaceIndex)) {
HXLINE(1602)							layoutGroup->endIndex = breakIndex;
HXLINE(1604)							if ((((breakIndex - layoutGroup->startIndex) - layoutGroup->positions->length) < 0)) {
HXLINE(1607)								layoutGroup->positions->push(null());
            							}
HXLINE(1610)							textIndex = (breakIndex + 1);
            						}
HXLINE(1613)						previousSpaceIndex = spaceIndex;
HXLINE(1614)						spaceIndex = nextSpaceIndex;
HXLINE(1616)						bool _hx_tmp;
HXDLIN(1616)						bool _hx_tmp1;
HXDLIN(1616)						bool _hx_tmp2;
HXDLIN(1616)						if ((breakIndex > -1)) {
HXLINE(1616)							_hx_tmp2 = (breakIndex <= textIndex);
            						}
            						else {
HXLINE(1616)							_hx_tmp2 = false;
            						}
HXDLIN(1616)						if (_hx_tmp2) {
HXLINE(1616)							if ((spaceIndex <= breakIndex)) {
HXLINE(1616)								_hx_tmp1 = (spaceIndex == -1);
            							}
            							else {
HXLINE(1616)								_hx_tmp1 = true;
            							}
            						}
            						else {
HXLINE(1616)							_hx_tmp1 = false;
            						}
HXDLIN(1616)						if (!(_hx_tmp1)) {
HXLINE(1616)							_hx_tmp = (textIndex > this->text.length);
            						}
            						else {
HXLINE(1616)							_hx_tmp = true;
            						}
HXDLIN(1616)						if (_hx_tmp) {
HXLINE(1619)							goto _hx_goto_42;
            						}
            					}
            					_hx_goto_42:;
            				}
            				else {
HXLINE(1625)					if ((textIndex < this->text.length)) {
HXLINE(1628)						{
HXLINE(1628)							int endIndex = this->text.length;
HXDLIN(1628)							if ((textIndex >= endIndex)) {
HXLINE(1628)								positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1628)								widthValue = ( (Float)(0) );
            							}
            							else {
HXLINE(1628)								if ((endIndex <= formatRange->end)) {
HXLINE(1628)									::String text = _gthis->text;
HXDLIN(1628)									Float letterSpacing = ((Float)0.0);
HXDLIN(1628)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1628)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1628)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1628)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1628)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1628)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1628)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1628)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1628)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1628)									bool positions1;
HXDLIN(1628)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1628)										positions1 = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1628)										positions1 = true;
            									}
HXDLIN(1628)									_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1628)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1628)									_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1628)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1628)										positions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1628)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1628)									Float width = ((Float)0.0);
HXDLIN(1628)									{
HXLINE(1628)										int _g = 0;
HXDLIN(1628)										while((_g < positions->length)){
HXLINE(1628)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1628)											_g = (_g + 1);
HXDLIN(1628)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1628)									widthValue = width;
            								}
            								else {
HXLINE(1628)									int tempIndex = textIndex;
HXDLIN(1628)									int tempRangeEnd = formatRange->end;
HXDLIN(1628)									int countRanges = 0;
HXDLIN(1628)									positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1628)									widthValue = ( (Float)(0) );
HXDLIN(1628)									while(true){
HXLINE(1628)										if ((tempIndex != tempRangeEnd)) {
HXLINE(1628)											::String text = _gthis->text;
HXDLIN(1628)											Float letterSpacing = ((Float)0.0);
HXDLIN(1628)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1628)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1628)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1628)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1628)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1628)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1628)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1628)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1628)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1628)											bool _hx_tmp;
HXDLIN(1628)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1628)												_hx_tmp = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1628)												_hx_tmp = true;
            											}
HXDLIN(1628)											_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1628)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1628)											_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1628)											::Array< ::Dynamic> tempPositions;
HXDLIN(1628)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1628)												tempPositions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1628)												tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1628)											positions = positions->concat(tempPositions);
            										}
HXDLIN(1628)										if ((tempRangeEnd != endIndex)) {
HXLINE(1628)											bool _hx_tmp;
HXDLIN(1628)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1628)												rangeIndex = (rangeIndex + 1);
HXDLIN(1628)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1628)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1628)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1628)												_hx_tmp = true;
            											}
            											else {
HXLINE(1628)												_hx_tmp = false;
            											}
HXDLIN(1628)											if (!(_hx_tmp)) {
HXLINE(1628)												::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1628)												goto _hx_goto_98;
            											}
HXDLIN(1628)											tempIndex = tempRangeEnd;
HXDLIN(1628)											if ((endIndex < formatRange->end)) {
HXLINE(1628)												tempRangeEnd = endIndex;
            											}
            											else {
HXLINE(1628)												tempRangeEnd = formatRange->end;
            											}
HXDLIN(1628)											countRanges = (countRanges + 1);
            										}
            										else {
HXLINE(1628)											Float width = ((Float)0.0);
HXDLIN(1628)											{
HXLINE(1628)												int _g = 0;
HXDLIN(1628)												while((_g < positions->length)){
HXLINE(1628)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1628)													_g = (_g + 1);
HXDLIN(1628)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1628)											widthValue = width;
HXDLIN(1628)											goto _hx_goto_98;
            										}
            									}
            									_hx_goto_98:;
HXDLIN(1628)									rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1628)									if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1628)										rangeIndex = (rangeIndex + 1);
HXDLIN(1628)										formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1628)										currentFormat->_hx___merge(formatRange->format);
HXDLIN(1628)										font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            									}
            								}
            							}
            						}
HXLINE(1629)						{
HXLINE(1629)							int endIndex1 = this->text.length;
HXDLIN(1629)							bool _hx_tmp;
HXDLIN(1629)							if ((_gthis->width >= 4)) {
HXLINE(1629)								_hx_tmp = _gthis->wordWrap;
            							}
            							else {
HXLINE(1629)								_hx_tmp = false;
            							}
HXDLIN(1629)							if (_hx_tmp) {
HXLINE(1629)								::Array< ::Dynamic> remainingPositions = positions;
HXDLIN(1629)								int bufferCount;
HXDLIN(1629)								int placeIndex;
HXDLIN(1629)								Float positionWidth;
HXDLIN(1629)								 ::openfl::text::_internal::GlyphPosition currentPosition;
HXDLIN(1629)								Float width = ((Float)0.0);
HXDLIN(1629)								{
HXLINE(1629)									int _g = 0;
HXDLIN(1629)									while((_g < remainingPositions->length)){
HXLINE(1629)										 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)										_g = (_g + 1);
HXDLIN(1629)										width = (width + position->advance->x);
            									}
            								}
HXDLIN(1629)								Float tempWidth = width;
HXDLIN(1629)								int i = (remainingPositions->length - 1);
HXDLIN(1629)								while((i >= 0)){
HXLINE(1629)									 ::Dynamic currentCharCode = _gthis->text.charCodeAt((textIndex + i));
HXDLIN(1629)									bool _hx_tmp;
HXDLIN(1629)									if (::hx::IsNotEq( currentCharCode,32 )) {
HXLINE(1629)										_hx_tmp = ::hx::IsNotEq( currentCharCode,9 );
            									}
            									else {
HXLINE(1629)										_hx_tmp = false;
            									}
HXDLIN(1629)									if (_hx_tmp) {
HXLINE(1629)										goto _hx_goto_101;
            									}
HXDLIN(1629)									 ::openfl::text::_internal::GlyphPosition position = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)									tempWidth = (tempWidth - position->advance->x);
HXDLIN(1629)									i = (i - 1);
            								}
            								_hx_goto_101:;
HXDLIN(1629)								while(true){
HXLINE(1629)									bool _hx_tmp;
HXDLIN(1629)									if ((remainingPositions->length > 0)) {
HXLINE(1629)										int _hx_tmp1;
HXDLIN(1629)										if (firstLineOfParagraph) {
HXLINE(1629)											_hx_tmp1 = indent;
            										}
            										else {
HXLINE(1629)											_hx_tmp1 = 0;
            										}
HXDLIN(1629)										_hx_tmp = ((offsetX + tempWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            									}
            									else {
HXLINE(1629)										_hx_tmp = false;
            									}
HXDLIN(1629)									if (!(_hx_tmp)) {
HXLINE(1629)										goto _hx_goto_102;
            									}
HXDLIN(1629)									bufferCount = 0;
HXDLIN(1629)									i = bufferCount;
HXDLIN(1629)									positionWidth = ((Float)0.0);
HXDLIN(1629)									while(true){
HXLINE(1629)										int _hx_tmp;
HXDLIN(1629)										if (firstLineOfParagraph) {
HXLINE(1629)											_hx_tmp = indent;
            										}
            										else {
HXLINE(1629)											_hx_tmp = 0;
            										}
HXDLIN(1629)										if (!(((offsetX + positionWidth) < (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp)) ))))) {
HXLINE(1629)											goto _hx_goto_103;
            										}
HXDLIN(1629)										currentPosition = remainingPositions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)										if ((currentPosition->advance->x == ((Float)0.0))) {
HXLINE(1629)											i = (i + 1);
HXDLIN(1629)											bufferCount = (bufferCount + 1);
            										}
            										else {
HXLINE(1629)											positionWidth = (positionWidth + currentPosition->advance->x);
HXDLIN(1629)											i = (i + 1);
            										}
            									}
            									_hx_goto_103:;
HXDLIN(1629)									if ((i == bufferCount)) {
HXLINE(1629)										i = (bufferCount + 1);
            									}
            									else {
HXLINE(1629)										while(true){
HXLINE(1629)											bool _hx_tmp;
HXDLIN(1629)											if ((i > 1)) {
HXLINE(1629)												int _hx_tmp1;
HXDLIN(1629)												if (firstLineOfParagraph) {
HXLINE(1629)													_hx_tmp1 = indent;
            												}
            												else {
HXLINE(1629)													_hx_tmp1 = 0;
            												}
HXDLIN(1629)												_hx_tmp = ((offsetX + positionWidth) > (((_gthis->width - ( (Float)(2) )) - ( (Float)(rightMargin) )) - ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) )));
            											}
            											else {
HXLINE(1629)												_hx_tmp = false;
            											}
HXDLIN(1629)											if (!(_hx_tmp)) {
HXLINE(1629)												goto _hx_goto_104;
            											}
HXDLIN(1629)											i = (i - 1);
HXDLIN(1629)											if (((i - bufferCount) > 0)) {
HXLINE(1629)												{
HXLINE(1629)													int endIndex = ((textIndex + i) - bufferCount);
HXDLIN(1629)													if ((textIndex >= endIndex)) {
HXLINE(1629)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1629)														widthValue = ( (Float)(0) );
            													}
            													else {
HXLINE(1629)														if ((endIndex <= formatRange->end)) {
HXLINE(1629)															::String text = _gthis->text;
HXDLIN(1629)															Float letterSpacing = ((Float)0.0);
HXDLIN(1629)															if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1629)																letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            															}
HXDLIN(1629)															if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1629)																_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            															}
HXDLIN(1629)															_gthis->_hx___textLayout->set_text(null());
HXDLIN(1629)															_gthis->_hx___textLayout->set_font(font);
HXDLIN(1629)															if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1629)																_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            															}
HXDLIN(1629)															_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1629)															bool positions1;
HXDLIN(1629)															if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1629)																positions1 = (_gthis->sharpness < 400);
            															}
            															else {
HXLINE(1629)																positions1 = true;
            															}
HXDLIN(1629)															_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1629)															 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1629)															_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1629)															if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1629)																positions = _gthis->_hx___textLayout->get_positions();
            															}
            															else {
HXLINE(1629)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            															}
HXDLIN(1629)															Float width = ((Float)0.0);
HXDLIN(1629)															{
HXLINE(1629)																int _g = 0;
HXDLIN(1629)																while((_g < positions->length)){
HXLINE(1629)																	 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)																	_g = (_g + 1);
HXDLIN(1629)																	width = (width + position->advance->x);
            																}
            															}
HXDLIN(1629)															widthValue = width;
            														}
            														else {
HXLINE(1629)															int tempIndex = textIndex;
HXDLIN(1629)															int tempRangeEnd = formatRange->end;
HXDLIN(1629)															int countRanges = 0;
HXDLIN(1629)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1629)															widthValue = ( (Float)(0) );
HXDLIN(1629)															while(true){
HXLINE(1629)																if ((tempIndex != tempRangeEnd)) {
HXLINE(1629)																	::String text = _gthis->text;
HXDLIN(1629)																	Float letterSpacing = ((Float)0.0);
HXDLIN(1629)																	if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1629)																		letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																	}
HXDLIN(1629)																	if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1629)																		_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																	}
HXDLIN(1629)																	_gthis->_hx___textLayout->set_text(null());
HXDLIN(1629)																	_gthis->_hx___textLayout->set_font(font);
HXDLIN(1629)																	if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1629)																		_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																	}
HXDLIN(1629)																	_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1629)																	bool _hx_tmp;
HXDLIN(1629)																	if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1629)																		_hx_tmp = (_gthis->sharpness < 400);
            																	}
            																	else {
HXLINE(1629)																		_hx_tmp = true;
            																	}
HXDLIN(1629)																	_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1629)																	 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1629)																	_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1629)																	::Array< ::Dynamic> tempPositions;
HXDLIN(1629)																	if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1629)																		tempPositions = _gthis->_hx___textLayout->get_positions();
            																	}
            																	else {
HXLINE(1629)																		tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																	}
HXDLIN(1629)																	positions = positions->concat(tempPositions);
            																}
HXDLIN(1629)																if ((tempRangeEnd != endIndex)) {
HXLINE(1629)																	bool _hx_tmp;
HXDLIN(1629)																	if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1629)																		rangeIndex = (rangeIndex + 1);
HXDLIN(1629)																		formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1629)																		currentFormat->_hx___merge(formatRange->format);
HXDLIN(1629)																		font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1629)																		_hx_tmp = true;
            																	}
            																	else {
HXLINE(1629)																		_hx_tmp = false;
            																	}
HXDLIN(1629)																	if (!(_hx_tmp)) {
HXLINE(1629)																		::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1629)																		goto _hx_goto_106;
            																	}
HXDLIN(1629)																	tempIndex = tempRangeEnd;
HXDLIN(1629)																	if ((endIndex < formatRange->end)) {
HXLINE(1629)																		tempRangeEnd = endIndex;
            																	}
            																	else {
HXLINE(1629)																		tempRangeEnd = formatRange->end;
            																	}
HXDLIN(1629)																	countRanges = (countRanges + 1);
            																}
            																else {
HXLINE(1629)																	Float width = ((Float)0.0);
HXDLIN(1629)																	{
HXLINE(1629)																		int _g = 0;
HXDLIN(1629)																		while((_g < positions->length)){
HXLINE(1629)																			 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)																			_g = (_g + 1);
HXDLIN(1629)																			width = (width + position->advance->x);
            																		}
            																	}
HXDLIN(1629)																	widthValue = width;
HXDLIN(1629)																	goto _hx_goto_106;
            																}
            															}
            															_hx_goto_106:;
HXDLIN(1629)															rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1629)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1629)																rangeIndex = (rangeIndex + 1);
HXDLIN(1629)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1629)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1629)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
            														}
            													}
            												}
HXDLIN(1629)												positionWidth = widthValue;
            											}
            											else {
HXLINE(1629)												i = 1;
HXDLIN(1629)												bufferCount = 0;
HXDLIN(1629)												{
HXLINE(1629)													int endIndex = (textIndex + 1);
HXDLIN(1629)													if ((textIndex >= endIndex)) {
HXLINE(1629)														positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1629)														widthValue = ( (Float)(0) );
            													}
            													else {
HXLINE(1629)														if ((endIndex <= formatRange->end)) {
HXLINE(1629)															::String text = _gthis->text;
HXDLIN(1629)															Float letterSpacing = ((Float)0.0);
HXDLIN(1629)															if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1629)																letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            															}
HXDLIN(1629)															if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1629)																_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            															}
HXDLIN(1629)															_gthis->_hx___textLayout->set_text(null());
HXDLIN(1629)															_gthis->_hx___textLayout->set_font(font);
HXDLIN(1629)															if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1629)																_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            															}
HXDLIN(1629)															_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1629)															bool positions1;
HXDLIN(1629)															if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1629)																positions1 = (_gthis->sharpness < 400);
            															}
            															else {
HXLINE(1629)																positions1 = true;
            															}
HXDLIN(1629)															_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1629)															 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1629)															_gthis1->set_text(text.substring(textIndex,endIndex));
HXDLIN(1629)															if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1629)																positions = _gthis->_hx___textLayout->get_positions();
            															}
            															else {
HXLINE(1629)																positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            															}
HXDLIN(1629)															Float width = ((Float)0.0);
HXDLIN(1629)															{
HXLINE(1629)																int _g = 0;
HXDLIN(1629)																while((_g < positions->length)){
HXLINE(1629)																	 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)																	_g = (_g + 1);
HXDLIN(1629)																	width = (width + position->advance->x);
            																}
            															}
HXDLIN(1629)															widthValue = width;
            														}
            														else {
HXLINE(1629)															int tempIndex = textIndex;
HXDLIN(1629)															int tempRangeEnd = formatRange->end;
HXDLIN(1629)															int countRanges = 0;
HXDLIN(1629)															positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1629)															widthValue = ( (Float)(0) );
HXDLIN(1629)															while(true){
HXLINE(1629)																if ((tempIndex != tempRangeEnd)) {
HXLINE(1629)																	::String text = _gthis->text;
HXDLIN(1629)																	Float letterSpacing = ((Float)0.0);
HXDLIN(1629)																	if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1629)																		letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            																	}
HXDLIN(1629)																	if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1629)																		_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            																	}
HXDLIN(1629)																	_gthis->_hx___textLayout->set_text(null());
HXDLIN(1629)																	_gthis->_hx___textLayout->set_font(font);
HXDLIN(1629)																	if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1629)																		_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            																	}
HXDLIN(1629)																	_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1629)																	bool _hx_tmp;
HXDLIN(1629)																	if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1629)																		_hx_tmp = (_gthis->sharpness < 400);
            																	}
            																	else {
HXLINE(1629)																		_hx_tmp = true;
            																	}
HXDLIN(1629)																	_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1629)																	 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1629)																	_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1629)																	::Array< ::Dynamic> tempPositions;
HXDLIN(1629)																	if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1629)																		tempPositions = _gthis->_hx___textLayout->get_positions();
            																	}
            																	else {
HXLINE(1629)																		tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            																	}
HXDLIN(1629)																	positions = positions->concat(tempPositions);
            																}
HXDLIN(1629)																if ((tempRangeEnd != endIndex)) {
HXLINE(1629)																	bool _hx_tmp;
HXDLIN(1629)																	if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1629)																		rangeIndex = (rangeIndex + 1);
HXDLIN(1629)																		formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1629)																		currentFormat->_hx___merge(formatRange->format);
HXDLIN(1629)																		font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1629)																		_hx_tmp = true;
            																	}
            																	else {
HXLINE(1629)																		_hx_tmp = false;
            																	}
HXDLIN(1629)																	if (!(_hx_tmp)) {
HXLINE(1629)																		::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1629)																		goto _hx_goto_109;
            																	}
HXDLIN(1629)																	tempIndex = tempRangeEnd;
HXDLIN(1629)																	if ((endIndex < formatRange->end)) {
HXLINE(1629)																		tempRangeEnd = endIndex;
            																	}
            																	else {
HXLINE(1629)																		tempRangeEnd = formatRange->end;
            																	}
HXDLIN(1629)																	countRanges = (countRanges + 1);
            																}
            																else {
HXLINE(1629)																	Float width = ((Float)0.0);
HXDLIN(1629)																	{
HXLINE(1629)																		int _g = 0;
HXDLIN(1629)																		while((_g < positions->length)){
HXLINE(1629)																			 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)																			_g = (_g + 1);
HXDLIN(1629)																			width = (width + position->advance->x);
            																		}
            																	}
HXDLIN(1629)																	widthValue = width;
HXDLIN(1629)																	goto _hx_goto_109;
            																}
            															}
            															_hx_goto_109:;
HXDLIN(1629)															rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1629)															if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1629)																rangeIndex = (rangeIndex + 1);
HXDLIN(1629)																formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1629)																currentFormat->_hx___merge(formatRange->format);
HXDLIN(1629)																font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            															}
            														}
            													}
            												}
HXDLIN(1629)												positionWidth = ( (Float)(0) );
            											}
            										}
            										_hx_goto_104:;
            									}
HXDLIN(1629)									placeIndex = ((textIndex + i) - bufferCount);
HXDLIN(1629)									{
HXLINE(1629)										if ((placeIndex <= formatRange->end)) {
HXLINE(1629)											::String text = _gthis->text;
HXDLIN(1629)											Float letterSpacing = ((Float)0.0);
HXDLIN(1629)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1629)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1629)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1629)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1629)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1629)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1629)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1629)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1629)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1629)											bool positions1;
HXDLIN(1629)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1629)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1629)												positions1 = true;
            											}
HXDLIN(1629)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1629)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1629)											_gthis1->set_text(text.substring(textIndex,placeIndex));
HXDLIN(1629)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1629)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1629)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1629)											Float width = ((Float)0.0);
HXDLIN(1629)											{
HXLINE(1629)												int _g = 0;
HXDLIN(1629)												while((_g < positions->length)){
HXLINE(1629)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)													_g = (_g + 1);
HXDLIN(1629)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1629)											widthValue = width;
HXDLIN(1629)											bool _hx_tmp;
HXDLIN(1629)											if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1629)												_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            											}
            											else {
HXLINE(1629)												_hx_tmp = true;
            											}
HXDLIN(1629)											if (_hx_tmp) {
HXLINE(1629)												layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,placeIndex);
HXDLIN(1629)												_gthis->layoutGroups->push(layoutGroup);
            											}
            											else {
HXLINE(1629)												layoutGroup->format = formatRange->format;
HXDLIN(1629)												layoutGroup->startIndex = textIndex;
HXDLIN(1629)												layoutGroup->endIndex = placeIndex;
            											}
HXDLIN(1629)											layoutGroup->positions = positions;
HXDLIN(1629)											int _hx_tmp1;
HXDLIN(1629)											if (firstLineOfParagraph) {
HXLINE(1629)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1629)												_hx_tmp1 = 0;
            											}
HXDLIN(1629)											layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1629)											layoutGroup->ascent = ascent;
HXDLIN(1629)											layoutGroup->descent = descent;
HXDLIN(1629)											layoutGroup->leading = leading;
HXDLIN(1629)											layoutGroup->lineIndex = lineIndex;
HXDLIN(1629)											layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1629)											layoutGroup->width = widthValue;
HXDLIN(1629)											layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1629)											offsetX = (offsetX + widthValue);
HXDLIN(1629)											if ((placeIndex == formatRange->end)) {
HXLINE(1629)												layoutGroup = null();
HXDLIN(1629)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1629)													rangeIndex = (rangeIndex + 1);
HXDLIN(1629)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1629)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1629)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            												}
HXDLIN(1629)												{
HXLINE(1629)													if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1629)														ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1629)														descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            													}
            													else {
HXLINE(1629)														bool _hx_tmp;
HXDLIN(1629)														if (::hx::IsNotNull( font )) {
HXLINE(1629)															_hx_tmp = (font->unitsPerEM != 0);
            														}
            														else {
HXLINE(1629)															_hx_tmp = false;
            														}
HXDLIN(1629)														if (_hx_tmp) {
HXLINE(1629)															ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1629)															descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            														}
            														else {
HXLINE(1629)															ascent = ( (Float)(currentFormat->size) );
HXDLIN(1629)															descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            														}
            													}
HXDLIN(1629)													leading = ( (int)(currentFormat->leading) );
HXDLIN(1629)													heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1629)													if ((heightValue > maxHeightValue)) {
HXLINE(1629)														maxHeightValue = heightValue;
            													}
HXDLIN(1629)													if ((ascent > maxAscent)) {
HXLINE(1629)														maxAscent = ascent;
            													}
            												}
            											}
            										}
            										else {
HXLINE(1629)											while(true){
HXLINE(1629)												int tempRangeEnd;
HXDLIN(1629)												if ((placeIndex < formatRange->end)) {
HXLINE(1629)													tempRangeEnd = placeIndex;
            												}
            												else {
HXLINE(1629)													tempRangeEnd = formatRange->end;
            												}
HXDLIN(1629)												if ((textIndex != tempRangeEnd)) {
HXLINE(1629)													::String text = _gthis->text;
HXDLIN(1629)													Float letterSpacing = ((Float)0.0);
HXDLIN(1629)													if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1629)														letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            													}
HXDLIN(1629)													if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1629)														_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            													}
HXDLIN(1629)													_gthis->_hx___textLayout->set_text(null());
HXDLIN(1629)													_gthis->_hx___textLayout->set_font(font);
HXDLIN(1629)													if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1629)														_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            													}
HXDLIN(1629)													_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1629)													bool positions1;
HXDLIN(1629)													if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1629)														positions1 = (_gthis->sharpness < 400);
            													}
            													else {
HXLINE(1629)														positions1 = true;
            													}
HXDLIN(1629)													_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1629)													 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1629)													_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1629)													if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1629)														positions = _gthis->_hx___textLayout->get_positions();
            													}
            													else {
HXLINE(1629)														positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            													}
HXDLIN(1629)													Float width = ((Float)0.0);
HXDLIN(1629)													{
HXLINE(1629)														int _g = 0;
HXDLIN(1629)														while((_g < positions->length)){
HXLINE(1629)															 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)															_g = (_g + 1);
HXDLIN(1629)															width = (width + position->advance->x);
            														}
            													}
HXDLIN(1629)													widthValue = width;
HXDLIN(1629)													bool _hx_tmp;
HXDLIN(1629)													if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1629)														_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            													}
            													else {
HXLINE(1629)														_hx_tmp = true;
            													}
HXDLIN(1629)													if (_hx_tmp) {
HXLINE(1629)														layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1629)														_gthis->layoutGroups->push(layoutGroup);
            													}
            													else {
HXLINE(1629)														layoutGroup->format = formatRange->format;
HXDLIN(1629)														layoutGroup->startIndex = textIndex;
HXDLIN(1629)														layoutGroup->endIndex = tempRangeEnd;
            													}
HXDLIN(1629)													layoutGroup->positions = positions;
HXDLIN(1629)													int _hx_tmp1;
HXDLIN(1629)													if (firstLineOfParagraph) {
HXLINE(1629)														_hx_tmp1 = indent;
            													}
            													else {
HXLINE(1629)														_hx_tmp1 = 0;
            													}
HXDLIN(1629)													layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1629)													layoutGroup->ascent = ascent;
HXDLIN(1629)													layoutGroup->descent = descent;
HXDLIN(1629)													layoutGroup->leading = leading;
HXDLIN(1629)													layoutGroup->lineIndex = lineIndex;
HXDLIN(1629)													layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1629)													layoutGroup->width = widthValue;
HXDLIN(1629)													layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1629)													offsetX = (offsetX + widthValue);
HXDLIN(1629)													textIndex = tempRangeEnd;
            												}
HXDLIN(1629)												if ((tempRangeEnd == formatRange->end)) {
HXLINE(1629)													layoutGroup = null();
            												}
HXDLIN(1629)												if ((tempRangeEnd == placeIndex)) {
HXLINE(1629)													goto _hx_goto_112;
            												}
HXDLIN(1629)												bool _hx_tmp;
HXDLIN(1629)												if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1629)													rangeIndex = (rangeIndex + 1);
HXDLIN(1629)													formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1629)													currentFormat->_hx___merge(formatRange->format);
HXDLIN(1629)													font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1629)													_hx_tmp = true;
            												}
            												else {
HXLINE(1629)													_hx_tmp = false;
            												}
HXDLIN(1629)												if (!(_hx_tmp)) {
HXLINE(1629)													::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1184,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1629)													goto _hx_goto_112;
            												}
HXDLIN(1629)												{
HXLINE(1629)													if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1629)														ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1629)														descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            													}
            													else {
HXLINE(1629)														bool _hx_tmp;
HXDLIN(1629)														if (::hx::IsNotNull( font )) {
HXLINE(1629)															_hx_tmp = (font->unitsPerEM != 0);
            														}
            														else {
HXLINE(1629)															_hx_tmp = false;
            														}
HXDLIN(1629)														if (_hx_tmp) {
HXLINE(1629)															ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1629)															descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            														}
            														else {
HXLINE(1629)															ascent = ( (Float)(currentFormat->size) );
HXDLIN(1629)															descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            														}
            													}
HXDLIN(1629)													leading = ( (int)(currentFormat->leading) );
HXDLIN(1629)													heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1629)													if ((heightValue > maxHeightValue)) {
HXLINE(1629)														maxHeightValue = heightValue;
            													}
HXDLIN(1629)													if ((ascent > maxAscent)) {
HXLINE(1629)														maxAscent = ascent;
            													}
            												}
            											}
            											_hx_goto_112:;
            										}
HXDLIN(1629)										textIndex = placeIndex;
            									}
HXDLIN(1629)									{
HXLINE(1629)										{
HXLINE(1629)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1629)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1629)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1629)												bool _hx_tmp;
HXDLIN(1629)												if (::hx::IsNotNull( font )) {
HXLINE(1629)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1629)													_hx_tmp = false;
            												}
HXDLIN(1629)												if (_hx_tmp) {
HXLINE(1629)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1629)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1629)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1629)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1629)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1629)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1629)											if ((heightValue > maxHeightValue)) {
HXLINE(1629)												maxHeightValue = heightValue;
            											}
HXDLIN(1629)											if ((ascent > maxAscent)) {
HXLINE(1629)												maxAscent = ascent;
            											}
            										}
HXDLIN(1629)										int i1 = _gthis->layoutGroups->get_length();
HXDLIN(1629)										while(true){
HXLINE(1629)											i1 = (i1 - 1);
HXDLIN(1629)											if (!((i1 > -1))) {
HXLINE(1629)												goto _hx_goto_114;
            											}
HXDLIN(1629)											 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i1).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1629)											if ((lg->lineIndex < lineIndex)) {
HXLINE(1629)												goto _hx_goto_114;
            											}
HXDLIN(1629)											if ((lg->lineIndex > lineIndex)) {
HXLINE(1629)												continue;
            											}
HXDLIN(1629)											lg->ascent = maxAscent;
HXDLIN(1629)											lg->height = ( (Float)(maxHeightValue) );
            										}
            										_hx_goto_114:;
HXDLIN(1629)										offsetY = (offsetY + maxHeightValue);
HXDLIN(1629)										maxAscent = ((Float)0.0);
HXDLIN(1629)										maxHeightValue = 0;
HXDLIN(1629)										lineIndex = (lineIndex + 1);
HXDLIN(1629)										offsetX = ( (Float)(0) );
HXDLIN(1629)										firstLineOfParagraph = false;
            									}
HXDLIN(1629)									if ((placeIndex >= endIndex1)) {
HXLINE(1629)										positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1629)										widthValue = ( (Float)(0) );
            									}
            									else {
HXLINE(1629)										if ((endIndex1 <= formatRange->end)) {
HXLINE(1629)											::String text = _gthis->text;
HXDLIN(1629)											Float letterSpacing = ((Float)0.0);
HXDLIN(1629)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1629)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1629)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1629)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1629)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1629)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1629)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1629)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1629)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1629)											bool positions1;
HXDLIN(1629)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1629)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1629)												positions1 = true;
            											}
HXDLIN(1629)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1629)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1629)											_gthis1->set_text(text.substring(placeIndex,endIndex1));
HXDLIN(1629)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1629)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1629)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1629)											Float width = ((Float)0.0);
HXDLIN(1629)											{
HXLINE(1629)												int _g = 0;
HXDLIN(1629)												while((_g < positions->length)){
HXLINE(1629)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)													_g = (_g + 1);
HXDLIN(1629)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1629)											widthValue = width;
            										}
            										else {
HXLINE(1629)											int tempIndex = placeIndex;
HXDLIN(1629)											int tempRangeEnd = formatRange->end;
HXDLIN(1629)											int countRanges = 0;
HXDLIN(1629)											positions = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(1629)											widthValue = ( (Float)(0) );
HXDLIN(1629)											while(true){
HXLINE(1629)												if ((tempIndex != tempRangeEnd)) {
HXLINE(1629)													::String text = _gthis->text;
HXDLIN(1629)													Float letterSpacing = ((Float)0.0);
HXDLIN(1629)													if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1629)														letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            													}
HXDLIN(1629)													if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1629)														_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            													}
HXDLIN(1629)													_gthis->_hx___textLayout->set_text(null());
HXDLIN(1629)													_gthis->_hx___textLayout->set_font(font);
HXDLIN(1629)													if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1629)														_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            													}
HXDLIN(1629)													_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1629)													bool _hx_tmp;
HXDLIN(1629)													if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1629)														_hx_tmp = (_gthis->sharpness < 400);
            													}
            													else {
HXLINE(1629)														_hx_tmp = true;
            													}
HXDLIN(1629)													_gthis->_hx___textLayout->autoHint = _hx_tmp;
HXDLIN(1629)													 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1629)													_gthis1->set_text(text.substring(tempIndex,tempRangeEnd));
HXDLIN(1629)													::Array< ::Dynamic> tempPositions;
HXDLIN(1629)													if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1629)														tempPositions = _gthis->_hx___textLayout->get_positions();
            													}
            													else {
HXLINE(1629)														tempPositions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            													}
HXDLIN(1629)													positions = positions->concat(tempPositions);
            												}
HXDLIN(1629)												if ((tempRangeEnd != endIndex1)) {
HXLINE(1629)													bool _hx_tmp;
HXDLIN(1629)													if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1629)														rangeIndex = (rangeIndex + 1);
HXDLIN(1629)														formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1629)														currentFormat->_hx___merge(formatRange->format);
HXDLIN(1629)														font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1629)														_hx_tmp = true;
            													}
            													else {
HXLINE(1629)														_hx_tmp = false;
            													}
HXDLIN(1629)													if (!(_hx_tmp)) {
HXLINE(1629)														::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1096,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1629)														goto _hx_goto_116;
            													}
HXDLIN(1629)													tempIndex = tempRangeEnd;
HXDLIN(1629)													if ((endIndex1 < formatRange->end)) {
HXLINE(1629)														tempRangeEnd = endIndex1;
            													}
            													else {
HXLINE(1629)														tempRangeEnd = formatRange->end;
            													}
HXDLIN(1629)													countRanges = (countRanges + 1);
            												}
            												else {
HXLINE(1629)													Float width = ((Float)0.0);
HXDLIN(1629)													{
HXLINE(1629)														int _g = 0;
HXDLIN(1629)														while((_g < positions->length)){
HXLINE(1629)															 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)															_g = (_g + 1);
HXDLIN(1629)															width = (width + position->advance->x);
            														}
            													}
HXDLIN(1629)													widthValue = width;
HXDLIN(1629)													goto _hx_goto_116;
            												}
            											}
            											_hx_goto_116:;
HXDLIN(1629)											rangeIndex = (rangeIndex - (countRanges + 1));
HXDLIN(1629)											if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1629)												rangeIndex = (rangeIndex + 1);
HXDLIN(1629)												formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1629)												currentFormat->_hx___merge(formatRange->format);
HXDLIN(1629)												font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            											}
            										}
            									}
HXDLIN(1629)									remainingPositions = positions;
HXDLIN(1629)									tempWidth = widthValue;
            								}
            								_hx_goto_102:;
            							}
HXDLIN(1629)							{
HXLINE(1629)								if ((endIndex1 <= formatRange->end)) {
HXLINE(1629)									::String text = _gthis->text;
HXDLIN(1629)									Float letterSpacing = ((Float)0.0);
HXDLIN(1629)									if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1629)										letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            									}
HXDLIN(1629)									if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1629)										_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            									}
HXDLIN(1629)									_gthis->_hx___textLayout->set_text(null());
HXDLIN(1629)									_gthis->_hx___textLayout->set_font(font);
HXDLIN(1629)									if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1629)										_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            									}
HXDLIN(1629)									_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1629)									bool positions1;
HXDLIN(1629)									if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1629)										positions1 = (_gthis->sharpness < 400);
            									}
            									else {
HXLINE(1629)										positions1 = true;
            									}
HXDLIN(1629)									_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1629)									 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1629)									_gthis1->set_text(text.substring(textIndex,endIndex1));
HXDLIN(1629)									if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1629)										positions = _gthis->_hx___textLayout->get_positions();
            									}
            									else {
HXLINE(1629)										positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            									}
HXDLIN(1629)									Float width = ((Float)0.0);
HXDLIN(1629)									{
HXLINE(1629)										int _g = 0;
HXDLIN(1629)										while((_g < positions->length)){
HXLINE(1629)											 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)											_g = (_g + 1);
HXDLIN(1629)											width = (width + position->advance->x);
            										}
            									}
HXDLIN(1629)									widthValue = width;
HXDLIN(1629)									bool _hx_tmp;
HXDLIN(1629)									if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1629)										_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            									}
            									else {
HXLINE(1629)										_hx_tmp = true;
            									}
HXDLIN(1629)									if (_hx_tmp) {
HXLINE(1629)										layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,endIndex1);
HXDLIN(1629)										_gthis->layoutGroups->push(layoutGroup);
            									}
            									else {
HXLINE(1629)										layoutGroup->format = formatRange->format;
HXDLIN(1629)										layoutGroup->startIndex = textIndex;
HXDLIN(1629)										layoutGroup->endIndex = endIndex1;
            									}
HXDLIN(1629)									layoutGroup->positions = positions;
HXDLIN(1629)									int _hx_tmp1;
HXDLIN(1629)									if (firstLineOfParagraph) {
HXLINE(1629)										_hx_tmp1 = indent;
            									}
            									else {
HXLINE(1629)										_hx_tmp1 = 0;
            									}
HXDLIN(1629)									layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1629)									layoutGroup->ascent = ascent;
HXDLIN(1629)									layoutGroup->descent = descent;
HXDLIN(1629)									layoutGroup->leading = leading;
HXDLIN(1629)									layoutGroup->lineIndex = lineIndex;
HXDLIN(1629)									layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1629)									layoutGroup->width = widthValue;
HXDLIN(1629)									layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1629)									offsetX = (offsetX + widthValue);
HXDLIN(1629)									if ((endIndex1 == formatRange->end)) {
HXLINE(1629)										layoutGroup = null();
HXDLIN(1629)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1629)											rangeIndex = (rangeIndex + 1);
HXDLIN(1629)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1629)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1629)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
            										}
HXDLIN(1629)										{
HXLINE(1629)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1629)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1629)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1629)												bool _hx_tmp;
HXDLIN(1629)												if (::hx::IsNotNull( font )) {
HXLINE(1629)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1629)													_hx_tmp = false;
            												}
HXDLIN(1629)												if (_hx_tmp) {
HXLINE(1629)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1629)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1629)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1629)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1629)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1629)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1629)											if ((heightValue > maxHeightValue)) {
HXLINE(1629)												maxHeightValue = heightValue;
            											}
HXDLIN(1629)											if ((ascent > maxAscent)) {
HXLINE(1629)												maxAscent = ascent;
            											}
            										}
            									}
            								}
            								else {
HXLINE(1629)									while(true){
HXLINE(1629)										int tempRangeEnd;
HXDLIN(1629)										if ((endIndex1 < formatRange->end)) {
HXLINE(1629)											tempRangeEnd = endIndex1;
            										}
            										else {
HXLINE(1629)											tempRangeEnd = formatRange->end;
            										}
HXDLIN(1629)										if ((textIndex != tempRangeEnd)) {
HXLINE(1629)											::String text = _gthis->text;
HXDLIN(1629)											Float letterSpacing = ((Float)0.0);
HXDLIN(1629)											if (::hx::IsNotNull( formatRange->format->letterSpacing )) {
HXLINE(1629)												letterSpacing = ( (Float)(formatRange->format->letterSpacing) );
            											}
HXDLIN(1629)											if (::hx::IsNull( _gthis->_hx___textLayout )) {
HXLINE(1629)												_gthis->_hx___textLayout =  ::openfl::text::_internal::TextLayout_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            											}
HXDLIN(1629)											_gthis->_hx___textLayout->set_text(null());
HXDLIN(1629)											_gthis->_hx___textLayout->set_font(font);
HXDLIN(1629)											if (::hx::IsNotNull( formatRange->format->size )) {
HXLINE(1629)												_gthis->_hx___textLayout->set_size(( (int)(formatRange->format->size) ));
            											}
HXDLIN(1629)											_gthis->_hx___textLayout->letterSpacing = letterSpacing;
HXDLIN(1629)											bool positions1;
HXDLIN(1629)											if (::hx::IsEq( _gthis->antiAliasType,0 )) {
HXLINE(1629)												positions1 = (_gthis->sharpness < 400);
            											}
            											else {
HXLINE(1629)												positions1 = true;
            											}
HXDLIN(1629)											_gthis->_hx___textLayout->autoHint = positions1;
HXDLIN(1629)											 ::openfl::text::_internal::TextLayout _gthis1 = _gthis->_hx___textLayout;
HXDLIN(1629)											_gthis1->set_text(text.substring(textIndex,tempRangeEnd));
HXDLIN(1629)											if (::hx::IsEq( currentFormat->align,2 )) {
HXLINE(1629)												positions = _gthis->_hx___textLayout->get_positions();
            											}
            											else {
HXLINE(1629)												positions = _gthis->_hx___shapeCache->cache(formatRange,_gthis->_hx___textLayout);
            											}
HXDLIN(1629)											Float width = ((Float)0.0);
HXDLIN(1629)											{
HXLINE(1629)												int _g = 0;
HXDLIN(1629)												while((_g < positions->length)){
HXLINE(1629)													 ::openfl::text::_internal::GlyphPosition position = positions->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN(1629)													_g = (_g + 1);
HXDLIN(1629)													width = (width + position->advance->x);
            												}
            											}
HXDLIN(1629)											widthValue = width;
HXDLIN(1629)											bool _hx_tmp;
HXDLIN(1629)											if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1629)												_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            											}
            											else {
HXLINE(1629)												_hx_tmp = true;
            											}
HXDLIN(1629)											if (_hx_tmp) {
HXLINE(1629)												layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,textIndex,tempRangeEnd);
HXDLIN(1629)												_gthis->layoutGroups->push(layoutGroup);
            											}
            											else {
HXLINE(1629)												layoutGroup->format = formatRange->format;
HXDLIN(1629)												layoutGroup->startIndex = textIndex;
HXDLIN(1629)												layoutGroup->endIndex = tempRangeEnd;
            											}
HXDLIN(1629)											layoutGroup->positions = positions;
HXDLIN(1629)											int _hx_tmp1;
HXDLIN(1629)											if (firstLineOfParagraph) {
HXLINE(1629)												_hx_tmp1 = indent;
            											}
            											else {
HXLINE(1629)												_hx_tmp1 = 0;
            											}
HXDLIN(1629)											layoutGroup->offsetX = (offsetX + ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) ));
HXDLIN(1629)											layoutGroup->ascent = ascent;
HXDLIN(1629)											layoutGroup->descent = descent;
HXDLIN(1629)											layoutGroup->leading = leading;
HXDLIN(1629)											layoutGroup->lineIndex = lineIndex;
HXDLIN(1629)											layoutGroup->offsetY = (offsetY + 2);
HXDLIN(1629)											layoutGroup->width = widthValue;
HXDLIN(1629)											layoutGroup->height = ( (Float)(heightValue) );
HXDLIN(1629)											offsetX = (offsetX + widthValue);
HXDLIN(1629)											textIndex = tempRangeEnd;
            										}
HXDLIN(1629)										if ((tempRangeEnd == formatRange->end)) {
HXLINE(1629)											layoutGroup = null();
            										}
HXDLIN(1629)										if ((tempRangeEnd == endIndex1)) {
HXLINE(1629)											goto _hx_goto_119;
            										}
HXDLIN(1629)										bool _hx_tmp;
HXDLIN(1629)										if ((rangeIndex < (_gthis->textFormatRanges->get_length() - 1))) {
HXLINE(1629)											rangeIndex = (rangeIndex + 1);
HXDLIN(1629)											formatRange = _gthis->textFormatRanges->get(rangeIndex).StaticCast<  ::openfl::text::_internal::TextFormatRange >();
HXDLIN(1629)											currentFormat->_hx___merge(formatRange->format);
HXDLIN(1629)											font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(currentFormat);
HXDLIN(1629)											_hx_tmp = true;
            										}
            										else {
HXLINE(1629)											_hx_tmp = false;
            										}
HXDLIN(1629)										if (!(_hx_tmp)) {
HXLINE(1629)											::lime::utils::Log_obj::warn(HX_("You found a bug in OpenFL's text code! Please save a copy of your project and contact Joshua Granick (@singmajesty) so we can fix this.",08,e2,e2,42),::hx::SourceInfo(HX_("openfl/text/_internal/TextEngine.hx",39,18,5e,b8),1184,HX_("openfl.text._internal.TextEngine",04,88,80,7e),HX_("getLayoutGroups",54,f8,56,5a)));
HXDLIN(1629)											goto _hx_goto_119;
            										}
HXDLIN(1629)										{
HXLINE(1629)											if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1629)												ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1629)												descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            											}
            											else {
HXLINE(1629)												bool _hx_tmp;
HXDLIN(1629)												if (::hx::IsNotNull( font )) {
HXLINE(1629)													_hx_tmp = (font->unitsPerEM != 0);
            												}
            												else {
HXLINE(1629)													_hx_tmp = false;
            												}
HXDLIN(1629)												if (_hx_tmp) {
HXLINE(1629)													ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1629)													descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            												}
            												else {
HXLINE(1629)													ascent = ( (Float)(currentFormat->size) );
HXDLIN(1629)													descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            												}
            											}
HXDLIN(1629)											leading = ( (int)(currentFormat->leading) );
HXDLIN(1629)											heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1629)											if ((heightValue > maxHeightValue)) {
HXLINE(1629)												maxHeightValue = heightValue;
            											}
HXDLIN(1629)											if ((ascent > maxAscent)) {
HXLINE(1629)												maxAscent = ascent;
            											}
            										}
            									}
            									_hx_goto_119:;
            								}
HXDLIN(1629)								textIndex = endIndex1;
            							}
            						}
HXLINE(1631)						{
HXLINE(1631)							{
HXLINE(1631)								if (::hx::IsNotNull( currentFormat->_hx___ascent )) {
HXLINE(1631)									ascent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___ascent) ));
HXDLIN(1631)									descent = (( (Float)(currentFormat->size) ) * ( (Float)(currentFormat->_hx___descent) ));
            								}
            								else {
HXLINE(1631)									bool _hx_tmp;
HXDLIN(1631)									if (::hx::IsNotNull( font )) {
HXLINE(1631)										_hx_tmp = (font->unitsPerEM != 0);
            									}
            									else {
HXLINE(1631)										_hx_tmp = false;
            									}
HXDLIN(1631)									if (_hx_tmp) {
HXLINE(1631)										ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) ));
HXDLIN(1631)										descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(currentFormat->size) )));
            									}
            									else {
HXLINE(1631)										ascent = ( (Float)(currentFormat->size) );
HXDLIN(1631)										descent = (( (Float)(currentFormat->size) ) * ((Float)0.185));
            									}
            								}
HXDLIN(1631)								leading = ( (int)(currentFormat->leading) );
HXDLIN(1631)								heightValue = ::Math_obj::ceil(((ascent + descent) + leading));
HXDLIN(1631)								if ((heightValue > maxHeightValue)) {
HXLINE(1631)									maxHeightValue = heightValue;
            								}
HXDLIN(1631)								if ((ascent > maxAscent)) {
HXLINE(1631)									maxAscent = ascent;
            								}
            							}
HXDLIN(1631)							int i = _gthis->layoutGroups->get_length();
HXDLIN(1631)							while(true){
HXLINE(1631)								i = (i - 1);
HXDLIN(1631)								if (!((i > -1))) {
HXLINE(1631)									goto _hx_goto_121;
            								}
HXDLIN(1631)								 ::openfl::text::_internal::TextLayoutGroup lg = _gthis->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1631)								if ((lg->lineIndex < lineIndex)) {
HXLINE(1631)									goto _hx_goto_121;
            								}
HXDLIN(1631)								if ((lg->lineIndex > lineIndex)) {
HXLINE(1631)									continue;
            								}
HXDLIN(1631)								lg->ascent = maxAscent;
HXDLIN(1631)								lg->height = ( (Float)(maxHeightValue) );
            							}
            							_hx_goto_121:;
HXDLIN(1631)							offsetY = (offsetY + maxHeightValue);
HXDLIN(1631)							maxAscent = ((Float)0.0);
HXDLIN(1631)							maxHeightValue = 0;
HXDLIN(1631)							lineIndex = (lineIndex + 1);
HXDLIN(1631)							offsetX = ( (Float)(0) );
HXDLIN(1631)							firstLineOfParagraph = false;
            						}
            					}
HXLINE(1634)					textIndex = (textIndex + 1);
            				}
            			}
            		}
HXLINE(1639)		bool _hx_tmp3;
HXDLIN(1639)		if ((previousBreakIndex == (textIndex - 2))) {
HXLINE(1639)			_hx_tmp3 = (previousBreakIndex > -1);
            		}
            		else {
HXLINE(1639)			_hx_tmp3 = false;
            		}
HXDLIN(1639)		if (_hx_tmp3) {
HXLINE(1641)			{
HXLINE(1641)				int startIndex = (textIndex - 1);
HXDLIN(1641)				int endIndex = (textIndex - 1);
HXDLIN(1641)				bool _hx_tmp;
HXDLIN(1641)				if (::hx::IsNotNull( layoutGroup )) {
HXLINE(1641)					_hx_tmp = (layoutGroup->startIndex != layoutGroup->endIndex);
            				}
            				else {
HXLINE(1641)					_hx_tmp = true;
            				}
HXDLIN(1641)				if (_hx_tmp) {
HXLINE(1641)					layoutGroup =  ::openfl::text::_internal::TextLayoutGroup_obj::__alloc( HX_CTX ,formatRange->format,startIndex,endIndex);
HXDLIN(1641)					_gthis->layoutGroups->push(layoutGroup);
            				}
            				else {
HXLINE(1641)					layoutGroup->format = formatRange->format;
HXDLIN(1641)					layoutGroup->startIndex = startIndex;
HXDLIN(1641)					layoutGroup->endIndex = endIndex;
            				}
            			}
HXLINE(1643)			layoutGroup->positions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1644)			layoutGroup->ascent = ascent;
HXLINE(1645)			layoutGroup->descent = descent;
HXLINE(1646)			layoutGroup->leading = leading;
HXLINE(1647)			layoutGroup->lineIndex = lineIndex;
HXLINE(1648)			int _hx_tmp1;
HXDLIN(1648)			if (firstLineOfParagraph) {
HXLINE(1648)				_hx_tmp1 = indent;
            			}
            			else {
HXLINE(1648)				_hx_tmp1 = 0;
            			}
HXDLIN(1648)			layoutGroup->offsetX = ( (Float)((((2 + leftMargin) + blockIndent) + _hx_tmp1)) );
HXLINE(1649)			layoutGroup->offsetY = (offsetY + 2);
HXLINE(1650)			layoutGroup->width = ( (Float)(0) );
HXLINE(1651)			layoutGroup->height = ( (Float)(heightValue) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLayoutGroups,(void))

::String TextEngine_obj::restrictText(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1675_restrictText)
HXLINE(1676)		if (::hx::IsNull( value )) {
HXLINE(1678)			return value;
            		}
HXLINE(1681)		if (::hx::IsNotNull( this->_hx___restrictRegexp )) {
HXLINE(1683)			value = this->_hx___restrictRegexp->split(value)->join(HX_("",00,00,00,00));
            		}
HXLINE(1692)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,restrictText,return )

void TextEngine_obj::setTextAlignment(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1696_setTextAlignment)
HXLINE(1697)		int lineIndex = -1;
HXLINE(1698)		Float offsetX = ((Float)0.0);
HXLINE(1699)		Float totalWidth = (this->width - ( (Float)(4) ));
HXLINE(1700)		 ::openfl::text::_internal::TextLayoutGroup group;
HXDLIN(1700)		int lineLength;
HXLINE(1701)		bool lineMeasurementsDirty = false;
HXLINE(1703)		{
HXLINE(1703)			int _g = 0;
HXDLIN(1703)			int _g1 = this->layoutGroups->get_length();
HXDLIN(1703)			while((_g < _g1)){
HXLINE(1703)				_g = (_g + 1);
HXDLIN(1703)				int i = (_g - 1);
HXLINE(1705)				group = this->layoutGroups->get(i).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1707)				if ((group->lineIndex != lineIndex)) {
HXLINE(1709)					lineIndex = group->lineIndex;
HXLINE(1710)					totalWidth = ((this->width - ( (Float)(4) )) - ( (Float)(group->format->rightMargin) ));
HXLINE(1712)					 ::Dynamic _hx_switch_0 = group->format->align;
            					if (  (_hx_switch_0==0) ){
HXLINE(1715)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1717)							offsetX = ( (Float)(::Math_obj::round(((totalWidth - this->lineWidths->get(lineIndex)) / ( (Float)(2) )))) );
            						}
            						else {
HXLINE(1721)							offsetX = ( (Float)(0) );
            						}
HXLINE(1715)						goto _hx_goto_125;
            					}
            					if (  (_hx_switch_0==2) ){
HXLINE(1735)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1737)							lineLength = 1;
HXLINE(1739)							{
HXLINE(1739)								int _g = (i + 1);
HXDLIN(1739)								int _g1 = this->layoutGroups->get_length();
HXDLIN(1739)								while((_g < _g1)){
HXLINE(1739)									_g = (_g + 1);
HXDLIN(1739)									int j = (_g - 1);
HXLINE(1741)									if ((this->layoutGroups->get(j).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->lineIndex == lineIndex)) {
HXLINE(1743)										bool _hx_tmp;
HXDLIN(1743)										if ((j != 0)) {
HXLINE(1743)											::String _hx_tmp1 = this->text;
HXDLIN(1743)											_hx_tmp = ::hx::IsEq( _hx_tmp1.charCodeAt((this->layoutGroups->get(j).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >()->startIndex - 1)),32 );
            										}
            										else {
HXLINE(1743)											_hx_tmp = true;
            										}
HXDLIN(1743)										if (_hx_tmp) {
HXLINE(1745)											lineLength = (lineLength + 1);
            										}
            									}
            									else {
HXLINE(1750)										goto _hx_goto_126;
            									}
            								}
            								_hx_goto_126:;
            							}
HXLINE(1754)							if ((lineLength > 1)) {
HXLINE(1756)								group = this->layoutGroups->get(((i + lineLength) - 1)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXLINE(1758)								 ::Dynamic endChar = this->text.charCodeAt(group->endIndex);
HXLINE(1759)								bool _hx_tmp;
HXDLIN(1759)								bool _hx_tmp1;
HXDLIN(1759)								if ((group->endIndex < this->text.length)) {
HXLINE(1759)									_hx_tmp1 = ::hx::IsNotEq( endChar,10 );
            								}
            								else {
HXLINE(1759)									_hx_tmp1 = false;
            								}
HXDLIN(1759)								if (_hx_tmp1) {
HXLINE(1759)									_hx_tmp = ::hx::IsNotEq( endChar,13 );
            								}
            								else {
HXLINE(1759)									_hx_tmp = false;
            								}
HXDLIN(1759)								if (_hx_tmp) {
HXLINE(1761)									offsetX = ((totalWidth - this->lineWidths->get(lineIndex)) / ( (Float)((lineLength - 1)) ));
HXLINE(1762)									lineMeasurementsDirty = true;
HXLINE(1764)									int j = 1;
HXLINE(1765)									while(true){
HXLINE(1774)										 ::openfl::text::_internal::TextLayoutGroup fh = this->layoutGroups->get((i + j)).StaticCast<  ::openfl::text::_internal::TextLayoutGroup >();
HXDLIN(1774)										fh->offsetX = (fh->offsetX + (offsetX * ( (Float)(j) )));
HXLINE(1776)										j = (j + 1);
HXLINE(1765)										if (!((j < lineLength))) {
HXLINE(1765)											goto _hx_goto_127;
            										}
            									}
            									_hx_goto_127:;
            								}
            							}
            						}
HXLINE(1781)						offsetX = ( (Float)(0) );
HXLINE(1734)						goto _hx_goto_125;
            					}
            					if (  (_hx_switch_0==4) ){
HXLINE(1725)						if ((this->lineWidths->get(lineIndex) < totalWidth)) {
HXLINE(1727)							offsetX = ( (Float)(::Math_obj::round((totalWidth - this->lineWidths->get(lineIndex)))) );
            						}
            						else {
HXLINE(1731)							offsetX = ( (Float)(0) );
            						}
HXLINE(1725)						goto _hx_goto_125;
            					}
            					/* default */{
HXLINE(1784)						offsetX = ( (Float)(0) );
            					}
            					_hx_goto_125:;
            				}
HXLINE(1788)				if ((offsetX > 0)) {
HXLINE(1790)					 ::openfl::text::_internal::TextLayoutGroup group1 = group;
HXDLIN(1790)					group1->offsetX = (group1->offsetX + offsetX);
            				}
            			}
            		}
HXLINE(1794)		if (lineMeasurementsDirty) {
HXLINE(1798)			this->getLineMeasurements();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,setTextAlignment,(void))

::String TextEngine_obj::trimText(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1803_trimText)
HXLINE(1804)		if (::hx::IsNull( value )) {
HXLINE(1806)			return value;
            		}
HXLINE(1809)		bool _hx_tmp;
HXDLIN(1809)		if ((this->maxChars > 0)) {
HXLINE(1809)			_hx_tmp = (value.length > this->maxChars);
            		}
            		else {
HXLINE(1809)			_hx_tmp = false;
            		}
HXDLIN(1809)		if (_hx_tmp) {
HXLINE(1811)			value = value.substr(0,this->maxChars);
            		}
HXLINE(1814)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,trimText,return )

void TextEngine_obj::update(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1818_update)
HXLINE(1819)		bool _hx_tmp;
HXDLIN(1819)		if (::hx::IsNotNull( this->text )) {
HXLINE(1819)			_hx_tmp = (this->textFormatRanges->get_length() == 0);
            		}
            		else {
HXLINE(1819)			_hx_tmp = true;
            		}
HXDLIN(1819)		if (_hx_tmp) {
HXLINE(1821)			this->lineAscents->set_length(0);
HXLINE(1822)			this->lineBreaks->set_length(0);
HXLINE(1823)			this->lineDescents->set_length(0);
HXLINE(1824)			this->lineLeadings->set_length(0);
HXLINE(1825)			this->lineHeights->set_length(0);
HXLINE(1826)			this->lineWidths->set_length(0);
HXLINE(1827)			this->layoutGroups->set_length(0);
HXLINE(1829)			this->textWidth = ( (Float)(0) );
HXLINE(1830)			this->textHeight = ( (Float)(0) );
HXLINE(1831)			this->numLines = 1;
HXLINE(1832)			this->maxScrollH = 0;
HXLINE(1833)			this->maxScrollV = 1;
HXLINE(1834)			this->bottomScrollV = 1;
            		}
            		else {
HXLINE(1838)			this->getLineBreaks();
HXLINE(1839)			this->getLayoutGroups();
HXLINE(1840)			this->getLineMeasurements();
HXLINE(1841)			this->setTextAlignment();
            		}
HXLINE(1844)		this->getBounds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,update,(void))

int TextEngine_obj::get_bottomScrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1851_get_bottomScrollV)
HXDLIN(1851)		bool _hx_tmp;
HXDLIN(1851)		if ((this->numLines != 1)) {
HXDLIN(1851)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXDLIN(1851)			_hx_tmp = true;
            		}
HXDLIN(1851)		if (_hx_tmp) {
HXLINE(1853)			return 1;
            		}
            		else {
HXLINE(1857)			int ret = this->lineHeights->get_length();
HXLINE(1859)			Float tempHeight;
HXDLIN(1859)			if ((this->lineLeadings->get_length() == ret)) {
HXLINE(1859)				tempHeight = -(this->lineLeadings->get((ret - 1)));
            			}
            			else {
HXLINE(1859)				tempHeight = ((Float)0.0);
            			}
HXLINE(1861)			{
HXLINE(1861)				int _g;
HXDLIN(1861)				if ((this->get_scrollV() > 0)) {
HXLINE(1861)					_g = this->get_scrollV();
            				}
            				else {
HXLINE(1861)					_g = 1;
            				}
HXDLIN(1861)				int _g1 = (_g - 1);
HXDLIN(1861)				int _g2 = this->lineHeights->get_length();
HXDLIN(1861)				while((_g1 < _g2)){
HXLINE(1861)					_g1 = (_g1 + 1);
HXDLIN(1861)					int i = (_g1 - 1);
HXLINE(1863)					Float lineHeight = this->lineHeights->get(i);
HXLINE(1865)					tempHeight = (tempHeight + lineHeight);
HXLINE(1867)					if ((tempHeight > (this->height - ( (Float)(4) )))) {
HXLINE(1869)						int ret1;
HXDLIN(1869)						if (((tempHeight - this->height) >= 0)) {
HXLINE(1869)							ret1 = 0;
            						}
            						else {
HXLINE(1869)							ret1 = 1;
            						}
HXDLIN(1869)						ret = (i + ret1);
HXLINE(1870)						goto _hx_goto_131;
            					}
            				}
            				_hx_goto_131:;
            			}
HXLINE(1885)			if ((ret < this->get_scrollV())) {
HXLINE(1885)				return this->get_scrollV();
            			}
HXLINE(1891)			return ret;
            		}
HXLINE(1851)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_bottomScrollV,return )

int TextEngine_obj::get_maxScrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1898_get_maxScrollV)
HXDLIN(1898)		bool _hx_tmp;
HXDLIN(1898)		if ((this->numLines != 1)) {
HXDLIN(1898)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXDLIN(1898)			_hx_tmp = true;
            		}
HXDLIN(1898)		if (_hx_tmp) {
HXLINE(1900)			return 1;
            		}
            		else {
HXLINE(1904)			int i = (this->numLines - 1);
HXDLIN(1904)			Float tempHeight = ((Float)0.0);
HXLINE(1905)			int j = i;
HXLINE(1908)			while((i >= 0)){
HXLINE(1910)				tempHeight = (tempHeight + this->lineHeights->get(i));
HXLINE(1912)				if ((tempHeight > (this->height - ( (Float)(4) )))) {
HXLINE(1914)					int i1;
HXDLIN(1914)					if (((tempHeight - this->height) < 0)) {
HXLINE(1914)						i1 = 1;
            					}
            					else {
HXLINE(1914)						i1 = 2;
            					}
HXDLIN(1914)					i = (i + i1);
HXLINE(1915)					goto _hx_goto_133;
            				}
HXLINE(1917)				i = (i - 1);
            			}
            			_hx_goto_133:;
HXLINE(1933)			if ((i < 1)) {
HXLINE(1933)				return 1;
            			}
HXLINE(1934)			return i;
            		}
HXLINE(1898)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_maxScrollV,return )

::String TextEngine_obj::set_restrict(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1939_set_restrict)
HXLINE(1940)		if ((this->restrict == value)) {
HXLINE(1942)			return this->restrict;
            		}
HXLINE(1945)		this->restrict = value;
HXLINE(1947)		bool _hx_tmp;
HXDLIN(1947)		if (::hx::IsNotNull( this->restrict )) {
HXLINE(1947)			_hx_tmp = (this->restrict.length == 0);
            		}
            		else {
HXLINE(1947)			_hx_tmp = true;
            		}
HXDLIN(1947)		if (_hx_tmp) {
HXLINE(1949)			this->_hx___restrictRegexp = null();
            		}
            		else {
HXLINE(1953)			this->_hx___restrictRegexp = this->createRestrictRegexp(value);
            		}
HXLINE(1956)		return this->restrict;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_restrict,return )

int TextEngine_obj::get_scrollV(){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1960_get_scrollV)
HXLINE(1961)		bool _hx_tmp;
HXDLIN(1961)		if ((this->numLines != 1)) {
HXLINE(1961)			_hx_tmp = ::hx::IsNull( this->lineHeights );
            		}
            		else {
HXLINE(1961)			_hx_tmp = true;
            		}
HXDLIN(1961)		if (_hx_tmp) {
HXLINE(1961)			return 1;
            		}
HXLINE(1963)		int max = this->get_maxScrollV();
HXLINE(1966)		if ((this->scrollV > max)) {
HXLINE(1966)			return max;
            		}
HXLINE(1968)		return this->scrollV;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,get_scrollV,return )

int TextEngine_obj::set_scrollV(int value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1972_set_scrollV)
HXLINE(1973)		if ((value < 1)) {
HXLINE(1973)			value = 1;
            		}
            		else {
HXLINE(1974)			if ((value > this->get_maxScrollV())) {
HXLINE(1974)				value = this->get_maxScrollV();
            			}
            		}
HXLINE(1976)		return (this->scrollV = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_scrollV,return )

::String TextEngine_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_1981_set_text)
HXDLIN(1981)		return (this->text = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,set_text,return )

int TextEngine_obj::GUTTER;

int TextEngine_obj::UTF8_TAB;

int TextEngine_obj::UTF8_ENDLINE;

int TextEngine_obj::UTF8_SPACE;

int TextEngine_obj::UTF8_HYPHEN;

 ::haxe::ds::StringMap TextEngine_obj::_hx___defaultFonts;

 ::openfl::text::Font TextEngine_obj::findFont(::String name){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_202_findFont)
HXLINE( 206)		{
HXLINE( 206)			int _g = 0;
HXDLIN( 206)			::Array< ::Dynamic> _g1 = ::openfl::text::Font_obj::_hx___registeredFonts;
HXDLIN( 206)			while((_g < _g1->length)){
HXLINE( 206)				 ::openfl::text::Font registeredFont = _g1->__get(_g).StaticCast<  ::openfl::text::Font >();
HXDLIN( 206)				_g = (_g + 1);
HXLINE( 208)				if (::hx::IsNull( registeredFont )) {
HXLINE( 208)					continue;
            				}
HXLINE( 210)				bool _hx_tmp;
HXDLIN( 210)				if ((registeredFont->name != name)) {
HXLINE( 211)					if (::hx::IsNotNull( registeredFont->_hx___fontPath )) {
HXLINE( 212)						if ((registeredFont->_hx___fontPath != name)) {
HXLINE( 210)							_hx_tmp = (registeredFont->_hx___fontPathWithoutDirectory == name);
            						}
            						else {
HXLINE( 210)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 210)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 210)					_hx_tmp = true;
            				}
HXDLIN( 210)				if (_hx_tmp) {
HXLINE( 214)					if (registeredFont->_hx___initialize()) {
HXLINE( 216)						return registeredFont;
            					}
            				}
            			}
            		}
HXLINE( 225)		 ::openfl::text::Font font = ::openfl::text::Font_obj::fromFile(name);
HXLINE( 227)		if (::hx::IsNotNull( font )) {
HXLINE( 229)			::openfl::text::Font_obj::_hx___registeredFonts->push(font);
HXLINE( 230)			::openfl::text::Font_obj::_hx___fontByName->set(font->name,font);
HXLINE( 231)			return font;
            		}
HXLINE( 235)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFont,return )

 ::openfl::text::Font TextEngine_obj::findFontVariant( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_239_findFontVariant)
HXLINE( 240)		::String fontName = format->font;
HXLINE( 241)		 ::Dynamic bold = format->bold;
HXLINE( 242)		 ::Dynamic italic = format->italic;
HXLINE( 244)		if (::hx::IsNull( fontName )) {
HXLINE( 244)			fontName = HX_("_serif",be,66,15,76);
            		}
HXLINE( 245)		::String fontNamePrefix = ::StringTools_obj::replace(::StringTools_obj::replace(fontName,HX_(" Normal",67,be,ac,97),HX_("",00,00,00,00)),HX_(" Regular",1c,be,27,76),HX_("",00,00,00,00));
HXLINE( 247)		bool _hx_tmp;
HXDLIN( 247)		bool _hx_tmp1;
HXDLIN( 247)		if (( (bool)(bold) )) {
HXLINE( 247)			_hx_tmp1 = ( (bool)(italic) );
            		}
            		else {
HXLINE( 247)			_hx_tmp1 = false;
            		}
HXDLIN( 247)		if (_hx_tmp1) {
HXLINE( 247)			_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 247)			_hx_tmp = false;
            		}
HXDLIN( 247)		if (_hx_tmp) {
HXLINE( 249)			return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 251)			bool _hx_tmp;
HXDLIN( 251)			if (( (bool)(bold) )) {
HXLINE( 251)				_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 251)				_hx_tmp = false;
            			}
HXDLIN( 251)			if (_hx_tmp) {
HXLINE( 253)				return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 255)				bool _hx_tmp;
HXDLIN( 255)				if (( (bool)(italic) )) {
HXLINE( 255)					_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            				else {
HXLINE( 255)					_hx_tmp = false;
            				}
HXDLIN( 255)				if (_hx_tmp) {
HXLINE( 257)					return ::openfl::text::_internal::TextEngine_obj::findFont((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            			}
            		}
HXLINE( 260)		return ::openfl::text::_internal::TextEngine_obj::findFont(fontName);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFontVariant,return )

 ::openfl::text::Font TextEngine_obj::getDefaultFont(::String name,bool bold,bool italic){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_296_getDefaultFont)
HXLINE( 297)		if (::hx::IsNull( ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::openfl::text::Font _hx_run(::Array< ::String > list){
            				HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_305_getDefaultFont)
HXLINE( 306)				 ::openfl::text::Font font = null();
HXLINE( 307)				{
HXLINE( 307)					int _g = 0;
HXDLIN( 307)					while((_g < list->length)){
HXLINE( 307)						::String path = list->__get(_g);
HXDLIN( 307)						_g = (_g + 1);
HXLINE( 309)						font = ::openfl::text::_internal::TextEngine_obj::findFont(path);
HXLINE( 310)						if (::hx::IsNotNull( font )) {
HXLINE( 310)							goto _hx_goto_142;
            						}
            					}
            					_hx_goto_142:;
            				}
HXLINE( 312)				return font;
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 299)			::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 302)			::String systemFontDirectory = ::lime::_hx_system::System_obj::get_fontsDirectory();
HXLINE( 304)			 ::Dynamic processFontList =  ::Dynamic(new _hx_Closure_0());
HXLINE( 316)			{
HXLINE( 316)				::Dynamic this1 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 317)				 ::openfl::text::Font value = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arial.ttf",2c,34,8e,d8)));
HXDLIN( 317)				 ::openfl::text::Font value1 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arialbd.ttf",ee,27,90,25)));
HXLINE( 318)				 ::openfl::text::Font value2 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/ariali.ttf",2d,c9,3e,6e)));
HXLINE( 316)				( ( ::haxe::ds::StringMap)(this1) )->set(HX_("_sans",32,a0,5e,ff), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value,value1,value2,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/arialbi.ttf",73,0e,91,06)))));
            			}
HXLINE( 320)			{
HXLINE( 320)				::Dynamic this2 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 321)				 ::openfl::text::Font value3 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/times.ttf",2f,58,44,c5)));
HXDLIN( 321)				 ::openfl::text::Font value4 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesbd.ttf",b1,92,19,47)));
HXLINE( 322)				 ::openfl::text::Font value5 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesi.ttf",ca,27,e8,a0)));
HXLINE( 320)				( ( ::haxe::ds::StringMap)(this2) )->set(HX_("_serif",be,66,15,76), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value3,value4,value5,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/timesbi.ttf",36,79,1a,28)))));
            			}
HXLINE( 324)			{
HXLINE( 324)				::Dynamic this3 = ::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts;
HXLINE( 325)				 ::openfl::text::Font value6 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/cour.ttf",30,7b,d2,6a)));
HXDLIN( 325)				 ::openfl::text::Font value7 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/courbd.ttf",f2,37,b7,06)));
HXLINE( 326)				 ::openfl::text::Font value8 = ::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/couri.ttf",a9,a5,b8,d7)));
HXLINE( 324)				( ( ::haxe::ds::StringMap)(this3) )->set(HX_("_typewriter",0c,5e,52,94), ::openfl::text::_internal::_TextEngine::DefaultFontSet_obj::__alloc( HX_CTX ,value6,value7,value8,::openfl::text::_internal::TextEngine_obj::findFont((systemFontDirectory + HX_("/courbi.ttf",77,1e,b8,e7)))));
            			}
            		}
HXLINE( 410)		 ::openfl::text::_internal::_TextEngine::DefaultFontSet fontSet = ( ( ::openfl::text::_internal::_TextEngine::DefaultFontSet)(::openfl::text::_internal::TextEngine_obj::_hx___defaultFonts->get(name)) );
HXLINE( 411)		if (::hx::IsNull( fontSet )) {
HXLINE( 411)			return null();
            		}
HXLINE( 413)		bool _hx_tmp;
HXDLIN( 413)		bool _hx_tmp1;
HXDLIN( 413)		if (bold) {
HXLINE( 413)			_hx_tmp1 = italic;
            		}
            		else {
HXLINE( 413)			_hx_tmp1 = false;
            		}
HXDLIN( 413)		if (_hx_tmp1) {
HXLINE( 413)			_hx_tmp = ::hx::IsNotNull( fontSet->boldItalic );
            		}
            		else {
HXLINE( 413)			_hx_tmp = false;
            		}
HXDLIN( 413)		if (_hx_tmp) {
HXLINE( 413)			return fontSet->boldItalic;
            		}
            		else {
HXLINE( 413)			bool _hx_tmp;
HXDLIN( 413)			if (italic) {
HXLINE( 413)				_hx_tmp = ::hx::IsNotNull( fontSet->italic );
            			}
            			else {
HXLINE( 413)				_hx_tmp = false;
            			}
HXDLIN( 413)			if (_hx_tmp) {
HXLINE( 413)				return fontSet->italic;
            			}
            			else {
HXLINE( 413)				bool _hx_tmp;
HXDLIN( 413)				if (bold) {
HXLINE( 413)					_hx_tmp = ::hx::IsNotNull( fontSet->bold );
            				}
            				else {
HXLINE( 413)					_hx_tmp = false;
            				}
HXDLIN( 413)				if (_hx_tmp) {
HXLINE( 413)					return fontSet->bold;
            				}
            				else {
HXLINE( 413)					return fontSet->normal;
            				}
            			}
            		}
HXDLIN( 413)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TextEngine_obj,getDefaultFont,return )

Float TextEngine_obj::getFormatHeight( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_417_getFormatHeight)
HXLINE( 418)		Float ascent;
HXDLIN( 418)		Float descent;
HXLINE( 428)		 ::openfl::text::Font font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(format);
HXLINE( 430)		if (::hx::IsNotNull( format->_hx___ascent )) {
HXLINE( 432)			ascent = (( (Float)(format->size) ) * ( (Float)(format->_hx___ascent) ));
HXLINE( 433)			descent = (( (Float)(format->size) ) * ( (Float)(format->_hx___descent) ));
            		}
            		else {
HXLINE( 435)			bool _hx_tmp;
HXDLIN( 435)			if (::hx::IsNotNull( font )) {
HXLINE( 435)				_hx_tmp = (font->unitsPerEM != 0);
            			}
            			else {
HXLINE( 435)				_hx_tmp = false;
            			}
HXDLIN( 435)			if (_hx_tmp) {
HXLINE( 438)				ascent = ((( (Float)(font->ascender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(format->size) ));
HXLINE( 439)				descent = ::Math_obj::abs(((( (Float)(font->descender) ) / ( (Float)(font->unitsPerEM) )) * ( (Float)(format->size) )));
            			}
            			else {
HXLINE( 447)				ascent = ( (Float)(format->size) );
HXLINE( 448)				descent = (( (Float)(format->size) ) * ((Float)0.185));
            			}
            		}
HXLINE( 418)		int leading = ( (int)(format->leading) );
HXLINE( 453)		return ((ascent + descent) + leading);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFormatHeight,return )

::String TextEngine_obj::getFont( ::openfl::text::TextFormat format){
            	HX_GC_STACKFRAME(&_hx_pos_81873a2f4b2980c0_457_getFont)
HXLINE( 458)		::String fontName = format->font;
HXLINE( 459)		 ::Dynamic bold = format->bold;
HXLINE( 460)		 ::Dynamic italic = format->italic;
HXLINE( 462)		if (::hx::IsNull( fontName )) {
HXLINE( 462)			fontName = HX_("_serif",be,66,15,76);
            		}
HXLINE( 463)		::String fontNamePrefix = ::StringTools_obj::replace(::StringTools_obj::replace(fontName,HX_(" Normal",67,be,ac,97),HX_("",00,00,00,00)),HX_(" Regular",1c,be,27,76),HX_("",00,00,00,00));
HXLINE( 465)		bool _hx_tmp;
HXDLIN( 465)		bool _hx_tmp1;
HXDLIN( 465)		if (( (bool)(bold) )) {
HXLINE( 465)			_hx_tmp1 = ( (bool)(italic) );
            		}
            		else {
HXLINE( 465)			_hx_tmp1 = false;
            		}
HXDLIN( 465)		if (_hx_tmp1) {
HXLINE( 465)			_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94)));
            		}
            		else {
HXLINE( 465)			_hx_tmp = false;
            		}
HXDLIN( 465)		if (_hx_tmp) {
HXLINE( 467)			fontName = (fontNamePrefix + HX_(" Bold Italic",0b,b0,c3,94));
HXLINE( 468)			bold = false;
HXLINE( 469)			italic = false;
            		}
            		else {
HXLINE( 471)			bool _hx_tmp;
HXDLIN( 471)			if (( (bool)(bold) )) {
HXLINE( 471)				_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Bold",c5,3d,c7,98)));
            			}
            			else {
HXLINE( 471)				_hx_tmp = false;
            			}
HXDLIN( 471)			if (_hx_tmp) {
HXLINE( 473)				fontName = (fontNamePrefix + HX_(" Bold",c5,3d,c7,98));
HXLINE( 474)				bold = false;
            			}
            			else {
HXLINE( 476)				bool _hx_tmp;
HXDLIN( 476)				if (( (bool)(italic) )) {
HXLINE( 476)					_hx_tmp = ::openfl::text::Font_obj::_hx___fontByName->exists((fontNamePrefix + HX_(" Italic",30,7b,a7,6d)));
            				}
            				else {
HXLINE( 476)					_hx_tmp = false;
            				}
HXDLIN( 476)				if (_hx_tmp) {
HXLINE( 478)					fontName = (fontNamePrefix + HX_(" Italic",30,7b,a7,6d));
HXLINE( 479)					italic = false;
            				}
            				else {
HXLINE( 485)					bool _hx_tmp;
HXDLIN( 485)					if (( (bool)(bold) )) {
HXLINE( 485)						if ((fontName.indexOf(HX_(" Bold ",bb,ce,8e,15),null()) <= -1)) {
HXLINE( 485)							_hx_tmp = ::StringTools_obj::endsWith(fontName,HX_(" Bold",c5,3d,c7,98));
            						}
            						else {
HXLINE( 485)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 485)						_hx_tmp = false;
            					}
HXDLIN( 485)					if (_hx_tmp) {
HXLINE( 487)						bold = false;
            					}
HXLINE( 490)					bool _hx_tmp1;
HXDLIN( 490)					if (( (bool)(italic) )) {
HXLINE( 490)						if ((fontName.indexOf(HX_(" Italic ",f0,4e,e4,84),null()) <= -1)) {
HXLINE( 490)							_hx_tmp1 = ::StringTools_obj::endsWith(fontName,HX_(" Italic",30,7b,a7,6d));
            						}
            						else {
HXLINE( 490)							_hx_tmp1 = true;
            						}
            					}
            					else {
HXLINE( 490)						_hx_tmp1 = false;
            					}
HXDLIN( 490)					if (_hx_tmp1) {
HXLINE( 492)						italic = false;
            					}
            				}
            			}
            		}
HXLINE( 496)		::String font;
HXDLIN( 496)		if (( (bool)(italic) )) {
HXLINE( 496)			font = HX_("italic ",30,e3,44,91);
            		}
            		else {
HXLINE( 496)			font = HX_("normal ",19,70,da,2b);
            		}
HXLINE( 497)		font = (font + HX_("normal ",19,70,da,2b));
HXLINE( 498)		::String font1;
HXDLIN( 498)		if (( (bool)(bold) )) {
HXLINE( 498)			font1 = HX_("bold ",fb,d2,f5,b6);
            		}
            		else {
HXLINE( 498)			font1 = HX_("normal ",19,70,da,2b);
            		}
HXDLIN( 498)		font = (font + font1);
HXLINE( 499)		font = (font + (format->size + HX_("px",08,62,00,00)));
HXLINE( 501)		font = (font + ((HX_("/",2f,00,00,00) + (format->size + 3)) + HX_("px ",18,65,55,00)));
HXLINE( 503)		::String font2;
HXDLIN( 503)		::String _hx_switch_0 = fontName;
            		if (  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ){
HXLINE( 503)			font2 = HX_("sans-serif",c3,60,fb,08);
HXDLIN( 503)			goto _hx_goto_146;
            		}
            		if (  (_hx_switch_0==HX_("_serif",be,66,15,76)) ){
HXLINE( 503)			font2 = HX_("serif",7d,1f,2e,7a);
HXDLIN( 503)			goto _hx_goto_146;
            		}
            		if (  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 503)			font2 = HX_("monospace",c3,d1,e5,5e);
HXDLIN( 503)			goto _hx_goto_146;
            		}
            		/* default */{
HXLINE( 503)			font2 = ((HX_("'",27,00,00,00) +  ::EReg_obj::__alloc( HX_CTX ,HX_("^[\\s'\"]+(.*)[\\s'\"]+$",eb,e4,eb,f5),HX_("",00,00,00,00))->replace(fontName,HX_("$1",8d,1f,00,00))) + HX_("'",27,00,00,00));
            		}
            		_hx_goto_146:;
HXDLIN( 503)		font = (font + (HX_("",00,00,00,00) + font2));
HXLINE( 511)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFont,return )

 ::openfl::text::Font TextEngine_obj::getFontInstance( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_515_getFontInstance)
HXLINE( 519)		 ::openfl::text::Font instance = null();
HXLINE( 520)		 ::Dynamic fontList = null();
HXLINE( 522)		bool _hx_tmp;
HXDLIN( 522)		if (::hx::IsNotNull( format )) {
HXLINE( 522)			_hx_tmp = ::hx::IsNotNull( format->font );
            		}
            		else {
HXLINE( 522)			_hx_tmp = false;
            		}
HXDLIN( 522)		if (_hx_tmp) {
HXLINE( 524)			::String _hx_switch_0 = format->font;
            			if (  (_hx_switch_0==HX_("_sans",32,a0,5e,ff)) ||  (_hx_switch_0==HX_("_serif",be,66,15,76)) ||  (_hx_switch_0==HX_("_typewriter",0c,5e,52,94)) ){
HXLINE( 527)				instance = ::openfl::text::_internal::TextEngine_obj::getDefaultFont(format->font,( (bool)(format->bold) ),( (bool)(format->italic) ));
HXLINE( 528)				if (::hx::IsNotNull( instance )) {
HXLINE( 528)					return instance;
            				}
HXLINE( 526)				goto _hx_goto_148;
            			}
            			/* default */{
            			}
            			_hx_goto_148:;
HXLINE( 532)			instance = ::openfl::text::_internal::TextEngine_obj::findFontVariant(format);
HXLINE( 533)			if (::hx::IsNotNull( instance )) {
HXLINE( 533)				return instance;
            			}
            		}
HXLINE( 536)		instance = ::openfl::text::_internal::TextEngine_obj::getDefaultFont(HX_("_serif",be,66,15,76),( (bool)(format->bold) ),( (bool)(format->italic) ));
HXLINE( 537)		if (::hx::IsNotNull( instance )) {
HXLINE( 537)			return instance;
            		}
HXLINE( 540)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFontInstance,return )


::hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__new( ::openfl::text::TextField textField) {
	::hx::ObjectPtr< TextEngine_obj > __this = new TextEngine_obj();
	__this->__construct(textField);
	return __this;
}

::hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextField textField) {
	TextEngine_obj *__this = (TextEngine_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextEngine_obj), true, "openfl.text._internal.TextEngine"));
	*(void **)__this = TextEngine_obj::_hx_vtable;
	__this->__construct(textField);
	return __this;
}

TextEngine_obj::TextEngine_obj()
{
}

void TextEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEngine);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_MARK_MEMBER_NAME(lineAscents,"lineAscents");
	HX_MARK_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_MARK_MEMBER_NAME(lineDescents,"lineDescents");
	HX_MARK_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_MARK_MEMBER_NAME(lineHeights,"lineHeights");
	HX_MARK_MEMBER_NAME(lineWidths,"lineWidths");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textBounds,"textBounds");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(_hx___hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(_hx___isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(_hx___measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(_hx___measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(_hx___restrictRegexp,"__restrictRegexp");
	HX_MARK_MEMBER_NAME(_hx___selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(_hx___shapeCache,"__shapeCache");
	HX_MARK_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(_hx___textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(_hx___texture,"__texture");
	HX_MARK_MEMBER_NAME(_hx___useIntAdvances,"__useIntAdvances");
	HX_MARK_MEMBER_NAME(_hx___cairoFont,"__cairoFont");
	HX_MARK_MEMBER_NAME(_hx___font,"__font");
	HX_MARK_END_CLASS();
}

void TextEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_VISIT_MEMBER_NAME(lineAscents,"lineAscents");
	HX_VISIT_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_VISIT_MEMBER_NAME(lineDescents,"lineDescents");
	HX_VISIT_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_VISIT_MEMBER_NAME(lineHeights,"lineHeights");
	HX_VISIT_MEMBER_NAME(lineWidths,"lineWidths");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textBounds,"textBounds");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(_hx___cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(_hx___hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(_hx___isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(_hx___measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(_hx___measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(_hx___restrictRegexp,"__restrictRegexp");
	HX_VISIT_MEMBER_NAME(_hx___selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(_hx___shapeCache,"__shapeCache");
	HX_VISIT_MEMBER_NAME(_hx___showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(_hx___textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(_hx___textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(_hx___texture,"__texture");
	HX_VISIT_MEMBER_NAME(_hx___useIntAdvances,"__useIntAdvances");
	HX_VISIT_MEMBER_NAME(_hx___cairoFont,"__cairoFont");
	HX_VISIT_MEMBER_NAME(_hx___font,"__font");
}

::hx::Val TextEngine_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"__font") ) { return ::hx::Val( _hx___font ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return ::hx::Val( scrollH ); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_scrollV() : scrollV ); }
		if (HX_FIELD_EQ(inName,"getLine") ) { return ::hx::Val( getLine_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return ::hx::Val( autoSize ); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return ::hx::Val( maxChars ); }
		if (HX_FIELD_EQ(inName,"numLines") ) { return ::hx::Val( numLines ); }
		if (HX_FIELD_EQ(inName,"restrict") ) { return ::hx::Val( restrict ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return ::hx::Val( wordWrap ); }
		if (HX_FIELD_EQ(inName,"trimText") ) { return ::hx::Val( trimText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return ::hx::Val( multiline ); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return ::hx::Val( sharpness ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return ::hx::Val( textWidth ); }
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		if (HX_FIELD_EQ(inName,"__texture") ) { return ::hx::Val( _hx___texture ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return ::hx::Val( caretIndex ); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return ::hx::Val( embedFonts ); }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { return ::hx::Val( lineBreaks ); }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { return ::hx::Val( lineWidths ); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return ::hx::Val( maxScrollH ); }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_maxScrollV() : maxScrollV ); }
		if (HX_FIELD_EQ(inName,"selectable") ) { return ::hx::Val( selectable ); }
		if (HX_FIELD_EQ(inName,"textBounds") ) { return ::hx::Val( textBounds ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return ::hx::Val( textHeight ); }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return ::hx::Val( _hx___hasFocus ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return ::hx::Val( gridFitType ); }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { return ::hx::Val( lineAscents ); }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { return ::hx::Val( lineHeights ); }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return ::hx::Val( _hx___isKeyDown ); }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return ::hx::Val( _hx___cairoFont ); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return ::hx::Val( get_scrollV_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return ::hx::Val( set_scrollV_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { return ::hx::Val( layoutGroups ); }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { return ::hx::Val( lineDescents ); }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { return ::hx::Val( lineLeadings ); }
		if (HX_FIELD_EQ(inName,"__shapeCache") ) { return ::hx::Val( _hx___shapeCache ); }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return ::hx::Val( _hx___showCursor ); }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return ::hx::Val( _hx___textFormat ); }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return ::hx::Val( _hx___textLayout ); }
		if (HX_FIELD_EQ(inName,"restrictText") ) { return ::hx::Val( restrictText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return ::hx::Val( set_restrict_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return ::hx::Val( antiAliasType ); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_bottomScrollV() : bottomScrollV ); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return ::hx::Val( _hx___cursorTimer ); }
		if (HX_FIELD_EQ(inName,"getLineBreaks") ) { return ::hx::Val( getLineBreaks_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return ::hx::Val( get_maxScrollV_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return ::hx::Val( _hx___measuredWidth ); }
		if (HX_FIELD_EQ(inName,"getLayoutGroups") ) { return ::hx::Val( getLayoutGroups_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { return ::hx::Val( textFormatRanges ); }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return ::hx::Val( _hx___measuredHeight ); }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { return ::hx::Val( _hx___restrictRegexp ); }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return ::hx::Val( _hx___selectionStart ); }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { return ::hx::Val( _hx___useIntAdvances ); }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return ::hx::Val( setTextAlignment_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getLineBreakIndex") ) { return ::hx::Val( getLineBreakIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return ::hx::Val( get_bottomScrollV_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLineMeasurements") ) { return ::hx::Val( getLineMeasurements_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createRestrictRegexp") ) { return ::hx::Val( createRestrictRegexp_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = ( _hx___defaultFonts ); return true; }
		if (HX_FIELD_EQ(inName,"getDefaultFont") ) { outValue = getDefaultFont_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"findFontVariant") ) { outValue = findFontVariant_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFormatHeight") ) { outValue = getFormatHeight_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true; }
	}
	return false;
}

::hx::Val TextEngine_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__font") ) { _hx___font=inValue.Cast<  ::openfl::text::Font >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollV(inValue.Cast< int >()) );scrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { autoSize=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_restrict(inValue.Cast< ::String >()) );restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { _hx___texture=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { lineBreaks=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { lineWidths=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBounds") ) { textBounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { _hx___hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { lineAscents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { lineHeights=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { _hx___isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { _hx___cairoFont=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { layoutGroups=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { lineDescents=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { lineLeadings=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shapeCache") ) { _hx___shapeCache=inValue.Cast<  ::openfl::text::_internal::ShapeCache >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { _hx___showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { _hx___textFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { _hx___textLayout=inValue.Cast<  ::openfl::text::_internal::TextLayout >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { _hx___cursorTimer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { _hx___measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { textFormatRanges=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { _hx___measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__restrictRegexp") ) { _hx___restrictRegexp=inValue.Cast<  ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { _hx___selectionStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__useIntAdvances") ) { _hx___useIntAdvances=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { _hx___defaultFonts=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("antiAliasType",68,c4,fa,e7));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("border",ec,4c,1a,64));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("bottomScrollV",fe,f7,87,8b));
	outFields->push(HX_("bounds",75,86,1d,66));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("embedFonts",2b,c7,e1,8e));
	outFields->push(HX_("gridFitType",05,f3,13,b4));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("layoutGroups",9e,a2,6c,37));
	outFields->push(HX_("lineAscents",45,0c,c2,3e));
	outFields->push(HX_("lineBreaks",e8,fd,5b,ea));
	outFields->push(HX_("lineDescents",0d,ad,64,49));
	outFields->push(HX_("lineLeadings",01,23,97,76));
	outFields->push(HX_("lineHeights",18,99,8e,3e));
	outFields->push(HX_("lineWidths",c1,8a,a4,20));
	outFields->push(HX_("maxChars",99,ef,d0,ef));
	outFields->push(HX_("maxScrollH",57,ad,fc,9a));
	outFields->push(HX_("maxScrollV",65,ad,fc,9a));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("numLines",d9,f1,11,32));
	outFields->push(HX_("restrict",3c,cb,9e,f1));
	outFields->push(HX_("scrollH",9b,33,d8,30));
	outFields->push(HX_("scrollV",a9,33,d8,30));
	outFields->push(HX_("selectable",96,b6,2a,c4));
	outFields->push(HX_("sharpness",81,22,25,1b));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("textBounds",02,07,0e,9d));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("textFormatRanges",fa,0e,49,a2));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("__cursorTimer",ef,59,8f,e1));
	outFields->push(HX_("__hasFocus",3e,1d,1a,34));
	outFields->push(HX_("__isKeyDown",b7,2f,72,ce));
	outFields->push(HX_("__measuredHeight",ed,b6,23,42));
	outFields->push(HX_("__measuredWidth",c0,49,ec,02));
	outFields->push(HX_("__restrictRegexp",45,9f,ae,a9));
	outFields->push(HX_("__selectionStart",96,e3,b9,43));
	outFields->push(HX_("__shapeCache",81,aa,e8,5f));
	outFields->push(HX_("__showCursor",d3,ae,f0,e0));
	outFields->push(HX_("__textFormat",e4,8a,12,6d));
	outFields->push(HX_("__textLayout",57,aa,3c,c8));
	outFields->push(HX_("__texture",bb,19,2f,20));
	outFields->push(HX_("__useIntAdvances",d9,17,72,7d));
	outFields->push(HX_("__cairoFont",57,e7,b5,28));
	outFields->push(HX_("__font",ef,c0,b8,f2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextEngine_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,antiAliasType),HX_("antiAliasType",68,c4,fa,e7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,autoSize),HX_("autoSize",d0,8f,79,2f)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,border),HX_("border",ec,4c,1a,64)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,bottomScrollV),HX_("bottomScrollV",fe,f7,87,8b)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextEngine_obj,bounds),HX_("bounds",75,86,1d,66)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,caretIndex),HX_("caretIndex",8f,b6,5b,dd)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,embedFonts),HX_("embedFonts",2b,c7,e1,8e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,gridFitType),HX_("gridFitType",05,f3,13,b4)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextEngine_obj,layoutGroups),HX_("layoutGroups",9e,a2,6c,37)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineAscents),HX_("lineAscents",45,0c,c2,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(TextEngine_obj,lineBreaks),HX_("lineBreaks",e8,fd,5b,ea)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineDescents),HX_("lineDescents",0d,ad,64,49)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineLeadings),HX_("lineLeadings",01,23,97,76)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineHeights),HX_("lineHeights",18,99,8e,3e)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(TextEngine_obj,lineWidths),HX_("lineWidths",c1,8a,a4,20)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxChars),HX_("maxChars",99,ef,d0,ef)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollH),HX_("maxScrollH",57,ad,fc,9a)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollV),HX_("maxScrollV",65,ad,fc,9a)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,multiline),HX_("multiline",ed,d2,11,9e)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,numLines),HX_("numLines",d9,f1,11,32)},
	{::hx::fsString,(int)offsetof(TextEngine_obj,restrict),HX_("restrict",3c,cb,9e,f1)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,scrollH),HX_("scrollH",9b,33,d8,30)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,scrollV),HX_("scrollV",a9,33,d8,30)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,selectable),HX_("selectable",96,b6,2a,c4)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,sharpness),HX_("sharpness",81,22,25,1b)},
	{::hx::fsString,(int)offsetof(TextEngine_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(TextEngine_obj,textBounds),HX_("textBounds",02,07,0e,9d)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,textHeight),HX_("textHeight",74,88,3c,39)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(TextEngine_obj,textFormatRanges),HX_("textFormatRanges",fa,0e,49,a2)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,textWidth),HX_("textWidth",19,46,50,63)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsFloat,(int)offsetof(TextEngine_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,wordWrap),HX_("wordWrap",b4,14,db,00)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TextEngine_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(TextEngine_obj,_hx___cursorTimer),HX_("__cursorTimer",ef,59,8f,e1)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___hasFocus),HX_("__hasFocus",3e,1d,1a,34)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___isKeyDown),HX_("__isKeyDown",b7,2f,72,ce)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___measuredHeight),HX_("__measuredHeight",ed,b6,23,42)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___measuredWidth),HX_("__measuredWidth",c0,49,ec,02)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(TextEngine_obj,_hx___restrictRegexp),HX_("__restrictRegexp",45,9f,ae,a9)},
	{::hx::fsInt,(int)offsetof(TextEngine_obj,_hx___selectionStart),HX_("__selectionStart",96,e3,b9,43)},
	{::hx::fsObject /*  ::openfl::text::_internal::ShapeCache */ ,(int)offsetof(TextEngine_obj,_hx___shapeCache),HX_("__shapeCache",81,aa,e8,5f)},
	{::hx::fsBool,(int)offsetof(TextEngine_obj,_hx___showCursor),HX_("__showCursor",d3,ae,f0,e0)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextEngine_obj,_hx___textFormat),HX_("__textFormat",e4,8a,12,6d)},
	{::hx::fsObject /*  ::openfl::text::_internal::TextLayout */ ,(int)offsetof(TextEngine_obj,_hx___textLayout),HX_("__textLayout",57,aa,3c,c8)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(TextEngine_obj,_hx___texture),HX_("__texture",bb,19,2f,20)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,_hx___useIntAdvances),HX_("__useIntAdvances",d9,17,72,7d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextEngine_obj,_hx___cairoFont),HX_("__cairoFont",57,e7,b5,28)},
	{::hx::fsObject /*  ::openfl::text::Font */ ,(int)offsetof(TextEngine_obj,_hx___font),HX_("__font",ef,c0,b8,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TextEngine_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TextEngine_obj::GUTTER,HX_("GUTTER",1b,d3,2b,8c)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_TAB,HX_("UTF8_TAB",07,d5,41,1d)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_ENDLINE,HX_("UTF8_ENDLINE",01,29,41,cf)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_SPACE,HX_("UTF8_SPACE",f8,7b,a9,c7)},
	{::hx::fsInt,(void *) &TextEngine_obj::UTF8_HYPHEN,HX_("UTF8_HYPHEN",60,3c,3f,bf)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &TextEngine_obj::_hx___defaultFonts,HX_("__defaultFonts",63,76,ad,da)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TextEngine_obj_sMemberFields[] = {
	HX_("antiAliasType",68,c4,fa,e7),
	HX_("autoSize",d0,8f,79,2f),
	HX_("background",ee,93,1d,26),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("border",ec,4c,1a,64),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("bottomScrollV",fe,f7,87,8b),
	HX_("bounds",75,86,1d,66),
	HX_("caretIndex",8f,b6,5b,dd),
	HX_("embedFonts",2b,c7,e1,8e),
	HX_("gridFitType",05,f3,13,b4),
	HX_("height",e7,07,4c,02),
	HX_("layoutGroups",9e,a2,6c,37),
	HX_("lineAscents",45,0c,c2,3e),
	HX_("lineBreaks",e8,fd,5b,ea),
	HX_("lineDescents",0d,ad,64,49),
	HX_("lineLeadings",01,23,97,76),
	HX_("lineHeights",18,99,8e,3e),
	HX_("lineWidths",c1,8a,a4,20),
	HX_("maxChars",99,ef,d0,ef),
	HX_("maxScrollH",57,ad,fc,9a),
	HX_("maxScrollV",65,ad,fc,9a),
	HX_("multiline",ed,d2,11,9e),
	HX_("numLines",d9,f1,11,32),
	HX_("restrict",3c,cb,9e,f1),
	HX_("scrollH",9b,33,d8,30),
	HX_("scrollV",a9,33,d8,30),
	HX_("selectable",96,b6,2a,c4),
	HX_("sharpness",81,22,25,1b),
	HX_("text",ad,cc,f9,4c),
	HX_("textBounds",02,07,0e,9d),
	HX_("textHeight",74,88,3c,39),
	HX_("textFormatRanges",fa,0e,49,a2),
	HX_("textWidth",19,46,50,63),
	HX_("type",ba,f2,08,4d),
	HX_("width",06,b6,62,ca),
	HX_("wordWrap",b4,14,db,00),
	HX_("textField",cd,24,81,99),
	HX_("__cursorTimer",ef,59,8f,e1),
	HX_("__hasFocus",3e,1d,1a,34),
	HX_("__isKeyDown",b7,2f,72,ce),
	HX_("__measuredHeight",ed,b6,23,42),
	HX_("__measuredWidth",c0,49,ec,02),
	HX_("__restrictRegexp",45,9f,ae,a9),
	HX_("__selectionStart",96,e3,b9,43),
	HX_("__shapeCache",81,aa,e8,5f),
	HX_("__showCursor",d3,ae,f0,e0),
	HX_("__textFormat",e4,8a,12,6d),
	HX_("__textLayout",57,aa,3c,c8),
	HX_("__texture",bb,19,2f,20),
	HX_("__useIntAdvances",d9,17,72,7d),
	HX_("__cairoFont",57,e7,b5,28),
	HX_("__font",ef,c0,b8,f2),
	HX_("createRestrictRegexp",41,d0,6b,e1),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getLine",aa,c7,35,1a),
	HX_("getLineBreaks",1e,5a,ce,46),
	HX_("getLineBreakIndex",1d,16,36,36),
	HX_("getLineMeasurements",c1,9f,81,56),
	HX_("getLayoutGroups",54,f8,56,5a),
	HX_("restrictText",09,12,3e,34),
	HX_("setTextAlignment",74,0f,33,62),
	HX_("trimText",af,ae,63,65),
	HX_("update",09,86,05,87),
	HX_("get_bottomScrollV",55,03,f8,91),
	HX_("get_maxScrollV",ae,35,f2,10),
	HX_("set_restrict",b9,a2,b1,bb),
	HX_("get_scrollV",c0,93,d2,b6),
	HX_("set_scrollV",cc,9a,3f,c1),
	HX_("set_text",aa,e1,11,7b),
	::String(null()) };

static void TextEngine_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEngine_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_MARK_MEMBER_NAME(TextEngine_obj::_hx___defaultFonts,"__defaultFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextEngine_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEngine_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::_hx___defaultFonts,"__defaultFonts");
};

#endif

::hx::Class TextEngine_obj::__mClass;

static ::String TextEngine_obj_sStaticFields[] = {
	HX_("GUTTER",1b,d3,2b,8c),
	HX_("UTF8_TAB",07,d5,41,1d),
	HX_("UTF8_ENDLINE",01,29,41,cf),
	HX_("UTF8_SPACE",f8,7b,a9,c7),
	HX_("UTF8_HYPHEN",60,3c,3f,bf),
	HX_("__defaultFonts",63,76,ad,da),
	HX_("findFont",a8,6a,54,96),
	HX_("findFontVariant",bd,22,bb,b2),
	HX_("getDefaultFont",3a,aa,1d,9d),
	HX_("getFormatHeight",34,24,4b,62),
	HX_("getFont",85,0d,43,16),
	HX_("getFontInstance",3a,76,96,9e),
	::String(null())
};

void TextEngine_obj::__register()
{
	TextEngine_obj _hx_dummy;
	TextEngine_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.TextEngine",04,88,80,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEngine_obj::__SetStatic;
	__mClass->mMarkFunc = TextEngine_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TextEngine_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextEngine_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextEngine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextEngine_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEngine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEngine_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextEngine_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_38_boot)
HXDLIN(  38)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("__cairoFont",57,e7,b5,28), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_40_boot)
HXDLIN(  40)		GUTTER = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_41_boot)
HXDLIN(  41)		UTF8_TAB = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_42_boot)
HXDLIN(  42)		UTF8_ENDLINE = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_43_boot)
HXDLIN(  43)		UTF8_SPACE = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_81873a2f4b2980c0_44_boot)
HXDLIN(  44)		UTF8_HYPHEN = 45;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
