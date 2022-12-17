#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_text__internal_CSSParser
#include <openfl/text/_internal/CSSParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_12_new,"openfl.text._internal.CSSParser","new",0x07a5b65f,"openfl.text._internal.CSSParser.new","openfl/text/_internal/CSSParser.hx",12,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_35_stripComments,"openfl.text._internal.CSSParser","stripComments",0x50263aeb,"openfl.text._internal.CSSParser.stripComments","openfl/text/_internal/CSSParser.hx",35,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_48_parseRules,"openfl.text._internal.CSSParser","parseRules",0x295c12a5,"openfl.text._internal.CSSParser.parseRules","openfl/text/_internal/CSSParser.hx",48,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_122_findCorrespondingRule,"openfl.text._internal.CSSParser","findCorrespondingRule",0x1538e655,"openfl.text._internal.CSSParser.findCorrespondingRule","openfl/text/_internal/CSSParser.hx",122,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_144_findBySelector,"openfl.text._internal.CSSParser","findBySelector",0x599e9610,"openfl.text._internal.CSSParser.findBySelector","openfl/text/_internal/CSSParser.hx",144,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_185_deleteBySelector,"openfl.text._internal.CSSParser","deleteBySelector",0xa15a42c2,"openfl.text._internal.CSSParser.deleteBySelector","openfl/text/_internal/CSSParser.hx",185,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_202_compress,"openfl.text._internal.CSSParser","compress",0x05704543,"openfl.text._internal.CSSParser.compress","openfl/text/_internal/CSSParser.hx",202,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_242_diff,"openfl.text._internal.CSSParser","diff",0xa2c0b526,"openfl.text._internal.CSSParser.diff","openfl/text/_internal/CSSParser.hx",242,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_318_intelligentMerge,"openfl.text._internal.CSSParser","intelligentMerge",0xa461b762,"openfl.text._internal.CSSParser.intelligentMerge","openfl/text/_internal/CSSParser.hx",318,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_343_intelligentCSSPush,"openfl.text._internal.CSSParser","intelligentCSSPush",0x0ef15667,"openfl.text._internal.CSSParser.intelligentCSSPush","openfl/text/_internal/CSSParser.hx",343,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_416_compactRules,"openfl.text._internal.CSSParser","compactRules",0x4b959b75,"openfl.text._internal.CSSParser.compactRules","openfl/text/_internal/CSSParser.hx",416,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_434_getImports,"openfl.text._internal.CSSParser","getImports",0xc7508559,"openfl.text._internal.CSSParser.getImports","openfl/text/_internal/CSSParser.hx",434,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_454_parse,"openfl.text._internal.CSSParser","parse",0xa96c33f2,"openfl.text._internal.CSSParser.parse","openfl/text/_internal/CSSParser.hx",454,0xe8359bd2)
HX_LOCAL_STACK_FRAME(_hx_pos_ca3ccb00e898dca3_606_getMatches,"openfl.text._internal.CSSParser","getMatches",0xe7022ade,"openfl.text._internal.CSSParser.getMatches","openfl/text/_internal/CSSParser.hx",606,0xe8359bd2)
namespace openfl{
namespace text{
namespace _internal{

void CSSParser_obj::__construct( ::haxe::ds::StringMap options){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_12_new)
HXLINE(  25)		this->importRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("@import .*?;",b3,0e,97,b2),HX_("ig",de,5b,00,00));
HXLINE(  24)		this->commentRegex = HX_("(\\/\\*[\\s\\S]*?\\*\\/)",b6,b7,56,aa);
HXLINE(  23)		this->combinedCSSRegex = HX_("((\\s*?(?:\\/\\*[\\s\\S]*?\\*\\/)?\\s*?@media[\\s\\S]*?){([\\s\\S]*?)}\\s*?})|(([\\s\\S]*?){([\\s\\S]*?)*?})",76,57,74,ce);
HXLINE(  22)		this->keyframeRegex = HX_("((@.*?keyframes [\\s\\S]*?){([\\s\\S]*?}\\s*?)})",04,8d,5e,3b);
HXLINE(  21)		this->mediaQueryRegex = HX_("((@media [\\s\\S]*?){([\\s\\S]*?}\\s*?)})",c6,68,b5,92);
HXLINE(  20)		this->cssRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("([\\s\\S]*?){([\\s\\S]*?)*}",0e,f5,de,0e),HX_("ig",de,5b,00,00));
HXLINE(  18)		this->keyframeStatements = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  17)		this->importStatements = ::cpp::VirtualArray_obj::__new(0);
            	}

Dynamic CSSParser_obj::__CreateEmpty() { return new CSSParser_obj; }

void *CSSParser_obj::_hx_vtable = 0;

Dynamic CSSParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CSSParser_obj > _hx_result = new CSSParser_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CSSParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cb0eda7;
}

::String CSSParser_obj::stripComments(::String css){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_35_stripComments)
HXLINE(  36)		 ::EReg regex =  ::EReg_obj::__alloc( HX_CTX ,this->commentRegex,HX_("ig",de,5b,00,00));
HXLINE(  38)		return regex->replace(css,HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,stripComments,return )

