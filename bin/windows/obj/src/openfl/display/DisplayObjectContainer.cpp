#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d11618aadd936e00_113_new,"openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",113,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_155_addChild,"openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",155,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_190_addChildAt,"openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",190,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_301_areInaccessibleObjectsUnderPoint,"openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",301,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_317_contains,"openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",317,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_340_getChildAt,"openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",340,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_368_getChildByName,"openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",368,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_386_getChildIndex,"openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",386,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_415_getObjectsUnderPoint,"openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",415,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_442_removeChild,"openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",442,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_497_removeChildAt,"openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",497,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_518_removeChildren,"openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",518,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_547_resolve,"openfl.display.DisplayObjectContainer","resolve",0x8cca40c8,"openfl.display.DisplayObjectContainer.resolve","openfl/display/DisplayObjectContainer.hx",547,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_599_setChildIndex,"openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",599,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_617_stopAllMovieClips,"openfl.display.DisplayObjectContainer","stopAllMovieClips",0x46e0f9ce,"openfl.display.DisplayObjectContainer.stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",617,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_632_swapChildren,"openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",632,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_654_swapChildrenAt,"openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",654,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_663___cleanup,"openfl.display.DisplayObjectContainer","__cleanup",0x2346b9e0,"openfl.display.DisplayObjectContainer.__cleanup","openfl/display/DisplayObjectContainer.hx",663,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_675___cleanupRemovedChildren,"openfl.display.DisplayObjectContainer","__cleanupRemovedChildren",0x4395feff,"openfl.display.DisplayObjectContainer.__cleanupRemovedChildren","openfl/display/DisplayObjectContainer.hx",675,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_689___dispatchChildren,"openfl.display.DisplayObjectContainer","__dispatchChildren",0x7a91a8dd,"openfl.display.DisplayObjectContainer.__dispatchChildren","openfl/display/DisplayObjectContainer.hx",689,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_707___enterFrame,"openfl.display.DisplayObjectContainer","__enterFrame",0x3af993b9,"openfl.display.DisplayObjectContainer.__enterFrame","openfl/display/DisplayObjectContainer.hx",707,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_714___getBounds,"openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",714,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_734___getFilterBounds,"openfl.display.DisplayObjectContainer","__getFilterBounds",0xbea2d3bf,"openfl.display.DisplayObjectContainer.__getFilterBounds","openfl/display/DisplayObjectContainer.hx",734,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_760___getRenderBounds,"openfl.display.DisplayObjectContainer","__getRenderBounds",0x21a0a9dd,"openfl.display.DisplayObjectContainer.__getRenderBounds","openfl/display/DisplayObjectContainer.hx",760,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_789___hitTest,"openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",789,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_878___hitTestMask,"openfl.display.DisplayObjectContainer","__hitTestMask",0x4f390f8d,"openfl.display.DisplayObjectContainer.__hitTestMask","openfl/display/DisplayObjectContainer.hx",878,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_893___readGraphicsData,"openfl.display.DisplayObjectContainer","__readGraphicsData",0x782e37cf,"openfl.display.DisplayObjectContainer.__readGraphicsData","openfl/display/DisplayObjectContainer.hx",893,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_906___setStageReference,"openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",906,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_920___setWorldTransformInvalid,"openfl.display.DisplayObjectContainer","__setWorldTransformInvalid",0xa8fd351f,"openfl.display.DisplayObjectContainer.__setWorldTransformInvalid","openfl/display/DisplayObjectContainer.hx",920,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_936___stopAllMovieClips,"openfl.display.DisplayObjectContainer","__stopAllMovieClips",0xb7ce11ae,"openfl.display.DisplayObjectContainer.__stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",936,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_943___tabTest,"openfl.display.DisplayObjectContainer","__tabTest",0xbd744b03,"openfl.display.DisplayObjectContainer.__tabTest","openfl/display/DisplayObjectContainer.hx",943,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_964___update,"openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",964,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_980_get_numChildren,"openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",980,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_985_get_tabChildren,"openfl.display.DisplayObjectContainer","get_tabChildren",0x62bd2e27,"openfl.display.DisplayObjectContainer.get_tabChildren","openfl/display/DisplayObjectContainer.hx",985,0x5f4d3d72)
HX_LOCAL_STACK_FRAME(_hx_pos_d11618aadd936e00_989_set_tabChildren,"openfl.display.DisplayObjectContainer","set_tabChildren",0x5e88ab33,"openfl.display.DisplayObjectContainer.set_tabChildren","openfl/display/DisplayObjectContainer.hx",989,0x5f4d3d72)
namespace openfl{
namespace display{

void DisplayObjectContainer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_113_new)
HXLINE( 114)		super::__construct();
HXLINE( 116)		this->mouseChildren = true;
HXLINE( 117)		this->_hx___tabChildren = true;
HXLINE( 119)		this->_hx___children = ::Array_obj< ::Dynamic>::__new();
HXLINE( 120)		int length = null();
HXDLIN( 120)		bool fixed = null();
HXDLIN( 120)		::Array< ::Dynamic> array = null();
HXDLIN( 120)		this->_hx___removedChildren =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
            	}

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return new DisplayObjectContainer_obj; }

