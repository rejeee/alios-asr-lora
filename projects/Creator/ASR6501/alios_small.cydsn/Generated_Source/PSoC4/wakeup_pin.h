/*******************************************************************************
* File Name: wakeup_pin.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_wakeup_pin_H)
#define CY_ISR_wakeup_pin_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void wakeup_pin_Start(void);
void wakeup_pin_StartEx(cyisraddress address);
void wakeup_pin_Stop(void);

CY_ISR_PROTO(wakeup_pin_Interrupt);

void wakeup_pin_SetVector(cyisraddress address);
cyisraddress wakeup_pin_GetVector(void);

void wakeup_pin_SetPriority(uint8 priority);
uint8 wakeup_pin_GetPriority(void);

void wakeup_pin_Enable(void);
uint8 wakeup_pin_GetState(void);
void wakeup_pin_Disable(void);

void wakeup_pin_SetPending(void);
void wakeup_pin_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the wakeup_pin ISR. */
#define wakeup_pin_INTC_VECTOR            ((reg32 *) wakeup_pin__INTC_VECT)

/* Address of the wakeup_pin ISR priority. */
#define wakeup_pin_INTC_PRIOR             ((reg32 *) wakeup_pin__INTC_PRIOR_REG)

/* Priority of the wakeup_pin interrupt. */
#define wakeup_pin_INTC_PRIOR_NUMBER      wakeup_pin__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable wakeup_pin interrupt. */
#define wakeup_pin_INTC_SET_EN            ((reg32 *) wakeup_pin__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the wakeup_pin interrupt. */
#define wakeup_pin_INTC_CLR_EN            ((reg32 *) wakeup_pin__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the wakeup_pin interrupt state to pending. */
#define wakeup_pin_INTC_SET_PD            ((reg32 *) wakeup_pin__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the wakeup_pin interrupt. */
#define wakeup_pin_INTC_CLR_PD            ((reg32 *) wakeup_pin__INTC_CLR_PD_REG)



#endif /* CY_ISR_wakeup_pin_H */


/* [] END OF FILE */
