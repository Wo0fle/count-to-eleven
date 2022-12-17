#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSource
#include <lime/_internal/backend/native/NativeAudioSource.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif
#ifndef INCLUDED_lime_media_openal_AL
#include <lime/media/openal/AL.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#include <lime/media/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_46_new,"lime._internal.backend.native.NativeAudioSource","new",0xc4558c9a,"lime._internal.backend.native.NativeAudioSource.new","lime/_internal/backend/native/NativeAudioSource.hx",46,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_54_dispose,"lime._internal.backend.native.NativeAudioSource","dispose",0xce19e1d9,"lime._internal.backend.native.NativeAudioSource.dispose","lime/_internal/backend/native/NativeAudioSource.hx",54,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_72_init,"lime._internal.backend.native.NativeAudioSource","init",0x033e3196,"lime._internal.backend.native.NativeAudioSource.init","lime/_internal/backend/native/NativeAudioSource.hx",72,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_143_play,"lime._internal.backend.native.NativeAudioSource","play",0x07dd247a,"lime._internal.backend.native.NativeAudioSource.play","lime/_internal/backend/native/NativeAudioSource.hx",143,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_197_pause,"lime._internal.backend.native.NativeAudioSource","pause",0xd26c95b0,"lime._internal.backend.native.NativeAudioSource.pause","lime/_internal/backend/native/NativeAudioSource.hx",197,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_215_readVorbisFileBuffer,"lime._internal.backend.native.NativeAudioSource","readVorbisFileBuffer",0x5a6427cb,"lime._internal.backend.native.NativeAudioSource.readVorbisFileBuffer","lime/_internal/backend/native/NativeAudioSource.hx",215,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_254_refillBuffers,"lime._internal.backend.native.NativeAudioSource","refillBuffers",0x8dd34f17,"lime._internal.backend.native.NativeAudioSource.refillBuffers","lime/_internal/backend/native/NativeAudioSource.hx",254,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_319_stop,"lime._internal.backend.native.NativeAudioSource","stop",0x09dee688,"lime._internal.backend.native.NativeAudioSource.stop","lime/_internal/backend/native/NativeAudioSource.hx",319,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_343_streamTimer_onRun,"lime._internal.backend.native.NativeAudioSource","streamTimer_onRun",0xd26ae54c,"lime._internal.backend.native.NativeAudioSource.streamTimer_onRun","lime/_internal/backend/native/NativeAudioSource.hx",343,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_347_timer_onRun,"lime._internal.backend.native.NativeAudioSource","timer_onRun",0x98b8aa6c,"lime._internal.backend.native.NativeAudioSource.timer_onRun","lime/_internal/backend/native/NativeAudioSource.hx",347,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_367_getCurrentTime,"lime._internal.backend.native.NativeAudioSource","getCurrentTime",0xb0ab91f6,"lime._internal.backend.native.NativeAudioSource.getCurrentTime","lime/_internal/backend/native/NativeAudioSource.hx",367,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_398_setCurrentTime,"lime._internal.backend.native.NativeAudioSource","setCurrentTime",0xd0cb7a6a,"lime._internal.backend.native.NativeAudioSource.setCurrentTime","lime/_internal/backend/native/NativeAudioSource.hx",398,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_463_getGain,"lime._internal.backend.native.NativeAudioSource","getGain",0x29af016f,"lime._internal.backend.native.NativeAudioSource.getGain","lime/_internal/backend/native/NativeAudioSource.hx",463,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_474_setGain,"lime._internal.backend.native.NativeAudioSource","setGain",0x1cb0927b,"lime._internal.backend.native.NativeAudioSource.setGain","lime/_internal/backend/native/NativeAudioSource.hx",474,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_484_getLength,"lime._internal.backend.native.NativeAudioSource","getLength",0x8531c1d6,"lime._internal.backend.native.NativeAudioSource.getLength","lime/_internal/backend/native/NativeAudioSource.hx",484,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_494_setLength,"lime._internal.backend.native.NativeAudioSource","setLength",0x6882ade2,"lime._internal.backend.native.NativeAudioSource.setLength","lime/_internal/backend/native/NativeAudioSource.hx",494,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_516_getLoops,"lime._internal.backend.native.NativeAudioSource","getLoops",0x39b8b29f,"lime._internal.backend.native.NativeAudioSource.getLoops","lime/_internal/backend/native/NativeAudioSource.hx",516,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_521_setLoops,"lime._internal.backend.native.NativeAudioSource","setLoops",0xe8160c13,"lime._internal.backend.native.NativeAudioSource.setLoops","lime/_internal/backend/native/NativeAudioSource.hx",521,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_526_getPitch,"lime._internal.backend.native.NativeAudioSource","getPitch",0x835f7cd0,"lime._internal.backend.native.NativeAudioSource.getPitch","lime/_internal/backend/native/NativeAudioSource.hx",526,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_537_setPitch,"lime._internal.backend.native.NativeAudioSource","setPitch",0x31bcd644,"lime._internal.backend.native.NativeAudioSource.setPitch","lime/_internal/backend/native/NativeAudioSource.hx",537,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_563_getPosition,"lime._internal.backend.native.NativeAudioSource","getPosition",0x31bde999,"lime._internal.backend.native.NativeAudioSource.getPosition","lime/_internal/backend/native/NativeAudioSource.hx",563,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_578_setPosition,"lime._internal.backend.native.NativeAudioSource","setPosition",0x3c2af0a5,"lime._internal.backend.native.NativeAudioSource.setPosition","lime/_internal/backend/native/NativeAudioSource.hx",578,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_21_boot,"lime._internal.backend.native.NativeAudioSource","boot",0xfe9e7ab8,"lime._internal.backend.native.NativeAudioSource.boot","lime/_internal/backend/native/NativeAudioSource.hx",21,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_25_boot,"lime._internal.backend.native.NativeAudioSource","boot",0xfe9e7ab8,"lime._internal.backend.native.NativeAudioSource.boot","lime/_internal/backend/native/NativeAudioSource.hx",25,0xce8e0834)
HX_LOCAL_STACK_FRAME(_hx_pos_a101d5e86f44bfa1_27_boot,"lime._internal.backend.native.NativeAudioSource","boot",0xfe9e7ab8,"lime._internal.backend.native.NativeAudioSource.boot","lime/_internal/backend/native/NativeAudioSource.hx",27,0xce8e0834)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void NativeAudioSource_obj::__construct( ::lime::media::AudioSource parent){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_46_new)
HXLINE(  47)		this->parent = parent;
HXLINE(  49)		this->position =  ::lime::math::Vector4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}

