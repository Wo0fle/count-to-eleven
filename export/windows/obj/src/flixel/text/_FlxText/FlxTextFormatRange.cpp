#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6a104454ab9b2fac_1114_new,"flixel.text._FlxText.FlxTextFormatRange","new",0x02a8ae38,"flixel.text._FlxText.FlxTextFormatRange.new","flixel/text/FlxText.hx",1114,0xdf165a6e)
namespace flixel{
namespace text{
namespace _FlxText{

void FlxTextFormatRange_obj::__construct( ::flixel::text::FlxTextFormat format,int start,int end){
            	HX_GC_STACKFRAME(&_hx_pos_6a104454ab9b2fac_1114_new)
HXLINE(1115)		this->range =  ::flixel::util::helpers::FlxRange_obj::__alloc( HX_CTX ,start,end);
HXLINE(1116)		this->format = format;
            	}

Dynamic FlxTextFormatRange_obj::__CreateEmpty() { return new FlxTextFormatRange_obj; }

void *FlxTextFormatRange_obj::_hx_vtable = 0;

Dynamic FlxTextFormatRange_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTextFormatRange_obj > _hx_result = new FlxTextFormatRange_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxTextFormatRange_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x176e93f4;
}


::hx::ObjectPtr< FlxTextFormatRange_obj > FlxTextFormatRange_obj::__new( ::flixel::text::FlxTextFormat format,int start,int end) {
	::hx::ObjectPtr< FlxTextFormatRange_obj > __this = new FlxTextFormatRange_obj();
	__this->__construct(format,start,end);
	return __this;
}

::hx::ObjectPtr< FlxTextFormatRange_obj > FlxTextFormatRange_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::text::FlxTextFormat format,int start,int end) {
	FlxTextFormatRange_obj *__this = (FlxTextFormatRange_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTextFormatRange_obj), true, "flixel.text._FlxText.FlxTextFormatRange"));
	*(void **)__this = FlxTextFormatRange_obj::_hx_vtable;
	__this->__construct(format,start,end);
	return __this;
}

FlxTextFormatRange_obj::FlxTextFormatRange_obj()
{
}

void FlxTextFormatRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormatRange);
	HX_MARK_MEMBER_NAME(range,"range");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void FlxTextFormatRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(range,"range");
	HX_VISIT_MEMBER_NAME(format,"format");
}

::hx::Val FlxTextFormatRange_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { return ::hx::Val( range ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTextFormatRange_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { range=inValue.Cast<  ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::flixel::text::FlxTextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextFormatRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("range",bd,a5,1f,e4));
	outFields->push(HX_("format",37,8f,8e,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTextFormatRange_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::util::helpers::FlxRange */ ,(int)offsetof(FlxTextFormatRange_obj,range),HX_("range",bd,a5,1f,e4)},
	{::hx::fsObject /*  ::flixel::text::FlxTextFormat */ ,(int)offsetof(FlxTextFormatRange_obj,format),HX_("format",37,8f,8e,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTextFormatRange_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTextFormatRange_obj_sMemberFields[] = {
	HX_("range",bd,a5,1f,e4),
	HX_("format",37,8f,8e,fd),
	::String(null()) };

::hx::Class FlxTextFormatRange_obj::__mClass;

void FlxTextFormatRange_obj::__register()
{
	FlxTextFormatRange_obj _hx_dummy;
	FlxTextFormatRange_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.text._FlxText.FlxTextFormatRange",46,72,3f,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTextFormatRange_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTextFormatRange_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTextFormatRange_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTextFormatRange_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace text
} // end namespace _FlxText