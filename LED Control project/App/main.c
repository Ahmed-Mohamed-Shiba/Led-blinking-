/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  main.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Gpio.h"
#include "Gpt.h"
#include "IntCtrl.h"
#include "tm4c123gh6pm_registers.h"
//#include "TM4C123.h"
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
volatile uint32 Time_On = 0;
volatile uint32 Time_Off = 0;
volatile uint8 Flag = 0;
volatile uint32 Time = 1;
volatile uint32 Counter = 0;
/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void SysTick_Function(void);
/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/



/******************************************************************************
* \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)        
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
int main()
{
	Port_Init(&Port_Configuration);
	IntCrtl_Init();
	SysTick_SetCallBack(SysTick_Function);
	SysTick_Start(1);
	
		Time_On = 1000;
		Time_Off = 1000; 
		Time = Time_On;
	while(1)
	{		
		if(Time <= Counter)
		{
			  GPIO_PORTF_DATA_REG ^= (1<<1); /* Toggle the Red LED at PF1 */
			if (Flag == 0)
				{
					Flag = 1;
					Time = Time_Off;
				}
				else
				{
					Flag = 0;
					Time = Time_On;
				}
				Counter = 0;
		}
	}
}


/* SysTick Timer ISR ... No need to clear the trigger flag (COUNT) bit ... it cleared automatically by the HW */
void SysTick_Function(void)
{
  Counter++;
}



\

void GPIOF_Handler (void)
{
	if ( BIT_IS_SET(GPIO_PORTF_RIS_REG,4) && BIT_IS_SET(GPIO_PORTF_RIS_REG,0))
	{
		Time_On =1000;
		Time_Off = 1000;
		GPIO_PORTF_ICR_REG   |= (1<<4);       /* Clear Trigger flag for PF4 (Interupt Flag) */
		GPIO_PORTF_ICR_REG   |= (1<<0);       /* Clear Trigger flag for PF0 (Interupt Flag) */		
	}
	else if(BIT_IS_SET(GPIO_PORTF_RIS_REG,4))
	{
		Time_On += 1000;
		GPIO_PORTF_ICR_REG   |= (1<<4);       /* Clear Trigger flag for PF4 (Interupt Flag) */
	}
	else if (BIT_IS_SET(GPIO_PORTF_RIS_REG,0))
	{
		Time_Off += 1000;
		GPIO_PORTF_ICR_REG   |= (1<<0);       /* Clear Trigger flag for PF0 (Interupt Flag) */
	}
	else
	{
	}
}
/**********************************************************************************************************************
 *  END OF FILE: main.c
 *********************************************************************************************************************/