::Array< ::Dynamic> CSSParser_obj::parseRules(::String rules){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_48_parseRules)
HXLINE(  50)		 ::EReg rulesReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("(\\*?[-#/\\*\\\\\\w]+(\\[[0-9a-z_-]+\\])?)+((?:'(?:\\\\'|.)*?'|\"(?:\\\\\"|.)*?\"|\\([^\\)]*?\\)|[^};])+)",53,76,86,d6),HX_("g",67,00,00,00));
HXLINE(  51)		::Array< ::String > arr = this->getMatches(rulesReg,rules,null());
HXLINE(  52)		::Array< ::Dynamic> ret = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  53)		{
HXLINE(  53)			int _g = 0;
HXDLIN(  53)			int _g1 = arr->length;
HXDLIN(  53)			while((_g < _g1)){
HXLINE(  53)				_g = (_g + 1);
HXDLIN(  53)				int i = (_g - 1);
HXLINE(  55)				if (!(rulesReg->match(arr->__get(i)))) {
HXLINE(  57)					return null();
            				}
HXLINE(  61)				rules = rulesReg->matched(0).split(HX_("\r\n",5d,0b,00,00))->join(HX_("\n",0a,00,00,00));
HXLINE(  71)				::String line = rules;
HXLINE(  74)				line = ::StringTools_obj::trim(line);
HXLINE(  75)				if ((line.indexOf(HX_(":",3a,00,00,00),null()) != -1)) {
HXLINE(  80)					::String directive = ::StringTools_obj::trim(line.split(HX_(":",3a,00,00,00))->__get(0));
HXLINE(  82)					::String value = ::StringTools_obj::trim(line.split(HX_(":",3a,00,00,00))->__get(1));
HXLINE(  86)					bool _hx_tmp;
HXDLIN(  86)					if ((directive.length >= 1)) {
HXLINE(  86)						_hx_tmp = (value.length < 1);
            					}
            					else {
HXLINE(  86)						_hx_tmp = true;
            					}
HXDLIN(  86)					if (_hx_tmp) {
HXLINE(  88)						continue;
            					}
HXLINE(  93)					 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  93)					_g->set(HX_("type",ba,f2,08,4d),HX_("declaration",fa,24,13,66));
HXDLIN(  93)					_g->set(HX_("property",55,48,38,ac),directive);
HXDLIN(  93)					_g->set(HX_("value",71,7f,b8,31),value);
HXDLIN(  93)					ret->push(_g);
            				}
            				else {
HXLINE(  98)					if ((::StringTools_obj::trim(line).substr(0,7) == HX_("base64,",bd,df,d5,2d))) {
HXLINE( 100)						::String _line = (line + ::StringTools_obj::trim(line));
HXLINE( 101)						ret->__get((ret->length - 1)).StaticCast<  ::haxe::ds::StringMap >()->set(HX_("value",71,7f,b8,31),_line);
            					}
            					else {
HXLINE( 106)						if ((line.length > 0)) {
HXLINE( 108)							 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 108)							_g->set(HX_("type",ba,f2,08,4d),HX_("declaration",fa,24,13,66));
HXDLIN( 108)							_g->set(HX_("property",55,48,38,ac),HX_("",00,00,00,00));
HXDLIN( 108)							_g->set(HX_("value",71,7f,b8,31),line);
HXDLIN( 108)							_g->set(HX_("defective",c7,0e,75,38),true);
HXDLIN( 108)							ret->push(_g);
            						}
            					}
            				}
            			}
            		}
HXLINE( 114)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,parseRules,return )

 ::haxe::ds::StringMap CSSParser_obj::findCorrespondingRule(::Array< ::Dynamic> rules,::String directive, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_122_findCorrespondingRule)
HXLINE( 123)		 ::haxe::ds::StringMap ret = null();
HXLINE( 124)		{
HXLINE( 124)			int _g = 0;
HXDLIN( 124)			int _g1 = rules->length;
HXDLIN( 124)			while((_g < _g1)){
HXLINE( 124)				_g = (_g + 1);
HXDLIN( 124)				int i = (_g - 1);
HXLINE( 126)				if (::hx::IsEq( rules->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("directive",4f,68,40,10)),directive )) {
HXLINE( 128)					ret = rules->__get(i).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 129)					if (::hx::IsEq( value,rules->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("value",71,7f,b8,31)) )) {
HXLINE( 131)						goto _hx_goto_4;
            					}
            				}
            			}
            			_hx_goto_4:;
            		}
HXLINE( 136)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSSParser_obj,findCorrespondingRule,return )

::Array< ::Dynamic> CSSParser_obj::findBySelector(::Array< ::Dynamic> objectArray,::String selector,::hx::Null< bool >  __o_contains){
            		bool contains = __o_contains.Default(false);
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_144_findBySelector)
HXLINE( 145)		::Array< ::Dynamic> found = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 147)		{
HXLINE( 147)			int _g = 0;
HXDLIN( 147)			int _g1 = objectArray->length;
HXDLIN( 147)			while((_g < _g1)){
HXLINE( 147)				_g = (_g + 1);
HXDLIN( 147)				int i = (_g - 1);
HXLINE( 149)				if ((contains == false)) {
HXLINE( 151)					if (::hx::IsEq( objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("selector",1f,33,6d,b1)),selector )) {
HXLINE( 153)						found->push(objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >());
            					}
            				}
            				else {
HXLINE( 158)					if ((::hx::TCast< ::String >::cast(objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("selector",1f,33,6d,b1))).indexOf(selector,null()) != -1)) {
HXLINE( 160)						found->push(objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >());
            					}
            				}
            			}
            		}