Dynamic NativeAudioSource_obj::__CreateEmpty() { return new NativeAudioSource_obj; }

void *NativeAudioSource_obj::_hx_vtable = 0;

Dynamic NativeAudioSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeAudioSource_obj > _hx_result = new NativeAudioSource_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NativeAudioSource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c353d12;
}

void NativeAudioSource_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_54_dispose)
HXDLIN(  54)		if (::hx::IsNotNull( this->handle )) {
HXLINE(  56)			this->stop();
HXLINE(  57)			::lime::media::openal::AL_obj::sourcei(this->handle,4105,null());
HXLINE(  58)			::lime::media::openal::AL_obj::deleteSource(this->handle);
HXLINE(  59)			if (::hx::IsNotNull( this->buffers )) {
HXLINE(  61)				{
HXLINE(  61)					int _g = 0;
HXDLIN(  61)					::cpp::VirtualArray _g1 = this->buffers;
HXDLIN(  61)					while((_g < _g1->get_length())){
HXLINE(  61)						 ::Dynamic buffer = _g1->__get(_g);
HXDLIN(  61)						_g = (_g + 1);
HXLINE(  63)						::lime::media::openal::AL_obj::deleteBuffer(buffer);
            					}
            				}
HXLINE(  65)				this->buffers = null();
            			}
HXLINE(  67)			this->handle = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,dispose,(void))

void NativeAudioSource_obj::init(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_72_init)
HXLINE(  73)		this->dataLength = 0;
HXLINE(  74)		this->format = 0;
HXLINE(  76)		if ((this->parent->buffer->channels == 1)) {
HXLINE(  78)			if ((this->parent->buffer->bitsPerSample == 8)) {
HXLINE(  80)				this->format = 4352;
            			}
            			else {
HXLINE(  82)				if ((this->parent->buffer->bitsPerSample == 16)) {
HXLINE(  84)					this->format = 4353;
            				}
            			}
            		}
            		else {
HXLINE(  87)			if ((this->parent->buffer->channels == 2)) {
HXLINE(  89)				if ((this->parent->buffer->bitsPerSample == 8)) {
HXLINE(  91)					this->format = 4354;
            				}
            				else {
HXLINE(  93)					if ((this->parent->buffer->bitsPerSample == 16)) {
HXLINE(  95)						this->format = 4355;
            					}
            				}
            			}
            		}
HXLINE(  99)		if (::hx::IsNotNull( this->parent->buffer->_hx___srcVorbisFile )) {
HXLINE( 101)			this->stream = true;
HXLINE( 103)			 ::lime::media::vorbis::VorbisFile vorbisFile = this->parent->buffer->_hx___srcVorbisFile;
HXLINE( 104)			 cpp::Int64Struct x = vorbisFile->pcmTotal(null());
HXDLIN( 104)			int _hx_tmp = _hx_int64_high(x);
HXDLIN( 104)			if ((_hx_tmp != (_hx_int64_low(x) >> 31))) {
HXLINE( 104)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Overflow",62,9f,ed,1a)));
            			}
HXDLIN( 104)			int _hx_tmp1 = _hx_int64_low(x);
HXDLIN( 104)			this->dataLength = ::Std_obj::_hx_int((( (Float)((_hx_tmp1 * this->parent->buffer->channels)) ) * (( (Float)(this->parent->buffer->bitsPerSample) ) / ( (Float)(8) ))));
HXLINE( 106)			this->buffers = ::cpp::VirtualArray_obj::__new();
HXLINE( 107)			this->bufferTimeBlocks = ::Array_obj< Float >::__new();
HXLINE( 109)			{
HXLINE( 109)				int _g = 0;
HXDLIN( 109)				int _g1 = ::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_NUM_BUFFERS;
HXDLIN( 109)				while((_g < _g1)){
HXLINE( 109)					_g = (_g + 1);
HXDLIN( 109)					int i = (_g - 1);
HXLINE( 111)					::cpp::VirtualArray _hx_tmp = this->buffers;
HXDLIN( 111)					_hx_tmp->push(::lime::media::openal::AL_obj::createBuffer());
HXLINE( 112)					this->bufferTimeBlocks->push(0);
            				}
            			}
HXLINE( 115)			this->handle = ::lime::media::openal::AL_obj::createSource();
            		}
            		else {
HXLINE( 119)			if (::hx::IsNull( this->parent->buffer->_hx___srcBuffer )) {
HXLINE( 121)				this->parent->buffer->_hx___srcBuffer = ::lime::media::openal::AL_obj::createBuffer();
HXLINE( 123)				if (::hx::IsNotNull( this->parent->buffer->_hx___srcBuffer )) {
HXLINE( 125)					::lime::media::openal::AL_obj::bufferData(this->parent->buffer->_hx___srcBuffer,this->format,this->parent->buffer->data,this->parent->buffer->data->length,this->parent->buffer->sampleRate);
            				}
            			}
HXLINE( 129)			this->dataLength = this->parent->buffer->data->length;
HXLINE( 131)			this->handle = ::lime::media::openal::AL_obj::createSource();
HXLINE( 133)			if (::hx::IsNotNull( this->handle )) {
HXLINE( 135)				::lime::media::openal::AL_obj::sourcei(this->handle,4105,this->parent->buffer->_hx___srcBuffer);
            			}
            		}
