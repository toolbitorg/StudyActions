#ifndef TOOLBITSDK_GPIO_H_
#define TOOLBITSDK_GPIO_H_

#include "tbi_core.h"

typedef enum
{
	ATT_GPIO_INOUT_MODE = 0x00,
	ATT_GPIO_PULL_UP    = 0x01,
	ATT_GPIO_PULL_DOWN  = 0x02,
	ATT_GPIO_RW         = 0x03
} AttGpio;

typedef enum
{
	// Operation Code
	OUTPUT_PIN,
	INPUT_PIN,
	INPUT_PULLUP_PIN,
	INPUT_PULLDOWN_PIN
} PinMode;

#define HIGH 1
#define LOW  0


class Gpio
{
public:
	Gpio(TbiService *tbisrv, ToolbitAttributionID base);
	~Gpio();
	// GPIO
	bool pinMode(uint8_t pin, PinMode mode);
	bool write(uint32_t dat);
	uint32_t read();

	bool digitalWrite(uint8_t pin, bool val);
	bool digitalRead(uint8_t pin);

protected:
	TbiService *mTbiSrv;
	Attribute *mAttGpioInoutMode;
	Attribute *mAttGpioPullUp;
	Attribute *mAttGpioPullDown;
	Attribute *mAttGpioRw;
};

#endif /* TOOLBITSDK_GPIO_H_ */