void *DisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic DisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisplayObjectContainer_obj > _hx_result = new DisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0330636f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
	}
}

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_155_addChild)
HXDLIN( 155)		return this->addChildAt(child,this->get_numChildren());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_190_addChildAt)
HXLINE( 191)		if (::hx::IsNull( child )) {
HXLINE( 193)			 ::openfl::errors::TypeError error =  ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,HX_("Error #2007: Parameter child must be non-null.",30,5a,a7,aa));
HXLINE( 194)			error->errorID = 2007;
HXLINE( 195)			HX_STACK_DO_THROW(error);
            		}
            		else {
HXLINE( 198)			if (::hx::IsInstanceEq( child->stage,child )) {
HXLINE( 200)				 ::openfl::errors::ArgumentError error =  ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,HX_("Error #3783: A Stage object cannot be added as the child of another object.",fa,51,93,42));
HXLINE( 201)				error->errorID = 3783;
HXLINE( 202)				HX_STACK_DO_THROW(error);
            			}
            		}
HXLINE( 206)		bool _hx_tmp;
HXDLIN( 206)		if ((index <= this->_hx___children->length)) {
HXLINE( 206)			_hx_tmp = (index < 0);
            		}
            		else {
HXLINE( 206)			_hx_tmp = true;
            		}
HXDLIN( 206)		if (_hx_tmp) {
HXLINE( 208)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid index position ",80,59,50,86) + index)));
            		}
HXLINE( 211)		if (::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 213)			if (::hx::IsInstanceNotEq( this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >(),child )) {
HXLINE( 215)				this->_hx___children->remove(child);
HXLINE( 216)				this->_hx___children->insert(index,child);
HXLINE( 218)				if (!(this->_hx___renderDirty)) {
HXLINE( 218)					this->_hx___renderDirty = true;
HXDLIN( 218)					this->_hx___setParentRenderDirty();
            				}
            			}
            		}
            		else {
HXLINE( 223)			if (::hx::IsNotNull( child->parent )) {
HXLINE( 225)				child->parent->removeChild(child);
            			}
HXLINE( 228)			this->_hx___children->insert(index,child);
HXLINE( 229)			child->parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 231)			bool addedToStage;
HXDLIN( 231)			if (::hx::IsNotNull( this->stage )) {
HXLINE( 231)				addedToStage = ::hx::IsNull( child->stage );
            			}
            			else {
HXLINE( 231)				addedToStage = false;
            			}
HXLINE( 233)			if (addedToStage) {
HXLINE( 235)				child->_hx___setStageReference(this->stage);
            			}
HXLINE( 238)			child->_hx___setTransformDirty();
HXLINE( 239)			if (!(child->_hx___renderDirty)) {
HXLINE( 239)				child->_hx___renderDirty = true;
HXDLIN( 239)				child->_hx___setParentRenderDirty();
            			}
HXLINE( 240)			if (!(this->_hx___renderDirty)) {
HXLINE( 240)				this->_hx___renderDirty = true;
HXDLIN( 240)				this->_hx___setParentRenderDirty();
            			}
HXLINE( 246)			 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("added",c0,d4,43,1c),null(),null());
HXLINE( 248)			event->bubbles = true;
HXLINE( 250)			event->target = child;
HXLINE( 252)			child->_hx___dispatchWithCapture(event);
HXLINE( 258)			if (addedToStage) {
HXLINE( 264)				event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("addedToStage",63,22,55,0c),false,false);
HXLINE( 267)				child->_hx___dispatchWithCapture(event);
HXLINE( 268)				child->_hx___dispatchChildren(event);
            			}
            		}
HXLINE( 276)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_301_areInaccessibleObjectsUnderPoint)
HXDLIN( 301)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_317_contains)
HXLINE( 318)		while(true){
HXLINE( 318)			bool _hx_tmp;
HXDLIN( 318)			if (::hx::IsInstanceNotEq( child,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 318)				_hx_tmp = ::hx::IsNotNull( child );
            			}
            			else {
HXLINE( 318)				_hx_tmp = false;
            			}
HXDLIN( 318)			if (!(_hx_tmp)) {
HXLINE( 318)				goto _hx_goto_4;
            			}
HXLINE( 320)			child = child->parent;
            		}
            		_hx_goto_4:;
HXLINE( 323)		return ::hx::IsInstanceEq( child,::hx::ObjectPtr<OBJ_>(this) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_340_getChildAt)
HXLINE( 341)		bool _hx_tmp;
HXDLIN( 341)		if ((index >= 0)) {
HXLINE( 341)			_hx_tmp = (index < this->_hx___children->length);
            		}
            		else {
HXLINE( 341)			_hx_tmp = false;
            		}
HXDLIN( 341)		if (_hx_tmp) {
HXLINE( 343)			return this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >();
            		}
HXLINE( 346)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName(::String name){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_368_getChildByName)
HXLINE( 369)		{
HXLINE( 369)			int _g = 0;
HXDLIN( 369)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 369)			while((_g < _g1->length)){
HXLINE( 369)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 369)				_g = (_g + 1);
HXLINE( 371)				if ((child->get_name() == name)) {
HXLINE( 371)					return child;
            				}
            			}
            		}