HXLINE( 139)		this->samples = ::Std_obj::_hx_int((( (Float)((this->dataLength * 8)) ) / ( (Float)((this->parent->buffer->channels * this->parent->buffer->bitsPerSample)) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,init,(void))

void NativeAudioSource_obj::play(){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_143_play)
HXLINE( 172)		bool _hx_tmp;
HXDLIN( 172)		if (!(this->playing)) {
HXLINE( 172)			_hx_tmp = ::hx::IsNull( this->handle );
            		}
            		else {
HXLINE( 172)			_hx_tmp = true;
            		}
HXDLIN( 172)		if (_hx_tmp) {
HXLINE( 174)			return;
            		}
HXLINE( 177)		this->playing = true;
HXLINE( 179)		if (this->stream) {
HXLINE( 181)			this->setCurrentTime(this->getCurrentTime());
HXLINE( 183)			this->streamTimer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_TIMER_FREQUENCY) ));
HXLINE( 184)			this->streamTimer->run = this->streamTimer_onRun_dyn();
            		}
            		else {
HXLINE( 188)			int time;
HXDLIN( 188)			if (this->completed) {
HXLINE( 188)				time = 0;
            			}
            			else {
HXLINE( 188)				time = this->getCurrentTime();
            			}
HXLINE( 190)			::lime::media::openal::AL_obj::sourcePlay(this->handle);
HXLINE( 192)			this->setCurrentTime(time);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,play,(void))

void NativeAudioSource_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_197_pause)
HXLINE( 198)		this->playing = false;
HXLINE( 200)		if (::hx::IsNull( this->handle )) {
HXLINE( 200)			return;
            		}
HXLINE( 201)		::lime::media::openal::AL_obj::sourcePause(this->handle);
HXLINE( 203)		if (::hx::IsNotNull( this->streamTimer )) {
HXLINE( 205)			this->streamTimer->stop();
            		}
HXLINE( 208)		if (::hx::IsNotNull( this->timer )) {
HXLINE( 210)			this->timer->stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,pause,(void))

 ::lime::utils::ArrayBufferView NativeAudioSource_obj::readVorbisFileBuffer( ::lime::media::vorbis::VorbisFile vorbisFile,int length){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_215_readVorbisFileBuffer)
HXLINE( 217)		 ::haxe::io::Bytes buffer = null();
HXDLIN( 217)		::cpp::VirtualArray array = null();
HXDLIN( 217)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 217)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 217)		 ::Dynamic len = null();
HXDLIN( 217)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 217)		if (::hx::IsNotNull( length )) {
HXLINE( 217)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,length,4);
            		}
            		else {
HXLINE( 217)			if (::hx::IsNotNull( array )) {
HXLINE( 217)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 217)				_this->byteOffset = 0;
HXDLIN( 217)				_this->length = array->get_length();
HXDLIN( 217)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 217)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 217)				_this->buffer = this2;
HXDLIN( 217)				_this->copyFromArray(array,null());
HXDLIN( 217)				this1 = _this;
            			}
            			else {
HXLINE( 217)				if (::hx::IsNotNull( vector )) {
HXLINE( 217)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 217)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 217)					_this->byteOffset = 0;
HXDLIN( 217)					_this->length = array->get_length();
HXDLIN( 217)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 217)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 217)					_this->buffer = this2;
HXDLIN( 217)					_this->copyFromArray(array,null());
HXDLIN( 217)					this1 = _this;
            				}
            				else {
HXLINE( 217)					if (::hx::IsNotNull( view )) {
HXLINE( 217)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 217)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 217)						int srcLength = view->length;
HXDLIN( 217)						int srcByteOffset = view->byteOffset;
HXDLIN( 217)						int srcElementSize = view->bytesPerElement;
HXDLIN( 217)						int elementSize = _this->bytesPerElement;
HXDLIN( 217)						if ((view->type == _this->type)) {
HXLINE( 217)							int srcLength = srcData->length;
HXDLIN( 217)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 217)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 217)							_this->buffer = this1;
HXDLIN( 217)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 217)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 217)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 217)						_this->byteOffset = 0;
HXDLIN( 217)						_this->length = srcLength;
HXDLIN( 217)						this1 = _this;
            					}
            					else {
HXLINE( 217)						if (::hx::IsNotNull( buffer )) {
HXLINE( 217)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 217)							int in_byteOffset = 0;
HXDLIN( 217)							if ((in_byteOffset < 0)) {
HXLINE( 217)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 217)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 217)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 217)							int bufferByteLength = buffer->length;
HXDLIN( 217)							int elementSize = _this->bytesPerElement;
HXDLIN( 217)							int newByteLength = bufferByteLength;
HXDLIN( 217)							if (::hx::IsNull( len )) {
HXLINE( 217)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 217)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 217)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 217)								if ((newByteLength < 0)) {
HXLINE( 217)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 217)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 217)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 217)								if ((newRange > bufferByteLength)) {
HXLINE( 217)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 217)							_this->buffer = buffer;
HXDLIN( 217)							_this->byteOffset = in_byteOffset;
HXDLIN( 217)							_this->byteLength = newByteLength;
HXDLIN( 217)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 217)							this1 = _this;
            						}
            						else {
HXLINE( 217)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 217)		 ::lime::utils::ArrayBufferView buffer1 = this1;
HXLINE( 218)		int read = 0;
HXDLIN( 218)		int total = 0;
HXDLIN( 218)		int readMax;
HXLINE( 220)		{
HXLINE( 220)			int _g = 0;
HXDLIN( 220)			int _g1 = (::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_NUM_BUFFERS - 1);
HXDLIN( 220)			while((_g < _g1)){
HXLINE( 220)				_g = (_g + 1);
HXDLIN( 220)				int i = (_g - 1);
HXLINE( 222)				this->bufferTimeBlocks[i] = this->bufferTimeBlocks->__get((i + 1));
            			}
            		}
