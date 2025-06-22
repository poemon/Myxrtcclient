#include "base/xrtc_engine.h"

namespace xrtc {
XRTCEngine::XRTCEngine(){
}

XRTCEngine::~XRTCEngine(){
}
std::vector<XRTCDeviceInfo> XRTCEngine::GerVideoDeviceList(){
	return std::vector<XRTCDeviceInfo>();
}

std::vector<XRTCDeviceInfo> XRTCEngine::GetAudioDeviceList(){
	return std::vector<XRTCDeviceInfo>();
}

}// namespace xrtc


