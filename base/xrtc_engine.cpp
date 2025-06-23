#include "base/xrtc_engine.h"
#include <modules/video_capture/video_capture_factory.h>
#include "base/xrtc_global.h"



namespace xrtc {
XRTCEngine::XRTCEngine(): 
	video_device_(webrtc::VideoCaptureFactory::CreateDeviceInfo()),
	audio_device_(webrtc::AudioDeviceModule::Create(
		webrtc::AudioDeviceModule::kPlatformDefaultAudio,
		XRTCGlobal::Instance()->task_queue_factory())
	)
{
	 
}

XRTCEngine::~XRTCEngine(){
}
std::vector<XRTCDeviceInfo> XRTCEngine::GerVideoDeviceList(){
	return XRTCGlobal::Instance()->api_thread()
		->Invoke<std::vector<XRTCDeviceInfo>>(RTC_FROM_HERE, [=]() {
			std::vector<XRTCDeviceInfo> device_list;

			uint32_t total = video_device_->NumberOfDevices();
			if (total == 0) {
				return device_list;
			}

			char id[128];
			char name[128];
			for (size_t index = 0; index < total; ++index) {
				id[0] = '\0';
				name[0] = '\0';

				int32_t res = video_device_->GetDeviceName(
					index, name, sizeof(index), id, sizeof(id));

				if (res != 0) {
					continue;
				}

				XRTCDeviceInfo device;
				device.device_id = id;
				device.device_name = name;

				device_list.emplace_back(device);
			}

			return device_list;
		});
}

std::vector<XRTCDeviceInfo> XRTCEngine::GetAudioDeviceList(){
	return XRTCGlobal::Instance()->api_thread()
		->Invoke<std::vector<XRTCDeviceInfo>>(RTC_FROM_HERE, [=]() {
			std::vector<XRTCDeviceInfo> device_list;

			uint32_t total = audio_device_->RecordingDevices(); 
			if (total == 0) {
				return device_list;
			}

			char id[128];
			char name[128];
			for (size_t index = 0; index < total; ++index) {
				id[0] = '\0';
				name[0] = '\0';

				int32_t res = audio_device_->RecordingDeviceName(
					index, name, id);

				if (res != 0) {
					continue;
				}

				XRTCDeviceInfo device;
				device.device_id = id;
				device.device_name = name;

				device_list.emplace_back(device);
			}

			return device_list;
		});
}

}// namespace xrtc


