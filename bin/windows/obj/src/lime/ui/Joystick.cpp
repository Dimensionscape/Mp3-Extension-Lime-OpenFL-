#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Float_Float_Void
#include <lime/app/_Event_Int_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Float_Void
#include <lime/app/_Event_Int_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_lime_ui_JoystickHatPosition_Void
#include <lime/app/_Event_Int_lime_ui_JoystickHatPosition_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Joystick_Void
#include <lime/app/_Event_lime_ui_Joystick_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f03a5186095f658_11_new,"lime.ui.Joystick","new",0xd76b52cf,"lime.ui.Joystick.new","lime/ui/Joystick.hx",11,0x26e848e1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f03a5186095f658_70_get_guid,"lime.ui.Joystick","get_guid",0xa0372443,"lime.ui.Joystick.get_guid","lime/ui/Joystick.hx",70,0x26e848e1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f03a5186095f658_86_get_name,"lime.ui.Joystick","get_name",0xa4c87905,"lime.ui.Joystick.get_name","lime/ui/Joystick.hx",86,0x26e848e1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f03a5186095f658_99_get_numAxes,"lime.ui.Joystick","get_numAxes",0x6e0a2811,"lime.ui.Joystick.get_numAxes","lime/ui/Joystick.hx",99,0x26e848e1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f03a5186095f658_111_get_numButtons,"lime.ui.Joystick","get_numButtons",0x8a7f5ed5,"lime.ui.Joystick.get_numButtons","lime/ui/Joystick.hx",111,0x26e848e1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f03a5186095f658_123_get_numHats,"lime.ui.Joystick","get_numHats",0x72993fa4,"lime.ui.Joystick.get_numHats","lime/ui/Joystick.hx",123,0x26e848e1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f03a5186095f658_132_get_numTrackballs,"lime.ui.Joystick","get_numTrackballs",0xfaa6bf15,"lime.ui.Joystick.get_numTrackballs","lime/ui/Joystick.hx",132,0x26e848e1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f03a5186095f658_39___connect,"lime.ui.Joystick","__connect",0x47420c79,"lime.ui.Joystick.__connect","lime/ui/Joystick.hx",39,0x26e848e1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f03a5186095f658_48___disconnect,"lime.ui.Joystick","__disconnect",0xe10a172d,"lime.ui.Joystick.__disconnect","lime/ui/Joystick.hx",48,0x26e848e1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f03a5186095f658_13_boot,"lime.ui.Joystick","boot",0x9e9622e3,"lime.ui.Joystick.boot","lime/ui/Joystick.hx",13,0x26e848e1)
HX_LOCAL_STACK_FRAME(_hx_pos_1f03a5186095f658_14_boot,"lime.ui.Joystick","boot",0x9e9622e3,"lime.ui.Joystick.boot","lime/ui/Joystick.hx",14,0x26e848e1)
namespace lime{
namespace ui{

void Joystick_obj::__construct(int id){
            	HX_GC_STACKFRAME(&_hx_pos_1f03a5186095f658_11_new)
HXLINE(  29)		this->onTrackballMove =  ::lime::app::_Event_Int_Float_Float_Void_obj::__alloc( HX_CTX );
HXLINE(  28)		this->onHatMove =  ::lime::app::_Event_Int_lime_ui_JoystickHatPosition_Void_obj::__alloc( HX_CTX );
HXLINE(  27)		this->onDisconnect =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  26)		this->onButtonUp =  ::lime::app::_Event_Int_Void_obj::__alloc( HX_CTX );
HXLINE(  25)		this->onButtonDown =  ::lime::app::_Event_Int_Void_obj::__alloc( HX_CTX );
HXLINE(  24)		this->onAxisMove =  ::lime::app::_Event_Int_Float_Void_obj::__alloc( HX_CTX );
HXLINE(  33)		this->id = id;
HXLINE(  34)		this->connected = true;
            	}

Dynamic Joystick_obj::__CreateEmpty() { return new Joystick_obj; }

void *Joystick_obj::_hx_vtable = 0;

Dynamic Joystick_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Joystick_obj > _hx_result = new Joystick_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Joystick_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08824e45;
}

::String Joystick_obj::get_guid(){
            	HX_STACKFRAME(&_hx_pos_1f03a5186095f658_70_get_guid)
HXDLIN(  70)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_joystick_get_device_guid(this->id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_guid,return )

::String Joystick_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_1f03a5186095f658_86_get_name)
HXDLIN(  86)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_joystick_get_device_name(this->id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_name,return )

int Joystick_obj::get_numAxes(){
            	HX_STACKFRAME(&_hx_pos_1f03a5186095f658_99_get_numAxes)
HXDLIN(  99)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_joystick_get_num_axes(this->id);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numAxes,return )