HXLINE( 224)		this->bufferTimeBlocks[(::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_NUM_BUFFERS - 1)] = vorbisFile->timeTell();
HXLINE( 226)		while((total < length)){
HXLINE( 228)			readMax = 4096;
HXLINE( 230)			if ((readMax > (length - total))) {
HXLINE( 232)				readMax = (length - total);
            			}
HXLINE( 235)			read = vorbisFile->read(buffer1->buffer,total,readMax,null(),null(),null());
HXLINE( 237)			if ((read > 0)) {
HXLINE( 239)				total = (total + read);
            			}
            			else {
HXLINE( 243)				goto _hx_goto_8;
            			}
            		}
            		_hx_goto_8:;
HXLINE( 247)		return buffer1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeAudioSource_obj,readVorbisFileBuffer,return )

void NativeAudioSource_obj::refillBuffers(::cpp::VirtualArray buffers){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_254_refillBuffers)
HXLINE( 256)		 ::lime::media::vorbis::VorbisFile vorbisFile = null();
HXLINE( 257)		int position = 0;
HXLINE( 259)		if (::hx::IsNull( buffers )) {
HXLINE( 261)			int buffersProcessed = ( (int)(::lime::media::openal::AL_obj::getSourcei(this->handle,4118)) );
HXLINE( 263)			if ((buffersProcessed > 0)) {
HXLINE( 265)				vorbisFile = this->parent->buffer->_hx___srcVorbisFile;
HXLINE( 266)				 cpp::Int64Struct x = vorbisFile->pcmTell();
HXDLIN( 266)				int position1 = _hx_int64_high(x);
HXDLIN( 266)				if ((position1 != (_hx_int64_low(x) >> 31))) {
HXLINE( 266)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Overflow",62,9f,ed,1a)));
            				}
HXDLIN( 266)				position = _hx_int64_low(x);
HXLINE( 268)				if ((position < this->dataLength)) {
HXLINE( 270)					buffers = ::lime::media::openal::AL_obj::sourceUnqueueBuffers(this->handle,buffersProcessed);
            				}
            			}
            		}
HXLINE( 275)		if (::hx::IsNotNull( buffers )) {
HXLINE( 277)			if (::hx::IsNull( vorbisFile )) {
HXLINE( 279)				vorbisFile = this->parent->buffer->_hx___srcVorbisFile;
HXLINE( 280)				 cpp::Int64Struct x = vorbisFile->pcmTell();
HXDLIN( 280)				int position1 = _hx_int64_high(x);
HXDLIN( 280)				if ((position1 != (_hx_int64_low(x) >> 31))) {
HXLINE( 280)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Overflow",62,9f,ed,1a)));
            				}
HXDLIN( 280)				position = _hx_int64_low(x);
            			}
HXLINE( 283)			int numBuffers = 0;
HXLINE( 284)			 ::lime::utils::ArrayBufferView data;
HXLINE( 286)			{
HXLINE( 286)				int _g = 0;
HXDLIN( 286)				while((_g < buffers->get_length())){
HXLINE( 286)					 ::Dynamic buffer = buffers->__get(_g);
HXDLIN( 286)					_g = (_g + 1);
HXLINE( 288)					if (((this->dataLength - position) >= ::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_BUFFER_SIZE)) {
HXLINE( 290)						data = this->readVorbisFileBuffer(vorbisFile,::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_BUFFER_SIZE);
HXLINE( 291)						::lime::media::openal::AL_obj::bufferData(buffer,this->format,data,data->length,this->parent->buffer->sampleRate);
HXLINE( 292)						position = (position + ::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_BUFFER_SIZE);
HXLINE( 293)						numBuffers = (numBuffers + 1);
            					}
            					else {
HXLINE( 295)						if ((position < this->dataLength)) {
HXLINE( 297)							data = this->readVorbisFileBuffer(vorbisFile,(this->dataLength - position));
HXLINE( 298)							::lime::media::openal::AL_obj::bufferData(buffer,this->format,data,data->length,this->parent->buffer->sampleRate);
HXLINE( 299)							numBuffers = (numBuffers + 1);
HXLINE( 300)							goto _hx_goto_10;
            						}
            					}
            				}
            				_hx_goto_10:;
            			}
HXLINE( 304)			::lime::media::openal::AL_obj::sourceQueueBuffers(this->handle,numBuffers,buffers);
HXLINE( 310)			bool _hx_tmp;
HXDLIN( 310)			bool _hx_tmp1;
HXDLIN( 310)			if (this->playing) {
HXLINE( 310)				_hx_tmp1 = ::hx::IsNotNull( this->handle );
            			}
            			else {
HXLINE( 310)				_hx_tmp1 = false;
            			}
HXDLIN( 310)			if (_hx_tmp1) {
HXLINE( 310)				_hx_tmp = ::hx::IsEq( ::lime::media::openal::AL_obj::getSourcei(this->handle,4112),4116 );
            			}
            			else {
HXLINE( 310)				_hx_tmp = false;
            			}
HXDLIN( 310)			if (_hx_tmp) {
HXLINE( 312)				::lime::media::openal::AL_obj::sourcePlay(this->handle);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,refillBuffers,(void))

void NativeAudioSource_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_319_stop)
HXLINE( 320)		bool _hx_tmp;
HXDLIN( 320)		bool _hx_tmp1;
HXDLIN( 320)		if (this->playing) {
HXLINE( 320)			_hx_tmp1 = ::hx::IsNotNull( this->handle );
            		}
            		else {
HXLINE( 320)			_hx_tmp1 = false;
            		}
