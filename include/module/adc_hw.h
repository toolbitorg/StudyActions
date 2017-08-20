#ifndef TOOLBITSDK_ADC_HW_H_
#define TOOLBITSDK_ADC_HW_H_

#include "tbi_core.h"

class AdcHw
{
public:
	AdcHw(TbiService *tbisrv, ToolbitAttributionID base);
	~AdcHw();
	uint32_t analogRead(uint8_t pin);

protected:
	TbiService *mTbiSrv;
	Attribute *mAttAdcR[12];
};

#endif /* TOOLBITSDK_ADC_HW_H_ */
