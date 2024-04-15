#ifndef INCLUDED_openfl_display_CanvasRenderer
#define INCLUDED_openfl_display_CanvasRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES CanvasRenderer_obj : public  ::openfl::display::DisplayObjectRenderer_obj
{
	public:
		typedef  ::openfl::display::DisplayObjectRenderer_obj super;
		typedef CanvasRenderer_obj OBJ_;
		CanvasRenderer_obj();

	public:
		enum { _hx_ClassId = 0x16827685 };

		void __construct( ::Dynamic context);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.CanvasRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.CanvasRenderer"); }
		static ::hx::ObjectPtr< CanvasRenderer_obj > __new( ::Dynamic context);
		static ::hx::ObjectPtr< CanvasRenderer_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic context);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CanvasRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CanvasRenderer",5b,02,4a,33); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::Dynamic context;
		bool _hx___isDOM;
		 ::openfl::geom::Matrix _hx___tempMatrix;
		void applySmoothing( ::Dynamic context,bool value);
		::Dynamic applySmoothing_dyn();

		void setTransform( ::openfl::geom::Matrix transform, ::Dynamic context);
		::Dynamic setTransform_dyn();

		void _hx___clear();

		void _hx___popMask();

		void _hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  handleScrollRect);

		void _hx___popMaskRect();

		void _hx___pushMask( ::openfl::display::DisplayObject mask);

		void _hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  handleScrollRect);

		void _hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform);

		void _hx___render(::Dynamic object);

		void _hx___renderDrawable(::Dynamic object);
		::Dynamic _hx___renderDrawable_dyn();

		void _hx___renderDrawableMask(::Dynamic object);
		::Dynamic _hx___renderDrawableMask_dyn();

		void _hx___setBlendMode( ::Dynamic value);

		void _hx___setBlendModeContext( ::Dynamic context, ::Dynamic value);
		::Dynamic _hx___setBlendModeContext_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_CanvasRenderer */ 
