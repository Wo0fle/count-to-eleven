#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_display_BitmapData
#include <lime/app/Promise_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_display_MovieClip
#include <lime/app/Promise_openfl_display_MovieClip.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_media_Sound
#include <lime/app/Promise_openfl_media_Sound.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_text_Font
#include <lime/app/Promise_openfl_text_Font.h>
#endif
#ifndef INCLUDED_lime_app_Promise_openfl_utils_ByteArray
#include <lime/app/Promise_openfl_utils_ByteArray.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#include <lime/media/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetCache
#include <openfl/utils/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_53_addEventListener,"openfl.utils.Assets","addEventListener",0xdf923d5d,"openfl.utils.Assets.addEventListener","openfl/utils/Assets.hx",53,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_66_dispatchEvent,"openfl.utils.Assets","dispatchEvent",0xec96fb70,"openfl.utils.Assets.dispatchEvent","openfl/utils/Assets.hx",66,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_78_exists,"openfl.utils.Assets","exists",0x4d6bbb6c,"openfl.utils.Assets.exists","openfl/utils/Assets.hx",78,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_92_getBitmapData,"openfl.utils.Assets","getBitmapData",0xb665465f,"openfl.utils.Assets.getBitmapData","openfl/utils/Assets.hx",92,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_135_getBytes,"openfl.utils.Assets","getBytes",0xdb493985,"openfl.utils.Assets.getBytes","openfl/utils/Assets.hx",135,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_149_getFont,"openfl.utils.Assets","getFont",0x62e14df5,"openfl.utils.Assets.getFont","openfl/utils/Assets.hx",149,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_182_getLibrary,"openfl.utils.Assets","getLibrary",0x10a35295,"openfl.utils.Assets.getLibrary","openfl/utils/Assets.hx",182,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_195_getMovieClip,"openfl.utils.Assets","getMovieClip",0xfd23c8ba,"openfl.utils.Assets.getMovieClip","openfl/utils/Assets.hx",195,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_233_getMusic,"openfl.utils.Assets","getMusic",0x2e0c01bf,"openfl.utils.Assets.getMusic","openfl/utils/Assets.hx",233,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_255_getPath,"openfl.utils.Assets","getPath",0x6972d5cb,"openfl.utils.Assets.getPath","openfl/utils/Assets.hx",255,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_269_getSound,"openfl.utils.Assets","getSound",0x9e7dbde9,"openfl.utils.Assets.getSound","openfl/utils/Assets.hx",269,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_312_getText,"openfl.utils.Assets","getText",0x6c1abcd3,"openfl.utils.Assets.getText","openfl/utils/Assets.hx",312,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_320_hasEventListener,"openfl.utils.Assets","hasEventListener",0xfb186084,"openfl.utils.Assets.hasEventListener","openfl/utils/Assets.hx",320,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_326_hasLibrary,"openfl.utils.Assets","hasLibrary",0x4bf5b451,"openfl.utils.Assets.hasLibrary","openfl/utils/Assets.hx",326,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_344_initBinding,"openfl.utils.Assets","initBinding",0x4d373285,"openfl.utils.Assets.initBinding","openfl/utils/Assets.hx",344,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_352_initBinding,"openfl.utils.Assets","initBinding",0x4d373285,"openfl.utils.Assets.initBinding","openfl/utils/Assets.hx",352,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_378_isLocal,"openfl.utils.Assets","isLocal",0x6214ad91,"openfl.utils.Assets.isLocal","openfl/utils/Assets.hx",378,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_425_isValidBitmapData,"openfl.utils.Assets","isValidBitmapData",0x6121917b,"openfl.utils.Assets.isValidBitmapData","openfl/utils/Assets.hx",425,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_435_isValidSound,"openfl.utils.Assets","isValidSound",0x76dd484d,"openfl.utils.Assets.isValidSound","openfl/utils/Assets.hx",435,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_450_list,"openfl.utils.Assets","list",0xcc5935ee,"openfl.utils.Assets.list","openfl/utils/Assets.hx",450,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_483_loadBitmapData,"openfl.utils.Assets","loadBitmapData",0x102d6d0f,"openfl.utils.Assets.loadBitmapData","openfl/utils/Assets.hx",483,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_464_loadBitmapData,"openfl.utils.Assets","loadBitmapData",0x102d6d0f,"openfl.utils.Assets.loadBitmapData","openfl/utils/Assets.hx",464,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_522_loadBytes,"openfl.utils.Assets","loadBytes",0x39d290d5,"openfl.utils.Assets.loadBytes","openfl/utils/Assets.hx",522,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_523_loadBytes,"openfl.utils.Assets","loadBytes",0x39d290d5,"openfl.utils.Assets.loadBytes","openfl/utils/Assets.hx",523,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_524_loadBytes,"openfl.utils.Assets","loadBytes",0x39d290d5,"openfl.utils.Assets.loadBytes","openfl/utils/Assets.hx",524,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_517_loadBytes,"openfl.utils.Assets","loadBytes",0x39d290d5,"openfl.utils.Assets.loadBytes","openfl/utils/Assets.hx",517,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_554_loadFont,"openfl.utils.Assets","loadFont",0x723a50a5,"openfl.utils.Assets.loadFont","openfl/utils/Assets.hx",554,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_540_loadFont,"openfl.utils.Assets","loadFont",0x723a50a5,"openfl.utils.Assets.loadFont","openfl/utils/Assets.hx",540,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_587_loadLibrary,"openfl.utils.Assets","loadLibrary",0x25ad1de5,"openfl.utils.Assets.loadLibrary","openfl/utils/Assets.hx",587,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_586_loadLibrary,"openfl.utils.Assets","loadLibrary",0x25ad1de5,"openfl.utils.Assets.loadLibrary","openfl/utils/Assets.hx",586,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_629_loadMusic,"openfl.utils.Assets","loadMusic",0x8c95590f,"openfl.utils.Assets.loadMusic","openfl/utils/Assets.hx",629,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_619_loadMusic,"openfl.utils.Assets","loadMusic",0x8c95590f,"openfl.utils.Assets.loadMusic","openfl/utils/Assets.hx",619,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_669_loadMovieClip,"openfl.utils.Assets","loadMovieClip",0xc0b3080a,"openfl.utils.Assets.loadMovieClip","openfl/utils/Assets.hx",669,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_720_loadSound,"openfl.utils.Assets","loadSound",0xfd071539,"openfl.utils.Assets.loadSound","openfl/utils/Assets.hx",720,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_711_loadSound,"openfl.utils.Assets","loadSound",0xfd071539,"openfl.utils.Assets.loadSound","openfl/utils/Assets.hx",711,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_756_loadText,"openfl.utils.Assets","loadText",0x7b73bf83,"openfl.utils.Assets.loadText","openfl/utils/Assets.hx",756,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_772_registerBinding,"openfl.utils.Assets","registerBinding",0xf0be1f92,"openfl.utils.Assets.registerBinding","openfl/utils/Assets.hx",772,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_783_registerLibrary,"openfl.utils.Assets","registerLibrary",0xb100bb48,"openfl.utils.Assets.registerLibrary","openfl/utils/Assets.hx",783,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_789_removeEventListener,"openfl.utils.Assets","removeEventListener",0xbaaab03a,"openfl.utils.Assets.removeEventListener","openfl/utils/Assets.hx",789,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_794_resolveClass,"openfl.utils.Assets","resolveClass",0x568fe73c,"openfl.utils.Assets.resolveClass","openfl/utils/Assets.hx",794,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_798_resolveEnum,"openfl.utils.Assets","resolveEnum",0xf3f0c87d,"openfl.utils.Assets.resolveEnum","openfl/utils/Assets.hx",798,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_814_unloadLibrary,"openfl.utils.Assets","unloadLibrary",0x577a902c,"openfl.utils.Assets.unloadLibrary","openfl/utils/Assets.hx",814,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_825_unregisterBinding,"openfl.utils.Assets","unregisterBinding",0x1c9fc159,"openfl.utils.Assets.unregisterBinding","openfl/utils/Assets.hx",825,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_834_LimeAssets_onChange,"openfl.utils.Assets","LimeAssets_onChange",0xfa955f26,"openfl.utils.Assets.LimeAssets_onChange","openfl/utils/Assets.hx",834,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_47_boot,"openfl.utils.Assets","boot",0xc5c19dc2,"openfl.utils.Assets.boot","openfl/utils/Assets.hx",47,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_49_boot,"openfl.utils.Assets","boot",0xc5c19dc2,"openfl.utils.Assets.boot","openfl/utils/Assets.hx",49,0x4e64919e)
HX_LOCAL_STACK_FRAME(_hx_pos_4176bcd8576208c2_50_boot,"openfl.utils.Assets","boot",0xc5c19dc2,"openfl.utils.Assets.boot","openfl/utils/Assets.hx",50,0x4e64919e)
namespace openfl{
namespace utils{

void Assets_obj::__construct() { }

Dynamic Assets_obj::__CreateEmpty() { return new Assets_obj; }

void *Assets_obj::_hx_vtable = 0;

Dynamic Assets_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Assets_obj > _hx_result = new Assets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Assets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1c1fcb84;
}

::Dynamic Assets_obj::cache;

