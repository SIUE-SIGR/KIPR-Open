//*****************************************************************************
//*****************************************************************************
//  FILENAME: ENC1A_PEDGE.h
//  Version: 1.3, Updated on 2015/3/4 at 22:26:4
//  Generated by PSoC Designer 5.4.3191
//
//  DESCRIPTION: DigitalBuffers User Module C Language interface file
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef ENC1A_PEDGE_INCLUDE
#define ENC1A_PEDGE_INCLUDE

#include <m8c.h>

#pragma fastcall16 ENC1A_PEDGE_EnableInt
#pragma fastcall16 ENC1A_PEDGE_DisableInt
#pragma fastcall16 ENC1A_PEDGE_Start
#pragma fastcall16 ENC1A_PEDGE_Stop

//-------------------------------------------------
// Prototypes of the ENC1A_PEDGE API.
//-------------------------------------------------

extern void ENC1A_PEDGE_EnableInt(void);
extern void ENC1A_PEDGE_DisableInt(void);
extern void ENC1A_PEDGE_Start(void);
extern void ENC1A_PEDGE_Stop(void);


//--------------------------------------------------
// Constants for ENC1A_PEDGE API's.
//--------------------------------------------------
#define ENC1A_PEDGE_CONTROL_REG_START_BIT      ( 0x01 )
#define ENC1A_PEDGE_INT_REG_ADDR               ( 0x0e1 )
#define ENC1A_PEDGE_INT_MASK                   ( 0x01 )


//--------------------------------------------------
// Constants for ENC1A_PEDGE user defined values
//--------------------------------------------------
#pragma ioport  ENC1A_PEDGE_DATA_0_REG: 0x020              //DR0 Count register
BYTE            ENC1A_PEDGE_DATA_0_REG;
#pragma ioport  ENC1A_PEDGE_DATA_1_REG: 0x021              //DR1 Period register
BYTE            ENC1A_PEDGE_DATA_1_REG;
#pragma ioport  ENC1A_PEDGE_DATA_2_REG: 0x022              //DR2 Compare register
BYTE            ENC1A_PEDGE_DATA_2_REG;
#pragma ioport  ENC1A_PEDGE_CONTROL_REG:    0x023          //Control register
BYTE            ENC1A_PEDGE_CONTROL_REG;
#pragma ioport  ENC1A_PEDGE_FUNC_REG:   0x120              //Function register
BYTE            ENC1A_PEDGE_FUNC_REG;
#pragma ioport  ENC1A_PEDGE_INPUT_REG:  0x121              //Input register
BYTE            ENC1A_PEDGE_INPUT_REG;
#pragma ioport  ENC1A_PEDGE_OUTPUT_REG: 0x122              //Output register
BYTE            ENC1A_PEDGE_OUTPUT_REG;
#pragma ioport  ENC1A_PEDGE_INT_REG:       0x0e1           //Interrupt Mask Register
BYTE            ENC1A_PEDGE_INT_REG;


//-------------------------------------------------
// Register Addresses for ENC1A_PEDGE
//-------------------------------------------------


//-------------------------------------------------
// ENC1A_PEDGE Macro 'Functions'
//-------------------------------------------------

#define ENC1A_PEDGE_Start_M \
   ENC1A_PEDGE_CONTROL_REG |=  ENC1A_PEDGE_CONTROL_REG_START_BIT

#define ENC1A_PEDGE_Stop_M  \
   ENC1A_PEDGE_CONTROL_REG &= ~ENC1A_PEDGE_CONTROL_REG_START_BIT

#define ENC1A_PEDGE_EnableInt_M   \
   M8C_EnableIntMask(ENC1A_PEDGE_INT_REG, ENC1A_PEDGE_INT_MASK)

#define ENC1A_PEDGE_DisableInt_M  \
   M8C_DisableIntMask(ENC1A_PEDGE_INT_REG, ENC1A_PEDGE_INT_MASK)

#endif
// end of file ENC1A_PEDGE.h
