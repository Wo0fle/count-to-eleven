#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds__List_ListIterator
#include <haxe/ds/_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9c869b98ead6fdcb_281_new,"haxe.ds._List.ListIterator","new",0x2a47d966,"haxe.ds._List.ListIterator.new","D:\\HAXE\\haxe\\std/haxe/ds/List.hx",281,0xc06bd0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_9c869b98ead6fdcb_285_hasNext,"haxe.ds._List.ListIterator","hasNext",0x5bdaa973,"haxe.ds._List.ListIterator.hasNext","D:\\HAXE\\haxe\\std/haxe/ds/List.hx",285,0xc06bd0f7)
HX_LOCAL_STACK_FRAME(_hx_pos_9c869b98ead6fdcb_288_next,"haxe.ds._List.ListIterator","next",0xd496612d,"haxe.ds._List.ListIterator.next","D:\\HAXE\\haxe\\std/haxe/ds/List.hx",288,0xc06bd0f7)
namespace haxe{
namespace ds{
namespace _List{

void ListIterator_obj::__construct( ::haxe::ds::_List::ListNode head){
            	HX_STACKFRAME(&_hx_pos_9c869b98ead6fdcb_281_new)
HXDLIN( 281)		this->head = head;
            	}

Dynamic ListIterator_obj::__CreateEmpty() { return new ListIterator_obj; }

void *ListIterator_obj::_hx_vtable = 0;

Dynamic ListIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListIterator_obj > _hx_result = new ListIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ListIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7cc93b54;
}

bool ListIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_9c869b98ead6fdcb_285_hasNext)
HXDLIN( 285)		return ::hx::IsNotNull( this->head );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListIterator_obj,hasNext,return )

 ::Dynamic ListIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_9c869b98ead6fdcb_288_next)
HXLINE( 289)		 ::Dynamic val = this->head->item;
HXLINE( 290)		this->head = this->head->next;
HXLINE( 291)		return val;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListIterator_obj,next,return )


::hx::ObjectPtr< ListIterator_obj > ListIterator_obj::__new( ::haxe::ds::_List::ListNode head) {
	::hx::ObjectPtr< ListIterator_obj > __this = new ListIterator_obj();
	__this->__construct(head);
	return __this;
}

::hx::ObjectPtr< ListIterator_obj > ListIterator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::_List::ListNode head) {
	ListIterator_obj *__this = (ListIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListIterator_obj), true, "haxe.ds._List.ListIterator"));
	*(void **)__this = ListIterator_obj::_hx_vtable;
	__this->__construct(head);
	return __this;
}

ListIterator_obj::ListIterator_obj()
{
}

void ListIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListIterator);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ListIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
}

::hx::Val ListIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return ::hx::Val( head ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ListIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast<  ::haxe::ds::_List::ListNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("head",20,29,0b,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ListIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::_List::ListNode */ ,(int)offsetof(ListIterator_obj,head),HX_("head",20,29,0b,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ListIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String ListIterator_obj_sMemberFields[] = {
	HX_("head",20,29,0b,45),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ListIterator_obj::__mClass;

void ListIterator_obj::__register()
{
	ListIterator_obj _hx_dummy;
	ListIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds._List.ListIterator",74,ee,81,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
} // end namespace _List
