#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__PlayState_PlayState_Fields_
#include <_PlayState/PlayState_Fields_.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_13_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",13,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_16_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",16,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_25_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",25,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_13_new)
HXDLIN(  13)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_16_create)
HXLINE(  17)		this->super::create();
HXLINE(  19)		 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,::Std_obj::string(::_PlayState::PlayState_Fields__obj::num),64,null());
HXLINE(  20)		{
HXLINE(  20)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  20)			bool _hx_tmp;
HXDLIN(  20)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  20)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  20)					_hx_tmp = false;
            				}
            			}
HXDLIN(  20)			if (_hx_tmp) {
HXLINE(  20)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  20)				text->set_x(((( (Float)(_hx_tmp) ) - text->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  20)			bool _hx_tmp1;
HXDLIN(  20)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  20)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  20)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  20)			if (_hx_tmp1) {
HXLINE(  20)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  20)				text->set_y(((( (Float)(_hx_tmp) ) - text->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  21)		this->add(text);
            	}


void PlayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_25_update)
HXLINE(  26)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == -1)) {
HXLINE(  27)			::_PlayState::PlayState_Fields__obj::num++;
HXLINE(  29)			if ((::_PlayState::PlayState_Fields__obj::num >= 12)) {
HXLINE(  30)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::hx::ClassOf< ::haxe::Exception >()));
            			}
HXLINE(  33)			 ::flixel::FlxSprite cover =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  34)			cover->makeGraphic(200,200,-16777216,null(),null());
HXLINE(  35)			{
HXLINE(  35)				 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  35)				bool _hx_tmp;
HXDLIN(  35)				switch((int)(axes->_hx_getIndex())){
            					case (int)0: case (int)2: {
HXLINE(  35)						_hx_tmp = true;
            					}
            					break;
            					default:{
HXLINE(  35)						_hx_tmp = false;
            					}
            				}
HXDLIN(  35)				if (_hx_tmp) {
HXLINE(  35)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  35)					cover->set_x(((( (Float)(_hx_tmp) ) - cover->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  35)				bool _hx_tmp1;
HXDLIN(  35)				switch((int)(axes->_hx_getIndex())){
            					case (int)1: case (int)2: {
HXLINE(  35)						_hx_tmp1 = true;
            					}
            					break;
            					default:{
HXLINE(  35)						_hx_tmp1 = false;
            					}
            				}
HXDLIN(  35)				if (_hx_tmp1) {
HXLINE(  35)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  35)					cover->set_y(((( (Float)(_hx_tmp) ) - cover->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  36)			this->add(cover);
HXLINE(  38)			 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,::Std_obj::string(::_PlayState::PlayState_Fields__obj::num),64,null());
HXLINE(  39)			{
HXLINE(  39)				 ::flixel::util::FlxAxes axes1 = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  39)				bool _hx_tmp2;
HXDLIN(  39)				switch((int)(axes1->_hx_getIndex())){
            					case (int)0: case (int)2: {
HXLINE(  39)						_hx_tmp2 = true;
            					}
            					break;
            					default:{
HXLINE(  39)						_hx_tmp2 = false;
            					}
            				}
HXDLIN(  39)				if (_hx_tmp2) {
HXLINE(  39)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  39)					text->set_x(((( (Float)(_hx_tmp) ) - text->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  39)				bool _hx_tmp3;
HXDLIN(  39)				switch((int)(axes1->_hx_getIndex())){
            					case (int)1: case (int)2: {
HXLINE(  39)						_hx_tmp3 = true;
            					}
            					break;
            					default:{
HXLINE(  39)						_hx_tmp3 = false;
            					}
            				}
HXDLIN(  39)				if (_hx_tmp3) {
HXLINE(  39)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  39)					text->set_y(((( (Float)(_hx_tmp) ) - text->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  40)			this->add(text);
            		}
HXLINE(  43)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlayState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

