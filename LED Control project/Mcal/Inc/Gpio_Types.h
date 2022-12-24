/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Gpio_Types.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef GPIO_TYPES_H
#define GPIO_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Gpio_Cfg.h"    
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef uint8 Port_PinType;

typedef enum
{
	Input,
	Output
}Port_PinDirectionType;

typedef uint8 Port_PinModeType;

typedef enum
{
	Off,
	Pull_Up,
	Pull_Down
}Port_PinInternalAttachType;

//typedef uint8	Port_PinOutputCurrentType;

typedef struct
{
	uint8 Pin_Num;
	uint8 Port_Num;
	Port_PinDirectionType Channel_Direction;
	Port_PinInternalAttachType	Internal_Resistor;
	Port_PinModeType	Channel_Mode;
//	Port_PinOutputCurrentType	Output_Current;
	uint8 Pin_LevelValue;
	
}Port_ConfigPins;

typedef struct 
{
 Port_ConfigPins Pins[PORT_CONFIGURED_PINS];
}Port_ConfigType;
 
#endif  /* GPIO_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCtrl_Types.h
 *********************************************************************************************************************/