 ::openfl::events::EventDispatcher Assets_obj::dispatcher;

 ::haxe::ds::StringMap Assets_obj::libraryBindings;

void Assets_obj::addEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_useCapture,::hx::Null< int >  __o_priority,::hx::Null< bool >  __o_useWeakReference){
            		bool useCapture = __o_useCapture.Default(false);
            		int priority = __o_priority.Default(0);
            		bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_53_addEventListener)
HXLINE(  55)		if (!(::lime::utils::Assets_obj::onChange->has(::openfl::utils::Assets_obj::LimeAssets_onChange_dyn()))) {
HXLINE(  57)			::lime::utils::Assets_obj::onChange->add(::openfl::utils::Assets_obj::LimeAssets_onChange_dyn(),null(),null());
            		}
HXLINE(  61)		::openfl::utils::Assets_obj::dispatcher->addEventListener(type,listener,useCapture,priority,useWeakReference);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,addEventListener,(void))

bool Assets_obj::dispatchEvent( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_66_dispatchEvent)
HXDLIN(  66)		return ::openfl::utils::Assets_obj::dispatcher->dispatchEvent(event);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,dispatchEvent,return )

bool Assets_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_78_exists)
HXDLIN(  78)		return ::lime::utils::Assets_obj::exists(id,type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

 ::openfl::display::BitmapData Assets_obj::getBitmapData(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_92_getBitmapData)
HXLINE(  94)		bool _hx_tmp;
HXDLIN(  94)		bool _hx_tmp1;
HXDLIN(  94)		if (useCache) {
HXLINE(  94)			_hx_tmp1 = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE(  94)			_hx_tmp1 = false;
            		}
HXDLIN(  94)		if (_hx_tmp1) {
HXLINE(  94)			_hx_tmp = ::openfl::utils::IAssetCache_obj::hasBitmapData(::openfl::utils::Assets_obj::cache,id);
            		}
            		else {
HXLINE(  94)			_hx_tmp = false;
            		}
HXDLIN(  94)		if (_hx_tmp) {
HXLINE(  96)			 ::openfl::display::BitmapData bitmapData = ::openfl::utils::IAssetCache_obj::getBitmapData(::openfl::utils::Assets_obj::cache,id);
HXLINE(  98)			if (::openfl::utils::Assets_obj::isValidBitmapData(bitmapData)) {
HXLINE( 100)				return bitmapData;
            			}
            		}
HXLINE( 104)		 ::lime::graphics::Image image = ::lime::utils::Assets_obj::getImage(id,false);
HXLINE( 106)		if (::hx::IsNotNull( image )) {
HXLINE( 111)			 ::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::fromImage(image,null());
HXLINE( 114)			bool _hx_tmp;
HXDLIN( 114)			if (useCache) {
HXLINE( 114)				_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            			}
            			else {
HXLINE( 114)				_hx_tmp = false;
            			}
HXDLIN( 114)			if (_hx_tmp) {
HXLINE( 116)				::openfl::utils::IAssetCache_obj::setBitmapData(::openfl::utils::Assets_obj::cache,id,bitmapData);
            			}
HXLINE( 119)			return bitmapData;
            		}
HXLINE( 123)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

 ::openfl::utils::ByteArrayData Assets_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_135_getBytes)