HXLINE( 374)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_386_getChildIndex)
HXLINE( 387)		{
HXLINE( 387)			int _g = 0;
HXDLIN( 387)			int _g1 = this->_hx___children->length;
HXDLIN( 387)			while((_g < _g1)){
HXLINE( 387)				_g = (_g + 1);
HXDLIN( 387)				int i = (_g - 1);
HXLINE( 389)				if (::hx::IsInstanceEq( this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >(),child )) {
HXLINE( 389)					return i;
            				}
            			}
            		}
HXLINE( 392)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

::Array< ::Dynamic> DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_415_getObjectsUnderPoint)
HXLINE( 416)		::Array< ::Dynamic> stack = ::Array_obj< ::Dynamic>::__new();
HXLINE( 417)		this->_hx___hitTest(point->x,point->y,false,stack,false,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 418)		stack->reverse();
HXLINE( 419)		return stack;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_442_removeChild)
HXLINE( 443)		bool _hx_tmp;
HXDLIN( 443)		if (::hx::IsNotNull( child )) {
HXLINE( 443)			_hx_tmp = ::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 443)			_hx_tmp = false;
            		}
HXDLIN( 443)		if (_hx_tmp) {
HXLINE( 445)			child->_hx___setTransformDirty();
HXLINE( 446)			if (!(child->_hx___renderDirty)) {
HXLINE( 446)				child->_hx___renderDirty = true;
HXDLIN( 446)				child->_hx___setParentRenderDirty();
            			}
HXLINE( 447)			if (!(this->_hx___renderDirty)) {
HXLINE( 447)				this->_hx___renderDirty = true;
HXDLIN( 447)				this->_hx___setParentRenderDirty();
            			}
HXLINE( 449)			 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("removed",a0,1f,00,f3),true,null());
HXLINE( 450)			child->_hx___dispatchWithCapture(event);
HXLINE( 452)			if (::hx::IsNotNull( this->stage )) {
HXLINE( 454)				bool _hx_tmp;
HXDLIN( 454)				if (::hx::IsNotNull( child->stage )) {
HXLINE( 454)					_hx_tmp = ::hx::IsInstanceEq( this->stage->get_focus(),child );
            				}
            				else {
HXLINE( 454)					_hx_tmp = false;
            				}
HXDLIN( 454)				if (_hx_tmp) {
HXLINE( 456)					this->stage->set_focus(null());
            				}
HXLINE( 459)				 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("removedFromStage",34,21,76,ba),false,false);
HXLINE( 460)				child->_hx___dispatchWithCapture(event);
HXLINE( 461)				child->_hx___dispatchChildren(event);
HXLINE( 462)				child->_hx___setStageReference(null());
            			}
HXLINE( 465)			child->parent = null();
HXLINE( 466)			this->_hx___children->remove(child);
HXLINE( 467)			this->_hx___removedChildren->push(child);
HXLINE( 468)			child->_hx___setTransformDirty();
            		}
HXLINE( 471)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_497_removeChildAt)
HXLINE( 498)		bool _hx_tmp;
HXDLIN( 498)		if ((index >= 0)) {
HXLINE( 498)			_hx_tmp = (index < this->_hx___children->length);
            		}
            		else {
HXLINE( 498)			_hx_tmp = false;
            		}
HXDLIN( 498)		if (_hx_tmp) {
HXLINE( 500)			return this->removeChild(this->_hx___children->__get(index).StaticCast<  ::openfl::display::DisplayObject >());
            		}
HXLINE( 503)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

void DisplayObjectContainer_obj::removeChildren(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_518_removeChildren)
HXLINE( 519)		if ((endIndex == (int)2147483647)) {
HXLINE( 521)			endIndex = (this->_hx___children->length - 1);
HXLINE( 523)			if ((endIndex < 0)) {
HXLINE( 525)				return;
            			}
            		}
HXLINE( 529)		if ((beginIndex > (this->_hx___children->length - 1))) {
HXLINE( 531)			return;
            		}
            		else {
HXLINE( 533)			bool _hx_tmp;
HXDLIN( 533)			bool _hx_tmp1;
HXDLIN( 533)			if ((endIndex >= beginIndex)) {
HXLINE( 533)				_hx_tmp1 = (beginIndex < 0);
            			}
            			else {
HXLINE( 533)				_hx_tmp1 = true;
            			}
HXDLIN( 533)			if (!(_hx_tmp1)) {
HXLINE( 533)				_hx_tmp = (endIndex > this->_hx___children->length);
            			}
            			else {
HXLINE( 533)				_hx_tmp = true;
            			}
HXDLIN( 533)			if (_hx_tmp) {
HXLINE( 535)				HX_STACK_DO_THROW( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds.",17,96,1b,51)));
            			}
            		}
HXLINE( 538)		int numRemovals = (endIndex - beginIndex);
HXLINE( 539)		while((numRemovals >= 0)){
HXLINE( 541)			this->removeChildAt(beginIndex);
HXLINE( 542)			numRemovals = (numRemovals - 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

 ::openfl::display::DisplayObject DisplayObjectContainer_obj::resolve(::String fieldName){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_547_resolve)
HXLINE( 548)		if (::hx::IsNull( this->_hx___children )) {
HXLINE( 548)			return null();
            		}
HXLINE( 550)		{
HXLINE( 550)			int _g = 0;
HXDLIN( 550)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 550)			while((_g < _g1->length)){
HXLINE( 550)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 550)				_g = (_g + 1);
HXLINE( 552)				if ((child->get_name() == fieldName)) {
HXLINE( 554)					return child;
            				}
            			}
            		}
HXLINE( 558)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,resolve,return )

