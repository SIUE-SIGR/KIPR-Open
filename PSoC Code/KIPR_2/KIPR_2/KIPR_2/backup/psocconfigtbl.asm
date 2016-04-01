;  Generated by PSoC Designer 5.4.2946
;
; =============================================================================
; FILENAME: PSoCConfigTBL.asm
;  
; Copyright (c) Cypress Semiconductor 2013. All Rights Reserved.
;  
; NOTES:
; Do not modify this file. It is generated by PSoC Designer each time the
; generate application function is run. The values of the parameters in this
; file can be modified by changing the values of the global parameters in the
; device editor.
;  
; =============================================================================
 
include "m8c.inc"
;  Personalization tables 
export LoadConfigTBL_kipr_2_Bank1
export LoadConfigTBL_kipr_2_Bank0
export LoadConfigTBL_kipr_2_Ordered
AREA lit(rom, rel)
LoadConfigTBL_kipr_2_Bank0:
;  Instance name ENC1A_BUF, User Module DigBuf
;       Instance name ENC1A_BUF, Block Name DigBuf(DBB00)
	db		23h, 03h		;ENC1A_BUF_CONTROL_REG(DBB00CR0)
	db		21h, 00h		;ENC1A_BUF_DATA_1_REG(DBB00DR1)
	db		22h, 00h		;ENC1A_BUF_DATA_2_REG(DBB00DR2)
;  Instance name ENC1B_BUF, User Module DigBuf
;       Instance name ENC1B_BUF, Block Name DigBuf(DBB11)
	db		37h, 03h		;ENC1B_BUF_CONTROL_REG(DBB11CR0)
	db		35h, 00h		;ENC1B_BUF_DATA_1_REG(DBB11DR1)
	db		36h, 00h		;ENC1B_BUF_DATA_2_REG(DBB11DR2)
;  Instance name PWMA, User Module PWM8
;       Instance name PWMA, Block Name PWM8(DCB03)
	db		2fh, 00h		;PWMA_CONTROL_REG(DCB03CR0)
	db		2dh, ffh		;PWMA_PERIOD_REG(DCB03DR1)
	db		2eh, 00h		;PWMA_COMPARE_REG(DCB03DR2)
;  Instance name PWMB, User Module PWM8
;       Instance name PWMB, Block Name PWM8(DBB20)
	db		43h, 00h		;PWMB_CONTROL_REG(DBB20CR0)
	db		41h, ffh		;PWMB_PERIOD_REG(DBB20DR1)
	db		42h, 00h		;PWMB_COMPARE_REG(DBB20DR2)
;  Instance name ServoA, User Module PWM16
;       Instance name ServoA, Block Name PWM16_LSB(DBB01)
	db		27h, 00h		;ServoA_CONTROL_LSB_REG(DBB01CR0)
	db		25h, 1fh		;ServoA_PERIOD_LSB_REG(DBB01DR1)
	db		26h, e7h		;ServoA_COMPARE_LSB_REG(DBB01DR2)
;       Instance name ServoA, Block Name PWM16_MSB(DCB02)
	db		2bh, 00h		;ServoA_CONTROL_MSB_REG(DCB02CR0)
	db		29h, 4eh		;ServoA_PERIOD_MSB_REG(DCB02DR1)
	db		2ah, 03h		;ServoA_COMPARE_MSB_REG(DCB02DR2)
;  Instance name UART, User Module UART
;       Instance name UART, Block Name RX(DCB13)
	db		3fh, 00h		;UART_RX_CONTROL_REG(DCB13CR0)
	db		3dh, 00h		;UART_(DCB13DR1)
	db		3eh, 00h		;UART_RX_BUFFER_REG (DCB13DR2)
;       Instance name UART, Block Name TX(DCB12)
	db		3bh, 00h		;UART_TX_CONTROL_REG(DCB12CR0)
	db		39h, 00h		;UART_TX_BUFFER_REG (DCB12DR1)
	db		3ah, 00h		;UART_(DCB12DR2)