HXDLIN( 135)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromLimeBytes(::lime::utils::Assets_obj::getBytes(id));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

 ::openfl::text::Font Assets_obj::getFont(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_149_getFont)
HXLINE( 151)		bool _hx_tmp;
HXDLIN( 151)		bool _hx_tmp1;
HXDLIN( 151)		if (useCache) {
HXLINE( 151)			_hx_tmp1 = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE( 151)			_hx_tmp1 = false;
            		}
HXDLIN( 151)		if (_hx_tmp1) {
HXLINE( 151)			_hx_tmp = ::openfl::utils::IAssetCache_obj::hasFont(::openfl::utils::Assets_obj::cache,id);
            		}
            		else {
HXLINE( 151)			_hx_tmp = false;
            		}
HXDLIN( 151)		if (_hx_tmp) {
HXLINE( 153)			return ::openfl::utils::IAssetCache_obj::getFont(::openfl::utils::Assets_obj::cache,id);
            		}
HXLINE( 156)		 ::lime::text::Font limeFont = ::lime::utils::Assets_obj::getFont(id,false);
HXLINE( 158)		if (::hx::IsNotNull( limeFont )) {
HXLINE( 163)			 ::openfl::text::Font font =  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE( 164)			font->_hx___fromLimeFont(limeFont);
HXLINE( 167)			bool _hx_tmp;
HXDLIN( 167)			if (useCache) {
HXLINE( 167)				_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            			}
            			else {
HXLINE( 167)				_hx_tmp = false;
            			}
HXDLIN( 167)			if (_hx_tmp) {
HXLINE( 169)				::openfl::utils::IAssetCache_obj::setFont(::openfl::utils::Assets_obj::cache,id,font);
            			}
HXLINE( 172)			return font;
            		}
HXLINE( 176)		return  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

 ::lime::utils::AssetLibrary Assets_obj::getLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_182_getLibrary)
HXDLIN( 182)		return ::lime::utils::Assets_obj::getLibrary(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

 ::openfl::display::MovieClip Assets_obj::getMovieClip(::String id){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_195_getMovieClip)
HXLINE( 197)		::String libraryName = id.substring(0,id.indexOf(HX_(":",3a,00,00,00),null()));
HXLINE( 198)		::String symbolName = id.substr((id.indexOf(HX_(":",3a,00,00,00),null()) + 1),null());
HXLINE( 199)		 ::lime::utils::AssetLibrary limeLibrary = ::openfl::utils::Assets_obj::getLibrary(libraryName);
HXLINE( 201)		if (::hx::IsNotNull( limeLibrary )) {
HXLINE( 203)			if (::Std_obj::isOfType(limeLibrary,::hx::ClassOf< ::openfl::utils::AssetLibrary >())) {
HXLINE( 205)				 ::openfl::utils::AssetLibrary library = ( ( ::openfl::utils::AssetLibrary)(limeLibrary) );
HXLINE( 207)				if (library->exists(symbolName,HX_("MOVIE_CLIP",1f,e1,aa,77))) {
HXLINE( 209)					if (library->isLocal(symbolName,HX_("MOVIE_CLIP",1f,e1,aa,77))) {
HXLINE( 211)						return library->getMovieClip(symbolName);
            					}
            					else {
HXLINE( 215)						::lime::utils::Log_obj::error(((HX_("MovieClip asset \"",52,88,7e,e3) + id) + HX_("\" exists, but only asynchronously",dc,ca,f2,dd)),::hx::SourceInfo(HX_("openfl/utils/Assets.hx",9e,91,64,4e),215,HX_("openfl.utils.Assets",de,b0,04,7c),HX_("getMovieClip",2a,9f,71,27)));
HXLINE( 216)						return null();
            					}
            				}
            			}
HXLINE( 221)			::lime::utils::Log_obj::error(((HX_("There is no MovieClip asset with an ID of \"",d0,88,de,8c) + id) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("openfl/utils/Assets.hx",9e,91,64,4e),221,HX_("openfl.utils.Assets",de,b0,04,7c),HX_("getMovieClip",2a,9f,71,27)));
            		}
            		else {
HXLINE( 225)			::lime::utils::Log_obj::error(((HX_("There is no asset library named \"",a1,83,5f,51) + libraryName) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("openfl/utils/Assets.hx",9e,91,64,4e),225,HX_("openfl.utils.Assets",de,b0,04,7c),HX_("getMovieClip",2a,9f,71,27)));
            		}
HXLINE( 229)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

 ::openfl::media::Sound Assets_obj::getMusic(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_233_getMusic)
HXLINE( 235)		::String path = ::openfl::utils::Assets_obj::getPath(id);
HXLINE( 237)		 ::lime::media::vorbis::VorbisFile vorbisFile = ::lime::media::vorbis::VorbisFile_obj::fromFile(path);
HXLINE( 238)		 ::lime::media::AudioBuffer buffer = ::lime::media::AudioBuffer_obj::fromVorbisFile(vorbisFile);
HXLINE( 239)		return ::openfl::media::Sound_obj::fromAudioBuffer(buffer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

::String Assets_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_255_getPath)
HXDLIN( 255)		return ::lime::utils::Assets_obj::getPath(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

 ::openfl::media::Sound Assets_obj::getSound(::String id,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_269_getSound)
HXLINE( 271)		bool _hx_tmp;
HXDLIN( 271)		bool _hx_tmp1;
HXDLIN( 271)		if (useCache) {
HXLINE( 271)			_hx_tmp1 = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE( 271)			_hx_tmp1 = false;
            		}
HXDLIN( 271)		if (_hx_tmp1) {
HXLINE( 271)			_hx_tmp = ::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,id);
            		}
            		else {
HXLINE( 271)			_hx_tmp = false;
            		}
HXDLIN( 271)		if (_hx_tmp) {
HXLINE( 273)			 ::openfl::media::Sound sound = ::openfl::utils::IAssetCache_obj::getSound(::openfl::utils::Assets_obj::cache,id);
HXLINE( 275)			if (::openfl::utils::Assets_obj::isValidSound(sound)) {
HXLINE( 277)				return sound;
            			}
            		}
HXLINE( 281)		 ::lime::media::AudioBuffer buffer = ::lime::utils::Assets_obj::getAudioBuffer(id,false);
HXLINE( 283)		if (::hx::IsNotNull( buffer )) {
HXLINE( 288)			 ::openfl::media::Sound sound = ::openfl::media::Sound_obj::fromAudioBuffer(buffer);
HXLINE( 291)			bool _hx_tmp;
HXDLIN( 291)			if (useCache) {
HXLINE( 291)				_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            			}
            			else {
HXLINE( 291)				_hx_tmp = false;
            			}
HXDLIN( 291)			if (_hx_tmp) {
HXLINE( 293)				::openfl::utils::IAssetCache_obj::setSound(::openfl::utils::Assets_obj::cache,id,sound);
            			}
HXLINE( 296)			return sound;
            		}
HXLINE( 300)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getSound,return )