HXLINE( 165)		bool _hx_tmp;
HXDLIN( 165)		if ((selector != HX_("@imports",2e,1f,67,b6))) {
HXLINE( 165)			_hx_tmp = (found->length < 2);
            		}
            		else {
HXLINE( 165)			_hx_tmp = true;
            		}
HXDLIN( 165)		if (_hx_tmp) {
HXLINE( 167)			return found;
            		}
            		else {
HXLINE( 171)			 ::haxe::ds::StringMap base = found->__get(0).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 172)			{
HXLINE( 172)				int _g = 0;
HXDLIN( 172)				int _g1 = found->length;
HXDLIN( 172)				while((_g < _g1)){
HXLINE( 172)					_g = (_g + 1);
HXDLIN( 172)					int i = (_g - 1);
HXLINE( 174)					this->intelligentCSSPush(::Array_obj< ::Dynamic>::__new(1)->init(0,base),found->__get(i).StaticCast<  ::haxe::ds::StringMap >(),null());
            				}
            			}
HXLINE( 177)			return ::Array_obj< ::Dynamic>::__new(1)->init(0,base);
            		}
HXLINE( 165)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSSParser_obj,findBySelector,return )

::Array< ::Dynamic> CSSParser_obj::deleteBySelector(::Array< ::Dynamic> objectArray,::String selector){
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_185_deleteBySelector)
HXLINE( 186)		::Array< ::Dynamic> ret = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 187)		{
HXLINE( 187)			int _g = 0;
HXDLIN( 187)			int _g1 = objectArray->length;
HXDLIN( 187)			while((_g < _g1)){
HXLINE( 187)				_g = (_g + 1);
HXDLIN( 187)				int i = (_g - 1);
HXLINE( 189)				if (::hx::IsNotEq( objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("selector",1f,33,6d,b1)),selector )) {
HXLINE( 191)					ret->push(objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >());
            				}
            			}
            		}
HXLINE( 194)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CSSParser_obj,deleteBySelector,return )

::Array< ::Dynamic> CSSParser_obj::compress(::Array< ::Dynamic> objectArray){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_202_compress)
HXLINE( 203)		::Array< ::Dynamic> compressed = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 204)		 ::haxe::ds::StringMap done =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 206)		{
HXLINE( 206)			int _g = 0;
HXDLIN( 206)			int _g1 = objectArray->length;
HXDLIN( 206)			while((_g < _g1)){
HXLINE( 206)				_g = (_g + 1);
HXDLIN( 206)				int i = (_g - 1);
HXLINE( 208)				 ::haxe::ds::StringMap obj = objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 210)				if (::hx::IsEq( done->get(obj->get(HX_("selector",1f,33,6d,b1))),true )) {
HXLINE( 212)					continue;
            				}
HXLINE( 215)				::Array< ::Dynamic> found = this->findBySelector(objectArray,obj->get_string(HX_("selector",1f,33,6d,b1)),null());
HXLINE( 216)				if ((found->length != 0)) {
HXLINE( 218)					compressed = compressed->concat(found);
HXLINE( 219)					done->set(HX_("selector",1f,33,6d,b1),true);
            				}
            			}
            		}
HXLINE( 223)		return compressed;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,compress,return )

 ::haxe::ds::StringMap CSSParser_obj::diff( ::haxe::ds::StringMap object1, ::haxe::ds::StringMap object2){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_242_diff)
HXLINE( 243)		 ::Dynamic _hx_tmp = object1->get(HX_("selector",1f,33,6d,b1));
HXDLIN( 243)		if (::hx::IsEq( _hx_tmp,object2->get(HX_("selector",1f,33,6d,b1)) )) {
HXLINE( 245)			return null();
            		}
HXLINE( 249)		bool _hx_tmp1;
HXDLIN( 249)		if (::hx::IsNotEq( object1->get(HX_("type",ba,f2,08,4d)),HX_("media",e4,04,bc,05) )) {
HXLINE( 249)			_hx_tmp1 = ::hx::IsEq( object2->get(HX_("type",ba,f2,08,4d)),HX_("media",e4,04,bc,05) );
            		}
            		else {
HXLINE( 249)			_hx_tmp1 = true;
            		}
HXDLIN( 249)		if (_hx_tmp1) {
HXLINE( 251)			return null();
            		}