void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_599_setChildIndex)
HXDLIN( 599)		bool _hx_tmp;
HXDLIN( 599)		bool _hx_tmp1;
HXDLIN( 599)		if ((index >= 0)) {
HXDLIN( 599)			_hx_tmp1 = (index <= this->_hx___children->length);
            		}
            		else {
HXDLIN( 599)			_hx_tmp1 = false;
            		}
HXDLIN( 599)		if (_hx_tmp1) {
HXDLIN( 599)			_hx_tmp = ::hx::IsInstanceEq( child->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 599)			_hx_tmp = false;
            		}
HXDLIN( 599)		if (_hx_tmp) {
HXLINE( 601)			this->_hx___children->remove(child);
HXLINE( 602)			this->_hx___children->insert(index,child);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

void DisplayObjectContainer_obj::stopAllMovieClips(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_617_stopAllMovieClips)
HXDLIN( 617)		this->_hx___stopAllMovieClips();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,stopAllMovieClips,(void))

void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1, ::openfl::display::DisplayObject child2){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_632_swapChildren)
HXDLIN( 632)		bool _hx_tmp;
HXDLIN( 632)		if (::hx::IsInstanceEq( child1->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXDLIN( 632)			_hx_tmp = ::hx::IsInstanceEq( child2->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXDLIN( 632)			_hx_tmp = false;
            		}
HXDLIN( 632)		if (_hx_tmp) {
HXLINE( 634)			int index1 = this->_hx___children->indexOf(child1,null());
HXLINE( 635)			int index2 = this->_hx___children->indexOf(child2,null());
HXLINE( 637)			this->_hx___children[index1] = child2;
HXLINE( 638)			this->_hx___children[index2] = child1;
HXLINE( 640)			if (!(this->_hx___renderDirty)) {
HXLINE( 640)				this->_hx___renderDirty = true;
HXDLIN( 640)				this->_hx___setParentRenderDirty();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

void DisplayObjectContainer_obj::swapChildrenAt(int index1,int index2){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_654_swapChildrenAt)
HXLINE( 655)		 ::openfl::display::DisplayObject swap = this->_hx___children->__get(index1).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 656)		this->_hx___children[index1] = this->_hx___children->__get(index2).StaticCast<  ::openfl::display::DisplayObject >();
HXLINE( 657)		this->_hx___children[index2] = swap;
HXLINE( 658)		swap = null();
HXLINE( 659)		if (!(this->_hx___renderDirty)) {
HXLINE( 659)			this->_hx___renderDirty = true;
HXDLIN( 659)			this->_hx___setParentRenderDirty();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

void DisplayObjectContainer_obj::_hx___cleanup(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_663___cleanup)
HXLINE( 664)		this->super::_hx___cleanup();
HXLINE( 666)		{
HXLINE( 666)			int _g = 0;
HXDLIN( 666)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 666)			while((_g < _g1->length)){
HXLINE( 666)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 666)				_g = (_g + 1);
HXLINE( 668)				child->_hx___cleanup();
            			}
            		}
HXLINE( 671)		{
HXLINE( 671)			{
HXLINE( 671)				 ::Dynamic orphan = this->_hx___removedChildren->iterator();
HXDLIN( 671)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 671)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 671)					if (::hx::IsNull( orphan1->stage )) {
HXLINE( 671)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN( 671)			this->_hx___removedChildren->set_length(0);
            		}
            	}


void DisplayObjectContainer_obj::_hx___cleanupRemovedChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_675___cleanupRemovedChildren)
HXLINE( 676)		{
HXLINE( 676)			 ::Dynamic orphan = this->_hx___removedChildren->iterator();
HXDLIN( 676)			while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 676)				 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 678)				if (::hx::IsNull( orphan1->stage )) {
HXLINE( 680)					orphan1->_hx___cleanup();
            				}
            			}
            		}
HXLINE( 684)		this->_hx___removedChildren->set_length(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,_hx___cleanupRemovedChildren,(void))

void DisplayObjectContainer_obj::_hx___dispatchChildren( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_689___dispatchChildren)
HXDLIN( 689)		if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 691)			int _g = 0;
HXDLIN( 691)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 691)			while((_g < _g1->length)){
HXLINE( 691)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 691)				_g = (_g + 1);
HXLINE( 693)				event->target = child;
HXLINE( 695)				if (!(child->_hx___dispatchWithCapture(event))) {
HXLINE( 697)					goto _hx_goto_27;
            				}
