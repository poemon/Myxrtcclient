#ifndef XRTCCLIENT_BASE_XRTC_ENGINE_H_
#define XRTCCLIENT_BASE_XRTC_ENGINE_H_
#include "xrtc/ixrtc_engine.h"	
namespace xrtc {
class XRTCEngine : public IXRTCEngine {

	XRTCEngine();
	~XRTCEngine() override;
	// 获取视频设备列表信息
	std::vector<XRTCDeviceInfo> GerVideoDeviceList() override;

	// 获取音频设备列表信息
	std::vector<XRTCDeviceInfo> GetAudioDeviceList() override;
};


}// namespace xrtc  



#endif // XRTCCLIENT_BASE_XRTC_ENGINE_H_