HXDLIN( 320)		if (_hx_tmp1) {
HXLINE( 320)			_hx_tmp = ::hx::IsEq( ::lime::media::openal::AL_obj::getSourcei(this->handle,4112),4114 );
            		}
            		else {
HXLINE( 320)			_hx_tmp = false;
            		}
HXDLIN( 320)		if (_hx_tmp) {
HXLINE( 322)			::lime::media::openal::AL_obj::sourceStop(this->handle);
            		}
HXLINE( 325)		this->playing = false;
HXLINE( 327)		if (::hx::IsNotNull( this->streamTimer )) {
HXLINE( 329)			this->streamTimer->stop();
            		}
HXLINE( 332)		if (::hx::IsNotNull( this->timer )) {
HXLINE( 334)			this->timer->stop();
            		}
HXLINE( 337)		this->setCurrentTime(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,stop,(void))

void NativeAudioSource_obj::streamTimer_onRun(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_343_streamTimer_onRun)
HXDLIN( 343)		this->refillBuffers(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,streamTimer_onRun,(void))

void NativeAudioSource_obj::timer_onRun(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_347_timer_onRun)
HXLINE( 348)		if ((this->loops > 0)) {
HXLINE( 350)			this->playing = false;
HXLINE( 351)			this->loops--;
HXLINE( 352)			this->setCurrentTime(0);
HXLINE( 353)			this->play();
HXLINE( 354)			return;
            		}
            		else {
HXLINE( 358)			this->stop();
            		}
HXLINE( 361)		this->completed = true;
HXLINE( 362)		this->parent->onComplete->dispatch();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,timer_onRun,(void))

int NativeAudioSource_obj::getCurrentTime(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_367_getCurrentTime)
HXLINE( 368)		if (this->completed) {
HXLINE( 370)			return this->getLength();
            		}
            		else {
HXLINE( 372)			if (::hx::IsNotNull( this->handle )) {
HXLINE( 374)				if (this->stream) {
HXLINE( 376)					int time = ::Std_obj::_hx_int((this->bufferTimeBlocks->__get(0) * ( (Float)(1000) )));
HXDLIN( 376)					int time1 = (time + ::Std_obj::_hx_int((::lime::media::openal::AL_obj::getSourcef(this->handle,4132) * ( (Float)(1000) ))));
HXDLIN( 376)					int time2 = (time1 - this->parent->offset);
HXLINE( 377)					if ((time2 < 0)) {
HXLINE( 377)						return 0;
            					}
HXLINE( 378)					return time2;
            				}
            				else {
HXLINE( 382)					int offset = ( (int)(::lime::media::openal::AL_obj::getSourcei(this->handle,4134)) );
HXLINE( 383)					Float ratio = (( (Float)(offset) ) / ( (Float)(this->dataLength) ));
HXLINE( 384)					Float totalSeconds = (( (Float)(this->samples) ) / ( (Float)(this->parent->buffer->sampleRate) ));
HXLINE( 386)					int time = ::Std_obj::_hx_int(((totalSeconds * ratio) * ( (Float)(1000) )));
HXDLIN( 386)					int time1 = (time - this->parent->offset);
HXLINE( 389)					if ((time1 < 0)) {
HXLINE( 389)						return 0;
            					}
HXLINE( 390)					return time1;
            				}
            			}
            		}
HXLINE( 394)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getCurrentTime,return )

int NativeAudioSource_obj::setCurrentTime(int value){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_398_setCurrentTime)
HXLINE( 405)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 407)			if (this->stream) {
HXLINE( 409)				::lime::media::openal::AL_obj::sourceStop(this->handle);
HXLINE( 411)				this->parent->buffer->_hx___srcVorbisFile->timeSeek((( (Float)((value + this->parent->offset)) ) / ( (Float)(1000) )));
HXLINE( 412)				::lime::media::openal::AL_obj::sourceUnqueueBuffers(this->handle,::lime::_internal::backend::native::NativeAudioSource_obj::STREAM_NUM_BUFFERS);
HXLINE( 413)				this->refillBuffers(this->buffers);
HXLINE( 415)				if (this->playing) {
HXLINE( 415)					::lime::media::openal::AL_obj::sourcePlay(this->handle);
            				}
            			}
            			else {
HXLINE( 417)				if (::hx::IsNotNull( this->parent->buffer )) {
HXLINE( 419)					::lime::media::openal::AL_obj::sourceRewind(this->handle);
HXLINE( 420)					if (this->playing) {
HXLINE( 420)						::lime::media::openal::AL_obj::sourcePlay(this->handle);
            					}
HXLINE( 423)					Float secondOffset = (( (Float)((value + this->parent->offset)) ) / ( (Float)(1000) ));
HXLINE( 424)					Float totalSeconds = (( (Float)(this->samples) ) / ( (Float)(this->parent->buffer->sampleRate) ));
HXLINE( 426)					if ((secondOffset < 0)) {
HXLINE( 426)						secondOffset = ( (Float)(0) );
            					}
HXLINE( 427)					if ((secondOffset > totalSeconds)) {
HXLINE( 427)						secondOffset = totalSeconds;
            					}
HXLINE( 429)					Float ratio = (secondOffset / totalSeconds);
HXLINE( 430)					int totalOffset = ::Std_obj::_hx_int((( (Float)(this->dataLength) ) * ratio));
HXLINE( 432)					::lime::media::openal::AL_obj::sourcei(this->handle,4134,totalOffset);
            				}
            			}
            		}
