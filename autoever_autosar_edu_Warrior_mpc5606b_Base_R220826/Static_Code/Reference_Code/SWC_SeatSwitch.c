#include "Rte_SWC_SeatSwitch.h"

void SeatSwitch_func(void)
{
	IoHwAb_LevelType Level;
	boolean Data;

	Rte_Call_R_IO_ReadDirect(&Level);

	Data = (Level == IOHWAB_HIGH)? TRUE : FALSE;

	Rte_Write_P_SeatSwitch_PassengerDetected(Data);
}
