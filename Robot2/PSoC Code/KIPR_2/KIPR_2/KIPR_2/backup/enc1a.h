//*****************************************************************************
//*****************************************************************************
//  FILENAME: ENC1A.h
//  Version: 1.3, Updated on 2014/7/14 at 8:13:28
//  Generated by PSoC Designer 5.4.2946
//
//  DESCRIPTION: DigitalBuffers User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2014. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef ENC1A_INCLUDE
#define ENC1A_INCLUDE

#include <m8c.h>

#pragma fastcall16 ENC1A_EnableInt
#pragma fastcall16 ENC1A_DisableInt
#pragma fastcall16 ENC1A_Start
#pragma fastcall16 ENC1A_Stop

//-------------------------------------------------
// Prototypes of the ENC1A API.
//-------------------------------------------------

extern void ENC1A_EnableInt(void);
extern void ENC1A_DisableInt(void);
extern void ENC1A_Start(void);
extern void ENC1A_Stop(void);


//--------------------------------------------------
// Constants for ENC1A API's.
//--------------------------------------------------
#define ENC1A_CONTROL_REG_START_BIT            ( 0x01 )
#define ENC1A_INT_REG_ADDR                     ( 0x0e1 )
#define ENC1A_INT_MASK                         ( 0x01 )


//--------------------------------------------------
// Constants for ENC1A user defined values
//--------------------------------------------------
#pragma ioport  ENC1A_DATA_0_REG:   0x020                  //DR0 Count register
BYTE            ENC1A_DATA_0_REG;
#pragma ioport  ENC1A_DATA_1_REG:   0x021                  //DR1 Period register
BYTE            ENC1A_DATA_1_REG;
#pragma ioport  ENC1A_DATA_2_REG:   0x022                  //DR2 Compare register
BYTE            ENC1A_DATA_2_REG;
#pragma ioport  ENC1A_CONTROL_REG:  0x023                  //Control register
BYTE            ENC1A_CONTROL_REG;
#pragma ioport  ENC1A_FUNC_REG: 0x120                      //Function register
BYTE            ENC1A_FUNC_REG;
#pragma ioport  ENC1A_INPUT_REG:    0x121                  //Input register
BYTE            ENC1A_INPUT_REG;
#pragma ioport  ENC1A_OUTPUT_REG:   0x122                  //Output register
BYTE            ENC1A_OUTPUT_REG;
#pragma ioport  ENC1A_INT_REG:       0x0e1                 //Interrupt Mask Register
BYTE            ENC1A_INT_REG;


//-------------------------------------------------
// Register Addresses for ENC1A
//-------------------------------------------------


//-------------------------------------------------
// ENC1A Macro 'Functions'
//-------------------------------------------------

#define ENC1A_Start_M \
   ENC1A_CONTROL_REG |=  ENC1A_CONTROL_REG_START_BIT

#define ENC1A_Stop_M  \
   ENC1A_CONTROL_REG &= ~ENC1A_CONTROL_REG_START_BIT

#define ENC1A_EnableInt_M   \
   M8C_EnableIntMask(ENC1A_INT_REG, ENC1A_INT_MASK)

#define ENC1A_DisableInt_M  \
   M8C_DisableIntMask(ENC1A_INT_REG, ENC1A_INT_MASK)

#endif
// end of file ENC1A.h