HXLINE( 436)		if (this->playing) {
HXLINE( 438)			if (::hx::IsNotNull( this->timer )) {
HXLINE( 440)				this->timer->stop();
            			}
HXLINE( 443)			int timeRemaining = (this->getLength() - value);
HXDLIN( 443)			int timeRemaining1 = ::Std_obj::_hx_int((( (Float)(timeRemaining) ) / this->getPitch()));
HXLINE( 445)			if ((timeRemaining1 > 0)) {
HXLINE( 447)				this->completed = false;
HXLINE( 448)				this->timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(timeRemaining1) ));
HXLINE( 449)				this->timer->run = this->timer_onRun_dyn();
            			}
            			else {
HXLINE( 453)				this->playing = false;
HXLINE( 454)				this->completed = true;
            			}
            		}
HXLINE( 458)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setCurrentTime,return )

Float NativeAudioSource_obj::getGain(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_463_getGain)
HXDLIN( 463)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 465)			return ::lime::media::openal::AL_obj::getSourcef(this->handle,4106);
            		}
            		else {
HXLINE( 469)			return ( (Float)(1) );
            		}
HXLINE( 463)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getGain,return )

Float NativeAudioSource_obj::setGain(Float value){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_474_setGain)
HXLINE( 475)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 477)			::lime::media::openal::AL_obj::sourcef(this->handle,4106,value);
            		}
HXLINE( 480)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setGain,return )

int NativeAudioSource_obj::getLength(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_484_getLength)
HXLINE( 485)		if (::hx::IsNotNull( this->length )) {
HXLINE( 487)			return ( (int)(this->length) );
            		}
HXLINE( 490)		int _hx_tmp = ::Std_obj::_hx_int(((( (Float)(this->samples) ) / ( (Float)(this->parent->buffer->sampleRate) )) * ( (Float)(1000) )));
HXDLIN( 490)		return (_hx_tmp - this->parent->offset);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getLength,return )

int NativeAudioSource_obj::setLength(int value){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_494_setLength)
HXLINE( 495)		bool _hx_tmp;
HXDLIN( 495)		if (this->playing) {
HXLINE( 495)			_hx_tmp = ::hx::IsNotEq( this->length,value );
            		}
            		else {
HXLINE( 495)			_hx_tmp = false;
            		}
HXDLIN( 495)		if (_hx_tmp) {
HXLINE( 497)			if (::hx::IsNotNull( this->timer )) {
HXLINE( 499)				this->timer->stop();
            			}
HXLINE( 502)			int timeRemaining = (value - this->getCurrentTime());
HXDLIN( 502)			int timeRemaining1 = ::Std_obj::_hx_int((( (Float)(timeRemaining) ) / this->getPitch()));
HXLINE( 504)			if ((timeRemaining1 > 0)) {
HXLINE( 506)				this->timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(timeRemaining1) ));
HXLINE( 507)				this->timer->run = this->timer_onRun_dyn();
            			}
            		}
HXLINE( 511)		return ( (int)((this->length = value)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setLength,return )

int NativeAudioSource_obj::getLoops(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_516_getLoops)
HXDLIN( 516)		return this->loops;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getLoops,return )

int NativeAudioSource_obj::setLoops(int value){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_521_setLoops)
HXDLIN( 521)		return (this->loops = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setLoops,return )

Float NativeAudioSource_obj::getPitch(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_526_getPitch)
HXDLIN( 526)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 528)			return ::lime::media::openal::AL_obj::getSourcef(this->handle,4099);
            		}
            		else {
HXLINE( 532)			return ( (Float)(1) );
            		}
HXLINE( 526)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getPitch,return )

Float NativeAudioSource_obj::setPitch(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_537_setPitch)
HXLINE( 538)		bool _hx_tmp;
HXDLIN( 538)		if (this->playing) {
HXLINE( 538)			_hx_tmp = (value != this->getPitch());
            		}
            		else {
HXLINE( 538)			_hx_tmp = false;
            		}
HXDLIN( 538)		if (_hx_tmp) {
HXLINE( 540)			if (::hx::IsNotNull( this->timer )) {
HXLINE( 542)				this->timer->stop();
            			}
HXLINE( 545)			int timeRemaining = this->getLength();
HXDLIN( 545)			int timeRemaining1 = ::Std_obj::_hx_int((( (Float)((timeRemaining - this->getCurrentTime())) ) / value));
HXLINE( 547)			if ((timeRemaining1 > 0)) {
HXLINE( 549)				this->timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(timeRemaining1) ));
HXLINE( 550)				this->timer->run = this->timer_onRun_dyn();
            			}
            		}
HXLINE( 554)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 556)			::lime::media::openal::AL_obj::sourcef(this->handle,4099,value);
            		}
HXLINE( 559)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setPitch,return )

 ::lime::math::Vector4 NativeAudioSource_obj::getPosition(){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_563_getPosition)
HXLINE( 564)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 567)			::Array< Float > value = ::lime::media::openal::AL_obj::getSource3f(this->handle,4100);
HXLINE( 568)			this->position->x = value->__get(0);
HXLINE( 569)			this->position->y = value->__get(1);
HXLINE( 570)			this->position->z = value->__get(2);
            		}
