#ifndef XRTCCLIENT_XRTC_IXRTC_ENGINE_H_
#define XRTCCLIENT_XRTC_IXRTC_ENGINE_H_
#include <vector>
#include "xrtc/xrtc_defines.h"
namespace xrtc {
class IXRTCEngine {
public :
	virtual ~IXRTCEngine() {}

	// 获取视频设备列表信息
	virtual std::vector<XRTCDeviceInfo> GerVideoDeviceList() = 0;

	// 获取音频设备列表信息
	virtual std::vector<XRTCDeviceInfo> GetAudioDeviceList() = 0;
};
}//namespace xrtc

#endif //XRTCCLIENT_XRTC_IXRTC_ENGINE_H_