HXLINE( 700)				child->_hx___dispatchChildren(event);
            			}
            			_hx_goto_27:;
            		}
            	}


void DisplayObjectContainer_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_707___enterFrame)
HXDLIN( 707)		int _g = 0;
HXDLIN( 707)		::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 707)		while((_g < _g1->length)){
HXDLIN( 707)			 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 707)			_g = (_g + 1);
HXLINE( 709)			child->_hx___enterFrame(deltaTime);
            		}
            	}


void DisplayObjectContainer_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_714___getBounds)
HXLINE( 715)		this->super::_hx___getBounds(rect,matrix);
HXLINE( 717)		if ((this->_hx___children->length == 0)) {
HXLINE( 717)			return;
            		}
HXLINE( 719)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 721)		{
HXLINE( 721)			int _g = 0;
HXDLIN( 721)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 721)			while((_g < _g1->length)){
HXLINE( 721)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 721)				_g = (_g + 1);
HXLINE( 723)				bool _hx_tmp;
HXDLIN( 723)				if ((child->_hx___scaleX != 0)) {
HXLINE( 723)					_hx_tmp = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 723)					_hx_tmp = true;
            				}
HXDLIN( 723)				if (_hx_tmp) {
HXLINE( 723)					continue;
            				}
HXLINE( 725)				{
HXLINE( 725)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 725)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 725)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 725)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 725)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 725)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 725)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 727)				child->_hx___getBounds(rect,childWorldTransform);
            			}
            		}
HXLINE( 730)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


void DisplayObjectContainer_obj::_hx___getFilterBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_734___getFilterBounds)
HXLINE( 735)		this->super::_hx___getFilterBounds(rect,matrix);
HXLINE( 736)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 736)			return;
            		}
HXLINE( 738)		if ((this->_hx___children->length == 0)) {
HXLINE( 738)			return;
            		}
HXLINE( 740)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 742)		{
HXLINE( 742)			int _g = 0;
HXDLIN( 742)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 742)			while((_g < _g1->length)){
HXLINE( 742)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 742)				_g = (_g + 1);
HXLINE( 744)				bool _hx_tmp;
HXDLIN( 744)				bool _hx_tmp1;
HXDLIN( 744)				if ((child->_hx___scaleX != 0)) {
HXLINE( 744)					_hx_tmp1 = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 744)					_hx_tmp1 = true;
            				}
HXDLIN( 744)				if (!(_hx_tmp1)) {
HXLINE( 744)					_hx_tmp = child->_hx___isMask;
            				}
            				else {
HXLINE( 744)					_hx_tmp = true;
            				}
HXDLIN( 744)				if (_hx_tmp) {
HXLINE( 744)					continue;
            				}
HXLINE( 746)				{
HXLINE( 746)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 746)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 746)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 746)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 746)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 746)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 746)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 748)				 ::openfl::geom::Rectangle childRect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 750)				child->_hx___getFilterBounds(childRect,childWorldTransform);
HXLINE( 751)				rect->_hx___expand(childRect->x,childRect->y,childRect->width,childRect->height);
HXLINE( 753)				::openfl::geom::Rectangle_obj::_hx___pool->release(childRect);
            			}
            		}
HXLINE( 756)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


void DisplayObjectContainer_obj::_hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_760___getRenderBounds)
HXLINE( 761)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 763)			this->super::_hx___getRenderBounds(rect,matrix);
HXLINE( 764)			return;
            		}
            		else {
HXLINE( 768)			this->super::_hx___getBounds(rect,matrix);
            		}
HXLINE( 771)		if ((this->_hx___children->length == 0)) {
HXLINE( 771)			return;
            		}
HXLINE( 773)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 775)		{
HXLINE( 775)			int _g = 0;
HXDLIN( 775)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 775)			while((_g < _g1->length)){
HXLINE( 775)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 775)				_g = (_g + 1);
HXLINE( 777)				bool _hx_tmp;
HXDLIN( 777)				bool _hx_tmp1;
HXDLIN( 777)				if ((child->_hx___scaleX != 0)) {
HXLINE( 777)					_hx_tmp1 = (child->_hx___scaleY == 0);
            				}
            				else {
HXLINE( 777)					_hx_tmp1 = true;
            				}
HXDLIN( 777)				if (!(_hx_tmp1)) {
HXLINE( 777)					_hx_tmp = child->_hx___isMask;
            				}
            				else {
HXLINE( 777)					_hx_tmp = true;
            				}
HXDLIN( 777)				if (_hx_tmp) {
HXLINE( 777)					continue;
            				}
HXLINE( 779)				{
HXLINE( 779)					 ::openfl::geom::Matrix local = child->_hx___transform;
HXDLIN( 779)					childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 779)					childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 779)					childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 779)					childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 779)					childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 779)					childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            				}
HXLINE( 781)				child->_hx___getRenderBounds(rect,childWorldTransform);
            			}
            		}
HXLINE( 784)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


