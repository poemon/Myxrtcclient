#ifndef XRTCCLIENT_XRTC_XRTC_DEFINES_H_
#define XRTCCLIENT_XRTC_XRTC_DEFINES_H_
#include <string>
namespace xrtc {
struct XRTCDeviceInfo {
	std::string device_id;
	std::string device_name;
};
}

#endif