::String Assets_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_312_getText)
HXDLIN( 312)		return ::lime::utils::Assets_obj::getText(id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::hasEventListener(::String type){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_320_hasEventListener)
HXDLIN( 320)		return ::openfl::utils::Assets_obj::dispatcher->hasEventListener(type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasEventListener,return )

bool Assets_obj::hasLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_326_hasLibrary)
HXDLIN( 326)		return ::lime::utils::Assets_obj::hasLibrary(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasLibrary,return )

void Assets_obj::initBinding(::String className, ::Dynamic instance){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_344_initBinding)
HXDLIN( 344)		if (::openfl::utils::Assets_obj::libraryBindings->exists(className)) {
HXLINE( 346)			 ::openfl::utils::AssetLibrary library = ( ( ::openfl::utils::AssetLibrary)(::openfl::utils::Assets_obj::libraryBindings->get(className)) );
HXLINE( 348)			if (::hx::IsNull( instance )) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::openfl::utils::AssetLibrary,library,::String,className) HXARGC(1)
            				void _hx_run( ::openfl::display::Sprite instance){
            					HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_352_initBinding)
HXLINE( 352)					instance->_hx___bind(library,className);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 350)				::openfl::display::Sprite_obj::_hx___constructor =  ::Dynamic(new _hx_Closure_0(library,className));
            			}
            			else {
HXLINE( 357)				instance->__Field(HX_("__bind",dd,58,0f,f0),::hx::paccDynamic)(library,className);
            			}
            		}
            		else {
HXLINE( 366)			::lime::utils::Log_obj::warn(((HX_("No asset is registered as \"",6b,8a,0e,aa) + className) + HX_("\"",22,00,00,00)),::hx::SourceInfo(HX_("openfl/utils/Assets.hx",9e,91,64,4e),366,HX_("openfl.utils.Assets",de,b0,04,7c),HX_("initBinding",15,fa,97,37)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,initBinding,(void))

bool Assets_obj::isLocal(::String id,::String type,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_378_isLocal)
HXLINE( 380)		bool _hx_tmp;
HXDLIN( 380)		if (useCache) {
HXLINE( 380)			_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE( 380)			_hx_tmp = false;
            		}
HXDLIN( 380)		if (_hx_tmp) {
HXLINE( 382)			bool _hx_tmp;
HXDLIN( 382)			if ((type != HX_("IMAGE",3b,57,57,3b))) {
HXLINE( 382)				_hx_tmp = ::hx::IsNull( type );
            			}
            			else {
HXLINE( 382)				_hx_tmp = true;
            			}
HXDLIN( 382)			if (_hx_tmp) {
HXLINE( 384)				if (::openfl::utils::IAssetCache_obj::hasBitmapData(::openfl::utils::Assets_obj::cache,id)) {
HXLINE( 384)					return true;
            				}
            			}
HXLINE( 387)			bool _hx_tmp1;
HXDLIN( 387)			if ((type != HX_("FONT",cf,25,81,2e))) {
HXLINE( 387)				_hx_tmp1 = ::hx::IsNull( type );
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = true;
            			}
HXDLIN( 387)			if (_hx_tmp1) {
HXLINE( 389)				if (::openfl::utils::IAssetCache_obj::hasFont(::openfl::utils::Assets_obj::cache,id)) {
HXLINE( 389)					return true;
            				}
            			}
HXLINE( 392)			bool _hx_tmp2;
HXDLIN( 392)			bool _hx_tmp3;
HXDLIN( 392)			if ((type != HX_("SOUND",af,c4,ba,fe))) {
HXLINE( 392)				_hx_tmp3 = (type == HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE( 392)				_hx_tmp3 = true;
            			}
HXDLIN( 392)			if (!(_hx_tmp3)) {
HXLINE( 392)				_hx_tmp2 = ::hx::IsNull( type );
            			}
            			else {
HXLINE( 392)				_hx_tmp2 = true;
            			}
HXDLIN( 392)			if (_hx_tmp2) {
HXLINE( 394)				if (::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,id)) {
HXLINE( 394)					return true;
            				}
            			}
            		}
HXLINE( 398)		::String libraryName = id.substring(0,id.indexOf(HX_(":",3a,00,00,00),null()));
HXLINE( 399)		::String symbolName = id.substr((id.indexOf(HX_(":",3a,00,00,00),null()) + 1),null());
HXLINE( 400)		 ::lime::utils::AssetLibrary library = ::openfl::utils::Assets_obj::getLibrary(libraryName);
HXLINE( 402)		if (::hx::IsNotNull( library )) {
HXLINE( 404)			return library->isLocal(symbolName,type);
            		}
HXLINE( 408)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidBitmapData( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_425_isValidBitmapData)
HXDLIN( 425)		return (::hx::IsNotNull( bitmapData ) && ::hx::IsNotNull( bitmapData->image ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidBitmapData,return )

bool Assets_obj::isValidSound( ::openfl::media::Sound sound){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_435_isValidSound)
HXDLIN( 435)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidSound,return )

::Array< ::String > Assets_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_450_list)
HXDLIN( 450)		return ::lime::utils::Assets_obj::list(type);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

 ::lime::app::Future Assets_obj::loadBitmapData(::String id, ::Dynamic __o_useCache){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,id,::Array< ::Dynamic>,useCache1, ::lime::app::Promise_openfl_display_BitmapData,promise) HXARGC(1)
            		void _hx_run( ::lime::graphics::Image image){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_483_loadBitmapData)
HXLINE( 483)			if (::hx::IsNotNull( image )) {
HXLINE( 488)				 ::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::fromImage(image,null());
HXLINE( 491)				bool _hx_tmp;
HXDLIN( 491)				if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 491)					_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            				}
            				else {
HXLINE( 491)					_hx_tmp = false;
            				}
