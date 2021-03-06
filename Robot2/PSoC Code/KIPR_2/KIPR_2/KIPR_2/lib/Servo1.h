//*****************************************************************************
//*****************************************************************************
//  FILENAME: Servo1.h
//   Version: 2.5, Updated on 2015/3/4 at 22:26:51
//  Generated by PSoC Designer 5.4.3191
//
//  DESCRIPTION: PWM16 User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef Servo1_INCLUDE
#define Servo1_INCLUDE

#include <m8c.h>

#pragma fastcall16 Servo1_EnableInt
#pragma fastcall16 Servo1_DisableInt
#pragma fastcall16 Servo1_Start
#pragma fastcall16 Servo1_Stop
#pragma fastcall16 Servo1_wReadCounter              // Read  DR0
#pragma fastcall16 Servo1_WritePeriod               // Write DR1
#pragma fastcall16 Servo1_wReadPulseWidth           // Read  DR2
#pragma fastcall16 Servo1_WritePulseWidth           // Write DR2

// The following symbols are deprecated.
// They may be omitted in future releases
//
#pragma fastcall16 wServo1_ReadCounter              // Read  DR0 (Deprecated)
#pragma fastcall16 wServo1_ReadPulseWidth           // Read  DR2 (Deprecated)


//-------------------------------------------------
// Prototypes of the Servo1 API.
//-------------------------------------------------

extern void Servo1_EnableInt(void);                  // Proxy Class 1
extern void Servo1_DisableInt(void);                 // Proxy Class 1
extern void Servo1_Start(void);                      // Proxy Class 1
extern void Servo1_Stop(void);                       // Proxy Class 1
extern WORD Servo1_wReadCounter(void);               // Proxy Class 2
extern void Servo1_WritePeriod(WORD wPeriod);        // Proxy Class 1
extern WORD Servo1_wReadPulseWidth(void);            // Proxy Class 1
extern void Servo1_WritePulseWidth(WORD wPulseWidth);// Proxy Class 1

// The following functions are deprecated.
// They may be omitted in future releases
//
extern WORD wServo1_ReadCounter(void);            // Deprecated
extern WORD wServo1_ReadPulseWidth(void);         // Deprecated


//-------------------------------------------------
// Constants for Servo1 API's.
//-------------------------------------------------

#define Servo1_CONTROL_REG_START_BIT           ( 0x01 )
#define Servo1_INT_REG_ADDR                    ( 0x0df )
#define Servo1_INT_MASK                        ( 0x08 )


//--------------------------------------------------
// Constants for Servo1 user defined values
//--------------------------------------------------

#define Servo1_PERIOD                          ( 0x4e1f )
#define Servo1_PULSE_WIDTH                     ( 0x3e7 )


//-------------------------------------------------
// Register Addresses for Servo1
//-------------------------------------------------

#pragma ioport  Servo1_COUNTER_LSB_REG: 0x048              //DR0 Count register LSB
BYTE            Servo1_COUNTER_LSB_REG;
#pragma ioport  Servo1_COUNTER_MSB_REG: 0x04c              //DR0 Count register MSB
BYTE            Servo1_COUNTER_MSB_REG;
#pragma ioport  Servo1_PERIOD_LSB_REG:  0x049              //DR1 Period register LSB
BYTE            Servo1_PERIOD_LSB_REG;
#pragma ioport  Servo1_PERIOD_MSB_REG:  0x04d              //DR1 Period register MSB
BYTE            Servo1_PERIOD_MSB_REG;
#pragma ioport  Servo1_COMPARE_LSB_REG: 0x04a              //DR2 Compare register LSB
BYTE            Servo1_COMPARE_LSB_REG;
#pragma ioport  Servo1_COMPARE_MSB_REG: 0x04e              //DR2 Compare register MSB
BYTE            Servo1_COMPARE_MSB_REG;
#pragma ioport  Servo1_CONTROL_LSB_REG: 0x04b              //Control register LSB
BYTE            Servo1_CONTROL_LSB_REG;
#pragma ioport  Servo1_CONTROL_MSB_REG: 0x04f              //Control register MSB
BYTE            Servo1_CONTROL_MSB_REG;
#pragma ioport  Servo1_FUNC_LSB_REG:    0x148              //Function register LSB
BYTE            Servo1_FUNC_LSB_REG;
#pragma ioport  Servo1_FUNC_MSB_REG:    0x14c              //Function register MSB
BYTE            Servo1_FUNC_MSB_REG;
#pragma ioport  Servo1_INPUT_LSB_REG:   0x149              //Input register LSB
BYTE            Servo1_INPUT_LSB_REG;
#pragma ioport  Servo1_INPUT_MSB_REG:   0x14d              //Input register MSB
BYTE            Servo1_INPUT_MSB_REG;
#pragma ioport  Servo1_OUTPUT_LSB_REG:  0x14a              //Output register LSB
BYTE            Servo1_OUTPUT_LSB_REG;
#pragma ioport  Servo1_OUTPUT_MSB_REG:  0x14e              //Output register MSB
BYTE            Servo1_OUTPUT_MSB_REG;
#pragma ioport  Servo1_INT_REG:       0x0df                //Interrupt Mask Register
BYTE            Servo1_INT_REG;


//-------------------------------------------------
// Servo1 Macro 'Functions'
//-------------------------------------------------

#define Servo1_Start_M \
   ( Servo1_CONTROL_LSB_REG |=  Servo1_CONTROL_REG_START_BIT )

#define Servo1_Stop_M  \
   ( Servo1_CONTROL_LSB_REG &= ~Servo1_CONTROL_REG_START_BIT )

#define Servo1_EnableInt_M   \
   M8C_EnableIntMask(  Servo1_INT_REG, Servo1_INT_MASK )

#define Servo1_DisableInt_M  \
   M8C_DisableIntMask( Servo1_INT_REG, Servo1_INT_MASK )

#endif
// end of file Servo1.h