HXLINE( 574)		return this->position;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getPosition,return )

 ::lime::math::Vector4 NativeAudioSource_obj::setPosition( ::lime::math::Vector4 value){
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_578_setPosition)
HXLINE( 579)		this->position->x = value->x;
HXLINE( 580)		this->position->y = value->y;
HXLINE( 581)		this->position->z = value->z;
HXLINE( 582)		this->position->w = value->w;
HXLINE( 584)		if (::hx::IsNotNull( this->handle )) {
HXLINE( 586)			::lime::media::openal::AL_obj::distanceModel(0);
HXLINE( 587)			::lime::media::openal::AL_obj::source3f(this->handle,4100,this->position->x,this->position->y,this->position->z);
            		}
HXLINE( 590)		return this->position;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setPosition,return )

int NativeAudioSource_obj::STREAM_BUFFER_SIZE;

int NativeAudioSource_obj::STREAM_NUM_BUFFERS;

int NativeAudioSource_obj::STREAM_TIMER_FREQUENCY;


::hx::ObjectPtr< NativeAudioSource_obj > NativeAudioSource_obj::__new( ::lime::media::AudioSource parent) {
	::hx::ObjectPtr< NativeAudioSource_obj > __this = new NativeAudioSource_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< NativeAudioSource_obj > NativeAudioSource_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::media::AudioSource parent) {
	NativeAudioSource_obj *__this = (NativeAudioSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeAudioSource_obj), true, "lime._internal.backend.native.NativeAudioSource"));
	*(void **)__this = NativeAudioSource_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

NativeAudioSource_obj::NativeAudioSource_obj()
{
}

void NativeAudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeAudioSource);
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(bufferTimeBlocks,"bufferTimeBlocks");
	HX_MARK_MEMBER_NAME(completed,"completed");
	HX_MARK_MEMBER_NAME(dataLength,"dataLength");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(samples,"samples");
	HX_MARK_MEMBER_NAME(stream,"stream");
	HX_MARK_MEMBER_NAME(streamTimer,"streamTimer");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void NativeAudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(bufferTimeBlocks,"bufferTimeBlocks");
	HX_VISIT_MEMBER_NAME(completed,"completed");
	HX_VISIT_MEMBER_NAME(dataLength,"dataLength");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(samples,"samples");
	HX_VISIT_MEMBER_NAME(stream,"stream");
	HX_VISIT_MEMBER_NAME(streamTimer,"streamTimer");
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

