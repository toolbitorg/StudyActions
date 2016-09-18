#ifndef TOOLBITSDK_ATTP_DEVICE_H_
#define TOOLBITSDK_ATTP_DEVICE_H_

#include <stdint.h>
#include <string>
#include "hidapi.h"

using namespace std;

// Macro
#ifdef _WIN32
#include <windows.h>
#define msleep(X) Sleep(X)
#else
#define msleep(X) usleep((X) * 1000)
#endif

#define BUF_LEN 65   // The first byte is report number so acutual transfer data size is 64
#define MAX_STR 255

#define DEFAULT_DEALY 10   // Wait response for 10msec

class AttpDevice
{
public:
	AttpDevice();
	~AttpDevice();

	void GetDeviceList(uint16_t vid, uint16_t pid);
	int GetDeviceNum();
    void ShowDeviceList();
    bool Open(int num);
	bool Open(uint16_t vid, uint16_t pid);
	bool Open(uint16_t vid, uint16_t pid, wchar_t *serial_num);
    bool IsOpen();
	bool Close();

	bool GetInfo();

	bool connectAttp();

	bool SendPacket(uint8_t *sndbuf, uint8_t num);
	bool ReceivePacket(uint8_t *rcvbuf);

protected:

private:
    struct hid_device_info *devs;
    int deviceNum;
    hid_device *handle;
};

#endif /* TOOLBITSDK_ATTP_DEVICE_H_ */