HXDLIN( 491)				if (_hx_tmp) {
HXLINE( 493)					::openfl::utils::IAssetCache_obj::setBitmapData(::openfl::utils::Assets_obj::cache,id,bitmapData);
            				}
HXLINE( 496)				promise->complete(bitmapData);
            			}
            			else {
HXLINE( 500)				promise->error(((HX_("[Assets] Could not load Image \"",f0,0b,f7,ed) + id) + HX_("\"",22,00,00,00)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		 ::Dynamic useCache = __o_useCache;
            		if (::hx::IsNull(__o_useCache)) useCache = true;
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_464_loadBitmapData)
HXDLIN( 464)		::Array< ::Dynamic> useCache1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,useCache);
HXLINE( 465)		if (::hx::IsNull( useCache1->__get(0) )) {
HXLINE( 465)			useCache1[0] = true;
            		}
HXLINE( 468)		 ::lime::app::Promise_openfl_display_BitmapData promise =  ::lime::app::Promise_openfl_display_BitmapData_obj::__alloc( HX_CTX );
HXLINE( 470)		bool _hx_tmp;
HXDLIN( 470)		bool _hx_tmp1;
HXDLIN( 470)		if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 470)			_hx_tmp1 = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE( 470)			_hx_tmp1 = false;
            		}
HXDLIN( 470)		if (_hx_tmp1) {
HXLINE( 470)			_hx_tmp = ::openfl::utils::IAssetCache_obj::hasBitmapData(::openfl::utils::Assets_obj::cache,id);
            		}
            		else {
HXLINE( 470)			_hx_tmp = false;
            		}
HXDLIN( 470)		if (_hx_tmp) {
HXLINE( 472)			 ::openfl::display::BitmapData bitmapData = ::openfl::utils::IAssetCache_obj::getBitmapData(::openfl::utils::Assets_obj::cache,id);
HXLINE( 474)			if (::openfl::utils::Assets_obj::isValidBitmapData(bitmapData)) {
HXLINE( 476)				promise->complete(bitmapData);
HXLINE( 477)				return promise->future;
            			}
            		}
HXLINE( 481)		::lime::utils::Assets_obj::loadImage(id,false)->onComplete( ::Dynamic(new _hx_Closure_0(id,useCache1,promise)))->onError(promise->error_dyn())->onProgress(promise->progress_dyn());
HXLINE( 504)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBitmapData,return )

 ::lime::app::Future Assets_obj::loadBytes(::String id){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::lime::app::Promise_openfl_utils_ByteArray,promise) HXARGC(1)
            		void _hx_run( ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_522_loadBytes)
HXLINE( 522)			 ::lime::app::Promise_openfl_utils_ByteArray promise1 = promise;
HXDLIN( 522)			promise1->complete(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromLimeBytes(bytes));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::lime::app::Promise_openfl_utils_ByteArray,promise) HXARGC(2)
            		void _hx_run(int progress,int total){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_523_loadBytes)
HXLINE( 523)			promise->progress(progress,total);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::lime::app::Promise_openfl_utils_ByteArray,promise) HXARGC(1)
            		void _hx_run( ::Dynamic msg){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_524_loadBytes)
