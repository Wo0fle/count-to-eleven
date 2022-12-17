#include <hxcpp.h>

#ifndef INCLUDED__PlayState_PlayState_Fields_
#include <_PlayState/PlayState_Fields_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4ba84ba0c58b8d9e_10_boot,"_PlayState.PlayState_Fields_","boot",0xeac0a6ac,"_PlayState.PlayState_Fields_.boot","PlayState.hx",10,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_4ba84ba0c58b8d9e_11_boot,"_PlayState.PlayState_Fields_","boot",0xeac0a6ac,"_PlayState.PlayState_Fields_.boot","PlayState.hx",11,0xb30d7781)
namespace _PlayState{

void PlayState_Fields__obj::__construct() { }

Dynamic PlayState_Fields__obj::__CreateEmpty() { return new PlayState_Fields__obj; }

void *PlayState_Fields__obj::_hx_vtable = 0;

Dynamic PlayState_Fields__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_Fields__obj > _hx_result = new PlayState_Fields__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlayState_Fields__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x595a3ba6;
}

bool PlayState_Fields__obj::click;

int PlayState_Fields__obj::num;


PlayState_Fields__obj::PlayState_Fields__obj()
{
}

bool PlayState_Fields__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { outValue = ( num ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"click") ) { outValue = ( click ); return true; }
	}
	return false;
}

bool PlayState_Fields__obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { num=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"click") ) { click=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PlayState_Fields__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PlayState_Fields__obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &PlayState_Fields__obj::click,HX_("click",48,7c,5e,48)},
	{::hx::fsInt,(void *) &PlayState_Fields__obj::num,HX_("num",46,de,53,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PlayState_Fields__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_Fields__obj::click,"click");
	HX_MARK_MEMBER_NAME(PlayState_Fields__obj::num,"num");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlayState_Fields__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_Fields__obj::click,"click");
	HX_VISIT_MEMBER_NAME(PlayState_Fields__obj::num,"num");
};

#endif

::hx::Class PlayState_Fields__obj::__mClass;

static ::String PlayState_Fields__obj_sStaticFields[] = {
	HX_("click",48,7c,5e,48),
	HX_("num",46,de,53,00),
	::String(null())
};

void PlayState_Fields__obj::__register()
{
	PlayState_Fields__obj _hx_dummy;
	PlayState_Fields__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("_PlayState.PlayState_Fields_",34,50,76,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlayState_Fields__obj::__GetStatic;
	__mClass->mSetStaticField = &PlayState_Fields__obj::__SetStatic;
	__mClass->mMarkFunc = PlayState_Fields__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PlayState_Fields__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_Fields__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlayState_Fields__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_Fields__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_Fields__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PlayState_Fields__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4ba84ba0c58b8d9e_10_boot)
HXDLIN(  10)		click = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_4ba84ba0c58b8d9e_11_boot)
HXDLIN(  11)		num = 0;
            	}
}

} // end namespace _PlayState
