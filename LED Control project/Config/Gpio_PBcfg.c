 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Ahmed Shiba
 ******************************************************************************/

#include "Gpio.h"

/* PB structure used with Port_Init API */
const Port_ConfigType Port_Configuration = 	{
																						PortConf_Pin01_CHANNEL_NUM,
                                            PortConf_Pin01_PORT_NUM,
																						PortConf_Pin01_DIRECTION,
																						PortConf_Pin01_Intrnal_Resistor,
																						PortConf_Pin01_Mode,
																						PortConf_Pin01_Initial_Value,
	
	
	
	
																						PortConf_Pin02_CHANNEL_NUM,
                                            PortConf_Pin02_PORT_NUM,
																						PortConf_Pin02_DIRECTION,
																						PortConf_Pin02_Intrnal_Resistor,
																						PortConf_Pin02_Mode,
																						PortConf_Pin02_Initial_Value,


																						PortConf_Pin03_CHANNEL_NUM,
                                            PortConf_Pin03_PORT_NUM,
																						PortConf_Pin03_DIRECTION,
																						PortConf_Pin03_Intrnal_Resistor,
																						PortConf_Pin03_Mode,
																						PortConf_Pin03_Initial_Value	
																						};