HXLINE( 524)			promise->error(msg);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_517_loadBytes)
HXLINE( 519)		 ::lime::app::Promise_openfl_utils_ByteArray promise =  ::lime::app::Promise_openfl_utils_ByteArray_obj::__alloc( HX_CTX );
HXLINE( 520)		 ::lime::app::Future future = ::lime::utils::Assets_obj::loadBytes(id);
HXLINE( 522)		future->onComplete( ::Dynamic(new _hx_Closure_0(promise)));
HXLINE( 523)		future->onProgress( ::Dynamic(new _hx_Closure_1(promise)));
HXLINE( 524)		future->onError( ::Dynamic(new _hx_Closure_2(promise)));
HXLINE( 526)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadBytes,return )

 ::lime::app::Future Assets_obj::loadFont(::String id, ::Dynamic __o_useCache){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,id,::Array< ::Dynamic>,useCache1, ::lime::app::Promise_openfl_text_Font,promise) HXARGC(1)
            		void _hx_run( ::lime::text::Font limeFont){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_554_loadFont)
HXLINE( 558)			 ::openfl::text::Font font =  ::openfl::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE( 559)			font->_hx___fromLimeFont(limeFont);
HXLINE( 562)			bool _hx_tmp;
HXDLIN( 562)			if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 562)				_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            			}
            			else {
HXLINE( 562)				_hx_tmp = false;
            			}
HXDLIN( 562)			if (_hx_tmp) {
HXLINE( 564)				::openfl::utils::IAssetCache_obj::setFont(::openfl::utils::Assets_obj::cache,id,font);
            			}
HXLINE( 567)			promise->complete(font);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		 ::Dynamic useCache = __o_useCache;
            		if (::hx::IsNull(__o_useCache)) useCache = true;
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_540_loadFont)
HXDLIN( 540)		::Array< ::Dynamic> useCache1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,useCache);
HXLINE( 541)		if (::hx::IsNull( useCache1->__get(0) )) {
HXLINE( 541)			useCache1[0] = true;
            		}
HXLINE( 544)		 ::lime::app::Promise_openfl_text_Font promise =  ::lime::app::Promise_openfl_text_Font_obj::__alloc( HX_CTX );
HXLINE( 546)		bool _hx_tmp;
HXDLIN( 546)		bool _hx_tmp1;
HXDLIN( 546)		if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 546)			_hx_tmp1 = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            		}
            		else {
HXLINE( 546)			_hx_tmp1 = false;
            		}
HXDLIN( 546)		if (_hx_tmp1) {
HXLINE( 546)			_hx_tmp = ::openfl::utils::IAssetCache_obj::hasFont(::openfl::utils::Assets_obj::cache,id);
            		}
            		else {
HXLINE( 546)			_hx_tmp = false;
            		}
HXDLIN( 546)		if (_hx_tmp) {
HXLINE( 548)			 ::lime::app::Promise_openfl_text_Font promise1 = promise;
HXDLIN( 548)			promise1->complete(::openfl::utils::IAssetCache_obj::getFont(::openfl::utils::Assets_obj::cache,id));
HXLINE( 549)			return promise->future;
            		}
HXLINE( 552)		::lime::utils::Assets_obj::loadFont(id,null())->onComplete( ::Dynamic(new _hx_Closure_0(id,useCache1,promise)))->onError(promise->error_dyn())->onProgress(promise->progress_dyn());
HXLINE( 572)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadFont,return )

 ::lime::app::Future Assets_obj::loadLibrary(::String name){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::String,name) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::utils::AssetLibrary library){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_587_loadLibrary)
HXLINE( 588)			 ::openfl::utils::AssetLibrary _library = null();
HXLINE( 590)			if (::hx::IsNotNull( library )) {
HXLINE( 592)				if (::Std_obj::isOfType(library,::hx::ClassOf< ::openfl::utils::AssetLibrary >())) {
HXLINE( 594)					_library = ( ( ::openfl::utils::AssetLibrary)(library) );
            				}
            				else {
HXLINE( 598)					_library =  ::openfl::utils::AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 599)					_library->_hx___proxy = library;
HXLINE( 600)					::lime::utils::Assets_obj::registerLibrary(name,_library);
            				}
            			}
HXLINE( 604)			return ::lime::app::Future_obj::withValue(_library);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_586_loadLibrary)
HXDLIN( 586)		return ::lime::utils::Assets_obj::loadLibrary(name)->then( ::Dynamic(new _hx_Closure_0(name)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadLibrary,return )

 ::lime::app::Future Assets_obj::loadMusic(::String id, ::Dynamic __o_useCache){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,id,::Array< ::Dynamic>,useCache1, ::lime::app::Promise_openfl_media_Sound,promise) HXARGC(1)
            		void _hx_run( ::lime::media::AudioBuffer buffer){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_629_loadMusic)
HXLINE( 629)			if (::hx::IsNotNull( buffer )) {
HXLINE( 634)				 ::openfl::media::Sound sound = ::openfl::media::Sound_obj::fromAudioBuffer(buffer);
HXLINE( 637)				bool _hx_tmp;
HXDLIN( 637)				if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 637)					_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            				}
            				else {
HXLINE( 637)					_hx_tmp = false;
            				}
HXDLIN( 637)				if (_hx_tmp) {
HXLINE( 639)					::openfl::utils::IAssetCache_obj::setSound(::openfl::utils::Assets_obj::cache,id,sound);
            				}