::hx::Val NativeAudioSource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return ::hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return ::hx::Val( loops ); }
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return ::hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"stream") ) { return ::hx::Val( stream ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { return ::hx::Val( buffers ); }
		if (HX_FIELD_EQ(inName,"playing") ) { return ::hx::Val( playing ); }
		if (HX_FIELD_EQ(inName,"samples") ) { return ::hx::Val( samples ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGain") ) { return ::hx::Val( getGain_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGain") ) { return ::hx::Val( setGain_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		if (HX_FIELD_EQ(inName,"getLoops") ) { return ::hx::Val( getLoops_dyn() ); }
		if (HX_FIELD_EQ(inName,"setLoops") ) { return ::hx::Val( setLoops_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPitch") ) { return ::hx::Val( getPitch_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPitch") ) { return ::hx::Val( setPitch_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return ::hx::Val( completed ); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return ::hx::Val( getLength_dyn() ); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return ::hx::Val( setLength_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataLength") ) { return ::hx::Val( dataLength ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"streamTimer") ) { return ::hx::Val( streamTimer ); }
		if (HX_FIELD_EQ(inName,"timer_onRun") ) { return ::hx::Val( timer_onRun_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return ::hx::Val( getPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"refillBuffers") ) { return ::hx::Val( refillBuffers_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurrentTime") ) { return ::hx::Val( getCurrentTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"setCurrentTime") ) { return ::hx::Val( setCurrentTime_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bufferTimeBlocks") ) { return ::hx::Val( bufferTimeBlocks ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"streamTimer_onRun") ) { return ::hx::Val( streamTimer_onRun_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"readVorbisFileBuffer") ) { return ::hx::Val( readVorbisFileBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeAudioSource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"STREAM_BUFFER_SIZE") ) { outValue = ( STREAM_BUFFER_SIZE ); return true; }
		if (HX_FIELD_EQ(inName,"STREAM_NUM_BUFFERS") ) { outValue = ( STREAM_NUM_BUFFERS ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STREAM_TIMER_FREQUENCY") ) { outValue = ( STREAM_TIMER_FREQUENCY ); return true; }
	}
	return false;
}

::hx::Val NativeAudioSource_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::lime::media::AudioSource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stream") ) { stream=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samples") ) { samples=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast<  ::lime::math::Vector4 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataLength") ) { dataLength=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"streamTimer") ) { streamTimer=inValue.Cast<  ::haxe::Timer >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bufferTimeBlocks") ) { bufferTimeBlocks=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeAudioSource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"STREAM_BUFFER_SIZE") ) { STREAM_BUFFER_SIZE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"STREAM_NUM_BUFFERS") ) { STREAM_NUM_BUFFERS=ioValue.Cast< int >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STREAM_TIMER_FREQUENCY") ) { STREAM_TIMER_FREQUENCY=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void NativeAudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffers",73,a3,90,b1));
	outFields->push(HX_("bufferTimeBlocks",93,77,27,43));
	outFields->push(HX_("completed",8b,a1,38,4f));
	outFields->push(HX_("dataLength",b0,5a,a9,8a));
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("loops",8f,f1,f9,78));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("playing",6e,0f,18,8a));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("samples",09,c5,c9,83));
	outFields->push(HX_("stream",80,14,2d,11));
	outFields->push(HX_("streamTimer",25,cb,fb,7f));
	outFields->push(HX_("timer",c5,bf,35,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeAudioSource_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(NativeAudioSource_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(NativeAudioSource_obj,bufferTimeBlocks),HX_("bufferTimeBlocks",93,77,27,43)},
	{::hx::fsBool,(int)offsetof(NativeAudioSource_obj,completed),HX_("completed",8b,a1,38,4f)},
	{::hx::fsInt,(int)offsetof(NativeAudioSource_obj,dataLength),HX_("dataLength",b0,5a,a9,8a)},
	{::hx::fsInt,(int)offsetof(NativeAudioSource_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeAudioSource_obj,handle),HX_("handle",a8,83,fd,b7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NativeAudioSource_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsInt,(int)offsetof(NativeAudioSource_obj,loops),HX_("loops",8f,f1,f9,78)},
	{::hx::fsObject /*  ::lime::media::AudioSource */ ,(int)offsetof(NativeAudioSource_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsBool,(int)offsetof(NativeAudioSource_obj,playing),HX_("playing",6e,0f,18,8a)},
	{::hx::fsObject /*  ::lime::math::Vector4 */ ,(int)offsetof(NativeAudioSource_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsInt,(int)offsetof(NativeAudioSource_obj,samples),HX_("samples",09,c5,c9,83)},
	{::hx::fsBool,(int)offsetof(NativeAudioSource_obj,stream),HX_("stream",80,14,2d,11)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(NativeAudioSource_obj,streamTimer),HX_("streamTimer",25,cb,fb,7f)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(int)offsetof(NativeAudioSource_obj,timer),HX_("timer",c5,bf,35,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NativeAudioSource_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &NativeAudioSource_obj::STREAM_BUFFER_SIZE,HX_("STREAM_BUFFER_SIZE",21,aa,29,ff)},
	{::hx::fsInt,(void *) &NativeAudioSource_obj::STREAM_NUM_BUFFERS,HX_("STREAM_NUM_BUFFERS",7b,0f,d0,ac)},
	{::hx::fsInt,(void *) &NativeAudioSource_obj::STREAM_TIMER_FREQUENCY,HX_("STREAM_TIMER_FREQUENCY",23,49,97,07)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NativeAudioSource_obj_sMemberFields[] = {
	HX_("buffers",73,a3,90,b1),
	HX_("bufferTimeBlocks",93,77,27,43),
	HX_("completed",8b,a1,38,4f),
	HX_("dataLength",b0,5a,a9,8a),
	HX_("format",37,8f,8e,fd),
	HX_("handle",a8,83,fd,b7),
	HX_("length",e6,94,07,9f),
	HX_("loops",8f,f1,f9,78),
	HX_("parent",2a,05,7e,ed),
	HX_("playing",6e,0f,18,8a),
	HX_("position",a9,a0,fa,ca),
	HX_("samples",09,c5,c9,83),
	HX_("stream",80,14,2d,11),
	HX_("streamTimer",25,cb,fb,7f),
	HX_("timer",c5,bf,35,10),
	HX_("dispose",9f,80,4c,bb),
	HX_("init",10,3b,bb,45),
	HX_("play",f4,2d,5a,4a),
	HX_("pause",f6,d6,57,bd),
	HX_("readVorbisFileBuffer",45,45,75,21),
	HX_("refillBuffers",5d,46,6a,d5),
	HX_("stop",02,f0,5b,4c),
	HX_("streamTimer_onRun",92,f7,55,e4),
	HX_("timer_onRun",32,24,e9,57),
	HX_("getCurrentTime",f0,f7,2c,0d),
	HX_("setCurrentTime",64,e0,4c,2d),
	HX_("getGain",35,a0,e1,16),
	HX_("setGain",41,31,e3,09),
	HX_("getLength",1c,1e,5e,1b),
	HX_("setLength",28,0a,af,fe),
	HX_("getLoops",19,01,d1,d8),
	HX_("setLoops",8d,5a,2e,87),
	HX_("getPitch",4a,cb,77,22),
	HX_("setPitch",be,24,d5,d0),
	HX_("getPosition",5f,63,ee,f0),
	HX_("setPosition",6b,6a,5b,fb),
	::String(null()) };

static void NativeAudioSource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::STREAM_BUFFER_SIZE,"STREAM_BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::STREAM_NUM_BUFFERS,"STREAM_NUM_BUFFERS");
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::STREAM_TIMER_FREQUENCY,"STREAM_TIMER_FREQUENCY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeAudioSource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::STREAM_BUFFER_SIZE,"STREAM_BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::STREAM_NUM_BUFFERS,"STREAM_NUM_BUFFERS");
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::STREAM_TIMER_FREQUENCY,"STREAM_TIMER_FREQUENCY");
};

#endif

::hx::Class NativeAudioSource_obj::__mClass;

static ::String NativeAudioSource_obj_sStaticFields[] = {
	HX_("STREAM_BUFFER_SIZE",21,aa,29,ff),
	HX_("STREAM_NUM_BUFFERS",7b,0f,d0,ac),
	HX_("STREAM_TIMER_FREQUENCY",23,49,97,07),
	::String(null())
};

void NativeAudioSource_obj::__register()
{
	NativeAudioSource_obj _hx_dummy;
	NativeAudioSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.NativeAudioSource",a8,f7,00,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeAudioSource_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeAudioSource_obj::__SetStatic;
	__mClass->mMarkFunc = NativeAudioSource_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeAudioSource_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeAudioSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeAudioSource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeAudioSource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeAudioSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeAudioSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NativeAudioSource_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_21_boot)
HXDLIN(  21)		STREAM_BUFFER_SIZE = 48000;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_25_boot)
HXDLIN(  25)		STREAM_NUM_BUFFERS = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a101d5e86f44bfa1_27_boot)
HXDLIN(  27)		STREAM_TIMER_FREQUENCY = 100;
            	}
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
