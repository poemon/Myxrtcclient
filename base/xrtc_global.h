#ifndef XRECCLIENT_BASE_XRTC_GLOBAL_H_
#define XRECCLIENT_BASE_XRTC_GLOBAL_H_
#include <rtc_base/thread.h>

namespace xrtc {
class XRTCGlobal {
public:
	static XRTCGlobal* Instance();
	rtc::Thread* api_thread() { return api_thread_.get(); }
	rtc::Thread* worker_thread() { return worker_thread_.get(); }
	rtc::Thread* network_thread() { return network_thread_.get(); }

private:
	XRTCGlobal();
	~XRTCGlobal();

	std::unique_ptr<rtc::Thread> api_thread_;
	std::unique_ptr<rtc::Thread> worker_thread_;
	std::unique_ptr<rtc::Thread> network_thread_;
};

}// namespace xrtc

#endif // XRECCLIENT_BASE_XRTC_GLOBAL_H_