HXLINE( 642)				promise->complete(sound);
            			}
            			else {
HXLINE( 646)				promise->error(((HX_("[Assets] Could not load Sound \"",64,be,27,e3) + id) + HX_("\"",22,00,00,00)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		 ::Dynamic useCache = __o_useCache;
            		if (::hx::IsNull(__o_useCache)) useCache = true;
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_619_loadMusic)
HXDLIN( 619)		::Array< ::Dynamic> useCache1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,useCache);
HXLINE( 620)		if (::hx::IsNull( useCache1->__get(0) )) {
HXLINE( 620)			useCache1[0] = true;
            		}
HXLINE( 624)		 ::lime::app::Promise_openfl_media_Sound promise =  ::lime::app::Promise_openfl_media_Sound_obj::__alloc( HX_CTX );
HXLINE( 626)		::lime::utils::Assets_obj::loadAudioBuffer(id,useCache1->__get(0))->onComplete( ::Dynamic(new _hx_Closure_0(id,useCache1,promise)))->onError(promise->error_dyn())->onProgress(promise->progress_dyn());
HXLINE( 651)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMusic,return )

 ::lime::app::Future Assets_obj::loadMovieClip(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_669_loadMovieClip)
HXLINE( 671)		 ::lime::app::Promise_openfl_display_MovieClip promise =  ::lime::app::Promise_openfl_display_MovieClip_obj::__alloc( HX_CTX );
HXLINE( 673)		::String libraryName = id.substring(0,id.indexOf(HX_(":",3a,00,00,00),null()));
HXLINE( 674)		::String symbolName = id.substr((id.indexOf(HX_(":",3a,00,00,00),null()) + 1),null());
HXLINE( 675)		 ::lime::utils::AssetLibrary limeLibrary = ::openfl::utils::Assets_obj::getLibrary(libraryName);
HXLINE( 677)		if (::hx::IsNotNull( limeLibrary )) {
HXLINE( 679)			if (::Std_obj::isOfType(limeLibrary,::hx::ClassOf< ::openfl::utils::AssetLibrary >())) {
HXLINE( 681)				 ::openfl::utils::AssetLibrary library = ( ( ::openfl::utils::AssetLibrary)(limeLibrary) );
HXLINE( 683)				if (library->exists(symbolName,HX_("MOVIE_CLIP",1f,e1,aa,77))) {
HXLINE( 685)					promise->completeWith(library->loadMovieClip(symbolName));
HXLINE( 686)					return promise->future;
            				}
            			}
HXLINE( 690)			promise->error(((HX_("[Assets] There is no MovieClip asset with an ID of \"",8f,8e,f2,7d) + id) + HX_("\"",22,00,00,00)));
            		}
            		else {
HXLINE( 694)			promise->error(((HX_("[Assets] There is no asset library named \"",a0,b4,0a,cd) + libraryName) + HX_("\"",22,00,00,00)));
            		}
HXLINE( 697)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadMovieClip,return )

 ::lime::app::Future Assets_obj::loadSound(::String id, ::Dynamic __o_useCache){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::String,id,::Array< ::Dynamic>,useCache1, ::lime::app::Promise_openfl_media_Sound,promise) HXARGC(1)
            		void _hx_run( ::lime::media::AudioBuffer buffer){
            			HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_720_loadSound)
HXLINE( 720)			if (::hx::IsNotNull( buffer )) {
HXLINE( 725)				 ::openfl::media::Sound sound = ::openfl::media::Sound_obj::fromAudioBuffer(buffer);
HXLINE( 728)				bool _hx_tmp;
HXDLIN( 728)				if (( (bool)(useCache1->__get(0)) )) {
HXLINE( 728)					_hx_tmp = ::openfl::utils::IAssetCache_obj::get_enabled(::openfl::utils::Assets_obj::cache);
            				}
            				else {
HXLINE( 728)					_hx_tmp = false;
            				}
HXDLIN( 728)				if (_hx_tmp) {
HXLINE( 730)					::openfl::utils::IAssetCache_obj::setSound(::openfl::utils::Assets_obj::cache,id,sound);
            				}
HXLINE( 733)				promise->complete(sound);
            			}
            			else {
HXLINE( 737)				promise->error(((HX_("[Assets] Could not load Sound \"",64,be,27,e3) + id) + HX_("\"",22,00,00,00)));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		 ::Dynamic useCache = __o_useCache;
            		if (::hx::IsNull(__o_useCache)) useCache = true;
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_711_loadSound)
HXDLIN( 711)		::Array< ::Dynamic> useCache1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,useCache);
HXLINE( 712)		if (::hx::IsNull( useCache1->__get(0) )) {
HXLINE( 712)			useCache1[0] = true;
            		}
HXLINE( 715)		 ::lime::app::Promise_openfl_media_Sound promise =  ::lime::app::Promise_openfl_media_Sound_obj::__alloc( HX_CTX );
HXLINE( 717)		::lime::utils::Assets_obj::loadAudioBuffer(id,useCache1->__get(0))->onComplete( ::Dynamic(new _hx_Closure_0(id,useCache1,promise)))->onError(promise->error_dyn())->onProgress(promise->progress_dyn());
HXLINE( 742)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadSound,return )

 ::lime::app::Future Assets_obj::loadText(::String id){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_756_loadText)
HXLINE( 758)		 ::lime::app::Future future = ::lime::utils::Assets_obj::loadText(id);
HXLINE( 759)		return future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadText,return )

void Assets_obj::registerBinding(::String className, ::openfl::utils::AssetLibrary library){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_772_registerBinding)
HXDLIN( 772)		::openfl::utils::Assets_obj::libraryBindings->set(className,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerBinding,(void))

void Assets_obj::registerLibrary(::String name, ::openfl::utils::AssetLibrary library){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_783_registerLibrary)
HXDLIN( 783)		::lime::utils::Assets_obj::registerLibrary(name,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

void Assets_obj::removeEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  __o_capture){
            		bool capture = __o_capture.Default(false);
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_789_removeEventListener)
HXDLIN( 789)		::openfl::utils::Assets_obj::dispatcher->removeEventListener(type,listener,capture);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,removeEventListener,(void))