;  Global Register values Bank 0
	db		60h, 28h		; AnalogColumnInputSelect register (AMX_IN)
	db		66h, 00h		; AnalogComparatorControl1 register (CMP_CR1)
	db		63h, 05h		; AnalogReferenceControl register (ARF_CR)
	db		65h, 00h		; AnalogSyncControl register (ASY_CR)
	db		e6h, 00h		; DecimatorControl_0 register (DEC_CR0)
	db		e7h, 00h		; DecimatorControl_1 register (DEC_CR1)
	db		d6h, 00h		; I2CConfig register (I2C_CFG)
	db		b0h, 10h		; Row_0_InputMux register (RDI0RI)
	db		b1h, 00h		; Row_0_InputSync register (RDI0SYN)
	db		b2h, 00h		; Row_0_LogicInputAMux register (RDI0IS)
	db		b3h, 33h		; Row_0_LogicSelect_0 register (RDI0LT0)
	db		b4h, 33h		; Row_0_LogicSelect_1 register (RDI0LT1)
	db		b5h, 01h		; Row_0_OutputDrive_0 register (RDI0SRO0)
	db		b6h, 10h		; Row_0_OutputDrive_1 register (RDI0SRO1)
	db		b8h, 55h		; Row_1_InputMux register (RDI1RI)
	db		b9h, 00h		; Row_1_InputSync register (RDI1SYN)
	db		bah, 10h		; Row_1_LogicInputAMux register (RDI1IS)
	db		bbh, 33h		; Row_1_LogicSelect_0 register (RDI1LT0)
	db		bch, 33h		; Row_1_LogicSelect_1 register (RDI1LT1)
	db		bdh, 10h		; Row_1_OutputDrive_0 register (RDI1SRO0)
	db		beh, 00h		; Row_1_OutputDrive_1 register (RDI1SRO1)
	db		c0h, 00h		; Row_2_InputMux register (RDI2RI)
	db		c1h, 00h		; Row_2_InputSync register (RDI2SYN)
	db		c2h, 20h		; Row_2_LogicInputAMux register (RDI2IS)
	db		c3h, 33h		; Row_2_LogicSelect_0 register (RDI2LT0)
	db		c4h, 33h		; Row_2_LogicSelect_1 register (RDI3LT1)
	db		c5h, 80h		; Row_2_OutputDrive_0 register (RDI2SRO0)
	db		c6h, 00h		; Row_2_OutputDrive_1 register (RDI2SRO1)
	db		c8h, 55h		; Row_3_InputMux register (RDI3RI)
	db		c9h, 00h		; Row_3_InputSync register (RDI3SYN)
	db		cah, 30h		; Row_3_LogicInputAMux register (RDI3IS)
	db		cbh, 33h		; Row_3_LogicSelect_0 register (RDI3LT0)
	db		cch, 33h		; Row_3_LogicSelect_1 register (RDI3LT1)
	db		cdh, 00h		; Row_3_OutputDrive_0 register (RDI3SRO0)
	db		ceh, 00h		; Row_3_OutputDrive_1 register (RDI3SRO1)
	db		6ch, 00h		; TMP_DR0 register (TMP_DR0)
	db		6dh, 00h		; TMP_DR1 register (TMP_DR1)
	db		6eh, 00h		; TMP_DR2 register (TMP_DR2)
	db		6fh, 00h		; TMP_DR3 register (TMP_DR3)
	db		ffh
LoadConfigTBL_kipr_2_Bank1:
;  Instance name ENC1A_BUF, User Module DigBuf
;       Instance name ENC1A_BUF, Block Name DigBuf(DBB00)
	db		20h, 22h		;ENC1A_BUF_FUNC_REG(DBB00FN)
	db		21h, e0h		;ENC1A_BUF_INPUT_REG(DBB00IN)
	db		22h, 40h		;ENC1A_BUF_OUTPUT_REG(DBB00OU)