HXLINE( 254)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 254)		_g->set(HX_("selector",1f,33,6d,b1),object1->get(HX_("selector",1f,33,6d,b1)));
HXDLIN( 254)		_g->set(HX_("rules",f7,63,56,f1),::Array_obj< ::Dynamic>::__new());
HXDLIN( 254)		 ::haxe::ds::StringMap diff = _g;
HXLINE( 259)		 ::haxe::ds::StringMap rule1 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 260)		 ::haxe::ds::StringMap rule2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 262)		int _length = ::hx::TCast< ::cpp::VirtualArray >::cast(object1->get(HX_("rules",f7,63,56,f1)))->get_length();
HXLINE( 263)		int _length2 = ::hx::TCast< ::cpp::VirtualArray >::cast(object2->get(HX_("rules",f7,63,56,f1)))->get_length();
HXLINE( 265)		{
HXLINE( 265)			int _g1 = 0;
HXDLIN( 265)			int _g2 = _length;
HXDLIN( 265)			while((_g1 < _g2)){
HXLINE( 265)				_g1 = (_g1 + 1);
HXDLIN( 265)				int i = (_g1 - 1);
HXLINE( 267)				rule1 = ( ( ::haxe::ds::StringMap)(object1->get(HX_("rules",f7,63,56,f1))->__GetItem(1)) );
HXLINE( 269)				 ::Dynamic rule21 = object2->get(HX_("rules",f7,63,56,f1));
HXDLIN( 269)				 ::Dynamic rule22 = object1->get(HX_("directive",4f,68,40,10));
HXDLIN( 269)				rule2 = this->findCorrespondingRule(( (::Array< ::Dynamic>)(rule21) ),( (::String)(rule22) ),object1->get(HX_("value",71,7f,b8,31)));
HXLINE( 271)				if (::hx::IsNull( rule2 )) {
HXLINE( 274)					::hx::TCast< ::cpp::VirtualArray >::cast(diff->get(HX_("rules",f7,63,56,f1)))->push(rule1);
            				}
            				else {
HXLINE( 279)					 ::Dynamic _hx_tmp = rule1->get(HX_("value",71,7f,b8,31));
HXDLIN( 279)					if (::hx::IsNotEq( _hx_tmp,rule2->get(HX_("value",71,7f,b8,31)) )) {
HXLINE( 281)						::hx::TCast< ::cpp::VirtualArray >::cast(diff->get(HX_("rules",f7,63,56,f1)))->push(rule1);
            					}
            				}
            			}
            		}
HXLINE( 288)		{
HXLINE( 288)			int _g3 = 0;
HXDLIN( 288)			int _g4 = _length2;
HXDLIN( 288)			while((_g3 < _g4)){
HXLINE( 288)				_g3 = (_g3 + 1);
HXDLIN( 288)				int i = (_g3 - 1);
HXLINE( 290)				rule2 = ( ( ::haxe::ds::StringMap)(object1->get(HX_("rules",f7,63,56,f1))->__GetItem(1)) );
HXLINE( 292)				 ::Dynamic rule11 = object1->get(HX_("rules",f7,63,56,f1));
HXDLIN( 292)				rule1 = this->findCorrespondingRule(( (::Array< ::Dynamic>)(rule11) ),object2->get_string(HX_("directive",4f,68,40,10)),null());
HXLINE( 294)				if (::hx::IsNull( rule1 )) {
HXLINE( 297)					rule2->set(HX_("type",ba,f2,08,4d),HX_("DELETED",b9,39,a3,92));
HXLINE( 298)					::hx::TCast< ::cpp::VirtualArray >::cast(diff->get(HX_("rules",f7,63,56,f1)))->push(rule2);
            				}
            			}
            		}
HXLINE( 302)		if ((::hx::TCast< ::cpp::VirtualArray >::cast(diff->get(HX_("rules",f7,63,56,f1)))->get_length() == 0)) {
HXLINE( 304)			return null();
            		}
HXLINE( 306)		return diff;
            	}


HX_DEFINE_DYNAMIC_FUNC2(CSSParser_obj,diff,return )

void CSSParser_obj::intelligentMerge(::Array< ::Dynamic> objectArray,::Array< ::Dynamic> newArray,::hx::Null< bool >  __o_reverse){
            		bool reverse = __o_reverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_318_intelligentMerge)
HXLINE( 319)		{
HXLINE( 319)			int _g = 0;
HXDLIN( 319)			int _g1 = newArray->length;
HXDLIN( 319)			while((_g < _g1)){
HXLINE( 319)				_g = (_g + 1);
HXDLIN( 319)				int i = (_g - 1);
HXLINE( 321)				this->intelligentCSSPush(objectArray,newArray->__get(i).StaticCast<  ::haxe::ds::StringMap >(),reverse);
            			}
            		}
HXLINE( 323)		{
HXLINE( 323)			int _g2 = 0;
HXDLIN( 323)			int _g3 = objectArray->length;
HXDLIN( 323)			while((_g2 < _g3)){
HXLINE( 323)				_g2 = (_g2 + 1);
HXDLIN( 323)				int i = (_g2 - 1);
HXLINE( 325)				 ::haxe::ds::StringMap cobj = objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 326)				bool _hx_tmp;
HXDLIN( 326)				if (::hx::IsNotEq( cobj->get(HX_("type",ba,f2,08,4d)),HX_("media",e4,04,bc,05) )) {
HXLINE( 326)					_hx_tmp = ::hx::IsEq( cobj->get(HX_("type",ba,f2,08,4d)),HX_("keyframes",85,ba,f8,0f) );
            				}
            				else {
HXLINE( 326)					_hx_tmp = true;
            				}
HXDLIN( 326)				if (_hx_tmp) {
HXLINE( 328)					continue;
            				}
HXLINE( 330)				cobj->set(HX_("rules",f7,63,56,f1),this->compactRules(( (::Array< ::Dynamic>)(cobj->get(HX_("rules",f7,63,56,f1))) )));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSSParser_obj,intelligentMerge,(void))