::hx::Class Assets_obj::resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_794_resolveClass)
HXDLIN( 794)		return ::Type_obj::resolveClass(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::hx::Class Assets_obj::resolveEnum(::String name){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_798_resolveEnum)
HXLINE( 799)		::hx::Class value = ::Type_obj::resolveEnum(name);
HXLINE( 808)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

void Assets_obj::unloadLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_814_unloadLibrary)
HXDLIN( 814)		::lime::utils::Assets_obj::unloadLibrary(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

void Assets_obj::unregisterBinding(::String className, ::openfl::utils::AssetLibrary library){
            	HX_STACKFRAME(&_hx_pos_4176bcd8576208c2_825_unregisterBinding)
HXDLIN( 825)		bool _hx_tmp;
HXDLIN( 825)		if (::openfl::utils::Assets_obj::libraryBindings->exists(className)) {
HXDLIN( 825)			_hx_tmp = ::hx::IsInstanceEq( ::openfl::utils::Assets_obj::libraryBindings->get(className),library );
            		}
            		else {
HXDLIN( 825)			_hx_tmp = false;
            		}
HXDLIN( 825)		if (_hx_tmp) {
HXLINE( 827)			::openfl::utils::Assets_obj::libraryBindings->remove(className);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,unregisterBinding,(void))

void Assets_obj::LimeAssets_onChange(){
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_834_LimeAssets_onChange)
HXDLIN( 834)		::openfl::utils::Assets_obj::dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,LimeAssets_onChange,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = ( cache ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getMusic") ) { outValue = getMusic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { outValue = loadMusic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { outValue = ( dispatcher ); return true; }
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasLibrary") ) { outValue = hasLibrary_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initBinding") ) { outValue = initBinding_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { outValue = getMovieClip_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValidSound") ) { outValue = isValidSound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { outValue = dispatchEvent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { outValue = loadMovieClip_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { outValue = loadBitmapData_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"libraryBindings") ) { outValue = ( libraryBindings ); return true; }
		if (HX_FIELD_EQ(inName,"registerBinding") ) { outValue = registerBinding_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { outValue = addEventListener_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { outValue = hasEventListener_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidBitmapData") ) { outValue = isValidBitmapData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"unregisterBinding") ) { outValue = unregisterBinding_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { outValue = removeEventListener_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"LimeAssets_onChange") ) { outValue = LimeAssets_onChange_dyn(); return true; }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { dispatcher=ioValue.Cast<  ::openfl::events::EventDispatcher >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"libraryBindings") ) { libraryBindings=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Assets_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Assets_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Assets_obj::cache,HX_("cache",42,9a,14,41)},
	{::hx::fsObject /*  ::openfl::events::EventDispatcher */ ,(void *) &Assets_obj::dispatcher,HX_("dispatcher",a7,c9,00,5a)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Assets_obj::libraryBindings,HX_("libraryBindings",a9,27,16,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Assets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
	HX_MARK_MEMBER_NAME(Assets_obj::libraryBindings,"libraryBindings");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Assets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraryBindings,"libraryBindings");
};

#endif

::hx::Class Assets_obj::__mClass;

static ::String Assets_obj_sStaticFields[] = {
	HX_("cache",42,9a,14,41),
	HX_("dispatcher",a7,c9,00,5a),
	HX_("libraryBindings",a9,27,16,7a),
	HX_("addEventListener",cd,0b,64,f1),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("exists",dc,1d,e0,bf),
	HX_("getBitmapData",ef,11,33,90),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getFont",85,0d,43,16),
	HX_("getLibrary",05,ad,d1,8e),
	HX_("getMovieClip",2a,9f,71,27),
	HX_("getMusic",2f,e0,31,70),
	HX_("getPath",5b,95,d4,1c),
	HX_("getSound",59,9c,a3,e0),
	HX_("getText",63,7c,7c,1f),
	HX_("hasEventListener",f4,2e,ea,0c),
	HX_("hasLibrary",c1,0e,24,ca),
	HX_("initBinding",15,fa,97,37),
	HX_("isLocal",21,6d,76,15),
	HX_("isValidBitmapData",0b,65,e4,e6),
	HX_("isValidSound",bd,1e,2b,a1),
	HX_("list",5e,1c,b3,47),
	HX_("loadBitmapData",7f,bf,71,ca),
	HX_("loadBytes",65,54,cf,d8),
	HX_("loadFont",15,2f,60,b4),
	HX_("loadLibrary",75,e5,0d,10),
	HX_("loadMusic",9f,1c,92,2b),
	HX_("loadMovieClip",9a,d3,80,9a),
	HX_("loadSound",c9,d8,03,9c),
	HX_("loadText",f3,9d,99,bd),
	HX_("registerBinding",22,ef,41,32),
	HX_("registerLibrary",d8,8a,84,f2),
	HX_("removeEventListener",ca,87,75,55),
	HX_("resolveClass",ac,bd,dd,80),
	HX_("resolveEnum",0d,90,51,de),
	HX_("unloadLibrary",bc,5b,48,31),
	HX_("unregisterBinding",e9,94,62,a2),
	HX_("LimeAssets_onChange",b6,36,60,95),
	::String(null())
};

void Assets_obj::__register()
{
	Assets_obj _hx_dummy;
	Assets_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils.Assets",de,b0,04,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = Assets_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Assets_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Assets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Assets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Assets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Assets_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Assets_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_47_boot)
HXDLIN(  47)		cache =  ::openfl::utils::AssetCache_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_49_boot)
HXDLIN(  49)		dispatcher =  ::openfl::events::EventDispatcher_obj::__alloc( HX_CTX ,null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4176bcd8576208c2_50_boot)
HXDLIN(  50)		libraryBindings =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace utils
