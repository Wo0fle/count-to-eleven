#ifndef INCLUDED__PlayState_PlayState_Fields_
#define INCLUDED__PlayState_PlayState_Fields_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_PlayState,PlayState_Fields_)

namespace _PlayState{


class HXCPP_CLASS_ATTRIBUTES PlayState_Fields__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PlayState_Fields__obj OBJ_;
		PlayState_Fields__obj();

	public:
		enum { _hx_ClassId = 0x595a3ba6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="_PlayState.PlayState_Fields_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"_PlayState.PlayState_Fields_"); }

		inline static ::hx::ObjectPtr< PlayState_Fields__obj > __new() {
			::hx::ObjectPtr< PlayState_Fields__obj > __this = new PlayState_Fields__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PlayState_Fields__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PlayState_Fields__obj *__this = (PlayState_Fields__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_Fields__obj), false, "_PlayState.PlayState_Fields_"));
			*(void **)__this = PlayState_Fields__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_Fields__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayState_Fields_",84,45,68,06); }

		static void __boot();
		static bool click;
		static int num;
};

} // end namespace _PlayState

#endif /* INCLUDED__PlayState_PlayState_Fields_ */ 
