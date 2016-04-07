//*****************************************************************************
//*****************************************************************************
//  FILENAME: PWMB.h
//   Version: 2.60, Updated on 2015/3/4 at 22:26:52
//  Generated by PSoC Designer 5.4.3191
//
//  DESCRIPTION: PWM8 User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef PWMB_INCLUDE
#define PWMB_INCLUDE

#include <m8c.h>

#pragma fastcall16 PWMB_EnableInt
#pragma fastcall16 PWMB_DisableInt
#pragma fastcall16 PWMB_Start
#pragma fastcall16 PWMB_Stop
#pragma fastcall16 PWMB_bReadCounter              // Read  DR0
#pragma fastcall16 PWMB_WritePeriod               // Write DR1
#pragma fastcall16 PWMB_bReadPulseWidth           // Read  DR2
#pragma fastcall16 PWMB_WritePulseWidth           // Write DR2

// The following symbols are deprecated.
// They may be omitted in future releases
//
#pragma fastcall16 bPWMB_ReadCounter              // Read  DR0 (Deprecated)
#pragma fastcall16 bPWMB_ReadPulseWidth           // Read  DR2 (Deprecated)


//-------------------------------------------------
// Prototypes of the PWMB API.
//-------------------------------------------------

extern void PWMB_EnableInt(void);                        // Proxy Class 1
extern void PWMB_DisableInt(void);                       // Proxy Class 1
extern void PWMB_Start(void);                            // Proxy Class 1
extern void PWMB_Stop(void);                             // Proxy Class 1
extern BYTE PWMB_bReadCounter(void);                     // Proxy Class 2
extern void PWMB_WritePeriod(BYTE bPeriod);              // Proxy Class 1
extern BYTE PWMB_bReadPulseWidth(void);                  // Proxy Class 1
extern void PWMB_WritePulseWidth(BYTE bPulseWidth);      // Proxy Class 1

// The following functions are deprecated.
// They may be omitted in future releases
//
extern BYTE bPWMB_ReadCounter(void);            // Deprecated
extern BYTE bPWMB_ReadPulseWidth(void);         // Deprecated


//--------------------------------------------------
// Constants for PWMB API's.
//--------------------------------------------------

#define PWMB_CONTROL_REG_START_BIT             ( 0x01 )
#define PWMB_INT_REG_ADDR                      ( 0x0df )
#define PWMB_INT_MASK                          ( 0x01 )


//--------------------------------------------------
// Constants for PWMB user defined values
//--------------------------------------------------

#define PWMB_PERIOD                            ( 0xff )
#define PWMB_PULSE_WIDTH                       ( 0x00 )


//-------------------------------------------------
// Register Addresses for PWMB
//-------------------------------------------------

#pragma ioport  PWMB_COUNTER_REG:   0x040                  //DR0 Count register
BYTE            PWMB_COUNTER_REG;
#pragma ioport  PWMB_PERIOD_REG:    0x041                  //DR1 Period register
BYTE            PWMB_PERIOD_REG;
#pragma ioport  PWMB_COMPARE_REG:   0x042                  //DR2 Compare register
BYTE            PWMB_COMPARE_REG;
#pragma ioport  PWMB_CONTROL_REG:   0x043                  //Control register
BYTE            PWMB_CONTROL_REG;
#pragma ioport  PWMB_FUNC_REG:  0x140                      //Function register
BYTE            PWMB_FUNC_REG;
#pragma ioport  PWMB_INPUT_REG: 0x141                      //Input register
BYTE            PWMB_INPUT_REG;
#pragma ioport  PWMB_OUTPUT_REG:    0x142                  //Output register
BYTE            PWMB_OUTPUT_REG;
#pragma ioport  PWMB_INT_REG:       0x0df                  //Interrupt Mask Register
BYTE            PWMB_INT_REG;


//-------------------------------------------------
// PWMB Macro 'Functions'
//-------------------------------------------------

#define PWMB_Start_M \
   PWMB_CONTROL_REG |=  PWMB_CONTROL_REG_START_BIT

#define PWMB_Stop_M  \
   PWMB_CONTROL_REG &= ~PWMB_CONTROL_REG_START_BIT

#define PWMB_EnableInt_M   \
   M8C_EnableIntMask(PWMB_INT_REG, PWMB_INT_MASK)

#define PWMB_DisableInt_M  \
   M8C_DisableIntMask(PWMB_INT_REG, PWMB_INT_MASK)

#endif
// end of file PWMB.h
