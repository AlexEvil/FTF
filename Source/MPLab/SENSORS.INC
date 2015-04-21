;**********************************************************************
E0:
		BCF		PORTA,	RA0
		BCF		PORTA,	RA1
		BCF		PORTA,	RA2
		BCF		PORTA,	RA3
		MOVLW	0X0F
		MOVWF	TEMP
		DECFSZ	TEMP,	F
		GOTO	$-0X01
		BCF		STATUS_HIGH,0X00
		BTFSC	PORTA,	RA4
		BSF		STATUS_HIGH,0X00
		RETURN
;**********************************************************************
E1:
		BSF		PORTA,	RA0
		BCF		PORTA,	RA1
		BCF		PORTA,	RA2
		BCF		PORTA,	RA3
		MOVLW	0X0F
		MOVWF	TEMP
		DECFSZ	TEMP,	F
		GOTO	$-0X01
		BCF		STATUS_HIGH,0X01
		BTFSC	PORTA,	RA4
		BSF		STATUS_HIGH,0X01
		RETURN
;**********************************************************************
E2:
		BCF		PORTA,	RA0
		BSF		PORTA,	RA1
		BCF		PORTA,	RA2
		BCF		PORTA,	RA3
		MOVLW	0X0F
		MOVWF	TEMP
		DECFSZ	TEMP,	F
		GOTO	$-0X01
		BCF		STATUS_HIGH,0X02
		BTFSC	PORTA,	RA4
		BSF		STATUS_HIGH,0X02
		RETURN
;**********************************************************************
E3:
		BSF		PORTA,	RA0
		BSF		PORTA,	RA1
		BCF		PORTA,	RA2
		BCF		PORTA,	RA3
		MOVLW	0X0F
		MOVWF	TEMP
		DECFSZ	TEMP,	F
		GOTO	$-0X01
		BCF		STATUS_HIGH,0X03
		BTFSC	PORTA,	RA4
		BSF		STATUS_HIGH,0X03
		RETURN
;**********************************************************************
BLIND:
		BCF		PORTA,	RA0
		BCF		PORTA,	RA1
		BSF		PORTA,	RA2
		BCF		PORTA,	RA3
		MOVLW	0X0F
		MOVWF	TEMP
		DECFSZ	TEMP,	F
		GOTO	$-0X01
		BCF		STATUS_HIGH,0X04
		BTFSC	PORTA,	RA4
		BSF		STATUS_HIGH,0X04
		RETURN
;**********************************************************************
FD:
		BSF		PORTA,	RA0
		BCF		PORTA,	RA1
		BSF		PORTA,	RA2
		BCF		PORTA,	RA3
		MOVLW	0X0F
		MOVWF	TEMP
		DECFSZ	TEMP,	F
		GOTO	$-0X01
		BCF		STATUS_HIGH,0X05
		BTFSC	PORTA,	RA4
		BSF		STATUS_HIGH,0X05
		RETURN
;**********************************************************************
DIM:
		BCF		PORTA,	RA0
		BSF		PORTA,	RA1
		BSF		PORTA,	RA2
		BCF		PORTA,	RA3
		MOVLW	0X0F
		MOVWF	TEMP
		DECFSZ	TEMP,	F
		GOTO	$-0X01
		BCF		STATUS_HIGH,0X06
		BTFSC	PORTA,	RA4
		BSF		STATUS_HIGH,0X06
		RETURN
;**********************************************************************
MODE:
		BSF		PORTA,	RA0
		BSF		PORTA,	RA1
		BSF		PORTA,	RA2
		BCF		PORTA,	RA3
		MOVLW	0X0F
		MOVWF	TEMP
		DECFSZ	TEMP,	F
		GOTO	$-0X01
		BCF		STATUS_HIGH,0X07
		BTFSC	PORTA,	RA4
		BSF		STATUS_HIGH,0X07
		RETURN
;**********************************************************************
LAMP:
		BCF		PORTA,	RA0
		BCF		PORTA,	RA1
		BCF		PORTA,	RA2
		BSF		PORTA,	RA3
		MOVLW	0X0F
		MOVWF	TEMP
		DECFSZ	TEMP,	F
		GOTO	$-0X01
		BCF		STATUS_LOW,0X00
		BTFSC	PORTA,	RA4
		BSF		STATUS_LOW,0X00
		RETURN
;**********************************************************************
FLASH:
		BSF		PORTA,	RA0
		BCF		PORTA,	RA1
		BCF		PORTA,	RA2
		BSF		PORTA,	RA3
		MOVLW	0X0F
		MOVWF	TEMP
		DECFSZ	TEMP,	F
		GOTO	$-0X01
		BCF		STATUS_LOW,0X01
		BTFSC	PORTA,	RA4
		BSF		STATUS_LOW,0X01
		RETURN
;**********************************************************************
