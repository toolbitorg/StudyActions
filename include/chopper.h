#ifndef TOOLBITSDK_CHOPPER_H_
#define TOOLBITSDK_CHOPPER_H_

#include <stdint.h>
#include "tbi_core.h"
#include "gpio_hw.h"
#include "attribute.h"

// Platform commom attribute ID
#define ATT_GPIO0_BASE  0x1200
// Product specific attribute ID
#define ATT_USB_PORT_CTRL  0x8000


class Chopper : public TbiCore
{
public:
    Chopper();
    ~Chopper();

	bool open();
  bool open(string serial);
	bool enableAllUsbPort();
	bool enableUsbPort(uint32_t p);
	bool disableAllUsbPort();
	bool disableUsbPort(uint32_t p);
	uint32_t getUsbPortStatus();

	// Hardware module
	GpioHw gpiohw;

protected:

private:
	// Product specific attribute ID
	Attribute mAttUsbPortCtrl;    // Enable/Disable USB ports
};

#endif /* TOOLBITSDK_CHOPPER_H_ */
