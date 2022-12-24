/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Gpt.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef GPT_H
#define GPT_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define TIMER0_BASE									0x40030000
#define TIMER1_BASE									0x40031000
#define TIMER2_BASE									0x40032000
#define TIMER3_BASE									0x40033000
#define TIMER4_BASE									0x40034000
#define TIMER5_BASE									0x40035000

#define TIMER0_W_BASE								0x40036000
#define TIMER1_W_BASE								0x40037000
#define TIMER2_W_BASE								0x4003C000
#define TIMER3_W_BASE								0x4003D000
#define TIMER4_W_BASE								0x4003E000
#define TIMER5_W_BASE								0x4003F000


#define TIMER_GPTMCFG_REG_OFFSET   	0x000
#define TIMER_GPTMCTL_REG_OFFSET   	0x00C
#define TIMER_GPTMTAMR_REG_OFFSET   0x004
#define TIMER_GPTMTBMR_REG_OFFSET   0x008
#define TIMER_GPTMIMR_REG_OFFSET   	0x018
#define TIMER_GPTMRIS_REG_OFFSET   	0x01C
#define TIMER_GPTMMIS_REG_OFFSET   	0x020
#define TIMER_GPTMICR_REG_OFFSET   	0x024
#define TIMER_GPTMTAILR_REG_OFFSET  0x028
#define TIMER_GPTMTBILR_REG_OFFSET  0x02C

#define TIMER0_GPTMCFG_REG 					(*((volatile uint32 *)(TIMER0_BASE + TIMER_GPTMCFG_REG_OFFSET)))
#define TIMER0_GPTMCTL_REG  				(*((volatile uint32 *)(TIMER0_BASE + TIMER_GPTMCTL_REG_OFFSET)))
#define TIMER0_GPTMTAMR_REG   			(*((volatile uint32 *)(TIMER0_BASE + TIMER_GPTMTAMR_REG_OFFSET)))
#define TIMER0_GPTMTBMR_REG   			(*((volatile uint32 *)(TIMER0_BASE + TIMER_GPTMTBMR_REG_OFFSET)))
#define TIMER0_GPTMIMR_REG  				(*((volatile uint32 *)(TIMER0_BASE + TIMER_GPTMIMR_REG_OFFSET)))
#define TIMER0_GPTMRIS_REG   				(*((volatile uint32 *)(TIMER0_BASE + TIMER_GPTMRIS_REG_OFFSET)))
#define TIMER0_GPTMMIS_REG   				(*((volatile uint32 *)(TIMER0_BASE + TIMER_GPTMMIS_REG_OFFSET)))
#define TIMER0_GPTMICR_REG   				(*((volatile uint32 *)(TIMER0_BASE + TIMER_GPTMICR_REG_OFFSET)))
#define TIMER0_GPTMTAILR_REG   			(*((volatile uint32 *)(TIMER0_BASE + TIMER_GPTMTAILR_REG_OFFSET)))
#define TIMER0_GPTMTBILR_REG   			(*((volatile uint32 *)(TIMER0_BASE + TIMER_GPTMTBILR_REG_OFFSET)))
	
#define TIMER_RCGCTIMER_REG					(*((volatile uint32 *)(0x400FE000 + 0x604)))

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void SysTick_Start(uint16 Tick_Time);
void SysTick_Stop(void);
void SysTick_SetCallBack(void(*Ptr2Func)(void));
//void Timer0__Init(uint16 Timer_Tick);
 
#endif  /* GPT_H */

/**********************************************************************************************************************
 *  END OF FILE: Std_Types.h
 *********************************************************************************************************************/
