/*******************************************************************************
  * @filename   : button.h
  * @author     : HgN
  * @last update: July 19th, 2017
  */
/******************************************************************************/

#ifndef BUTTON_H
#define BUTTON_H

/******************************************************************************/
/* INCLUDE */
/******************************************************************************/
#include "defineHardware.h"
/******************************************************************************/
/* PUBLIC TYPEDEFS */
/******************************************************************************/

/******************************************************************************/
/* PUBLIC DEFINES */
/******************************************************************************/
#define BUTTON_DEBOUND_DELAY_X100MS 10;
/******************************************************************************/
/* PUBLIC FUNCTION PROTOTYPES */
/******************************************************************************/
void buttonInit(void);
uint8_t button1Check(void);
uint8_t button2Check(void);

#endif
/******************************************************************************/
/* END OF FILE */
/******************************************************************************/