bool DisplayObjectContainer_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_789___hitTest)
HXLINE( 790)		bool _hx_tmp;
HXDLIN( 790)		bool _hx_tmp1;
HXDLIN( 790)		if (hitObject->get_visible()) {
HXLINE( 790)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE( 790)			_hx_tmp1 = true;
            		}
HXDLIN( 790)		if (!(_hx_tmp1)) {
HXLINE( 790)			bool _hx_tmp1;
HXDLIN( 790)			if (interactiveOnly) {
HXLINE( 790)				_hx_tmp1 = !(this->mouseEnabled);
            			}
            			else {
HXLINE( 790)				_hx_tmp1 = false;
            			}
HXDLIN( 790)			if (_hx_tmp1) {
HXLINE( 790)				_hx_tmp = !(this->mouseChildren);
            			}
            			else {
HXLINE( 790)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 790)			_hx_tmp = true;
            		}
HXDLIN( 790)		if (_hx_tmp) {
HXLINE( 790)			return false;
            		}
HXLINE( 791)		bool _hx_tmp2;
HXDLIN( 791)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 791)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 791)			_hx_tmp2 = false;
            		}
HXDLIN( 791)		if (_hx_tmp2) {
HXLINE( 791)			return false;
            		}
HXLINE( 793)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 795)			 ::openfl::geom::Point point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 796)			point->setTo(x,y);
HXLINE( 797)			{
HXLINE( 797)				 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN( 797)				Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 797)				if ((norm == 0)) {
HXLINE( 797)					point->x = -(_this->tx);
HXDLIN( 797)					point->y = -(_this->ty);
            				}
            				else {
HXLINE( 797)					Float px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - point->y)) + (_this->d * (point->x - _this->tx))));
HXDLIN( 797)					point->y = ((((Float)1.0) / norm) * ((_this->a * (point->y - _this->ty)) + (_this->b * (_this->tx - point->x))));
HXDLIN( 797)					point->x = px;
            				}
            			}
HXLINE( 799)			if (!(this->_hx___scrollRect->containsPoint(point))) {
HXLINE( 801)				::openfl::geom::Point_obj::_hx___pool->release(point);
HXLINE( 802)				return false;
            			}
HXLINE( 805)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 808)		int i = this->_hx___children->length;
HXLINE( 809)		if (interactiveOnly) {
HXLINE( 811)			bool _hx_tmp;
HXDLIN( 811)			if (::hx::IsNotNull( stack )) {
HXLINE( 811)				_hx_tmp = !(this->mouseChildren);
            			}
            			else {
HXLINE( 811)				_hx_tmp = true;
            			}
HXDLIN( 811)			if (_hx_tmp) {
HXLINE( 813)				while(true){
HXLINE( 813)					i = (i - 1);
HXDLIN( 813)					if (!((i >= 0))) {
HXLINE( 813)						goto _hx_goto_37;
            					}
HXLINE( 815)					if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,null(),true,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 817)						if (::hx::IsNotNull( stack )) {
HXLINE( 819)							stack->push(hitObject);
            						}
HXLINE( 822)						return true;
            					}
            				}
            				_hx_goto_37:;
            			}
            			else {
HXLINE( 826)				if (::hx::IsNotNull( stack )) {
HXLINE( 828)					int length = stack->length;
HXLINE( 830)					bool interactive = false;
HXLINE( 831)					bool hitTest = false;
HXLINE( 833)					while(true){
HXLINE( 833)						i = (i - 1);
HXDLIN( 833)						if (!((i >= 0))) {
HXLINE( 833)							goto _hx_goto_38;
            						}
HXLINE( 835)						interactive = this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___getInteractive(null());
HXLINE( 837)						bool _hx_tmp;
HXDLIN( 837)						if (!(interactive)) {
HXLINE( 837)							if (this->mouseEnabled) {
HXLINE( 837)								_hx_tmp = !(hitTest);
            							}
            							else {
HXLINE( 837)								_hx_tmp = false;
            							}
            						}
            						else {
HXLINE( 837)							_hx_tmp = true;
            						}
HXDLIN( 837)						if (_hx_tmp) {
HXLINE( 839)							if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,stack,true,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 841)								hitTest = true;
HXLINE( 843)								bool _hx_tmp;
HXDLIN( 843)								if (interactive) {
HXLINE( 843)									_hx_tmp = (stack->length > length);
            								}
            								else {
HXLINE( 843)									_hx_tmp = false;
            								}
HXDLIN( 843)								if (_hx_tmp) {
HXLINE( 845)									goto _hx_goto_38;
            								}
            							}
            						}
            					}
            					_hx_goto_38:;
HXLINE( 851)					if (hitTest) {
HXLINE( 853)						stack->insert(length,hitObject);
HXLINE( 854)						return true;
            					}
            				}
            			}
            		}
            		else {
HXLINE( 860)			bool hitTest = false;
HXLINE( 862)			while(true){
HXLINE( 862)				i = (i - 1);
HXDLIN( 862)				if (!((i >= 0))) {
HXLINE( 862)					goto _hx_goto_39;
            				}
HXLINE( 864)				if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTest(x,y,shapeFlag,stack,false,this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >())) {
HXLINE( 866)					hitTest = true;
HXLINE( 867)					if (::hx::IsNull( stack )) {
HXLINE( 867)						goto _hx_goto_39;
            					}
            				}
            			}
            			_hx_goto_39:;