void CSSParser_obj::intelligentCSSPush(::Array< ::Dynamic> objectArray, ::haxe::ds::StringMap minimalObject,::hx::Null< bool >  __o_reverse){
            		bool reverse = __o_reverse.Default(false);
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_343_intelligentCSSPush)
HXLINE( 344)		 ::Dynamic pushSelector = minimalObject->get(HX_("selector",1f,33,6d,b1));
HXLINE( 346)		 ::haxe::ds::StringMap cssObject = null();
HXLINE( 347)		if ((reverse == false)) {
HXLINE( 349)			int _g = 0;
HXDLIN( 349)			int _g1 = objectArray->length;
HXDLIN( 349)			while((_g < _g1)){
HXLINE( 349)				_g = (_g + 1);
HXDLIN( 349)				int i = (_g - 1);
HXLINE( 351)				 ::Dynamic _hx_tmp = objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("selector",1f,33,6d,b1));
HXDLIN( 351)				if (::hx::IsEq( _hx_tmp,minimalObject->get(HX_("selector",1f,33,6d,b1)) )) {
HXLINE( 353)					cssObject = objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 354)					goto _hx_goto_19;
            				}
            			}
            			_hx_goto_19:;
            		}
            		else {
HXLINE( 360)			int j = (objectArray->length - 1);
HXLINE( 361)			while((j > -1)){
HXLINE( 363)				 ::Dynamic _hx_tmp = objectArray->__get(j).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("selector",1f,33,6d,b1));
HXDLIN( 363)				if (::hx::IsEq( _hx_tmp,minimalObject->get(HX_("selector",1f,33,6d,b1)) )) {
HXLINE( 365)					cssObject = objectArray->__get(j).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 366)					goto _hx_goto_20;
            				}
HXLINE( 368)				j = (j - 1);
            			}
            			_hx_goto_20:;
            		}
HXLINE( 371)		if (::hx::IsNull( cssObject )) {
HXLINE( 373)			objectArray->push(minimalObject);
            		}
            		else {
HXLINE( 377)			if (::hx::IsNotEq( minimalObject->get(HX_("type",ba,f2,08,4d)),HX_("media",e4,04,bc,05) )) {
HXLINE( 379)				::Array< ::Dynamic> mRules = ( (::Array< ::Dynamic>)(minimalObject->get(HX_("rules",f7,63,56,f1))) );
HXLINE( 380)				{
HXLINE( 380)					int _g = 0;
HXDLIN( 380)					int _g1 = mRules->length;
HXDLIN( 380)					while((_g < _g1)){
HXLINE( 380)						_g = (_g + 1);
HXDLIN( 380)						int i = (_g - 1);
HXLINE( 382)						 ::haxe::ds::StringMap rule = mRules->__get(i).StaticCast<  ::haxe::ds::StringMap >();
HXLINE( 384)						 ::Dynamic oldRule = cssObject->get(HX_("rules",f7,63,56,f1));
HXDLIN( 384)						 ::haxe::ds::StringMap oldRule1 = this->findCorrespondingRule(( (::Array< ::Dynamic>)(oldRule) ),rule->get_string(HX_("directive",4f,68,40,10)),null());
HXLINE( 385)						if (::hx::IsNull( oldRule1 )) {
HXLINE( 387)							::Array< ::Dynamic> cRules = ( (::Array< ::Dynamic>)(cssObject->get(HX_("rules",f7,63,56,f1))) );
HXLINE( 388)							cRules->push(rule);
            						}
            						else {
HXLINE( 390)							if (::hx::IsEq( rule->get(HX_("type",ba,f2,08,4d)),HX_("DELETED",b9,39,a3,92) )) {
HXLINE( 392)								oldRule1->set(HX_("type",ba,f2,08,4d),HX_("DELETED",b9,39,a3,92));
            							}
            							else {
HXLINE( 398)								oldRule1->set(HX_("value",71,7f,b8,31),rule->get(HX_("value",71,7f,b8,31)));
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 405)				::cpp::VirtualArray _hx_tmp = ::hx::TCast< ::cpp::VirtualArray >::cast(cssObject->get(HX_("subStyles",c2,23,1f,1c)));
HXLINE( 404)				cssObject->set(HX_("value",71,7f,b8,31),_hx_tmp->concat(( (::cpp::VirtualArray)(minimalObject->get(HX_("subStyles",c2,23,1f,1c))) )));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSSParser_obj,intelligentCSSPush,(void))

::Array< ::Dynamic> CSSParser_obj::compactRules(::Array< ::Dynamic> rules){
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_416_compactRules)
HXLINE( 417)		::Array< ::Dynamic> newRules = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 418)		{
HXLINE( 418)			int _g = 0;
HXDLIN( 418)			int _g1 = rules->length;
HXDLIN( 418)			while((_g < _g1)){
HXLINE( 418)				_g = (_g + 1);
HXDLIN( 418)				int i = (_g - 1);
HXLINE( 420)				if (::hx::IsNotEq( rules->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("type",ba,f2,08,4d)),HX_("DELETED",b9,39,a3,92) )) {
HXLINE( 422)					newRules->push(rules->__get(i).StaticCast<  ::haxe::ds::StringMap >());
            				}
            			}
            		}
HXLINE( 426)		return newRules;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,compactRules,return )

::cpp::VirtualArray CSSParser_obj::getImports(::Array< ::Dynamic> objectArray){
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_434_getImports)
HXLINE( 435)		::cpp::VirtualArray imps = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 436)		{
HXLINE( 436)			int _g = 0;
HXDLIN( 436)			int _g1 = objectArray->length;
HXDLIN( 436)			while((_g < _g1)){
HXLINE( 436)				_g = (_g + 1);
HXDLIN( 436)				int i = (_g - 1);
HXLINE( 438)				if (::hx::IsEq( objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("type",ba,f2,08,4d)),HX_("imports",6e,97,ca,69) )) {
HXLINE( 440)					imps->push(objectArray->__get(i).StaticCast<  ::haxe::ds::StringMap >()->get(HX_("styles",22,e6,d2,15)));
            				}
            			}
            		}
