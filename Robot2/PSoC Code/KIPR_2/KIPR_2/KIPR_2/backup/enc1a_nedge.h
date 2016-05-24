//*****************************************************************************
//*****************************************************************************
//  FILENAME: ENC1A_NEDGE.h
//   Version: 1.60, Updated on 2014/7/14 at 8:13:31
//  Generated by PSoC Designer 5.4.2946
//
//  DESCRIPTION:
//    ENC1A_NEDGE DigInverter User Module header file.
//-----------------------------------------------------------------------------
//      Copyright (c) Cypress Semiconductor 2014. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef ENC1A_NEDGE_INCLUDE
#define ENC1A_NEDGE_INCLUDE

#include <m8c.h>

/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  ENC1A_NEDGE_EnableInt
#pragma fastcall16  ENC1A_NEDGE_DisableInt
#pragma fastcall16  ENC1A_NEDGE_Start
#pragma fastcall16  ENC1A_NEDGE_Stop

//-------------------------------------------------
// Prototypes of the ENC1A_NEDGE API.
//-------------------------------------------------
extern void  ENC1A_NEDGE_EnableInt(void);           // Proxy Class 1
extern void  ENC1A_NEDGE_DisableInt(void);          // Proxy Class 1
extern void  ENC1A_NEDGE_Start(void);               // Proxy Class 1
extern void  ENC1A_NEDGE_Stop(void);                // Proxy Class 1

//-------------------------------------------------
// Hardware Register Definitions
//-------------------------------------------------
#pragma ioport  ENC1A_NEDGE_CONTROL_REG:    0x033
BYTE            ENC1A_NEDGE_CONTROL_REG;                   //Control register
#pragma ioport  ENC1A_NEDGE_COUNTER_REG:    0x030
BYTE            ENC1A_NEDGE_COUNTER_REG;                   //Counter register
#pragma ioport  ENC1A_NEDGE_PERIOD_REG: 0x031
BYTE            ENC1A_NEDGE_PERIOD_REG;                    //Period value register
#pragma ioport  ENC1A_NEDGE_COMPARE_REG:    0x032
BYTE            ENC1A_NEDGE_COMPARE_REG;                   //CompareValue register
#pragma ioport  ENC1A_NEDGE_FUNC_REG:   0x130
BYTE            ENC1A_NEDGE_FUNC_REG;                      //Function register
#pragma ioport  ENC1A_NEDGE_INPUT_REG:  0x131
BYTE            ENC1A_NEDGE_INPUT_REG;                     //Input register
#pragma ioport  ENC1A_NEDGE_OUTPUT_REG: 0x132
BYTE            ENC1A_NEDGE_OUTPUT_REG;                    //Output register

#endif
// end of file ENC1A_NEDGE.h