HXLINE( 871)			return hitTest;
            		}
HXLINE( 874)		return false;
            	}


bool DisplayObjectContainer_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_878___hitTestMask)
HXLINE( 879)		int i = this->_hx___children->length;
HXLINE( 881)		while(true){
HXLINE( 881)			i = (i - 1);
HXDLIN( 881)			if (!((i >= 0))) {
HXLINE( 881)				goto _hx_goto_41;
            			}
HXLINE( 883)			if (this->_hx___children->__get(i).StaticCast<  ::openfl::display::DisplayObject >()->_hx___hitTestMask(x,y)) {
HXLINE( 885)				return true;
            			}
            		}
            		_hx_goto_41:;
HXLINE( 889)		return false;
            	}


void DisplayObjectContainer_obj::_hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_893___readGraphicsData)
HXLINE( 894)		this->super::_hx___readGraphicsData(graphicsData,recurse);
HXLINE( 896)		if (recurse) {
HXLINE( 898)			int _g = 0;
HXDLIN( 898)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 898)			while((_g < _g1->length)){
HXLINE( 898)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 898)				_g = (_g + 1);
HXLINE( 900)				child->_hx___readGraphicsData(graphicsData,recurse);
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___setStageReference( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_906___setStageReference)
HXLINE( 907)		this->super::_hx___setStageReference(stage);
HXLINE( 909)		if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 911)			int _g = 0;
HXDLIN( 911)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 911)			while((_g < _g1->length)){
HXLINE( 911)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 911)				_g = (_g + 1);
HXLINE( 913)				child->_hx___setStageReference(stage);
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___setWorldTransformInvalid(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_920___setWorldTransformInvalid)
HXDLIN( 920)		if (!(this->_hx___worldTransformInvalid)) {
HXLINE( 922)			this->_hx___worldTransformInvalid = true;
HXLINE( 924)			if (::hx::IsNotNull( this->_hx___children )) {
HXLINE( 926)				int _g = 0;
HXDLIN( 926)				::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 926)				while((_g < _g1->length)){
HXLINE( 926)					 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 926)					_g = (_g + 1);
HXLINE( 928)					child->_hx___setWorldTransformInvalid();
            				}
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___stopAllMovieClips(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_936___stopAllMovieClips)
HXDLIN( 936)		int _g = 0;
HXDLIN( 936)		::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 936)		while((_g < _g1->length)){
HXDLIN( 936)			 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 936)			_g = (_g + 1);
HXLINE( 938)			child->_hx___stopAllMovieClips();
            		}
            	}


void DisplayObjectContainer_obj::_hx___tabTest(::Array< ::Dynamic> stack){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_943___tabTest)
HXLINE( 944)		this->super::_hx___tabTest(stack);
HXLINE( 946)		if (!(this->get_tabChildren())) {
HXLINE( 946)			return;
            		}
HXLINE( 948)		bool interactive = false;
HXLINE( 949)		 ::openfl::display::InteractiveObject interactiveObject = null();
HXLINE( 951)		{
HXLINE( 951)			int _g = 0;
HXDLIN( 951)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 951)			while((_g < _g1->length)){
HXLINE( 951)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 951)				_g = (_g + 1);
HXLINE( 953)				interactive = child->_hx___getInteractive(null());
HXLINE( 955)				if (interactive) {
HXLINE( 957)					interactiveObject = ( ( ::openfl::display::InteractiveObject)(child) );
HXLINE( 958)					interactiveObject->_hx___tabTest(stack);
            				}
            			}
            		}
            	}


void DisplayObjectContainer_obj::_hx___update(bool transformOnly,bool updateChildren){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_964___update)
HXLINE( 965)		this->super::_hx___update(transformOnly,updateChildren);
HXLINE( 967)		if (updateChildren) {
HXLINE( 969)			int _g = 0;
HXDLIN( 969)			::Array< ::Dynamic> _g1 = this->_hx___children;
HXDLIN( 969)			while((_g < _g1->length)){
HXLINE( 969)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 969)				_g = (_g + 1);
HXLINE( 971)				child->_hx___update(transformOnly,true);
            			}
            		}
            	}


int DisplayObjectContainer_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_980_get_numChildren)
HXDLIN( 980)		return this->_hx___children->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

bool DisplayObjectContainer_obj::get_tabChildren(){
            	HX_STACKFRAME(&_hx_pos_d11618aadd936e00_985_get_tabChildren)
HXDLIN( 985)		return this->_hx___tabChildren;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_tabChildren,return )

bool DisplayObjectContainer_obj::set_tabChildren(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_d11618aadd936e00_989_set_tabChildren)
HXLINE( 990)		if ((this->_hx___tabChildren != value)) {
HXLINE( 992)			this->_hx___tabChildren = value;
HXLINE( 994)			this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("tabChildrenChange",44,91,b5,de),true,false));
            		}