HXLINE( 443)		return imps;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,getImports,return )

 ::haxe::ds::StringMap CSSParser_obj::parse(::String source){
            	HX_GC_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_454_parse)
HXLINE( 455)		if (::hx::IsNull( source )) {
HXLINE( 457)			return null();
            		}
HXLINE( 460)		source =  ::EReg_obj::__alloc( HX_CTX ,HX_("^\\s+|\\s+$",96,66,19,85),HX_("g",67,00,00,00))->replace(source,HX_("",00,00,00,00));
HXLINE( 464)		::Array< ::Dynamic> css = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 466)		bool m = this->importRegex->match(source);
HXLINE( 467)		while(m){
HXLINE( 469)			::String imports = this->importRegex->matched(0);
HXLINE( 470)			if (::hx::IsNotNull( imports )) {
HXLINE( 472)				this->importStatements->push(imports);
HXLINE( 473)				 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 473)				_g->set(HX_("selector",1f,33,6d,b1),HX_("@imports",2e,1f,67,b6));
HXDLIN( 473)				_g->set(HX_("type",ba,f2,08,4d),HX_("imports",6e,97,ca,69));
HXDLIN( 473)				_g->set(HX_("styles",22,e6,d2,15),imports);
HXDLIN( 473)				css->push(_g);
            			}
            			else {
HXLINE( 477)				goto _hx_goto_27;
            			}
            		}
            		_hx_goto_27:;
HXLINE( 481)		source = this->importRegex->replace(source,HX_("",00,00,00,00));
HXLINE( 485)		 ::EReg keyframesRegex =  ::EReg_obj::__alloc( HX_CTX ,this->keyframeRegex,HX_("gi",22,5a,00,00));
HXLINE( 487)		::Array< ::String > arr = null();
HXLINE( 489)		while(keyframesRegex->match(source)){
HXLINE( 491)			arr = this->getMatches(keyframesRegex,source,null());
HXLINE( 492)			if (::hx::IsNull( arr )) {
HXLINE( 494)				goto _hx_goto_28;
            			}
HXLINE( 496)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 496)			_g->set(HX_("selectors",74,88,1f,8e),HX_("@keyframes",45,b2,96,22));
HXDLIN( 496)			_g->set(HX_("type",ba,f2,08,4d),HX_("keyframes",85,ba,f8,0f));
HXDLIN( 496)			_g->set(HX_("styles",22,e6,d2,15),keyframesRegex->matchedRight());
HXDLIN( 496)			css->push(_g);
            		}
            		_hx_goto_28:;
HXLINE( 503)		source = keyframesRegex->replace(source,HX_("",00,00,00,00));
HXLINE( 506)		 ::EReg unified =  ::EReg_obj::__alloc( HX_CTX ,this->combinedCSSRegex,HX_("gi",22,5a,00,00));
HXLINE( 508)		while(unified->match(source)){
HXLINE( 510)			arr = this->getMatches(unified,source,null());
HXLINE( 512)			if (::hx::IsNull( arr )) {
HXLINE( 514)				goto _hx_goto_29;
            			}
HXLINE( 516)			::String selector = HX_("",00,00,00,00);
HXLINE( 521)			{
HXLINE( 521)				int _g = 0;
HXDLIN( 521)				int _g1 = arr->length;
HXDLIN( 521)				while((_g < _g1)){
HXLINE( 521)					_g = (_g + 1);
HXDLIN( 521)					int i = (_g - 1);
HXLINE( 523)					 ::EReg selReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("^([^{]+)",4d,c8,98,53),HX_("",00,00,00,00));
HXLINE( 525)					if (selReg->match(arr->__get(i))) {
HXLINE( 530)						if (::hx::IsNotNull( selReg->matched(0) )) {
HXLINE( 532)							selector = ::StringTools_obj::trim(selReg->matched(0).split(HX_("\r\n",5d,0b,00,00))->join(HX_("\n",0a,00,00,00)));
            						}
HXLINE( 539)						 ::EReg commentsRegex =  ::EReg_obj::__alloc( HX_CTX ,this->commentRegex,HX_("gi",22,5a,00,00));
HXLINE( 540)						::Array< ::String > comments = this->getMatches(commentsRegex,selector,null());
HXLINE( 542)						if (::hx::IsNotNull( comments )) {
HXLINE( 544)							selector = ::StringTools_obj::trim(commentsRegex->replace(selector,HX_("",00,00,00,00)));
            						}
HXLINE( 549)						selector =  ::EReg_obj::__alloc( HX_CTX ,HX_("\n+",e1,08,00,00),HX_("",00,00,00,00))->replace(selector,HX_("\n",0a,00,00,00));
HXLINE( 552)						if ((selector.indexOf(HX_("@media",a4,1c,93,9c),null()) != -1)) {
HXLINE( 556)							 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 556)							_g->set(HX_("selectors",74,88,1f,8e),selector);
HXDLIN( 556)							_g->set(HX_("type",ba,f2,08,4d),HX_("media",e4,04,bc,05));
HXDLIN( 556)							_g->set(HX_("subStyles",c2,23,1f,1c),this->parse((selReg->matchedRight() + HX_("\n}",33,09,00,00))));
HXDLIN( 556)							 ::haxe::ds::StringMap object = _g;
HXLINE( 562)							if (::hx::IsNotNull( comments )) {
HXLINE( 564)								object->set(HX_("comments",34,99,fa,c0),comments->__get(0));
            							}
HXLINE( 567)							css->push(object);
            						}
            						else {
HXLINE( 572)							if (::hx::IsNotNull( selReg->matchedRight() )) {
HXLINE( 574)								::Array< ::Dynamic> rules = this->parseRules(selReg->matchedRight());
HXLINE( 576)								 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 576)								_g->set(HX_("selectors",74,88,1f,8e),selector);
HXDLIN( 576)								_g->set(HX_("type",ba,f2,08,4d),HX_("rule",fc,78,b3,4b));
HXDLIN( 576)								_g->set(HX_("declarations",39,36,ad,ea),rules);
HXDLIN( 576)								 ::haxe::ds::StringMap styleObject = _g;
HXLINE( 577)								if ((selector == HX_("@font-face",db,fa,09,58))) {
HXLINE( 579)									styleObject->set(HX_("type",ba,f2,08,4d),HX_("font-face",1b,03,6c,45));
            								}
HXLINE( 582)								if (::hx::IsNotNull( comments )) {
HXLINE( 584)									styleObject->set(HX_("comments",34,99,fa,c0),comments->__get(0));
            								}
HXLINE( 587)								css->push(styleObject);
            							}
            						}
            					}
            					else {
HXLINE( 594)						goto _hx_goto_30;
            					}
            				}
            				_hx_goto_30:;
            			}
