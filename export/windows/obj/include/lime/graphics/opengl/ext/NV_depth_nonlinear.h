#ifndef INCLUDED_lime_graphics_opengl_ext_NV_depth_nonlinear
#define INCLUDED_lime_graphics_opengl_ext_NV_depth_nonlinear

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_651bef4d6f261626_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_depth_nonlinear)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_depth_nonlinear_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NV_depth_nonlinear_obj OBJ_;
		NV_depth_nonlinear_obj();

	public:
		enum { _hx_ClassId = 0x6dd9c98d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_depth_nonlinear")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_depth_nonlinear"); }

		inline static ::hx::ObjectPtr< NV_depth_nonlinear_obj > __new() {
			::hx::ObjectPtr< NV_depth_nonlinear_obj > __this = new NV_depth_nonlinear_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NV_depth_nonlinear_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NV_depth_nonlinear_obj *__this = (NV_depth_nonlinear_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NV_depth_nonlinear_obj), false, "lime.graphics.opengl.ext.NV_depth_nonlinear"));
			*(void **)__this = NV_depth_nonlinear_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_651bef4d6f261626_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::NV_depth_nonlinear)(__this) )->DEPTH_COMPONENT16_NONLINEAR_NV = 36396;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NV_depth_nonlinear_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_depth_nonlinear",ff,77,4d,c4); }

		int DEPTH_COMPONENT16_NONLINEAR_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_depth_nonlinear */ 