HXLINE( 997)		return this->_hx___tabChildren;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_tabChildren,return )


::hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new() {
	::hx::ObjectPtr< DisplayObjectContainer_obj > __this = new DisplayObjectContainer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DisplayObjectContainer_obj *__this = (DisplayObjectContainer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisplayObjectContainer_obj), true, "openfl.display.DisplayObjectContainer"));
	*(void **)__this = DisplayObjectContainer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(_hx___removedChildren,"__removedChildren");
	HX_MARK_MEMBER_NAME(_hx___tabChildren,"__tabChildren");
	 ::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(_hx___removedChildren,"__removedChildren");
	HX_VISIT_MEMBER_NAME(_hx___tabChildren,"__tabChildren");
	 ::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisplayObjectContainer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return ::hx::Val( _hx___cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"__tabTest") ) { return ::hx::Val( _hx___tabTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return ::hx::Val( addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numChildren() ); }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_tabChildren() ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return ::hx::Val( swapChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return ::hx::Val( mouseChildren ); }
		if (HX_FIELD_EQ(inName,"__tabChildren") ) { return ::hx::Val( _hx___tabChildren ); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return ::hx::Val( getChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return ::hx::Val( removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return ::hx::Val( setChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return ::hx::Val( getChildByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return ::hx::Val( removeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return ::hx::Val( swapChildrenAt_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tabChildren") ) { return ::hx::Val( get_tabChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabChildren") ) { return ::hx::Val( set_tabChildren_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return ::hx::Val( _hx___removedChildren ); }
		if (HX_FIELD_EQ(inName,"stopAllMovieClips") ) { return ::hx::Val( stopAllMovieClips_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getFilterBounds") ) { return ::hx::Val( _hx___getFilterBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return ::hx::Val( _hx___getRenderBounds_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__dispatchChildren") ) { return ::hx::Val( _hx___dispatchChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return ::hx::Val( _hx___readGraphicsData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return ::hx::Val( _hx___setStageReference_dyn() ); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return ::hx::Val( _hx___stopAllMovieClips_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return ::hx::Val( getObjectsUnderPoint_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__cleanupRemovedChildren") ) { return ::hx::Val( _hx___cleanupRemovedChildren_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__setWorldTransformInvalid") ) { return ::hx::Val( _hx___setWorldTransformInvalid_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return ::hx::Val( areInaccessibleObjectsUnderPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DisplayObjectContainer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_tabChildren(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__tabChildren") ) { _hx___tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { _hx___removedChildren=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mouseChildren",84,18,6b,ff));
	outFields->push(HX_("numChildren",a5,69,80,5c));
	outFields->push(HX_("tabChildren",b4,0c,86,4b));
	outFields->push(HX_("__removedChildren",df,c5,0e,d3));
	outFields->push(HX_("__tabChildren",94,4d,fe,93));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisplayObjectContainer_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_("mouseChildren",84,18,6b,ff)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(DisplayObjectContainer_obj,_hx___removedChildren),HX_("__removedChildren",df,c5,0e,d3)},
	{::hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,_hx___tabChildren),HX_("__tabChildren",94,4d,fe,93)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayObjectContainer_obj_sMemberFields[] = {
	HX_("mouseChildren",84,18,6b,ff),
	HX_("__removedChildren",df,c5,0e,d3),
	HX_("__tabChildren",94,4d,fe,93),
	HX_("addChild",bb,cf,16,bf),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("areInaccessibleObjectsUnderPoint",3d,22,9b,1e),
	HX_("contains",1f,5a,7b,2c),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("getChildByName",88,b9,73,a3),
	HX_("getChildIndex",0c,68,02,b9),
	HX_("getObjectsUnderPoint",96,10,d5,80),
	HX_("removeChild",b8,86,ed,43),
	HX_("removeChildAt",cb,dd,66,3f),
	HX_("removeChildren",a3,55,c0,3a),
	HX_("resolve",ec,12,60,67),
	HX_("setChildIndex",18,4a,08,fe),
	HX_("stopAllMovieClips",f2,60,f8,a0),
	HX_("swapChildren",f2,4a,53,e0),
	HX_("swapChildrenAt",85,a4,f1,13),
	HX_("__cleanup",04,5d,90,2c),
	HX_("__cleanupRemovedChildren",5b,84,61,c1),
	HX_("__dispatchChildren",39,81,f4,f4),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__getFilterBounds",e3,3a,ba,18),
	HX_("__getRenderBounds",01,11,b8,7b),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("__readGraphicsData",2b,10,91,f2),
	HX_("__setStageReference",4f,e5,e5,f4),
	HX_("__setWorldTransformInvalid",7b,c9,b9,d4),
	HX_("__stopAllMovieClips",d2,89,e8,53),
	HX_("__tabTest",27,ee,bd,c6),
	HX_("__update",29,f1,34,2f),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("get_tabChildren",4b,c4,67,0c),
	HX_("set_tabChildren",57,41,33,08),
	::String(null()) };

::hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	DisplayObjectContainer_obj _hx_dummy;
	DisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DisplayObjectContainer",4a,52,ef,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisplayObjectContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
