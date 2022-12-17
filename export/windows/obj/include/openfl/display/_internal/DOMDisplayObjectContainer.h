#ifndef INCLUDED_openfl_display__internal_DOMDisplayObjectContainer
#define INCLUDED_openfl_display__internal_DOMDisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,display,_internal,DOMDisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES DOMDisplayObjectContainer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DOMDisplayObjectContainer_obj OBJ_;
		DOMDisplayObjectContainer_obj();

	public:
		enum { _hx_ClassId = 0x4d0dc1f8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.DOMDisplayObjectContainer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.DOMDisplayObjectContainer"); }

		inline static ::hx::ObjectPtr< DOMDisplayObjectContainer_obj > __new() {
			::hx::ObjectPtr< DOMDisplayObjectContainer_obj > __this = new DOMDisplayObjectContainer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DOMDisplayObjectContainer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DOMDisplayObjectContainer_obj *__this = (DOMDisplayObjectContainer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DOMDisplayObjectContainer_obj), false, "openfl.display._internal.DOMDisplayObjectContainer"));
			*(void **)__this = DOMDisplayObjectContainer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DOMDisplayObjectContainer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DOMDisplayObjectContainer",62,2a,94,06); }

		static void renderDrawable( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableClear( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawableClear_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_DOMDisplayObjectContainer */ 