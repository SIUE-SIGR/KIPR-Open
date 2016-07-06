//*****************************************************************************
//*****************************************************************************
//  FILENAME: UltrasonicInt.h
//  Version: 1.3, Updated on 2015/3/4 at 22:26:4
//  Generated by PSoC Designer 5.4.3191
//
//  DESCRIPTION: DigitalBuffers User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef UltrasonicInt_INCLUDE
#define UltrasonicInt_INCLUDE

#include <m8c.h>

#pragma fastcall16 UltrasonicInt_EnableInt
#pragma fastcall16 UltrasonicInt_DisableInt
#pragma fastcall16 UltrasonicInt_Start
#pragma fastcall16 UltrasonicInt_Stop

//-------------------------------------------------
// Prototypes of the UltrasonicInt API.
//-------------------------------------------------

extern void UltrasonicInt_EnableInt(void);
extern void UltrasonicInt_DisableInt(void);
extern void UltrasonicInt_Start(void);
extern void UltrasonicInt_Stop(void);


//--------------------------------------------------
// Constants for UltrasonicInt API's.
//--------------------------------------------------
#define UltrasonicInt_CONTROL_REG_START_BIT    ( 0x01 )
#define UltrasonicInt_INT_REG_ADDR             ( 0x0df )
#define UltrasonicInt_INT_MASK                 ( 0x10 )


//--------------------------------------------------
// Constants for UltrasonicInt user defined values
//--------------------------------------------------
#pragma ioport  UltrasonicInt_DATA_0_REG:   0x050          //DR0 Count register
BYTE            UltrasonicInt_DATA_0_REG;
#pragma ioport  UltrasonicInt_DATA_1_REG:   0x051          //DR1 Period register
BYTE            UltrasonicInt_DATA_1_REG;
#pragma ioport  UltrasonicInt_DATA_2_REG:   0x052          //DR2 Compare register
BYTE            UltrasonicInt_DATA_2_REG;
#pragma ioport  UltrasonicInt_CONTROL_REG:  0x053          //Control register
BYTE            UltrasonicInt_CONTROL_REG;
#pragma ioport  UltrasonicInt_FUNC_REG: 0x150              //Function register
BYTE            UltrasonicInt_FUNC_REG;
#pragma ioport  UltrasonicInt_INPUT_REG:    0x151          //Input register
BYTE            UltrasonicInt_INPUT_REG;
#pragma ioport  UltrasonicInt_OUTPUT_REG:   0x152          //Output register
BYTE            UltrasonicInt_OUTPUT_REG;
#pragma ioport  UltrasonicInt_INT_REG:       0x0df         //Interrupt Mask Register
BYTE            UltrasonicInt_INT_REG;


//-------------------------------------------------
// Register Addresses for UltrasonicInt
//-------------------------------------------------


//-------------------------------------------------
// UltrasonicInt Macro 'Functions'
//-------------------------------------------------

#define UltrasonicInt_Start_M \
   UltrasonicInt_CONTROL_REG |=  UltrasonicInt_CONTROL_REG_START_BIT

#define UltrasonicInt_Stop_M  \
   UltrasonicInt_CONTROL_REG &= ~UltrasonicInt_CONTROL_REG_START_BIT

#define UltrasonicInt_EnableInt_M   \
   M8C_EnableIntMask(UltrasonicInt_INT_REG, UltrasonicInt_INT_MASK)

#define UltrasonicInt_DisableInt_M  \
   M8C_DisableIntMask(UltrasonicInt_INT_REG, UltrasonicInt_INT_MASK)

#endif
// end of file UltrasonicInt.h