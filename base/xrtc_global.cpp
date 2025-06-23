#include "base/xrtc_global.h"

namespace xrtc {
	//单例模式
XRTCGlobal* XRTCGlobal::Instance()
{
	static XRTCGlobal* const instance = new XRTCGlobal();
	return instance;	

}
XRTCGlobal::XRTCGlobal() :
	api_thread_(rtc::Thread::Create()),
	worker_thread_(rtc::Thread::Create()),
	network_thread_(rtc::Thread::CreateWithSocketServer()),
	task_queue_factory_(webrtc::CreateDefaultTaskQueueFactory())
{
	api_thread_->SetName("api_thread", nullptr);
	api_thread_->Start();

	worker_thread_->SetName("worker_thread", nullptr);
	worker_thread_->Start();

	network_thread_->SetName("network_thread", nullptr);
	network_thread_->Start();
}
XRTCGlobal::~XRTCGlobal()
{
	api_thread_->Stop();
	worker_thread_->Stop();
	network_thread_->Stop();
}
}// namespace xrtc