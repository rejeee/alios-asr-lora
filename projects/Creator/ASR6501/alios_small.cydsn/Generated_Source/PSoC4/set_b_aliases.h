/*******************************************************************************
* File Name: set_b.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_set_b_ALIASES_H) /* Pins set_b_ALIASES_H */
#define CY_PINS_set_b_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define set_b_0			(set_b__0__PC)
#define set_b_0_PS		(set_b__0__PS)
#define set_b_0_PC		(set_b__0__PC)
#define set_b_0_DR		(set_b__0__DR)
#define set_b_0_SHIFT	(set_b__0__SHIFT)
#define set_b_0_INTR	((uint16)((uint16)0x0003u << (set_b__0__SHIFT*2u)))

#define set_b_INTR_ALL	 ((uint16)(set_b_0_INTR))


#endif /* End Pins set_b_ALIASES_H */


/* [] END OF FILE */