HXLINE( 598)			goto _hx_goto_29;
            		}
            		_hx_goto_29:;
HXLINE( 600)		 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 600)		_g->set(HX_("type",ba,f2,08,4d),HX_("stylesheet",ce,cb,e8,68));
HXDLIN( 600)		_g->set(HX_("rules",f7,63,56,f1),css);
HXDLIN( 600)		_g->set(HX_("parsingErrors",fb,e7,0f,8c),::cpp::VirtualArray_obj::__new(0));
HXDLIN( 600)		 ::haxe::ds::StringMap ret = _g;
HXLINE( 602)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSSParser_obj,parse,return )

::Array< ::String > CSSParser_obj::getMatches( ::EReg ereg,::String input,::hx::Null< int >  __o_index){
            		int index = __o_index.Default(0);
            	HX_STACKFRAME(&_hx_pos_ca3ccb00e898dca3_606_getMatches)
HXLINE( 607)		::Array< ::String > matches = ::Array_obj< ::String >::__new(0);
HXLINE( 608)		while(ereg->match(input)){
HXLINE( 610)			::String match = ::StringTools_obj::trim(ereg->matched(index));
HXLINE( 612)			matches->push(match);
HXLINE( 613)			input = ::StringTools_obj::trim(ereg->matchedRight());
            		}
HXLINE( 615)		if ((matches->length == 0)) {
HXLINE( 617)			return null();
            		}
HXLINE( 619)		return matches;
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSSParser_obj,getMatches,return )


::hx::ObjectPtr< CSSParser_obj > CSSParser_obj::__new( ::haxe::ds::StringMap options) {
	::hx::ObjectPtr< CSSParser_obj > __this = new CSSParser_obj();
	__this->__construct(options);
	return __this;
}

::hx::ObjectPtr< CSSParser_obj > CSSParser_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::StringMap options) {
	CSSParser_obj *__this = (CSSParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CSSParser_obj), true, "openfl.text._internal.CSSParser"));
	*(void **)__this = CSSParser_obj::_hx_vtable;
	__this->__construct(options);
	return __this;
}

CSSParser_obj::CSSParser_obj()
{
}

void CSSParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CSSParser);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(importStatements,"importStatements");
	HX_MARK_MEMBER_NAME(keyframeStatements,"keyframeStatements");
	HX_MARK_MEMBER_NAME(cssRegex,"cssRegex");
	HX_MARK_MEMBER_NAME(mediaQueryRegex,"mediaQueryRegex");
	HX_MARK_MEMBER_NAME(keyframeRegex,"keyframeRegex");
	HX_MARK_MEMBER_NAME(combinedCSSRegex,"combinedCSSRegex");
	HX_MARK_MEMBER_NAME(commentRegex,"commentRegex");
	HX_MARK_MEMBER_NAME(importRegex,"importRegex");
	HX_MARK_END_CLASS();
}

void CSSParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(importStatements,"importStatements");
	HX_VISIT_MEMBER_NAME(keyframeStatements,"keyframeStatements");
	HX_VISIT_MEMBER_NAME(cssRegex,"cssRegex");
	HX_VISIT_MEMBER_NAME(mediaQueryRegex,"mediaQueryRegex");
	HX_VISIT_MEMBER_NAME(keyframeRegex,"keyframeRegex");
	HX_VISIT_MEMBER_NAME(combinedCSSRegex,"combinedCSSRegex");
	HX_VISIT_MEMBER_NAME(commentRegex,"commentRegex");
	HX_VISIT_MEMBER_NAME(importRegex,"importRegex");
}