;  Instance name ENC1B_BUF, User Module DigBuf
;       Instance name ENC1B_BUF, Block Name DigBuf(DBB11)
	db		34h, 22h		;ENC1B_BUF_FUNC_REG(DBB11FN)
	db		35h, c0h		;ENC1B_BUF_INPUT_REG(DBB11IN)
	db		36h, 40h		;ENC1B_BUF_OUTPUT_REG(DBB11OU)
;  Instance name PWMA, User Module PWM8
;       Instance name PWMA, Block Name PWM8(DCB03)
	db		2ch, 21h		;PWMA_FUNC_REG(DCB03FN)
	db		2dh, 16h		;PWMA_INPUT_REG(DCB03IN)
	db		2eh, 44h		;PWMA_OUTPUT_REG(DCB03OU)
;  Instance name PWMB, User Module PWM8
;       Instance name PWMB, Block Name PWM8(DBB20)
	db		40h, 21h		;PWMB_FUNC_REG(DBB20FN)
	db		41h, 11h		;PWMB_INPUT_REG(DBA20IN)
	db		42h, 45h		;PWMB_OUTPUT_REG(DBA20OU)
;  Instance name ServoA, User Module PWM16
;       Instance name ServoA, Block Name PWM16_LSB(DBB01)
	db		24h, 01h		;ServoA_FUNC_LSB_REG(DBB01FN)
	db		25h, 16h		;ServoA_INPUT_LSB_REG(DBB01IN)
	db		26h, 40h		;ServoA_OUTPUT_LSB_REG(DBB01OU)
;       Instance name ServoA, Block Name PWM16_MSB(DCB02)
	db		28h, 21h		;ServoA_FUNC_MSB_REG(DCB02FN)
	db		29h, 36h		;ServoA_INPUT_MSB_REG(DCB02IN)
	db		2ah, 47h		;ServoA_OUTPUT_MSB_REG(DCB02OU)
;  Instance name UART, User Module UART
;       Instance name UART, Block Name RX(DCB13)
	db		3ch, 05h		;UART_RX_FUNC_REG   (DCB13FN)
	db		3dh, f1h		;UART_RX_INPUT_REG  (DCB13IN)
	db		3eh, 00h		;UART_RX_OUTPUT_REG (DCB13OU)
;       Instance name UART, Block Name TX(DCB12)
	db		38h, 0dh		;UART_TX_FUNC_REG   (DCB12FN)
	db		39h, 01h		;UART_TX_INPUT_REG  (DCB12IN)
	db		3ah, 05h		;UART_TX_OUTPUT_REG (DCB12OU)
;  Global Register values Bank 1
	db		61h, 00h		; AnalogClockSelect1 register (CLK_CR1)
	db		69h, 00h		; AnalogClockSelect2 register (CLK_CR2)
	db		60h, 00h		; AnalogColumnClockSelect register (CLK_CR0)
	db		62h, 00h		; AnalogIOControl_0 register (ABF_CR0)
	db		67h, 33h		; AnalogLUTControl0 register (ALT_CR0)
	db		68h, 33h		; AnalogLUTControl1 register (ALT_CR1)
	db		63h, 00h		; AnalogModulatorControl_0 register (AMD_CR0)
	db		66h, 00h		; AnalogModulatorControl_1 register (AMD_CR1)
	db		d1h, 00h		; GlobalDigitalInterconnect_Drive_Even_Input register (GDI_E_IN)
	db		d3h, 00h		; GlobalDigitalInterconnect_Drive_Even_Output register (GDI_E_OU)
	db		d0h, 00h		; GlobalDigitalInterconnect_Drive_Odd_Input register (GDI_O_IN)
	db		d2h, 00h		; GlobalDigitalInterconnect_Drive_Odd_Output register (GDI_O_OU)
	db		e1h, b1h		; OscillatorControl_1 register (OSC_CR1)
	db		e2h, 00h		; OscillatorControl_2 register (OSC_CR2)
	db		dfh, 19h		; OscillatorControl_3 register (OSC_CR3)
	db		deh, 00h		; OscillatorControl_4 register (OSC_CR4)
	db		ddh, 00h		; OscillatorGlobalBusEnableControl register (OSC_GO_EN)
	db		e7h, 00h		; Type2Decimator_Control register (DEC_CR2)
	db		ffh
