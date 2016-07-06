;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: PseudoEncoder.inc
;;  Version: 1.3, Updated on 2015/3/4 at 22:26:4
;;  Generated by PSoC Designer 5.4.3191
;;
;;  DESCRIPTION: Assembler declarations for the Counter8 user module interface
;;-----------------------------------------------------------------------------
;;  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
;;*****************************************************************************
;;*****************************************************************************

include "m8c.inc"


;--------------------------------------------------
; Constants for PseudoEncoder API's.
;--------------------------------------------------

PseudoEncoder_CONTROL_REG_START_BIT:       equ 0x01    ; Control register start bit
PseudoEncoder_INT_REG:                     equ 0x0df
PseudoEncoder_INT_MASK:                    equ 0x20


;--------------------------------------------------
; Register Address Constants for PseudoEncoder
;--------------------------------------------------

PseudoEncoder_DATA_0_REG:              equ 0x54   ; DR0 register
PseudoEncoder_DATA_1_REG:              equ 0x55   ; DR1 register
PseudoEncoder_DATA_2_REG:              equ 0x56   ; DR2 register
PseudoEncoder_CONTROL_REG:             equ 0x57   ; Control register
PseudoEncoder_FUNC_REG:                equ 0x54   ; Function register
PseudoEncoder_INPUT_REG:               equ 0x55   ; Input register
PseudoEncoder_OUTPUT_REG:              equ 0x56   ; Output register


;--------------------------------------------------
; PseudoEncoder Macro 'Functions'
;--------------------------------------------------

   macro PseudoEncoder_Start_M
   or    reg[PseudoEncoder_CONTROL_REG],  PseudoEncoder_CONTROL_REG_START_BIT
   endm

   macro PseudoEncoder_Stop_M
   and   reg[PseudoEncoder_CONTROL_REG], ~PseudoEncoder_CONTROL_REG_START_BIT
   endm

   macro PseudoEncoder_EnableInt_M
   M8C_EnableIntMask PseudoEncoder_INT_REG, PseudoEncoder_INT_MASK
   endm

   macro PseudoEncoder_DisableInt_M
   M8C_DisableIntMask PseudoEncoder_INT_REG, PseudoEncoder_INT_MASK
   endm


; end of file PseudoEncoder.inc