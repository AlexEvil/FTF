;**********************************************************************
;    Filename:	    SF.asm                                            *
;    Date: ����� ������������ 07.10.2006                              *
;    File Version: ��� ��� �����                                      *
;    Author:   Evil K:)                                               *
;    Company:  FTF #307 ltd.                                          *
;**********************************************************************
;    Files required: ����� ������                                     *
;**********************************************************************
;    Notes: ����� ������ ������ ���                                   *
;**********************************************************************
		LIST		P=16F877
		#INCLUDE	"P16F877.INC"
;**********************************************************************
		__CONFIG _CP_OFF & _WDT_OFF & _BODEN_OFF & _PWRTE_ON & _HS_OSC & _WRT_ENABLE_ON & _LVP_OFF & _DEBUG_OFF & _CPD_OFF 
;**********************************************************************
		#INCLUDE	"VAR.INC"
;**********************************************************************
		ORG     0x000
 		CLRF    PCLATH
  		GOTO    MAIN
;**********************************************************************
		ORG     0x004
		MOVWF   W_TEMP
		MOVF	STATUS,	W
		MOVWF	STATUS_TEMP
;**********************************************************************
		MOVF    STATUS_TEMP,W
		MOVWF	STATUS
		SWAPF   W_TEMP,	F
		SWAPF   W_TEMP,	W
		RETFIE
;**********************************************************************
MAIN
;**********************************************************************
		#INCLUDE	"SETTING.INC"
;**********************************************************************
		#INCLUDE	"ZERO_BLOCK.INC"
		#INCLUDE	"HUNDRED_BLOCK.INC"
		#INCLUDE	"D_T_BLOCK.INC"
;**********************************************************************
		ORG			0X1000
		#INCLUDE	"SENSORS.INC"
		#INCLUDE	"ADC.INC"
		#INCLUDE	"LCD.INC"
		#INCLUDE	"MESSAGE.INC"
		#INCLUDE	"SUBPROGRAMM.INC"
;**********************************************************************
		ORG			0X1800
		#INCLUDE	"TABLE.INC"
;**********************************************************************
		END
;**********************************************************************