AREA psoc_config(rom, rel)
LoadConfigTBL_kipr_2_Ordered:
;  Ordered Global Register values
	M8C_SetBank0
	mov	reg[00h], 00h		; Port_0_Data register (PRT0DR)
	M8C_SetBank1
	mov	reg[00h], 0ah		; Port_0_DriveMode_0 register (PRT0DM0)
	mov	reg[01h], f5h		; Port_0_DriveMode_1 register (PRT0DM1)
	M8C_SetBank0
	mov	reg[03h], f5h		; Port_0_DriveMode_2 register (PRT0DM2)
	mov	reg[02h], 0ah		; Port_0_GlobalSelect register (PRT0GS)
	M8C_SetBank1
	mov	reg[02h], 00h		; Port_0_IntCtrl_0 register (PRT0IC0)
	mov	reg[03h], 00h		; Port_0_IntCtrl_1 register (PRT0IC1)
	M8C_SetBank0
	mov	reg[01h], 00h		; Port_0_IntEn register (PRT0IE)
	mov	reg[04h], 00h		; Port_1_Data register (PRT1DR)
	M8C_SetBank1
	mov	reg[04h], f0h		; Port_1_DriveMode_0 register (PRT1DM0)
	mov	reg[05h], 0fh		; Port_1_DriveMode_1 register (PRT1DM1)
	M8C_SetBank0
	mov	reg[07h], 0fh		; Port_1_DriveMode_2 register (PRT1DM2)
	mov	reg[06h], 20h		; Port_1_GlobalSelect register (PRT1GS)
	M8C_SetBank1
	mov	reg[06h], 00h		; Port_1_IntCtrl_0 register (PRT1IC0)
	mov	reg[07h], 00h		; Port_1_IntCtrl_1 register (PRT1IC1)
	M8C_SetBank0
	mov	reg[05h], 00h		; Port_1_IntEn register (PRT1IE)
	mov	reg[08h], 00h		; Port_2_Data register (PRT2DR)
	M8C_SetBank1
	mov	reg[08h], 07h		; Port_2_DriveMode_0 register (PRT2DM0)
	mov	reg[09h], f8h		; Port_2_DriveMode_1 register (PRT2DM1)
	M8C_SetBank0
	mov	reg[0bh], 08h		; Port_2_DriveMode_2 register (PRT2DM2)
	mov	reg[0ah], d1h		; Port_2_GlobalSelect register (PRT2GS)
	M8C_SetBank1
	mov	reg[0ah], 28h		; Port_2_IntCtrl_0 register (PRT2IC0)
	mov	reg[0bh], 28h		; Port_2_IntCtrl_1 register (PRT2IC1)
	M8C_SetBank0
	mov	reg[09h], 28h		; Port_2_IntEn register (PRT2IE)
	mov	reg[0ch], 00h		; Port_3_Data register (PRT3DR)
	M8C_SetBank1
	mov	reg[0ch], 00h		; Port_3_DriveMode_0 register (PRT3DM0)
	mov	reg[0dh], 00h		; Port_3_DriveMode_1 register (PRT3DM1)
	M8C_SetBank0
	mov	reg[0fh], 00h		; Port_3_DriveMode_2 register (PRT3DM2)
	mov	reg[0eh], 00h		; Port_3_GlobalSelect register (PRT3GS)
	M8C_SetBank1
	mov	reg[0eh], 00h		; Port_3_IntCtrl_0 register (PRT3IC0)
	mov	reg[0fh], 00h		; Port_3_IntCtrl_1 register (PRT3IC1)
	M8C_SetBank0
	mov	reg[0dh], 00h		; Port_3_IntEn register (PRT3IE)
	mov	reg[10h], 00h		; Port_4_Data register (PRT4DR)
	M8C_SetBank1
	mov	reg[10h], 00h		; Port_4_DriveMode_0 register (PRT4DM0)
	mov	reg[11h], 00h		; Port_4_DriveMode_1 register (PRT4DM1)
	M8C_SetBank0
	mov	reg[13h], 00h		; Port_4_DriveMode_2 register (PRT4DM2)
	mov	reg[12h], 00h		; Port_4_GlobalSelect register (PRT4GS)
	M8C_SetBank1
	mov	reg[12h], 00h		; Port_4_IntCtrl_0 register (PRT4IC0)
	mov	reg[13h], 00h		; Port_4_IntCtrl_1 register (PRT4IC1)
	M8C_SetBank0
	mov	reg[11h], 00h		; Port_4_IntEn register (PRT4IE)
	mov	reg[14h], 00h		; Port_5_Data register (PRT5DR)
	M8C_SetBank1
	mov	reg[14h], 00h		; Port_5_DriveMode_0 register (PRT5DM0)
	mov	reg[15h], 00h		; Port_5_DriveMode_1 register (PRT5DM1)
	M8C_SetBank0
	mov	reg[17h], 00h		; Port_5_DriveMode_2 register (PRT5DM2)
	mov	reg[16h], 00h		; Port_5_GlobalSelect register (PRT5GS)
	M8C_SetBank1
	mov	reg[16h], 00h		; Port_5_IntCtrl_0 register (PRT5IC0)
	mov	reg[17h], 00h		; Port_5_IntCtrl_1 register (PRT5IC1)
	M8C_SetBank0
	mov	reg[15h], 00h		; Port_5_IntEn register (PRT5IE)
	mov	reg[18h], 00h		; Port_6_Data register (PRT6DR)
	M8C_SetBank1
	mov	reg[18h], 00h		; Port_6_DriveMode_0 register (PRT6DM0)
	mov	reg[19h], 00h		; Port_6_DriveMode_1 register (PRT6DM1)
	M8C_SetBank0
	mov	reg[1bh], 00h		; Port_6_DriveMode_2 register (PRT6DM2)
	mov	reg[1ah], 00h		; Port_6_GlobalSelect register (PRT6GS)
	M8C_SetBank1
	mov	reg[1ah], 00h		; Port_6_IntCtrl_0 register (PRT6IC0)
	mov	reg[1bh], 00h		; Port_6_IntCtrl_1 register (PRT6IC1)
	M8C_SetBank0
	mov	reg[19h], 00h		; Port_6_IntEn register (PRT6IE)
	mov	reg[1ch], 00h		; Port_7_Data register (PRT7DR)
	M8C_SetBank1
	mov	reg[1ch], 00h		; Port_7_DriveMode_0 register (PRT7DM0)
	mov	reg[1dh], 00h		; Port_7_DriveMode_1 register (PRT7DM1)
	M8C_SetBank0
	mov	reg[1fh], 00h		; Port_7_DriveMode_2 register (PRT7DM2)
	mov	reg[1eh], 00h		; Port_7_GlobalSelect register (PRT7GS)
	M8C_SetBank1
	mov	reg[1eh], 00h		; Port_7_IntCtrl_0 register (PRT7IC0)
	mov	reg[1fh], 00h		; Port_7_IntCtrl_1 register (PRT7IC1)
	M8C_SetBank0
	mov	reg[1dh], 00h		; Port_7_IntEn register (PRT7IE)
	M8C_SetBank0
	ret


; PSoC Configuration file trailer PsocConfig.asm
