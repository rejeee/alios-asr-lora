/*******************************************************************************
* File Name: lora_irq.h
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
#if !defined(CY_ISR_lora_irq_H)
#define CY_ISR_lora_irq_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void lora_irq_Start(void);
void lora_irq_StartEx(cyisraddress address);
void lora_irq_Stop(void);

CY_ISR_PROTO(lora_irq_Interrupt);

void lora_irq_SetVector(cyisraddress address);
cyisraddress lora_irq_GetVector(void);

void lora_irq_SetPriority(uint8 priority);
uint8 lora_irq_GetPriority(void);

void lora_irq_Enable(void);
uint8 lora_irq_GetState(void);
void lora_irq_Disable(void);

void lora_irq_SetPending(void);
void lora_irq_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the lora_irq ISR. */
#define lora_irq_INTC_VECTOR            ((reg32 *) lora_irq__INTC_VECT)

/* Address of the lora_irq ISR priority. */
#define lora_irq_INTC_PRIOR             ((reg32 *) lora_irq__INTC_PRIOR_REG)

/* Priority of the lora_irq interrupt. */
#define lora_irq_INTC_PRIOR_NUMBER      lora_irq__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable lora_irq interrupt. */
#define lora_irq_INTC_SET_EN            ((reg32 *) lora_irq__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the lora_irq interrupt. */
#define lora_irq_INTC_CLR_EN            ((reg32 *) lora_irq__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the lora_irq interrupt state to pending. */
#define lora_irq_INTC_SET_PD            ((reg32 *) lora_irq__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the lora_irq interrupt. */
#define lora_irq_INTC_CLR_PD            ((reg32 *) lora_irq__INTC_CLR_PD_REG)



#endif /* CY_ISR_lora_irq_H */


/* [] END OF FILE */