::hx::Val CSSParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"diff") ) { return ::hx::Val( diff_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return ::hx::Val( source ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cssRegex") ) { return ::hx::Val( cssRegex ); }
		if (HX_FIELD_EQ(inName,"compress") ) { return ::hx::Val( compress_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseRules") ) { return ::hx::Val( parseRules_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImports") ) { return ::hx::Val( getImports_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMatches") ) { return ::hx::Val( getMatches_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"importRegex") ) { return ::hx::Val( importRegex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"commentRegex") ) { return ::hx::Val( commentRegex ); }
		if (HX_FIELD_EQ(inName,"compactRules") ) { return ::hx::Val( compactRules_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"keyframeRegex") ) { return ::hx::Val( keyframeRegex ); }
		if (HX_FIELD_EQ(inName,"stripComments") ) { return ::hx::Val( stripComments_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findBySelector") ) { return ::hx::Val( findBySelector_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mediaQueryRegex") ) { return ::hx::Val( mediaQueryRegex ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"importStatements") ) { return ::hx::Val( importStatements ); }
		if (HX_FIELD_EQ(inName,"combinedCSSRegex") ) { return ::hx::Val( combinedCSSRegex ); }
		if (HX_FIELD_EQ(inName,"deleteBySelector") ) { return ::hx::Val( deleteBySelector_dyn() ); }
		if (HX_FIELD_EQ(inName,"intelligentMerge") ) { return ::hx::Val( intelligentMerge_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"keyframeStatements") ) { return ::hx::Val( keyframeStatements ); }
		if (HX_FIELD_EQ(inName,"intelligentCSSPush") ) { return ::hx::Val( intelligentCSSPush_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"findCorrespondingRule") ) { return ::hx::Val( findCorrespondingRule_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CSSParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cssRegex") ) { cssRegex=inValue.Cast<  ::EReg >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"importRegex") ) { importRegex=inValue.Cast<  ::EReg >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"commentRegex") ) { commentRegex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"keyframeRegex") ) { keyframeRegex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mediaQueryRegex") ) { mediaQueryRegex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"importStatements") ) { importStatements=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"combinedCSSRegex") ) { combinedCSSRegex=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"keyframeStatements") ) { keyframeStatements=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CSSParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("source",db,b0,31,32));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("importStatements",29,c7,64,11));
	outFields->push(HX_("keyframeStatements",32,09,8b,aa));
	outFields->push(HX_("cssRegex",04,98,9d,41));
	outFields->push(HX_("mediaQueryRegex",a3,a4,f6,78));
	outFields->push(HX_("keyframeRegex",b9,c9,00,cb));
	outFields->push(HX_("combinedCSSRegex",29,02,30,f0));
	outFields->push(HX_("commentRegex",e8,2b,69,48));
	outFields->push(HX_("importRegex",22,cf,4d,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CSSParser_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(CSSParser_obj,source),HX_("source",db,b0,31,32)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(CSSParser_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(CSSParser_obj,importStatements),HX_("importStatements",29,c7,64,11)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(CSSParser_obj,keyframeStatements),HX_("keyframeStatements",32,09,8b,aa)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(CSSParser_obj,cssRegex),HX_("cssRegex",04,98,9d,41)},
	{::hx::fsString,(int)offsetof(CSSParser_obj,mediaQueryRegex),HX_("mediaQueryRegex",a3,a4,f6,78)},
	{::hx::fsString,(int)offsetof(CSSParser_obj,keyframeRegex),HX_("keyframeRegex",b9,c9,00,cb)},
	{::hx::fsString,(int)offsetof(CSSParser_obj,combinedCSSRegex),HX_("combinedCSSRegex",29,02,30,f0)},
	{::hx::fsString,(int)offsetof(CSSParser_obj,commentRegex),HX_("commentRegex",e8,2b,69,48)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(CSSParser_obj,importRegex),HX_("importRegex",22,cf,4d,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CSSParser_obj_sStaticStorageInfo = 0;
#endif

static ::String CSSParser_obj_sMemberFields[] = {
	HX_("source",db,b0,31,32),
	HX_("options",5e,33,fe,df),
	HX_("importStatements",29,c7,64,11),
	HX_("keyframeStatements",32,09,8b,aa),
	HX_("cssRegex",04,98,9d,41),
	HX_("mediaQueryRegex",a3,a4,f6,78),
	HX_("keyframeRegex",b9,c9,00,cb),
	HX_("combinedCSSRegex",29,02,30,f0),
	HX_("commentRegex",e8,2b,69,48),
	HX_("importRegex",22,cf,4d,31),
	HX_("stripComments",2c,40,17,46),
	HX_("parseRules",c4,aa,37,1b),
	HX_("findCorrespondingRule",96,94,82,2a),
	HX_("findBySelector",af,29,92,96),
	HX_("deleteBySelector",21,3c,11,b1),
	HX_("compress",a2,47,bf,83),
	HX_("diff",05,5c,69,42),
	HX_("intelligentMerge",c1,b0,18,b4),
	HX_("intelligentCSSPush",86,a5,60,b5),
	HX_("compactRules",54,b9,9e,1d),
	HX_("getImports",78,1d,2c,b9),
	HX_("parse",33,90,55,bd),
	HX_("getMatches",fd,c2,dd,d8),
	::String(null()) };

::hx::Class CSSParser_obj::__mClass;

void CSSParser_obj::__register()
{
	CSSParser_obj _hx_dummy;
	CSSParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._internal.CSSParser",ed,9a,1d,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CSSParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CSSParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CSSParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CSSParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace text
} // end namespace _internal