int Joystick_obj::get_numButtons(){
            	HX_STACKFRAME(&_hx_pos_1f03a5186095f658_111_get_numButtons)
HXDLIN( 111)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_joystick_get_num_buttons(this->id);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numButtons,return )

int Joystick_obj::get_numHats(){
            	HX_STACKFRAME(&_hx_pos_1f03a5186095f658_123_get_numHats)
HXDLIN( 123)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_joystick_get_num_hats(this->id);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numHats,return )

int Joystick_obj::get_numTrackballs(){
            	HX_STACKFRAME(&_hx_pos_1f03a5186095f658_132_get_numTrackballs)
HXDLIN( 132)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_joystick_get_num_trackballs(this->id);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numTrackballs,return )

 ::haxe::ds::IntMap Joystick_obj::devices;

 ::lime::app::_Event_lime_ui_Joystick_Void Joystick_obj::onConnect;

void Joystick_obj::_hx___connect(int id){
            	HX_GC_STACKFRAME(&_hx_pos_1f03a5186095f658_39___connect)
HXDLIN(  39)		if (!(::lime::ui::Joystick_obj::devices->exists(id))) {
HXLINE(  41)			 ::lime::ui::Joystick joystick =  ::lime::ui::Joystick_obj::__alloc( HX_CTX ,id);
HXLINE(  42)			::lime::ui::Joystick_obj::devices->set(id,joystick);
HXLINE(  43)			::lime::ui::Joystick_obj::onConnect->dispatch(joystick);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,_hx___connect,(void))

void Joystick_obj::_hx___disconnect(int id){
            	HX_STACKFRAME(&_hx_pos_1f03a5186095f658_48___disconnect)
HXLINE(  49)		 ::lime::ui::Joystick joystick = ( ( ::lime::ui::Joystick)(::lime::ui::Joystick_obj::devices->get(id)) );
HXLINE(  50)		if (::hx::IsNotNull( joystick )) {
HXLINE(  50)			joystick->connected = false;
            		}
HXLINE(  51)		::lime::ui::Joystick_obj::devices->remove(id);
HXLINE(  52)		if (::hx::IsNotNull( joystick )) {
HXLINE(  52)			joystick->onDisconnect->dispatch();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,_hx___disconnect,(void))


::hx::ObjectPtr< Joystick_obj > Joystick_obj::__new(int id) {
	::hx::ObjectPtr< Joystick_obj > __this = new Joystick_obj();
	__this->__construct(id);
	return __this;
}

::hx::ObjectPtr< Joystick_obj > Joystick_obj::__alloc(::hx::Ctx *_hx_ctx,int id) {
	Joystick_obj *__this = (Joystick_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Joystick_obj), true, "lime.ui.Joystick"));
	*(void **)__this = Joystick_obj::_hx_vtable;
	__this->__construct(id);
	return __this;
}

Joystick_obj::Joystick_obj()
{
}

void Joystick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joystick);
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_MARK_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_MARK_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_MARK_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_MARK_MEMBER_NAME(onHatMove,"onHatMove");
	HX_MARK_MEMBER_NAME(onTrackballMove,"onTrackballMove");
	HX_MARK_END_CLASS();
}

void Joystick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_VISIT_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_VISIT_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_VISIT_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_VISIT_MEMBER_NAME(onHatMove,"onHatMove");
	HX_VISIT_MEMBER_NAME(onTrackballMove,"onTrackballMove");
}

