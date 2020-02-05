#ifndef TOOLBITSDK_TBI_CORE_H_
#define TOOLBITSDK_TBI_CORE_H_

#include <stdint.h>
#include <string.h>
#include "tbi_device.h"
#include "tbi_service.h"
#include "attribute.h"


class TbiCore
{
public:
	TbiCore();
	~TbiCore();

	bool   openPath(const char *path);
	bool   close();
	bool   isConnected();
	string getVendorName();
	string getProductName();
	string getProductRevision();
	string getProductSerial();
	string getFirmVersion();

protected:
	TbiDevice *mTbiDevice;
	TbiService *mTbiService;
	// Toolbit common attribute
	Attribute mAttVendorName;
	Attribute mAttProductName;
	Attribute mAttProductRevision;
	Attribute mAttProductSerial;
	Attribute mAttFirmVersion;

private:
	
};

string convertWcharToString(wchar_t* p);

#endif /* TOOLBITSDK_TBI_CORE_H_ */
