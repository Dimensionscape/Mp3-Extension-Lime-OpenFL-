#ifndef INCLUDED_lime_system_JNISafetyTools
#define INCLUDED_lime_system_JNISafetyTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,JNISafetyTools)
HX_DECLARE_CLASS3(sys,thread,_Thread,HaxeThread)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES JNISafetyTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JNISafetyTools_obj OBJ_;
		JNISafetyTools_obj();

	public:
		enum { _hx_ClassId = 0x24820a78 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.system.JNISafetyTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.system.JNISafetyTools"); }

		inline static ::hx::ObjectPtr< JNISafetyTools_obj > __new() {
			::hx::ObjectPtr< JNISafetyTools_obj > __this = new JNISafetyTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< JNISafetyTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			JNISafetyTools_obj *__this = (JNISafetyTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JNISafetyTools_obj), false, "lime.system.JNISafetyTools"));
			*(void **)__this = JNISafetyTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JNISafetyTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JNISafetyTools",a4,21,06,68); }

		static void __boot();
		static  ::sys::thread::_Thread::HaxeThread mainThread;
		static bool onMainThread();
		static ::Dynamic onMainThread_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_JNISafetyTools */ 