::hx::Val Joystick_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_guid() ); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numAxes") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numAxes() ); }
		if (HX_FIELD_EQ(inName,"numHats") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numHats() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return ::hx::Val( get_guid_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return ::hx::Val( connected ); }
		if (HX_FIELD_EQ(inName,"onHatMove") ) { return ::hx::Val( onHatMove ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numButtons") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numButtons() ); }
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { return ::hx::Val( onAxisMove ); }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { return ::hx::Val( onButtonUp ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numAxes") ) { return ::hx::Val( get_numAxes_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numHats") ) { return ::hx::Val( get_numHats_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { return ::hx::Val( onButtonDown ); }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { return ::hx::Val( onDisconnect ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numTrackballs") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numTrackballs() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_numButtons") ) { return ::hx::Val( get_numButtons_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onTrackballMove") ) { return ::hx::Val( onTrackballMove ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_numTrackballs") ) { return ::hx::Val( get_numTrackballs_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Joystick_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { outValue = ( devices ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { outValue = ( onConnect ); return true; }
		if (HX_FIELD_EQ(inName,"__connect") ) { outValue = _hx___connect_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__disconnect") ) { outValue = _hx___disconnect_dyn(); return true; }
	}
	return false;
}

::hx::Val Joystick_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onHatMove") ) { onHatMove=inValue.Cast<  ::lime::app::_Event_Int_lime_ui_JoystickHatPosition_Void >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { onAxisMove=inValue.Cast<  ::lime::app::_Event_Int_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { onButtonUp=inValue.Cast<  ::lime::app::_Event_Int_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { onButtonDown=inValue.Cast<  ::lime::app::_Event_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { onDisconnect=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onTrackballMove") ) { onTrackballMove=inValue.Cast<  ::lime::app::_Event_Int_Float_Float_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Joystick_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { onConnect=ioValue.Cast<  ::lime::app::_Event_lime_ui_Joystick_Void >(); return true; }
	}
	return false;
}

void Joystick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("connected",c9,e2,f6,a2));
	outFields->push(HX_("guid",89,1d,6e,44));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("numAxes",8b,be,f9,93));
	outFields->push(HX_("numButtons",9b,90,95,fa));
	outFields->push(HX_("numHats",1e,d6,88,98));
	outFields->push(HX_("numTrackballs",0f,6d,a5,22));
	outFields->push(HX_("onAxisMove",91,64,ab,6d));
	outFields->push(HX_("onButtonDown",73,09,a8,84));
	outFields->push(HX_("onButtonUp",2c,61,e9,39));
	outFields->push(HX_("onDisconnect",5b,06,88,41));
	outFields->push(HX_("onHatMove",ad,50,b6,82));
	outFields->push(HX_("onTrackballMove",9c,55,f3,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Joystick_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Joystick_obj,connected),HX_("connected",c9,e2,f6,a2)},
	{::hx::fsInt,(int)offsetof(Joystick_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::lime::app::_Event_Int_Float_Void */ ,(int)offsetof(Joystick_obj,onAxisMove),HX_("onAxisMove",91,64,ab,6d)},
	{::hx::fsObject /*  ::lime::app::_Event_Int_Void */ ,(int)offsetof(Joystick_obj,onButtonDown),HX_("onButtonDown",73,09,a8,84)},
	{::hx::fsObject /*  ::lime::app::_Event_Int_Void */ ,(int)offsetof(Joystick_obj,onButtonUp),HX_("onButtonUp",2c,61,e9,39)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Joystick_obj,onDisconnect),HX_("onDisconnect",5b,06,88,41)},
	{::hx::fsObject /*  ::lime::app::_Event_Int_lime_ui_JoystickHatPosition_Void */ ,(int)offsetof(Joystick_obj,onHatMove),HX_("onHatMove",ad,50,b6,82)},
	{::hx::fsObject /*  ::lime::app::_Event_Int_Float_Float_Void */ ,(int)offsetof(Joystick_obj,onTrackballMove),HX_("onTrackballMove",9c,55,f3,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Joystick_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Joystick_obj::devices,HX_("devices",1d,27,69,d7)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_Joystick_Void */ ,(void *) &Joystick_obj::onConnect,HX_("onConnect",8b,f4,2a,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Joystick_obj_sMemberFields[] = {
	HX_("connected",c9,e2,f6,a2),
	HX_("id",db,5b,00,00),
	HX_("onAxisMove",91,64,ab,6d),
	HX_("onButtonDown",73,09,a8,84),
	HX_("onButtonUp",2c,61,e9,39),
	HX_("onDisconnect",5b,06,88,41),
	HX_("onHatMove",ad,50,b6,82),
	HX_("onTrackballMove",9c,55,f3,fd),
	HX_("get_guid",12,d9,28,c4),
	HX_("get_name",d4,2d,ba,c8),
	HX_("get_numAxes",a2,1e,f4,19),
	HX_("get_numButtons",e4,18,8b,70),
	HX_("get_numHats",35,36,83,1e),
	HX_("get_numTrackballs",66,78,15,29),
	::String(null()) };

static void Joystick_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joystick_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Joystick_obj::onConnect,"onConnect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Joystick_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joystick_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Joystick_obj::onConnect,"onConnect");
};

#endif

::hx::Class Joystick_obj::__mClass;

static ::String Joystick_obj_sStaticFields[] = {
	HX_("devices",1d,27,69,d7),
	HX_("onConnect",8b,f4,2a,ed),
	HX_("__connect",ca,8c,ce,96),
	HX_("__disconnect",7c,df,d7,a1),
	::String(null())
};

void Joystick_obj::__register()
{
	Joystick_obj _hx_dummy;
	Joystick_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.ui.Joystick",5d,3f,e0,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Joystick_obj::__GetStatic;
	__mClass->mSetStaticField = &Joystick_obj::__SetStatic;
	__mClass->mMarkFunc = Joystick_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Joystick_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Joystick_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Joystick_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Joystick_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Joystick_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Joystick_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Joystick_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_1f03a5186095f658_13_boot)
HXDLIN(  13)		devices =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_1f03a5186095f658_14_boot)
HXDLIN(  14)		onConnect =  ::lime::app::_Event_lime_ui_Joystick_Void_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace ui
