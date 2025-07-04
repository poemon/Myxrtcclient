﻿#ifndef XRTCCLIENT_BASE_XRTC_ENGINE_H_
#define XRTCCLIENT_BASE_XRTC_ENGINE_H_
#include "xrtc/ixrtc_engine.h"	
#include <modules/video_capture/video_capture.h>
#include <modules/audio_device/include/audio_device.h>

namespace xrtc {
class XRTCEngine : public IXRTCEngine {

	XRTCEngine();
	~XRTCEngine() override;
	// 获取视频设备列表信息
	std::vector<XRTCDeviceInfo> GerVideoDeviceList() override;

	// 获取音频设备列表信息
	std::vector<XRTCDeviceInfo> GetAudioDeviceList() override;

private:
	std::unique_ptr<webrtc::VideoCaptureModule::DeviceInfo> video_device_;
	rtc::scoped_refptr<webrtc::AudioDeviceModule> audio_device_;
		// rtc自己实现的指针

};


}// namespace xrtc  



#endif // XRTCCLIENT_BASE_XRTC_ENGINE_H_
