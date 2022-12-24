 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Ahmed Shiba
 ******************************************************************************/



#ifndef PORT_CFG_H_
#define PORT_CFG_H_


/* Number of the configured Port Pins */
#define PORT_CONFIGURED_PINS              (3U)


/* PIN Modes */

#define    Port_Mode_GPIO                   (0U)
#define    Port_Mode_Alternative1           (1U)
#define    Port_Mode_Alternative2           (2U)
#define    Port_Mode_Alternative3           (3U)
#define    Port_Mode_Alternative4           (4U)
#define    Port_Mode_Alternative5           (5U)
#define    Port_Mode_Alternative6           (6U)
#define    Port_Mode_Alternative7           (7U)
#define    Port_Mode_Alternative8           (8U)
#define    Port_Mode_Alternative9           (9U)
#define    Port_Mode_Alternative10          (10U)
#define    Port_Mode_Alternative11          (11U)
#define    Port_Mode_Alternative12          (12U)
#define    Port_Mode_Alternative13          (13U)
#define    Port_Mode_Alternative14          (14U)
#define    Port_Mode_Analog                 (15U)

#define    Port_Max_Mode_num                    (16U)
   
   

/* Port Pin Index in the array of structures in Port_PBcfg.c */
#define PortConf_Pin01_ID_INDEX              (uint8)0x00
#define PortConf_Pin02_ID_INDEX              (uint8)0x01
#define PortConf_Pin03_ID_INDEX              (uint8)0x02



/* Port Configured Port ID's  */

#define PortConf_Pin01_PORT_NUM              (uint8)5 /* PORTF */
#define PortConf_Pin02_PORT_NUM              (uint8)5 /* PORTF */
#define PortConf_Pin03_PORT_NUM              (uint8)5 /* PORTF */

/* Port Configured Pin ID's */


#define PortConf_Pin01_CHANNEL_NUM           (uint8)1 /* Pin 1 in PORTF */
#define PortConf_Pin02_CHANNEL_NUM           (uint8)4 /* Pin 4 in PORTF */
#define PortConf_Pin03_CHANNEL_NUM           (uint8)0 /* Pin 0 in PORTF */


/*  port configured Pin Direction's */  

#define PortConf_Pin01_DIRECTION             (Port_PinDirectionType)Output
#define PortConf_Pin02_DIRECTION             (Port_PinDirectionType)Input
#define PortConf_Pin03_DIRECTION             (Port_PinDirectionType)Input
   
/*  port configured Pins Internal resistor */  
   

#define PortConf_Pin01_Intrnal_Resistor      (Port_PinInternalAttachType)Off
#define PortConf_Pin02_Intrnal_Resistor      (Port_PinInternalAttachType)Pull_Up
#define PortConf_Pin03_Intrnal_Resistor      (Port_PinInternalAttachType)Pull_Up

/*  port configured Pins Initial Value */  
   

#define PortConf_Pin01_Initial_Value         (uint8)STD_HIGH
#define PortConf_Pin02_Initial_Value         (uint8)STD_HIGH
#define PortConf_Pin03_Initial_Value         (uint8)STD_HIGH

/*  port configured Pins Mode */  
   
#define PortConf_Pin01_Mode                  (Port_PinModeType)Port_Mode_GPIO
#define PortConf_Pin02_Mode                  (Port_PinModeType)Port_Mode_GPIO
#define PortConf_Pin03_Mode                  (Port_PinModeType)Port_Mode_GPIO


#endif /* PORT_CFG_H_ */
   
   