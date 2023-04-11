#include "Rte_SWC_SeatHeatingControl.h"

void SeatHeatingControl_func(void)
{
	IoHwAb_LevelType Level;
	boolean Data;

	Rte_Read_R_SeatSwitch_PassengerDetected(&Data);

	Level = (Data == TRUE)? IOHWAB_HIGH : IOHWAB_LOW;

	Rte_Call_R_HeatingElement_WriteDirect(Level);
}
