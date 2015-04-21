;**********************************************************************
W_TEMP			EQU     0x70	;=\TEMP REGISTER FOR
STATUS_TEMP		EQU     0x71	;=/SAVE IN INTERUUPTION
STATUS_HIGH		EQU		0X72
								;=> BITE '0' => E0
								;=> BITE '1' => E1
								;=> BITE '2' => E2
								;=> BITE '3' => E3
								;=> BITE '4' => BLIND
								;=> BITE '5' => FD
								;=> BITE '6' => DIM
								;=> BITE '7' => MODE
STATUS_LOW		EQU		0X73
								;=> BITE '0' => LAMP
								;=> BITE '1' => FLASH
								;=> BITE '2' => FOR OUT LENGTH WAVE AND DATA TO DISPLAY
								;=> BITE '3' =\ 0 - OUT i; 1 - OUT I;
								;=> BITE '4' =/ 2 - OUT D; 3 - OUT T;
								;=> BITE '5' => FOR DIV24
								;=> BITE '6' => IF THIS BIT IS '1' THEN GO TO MAIN ELSE NEXT OPERATION
								;=> BITE '7' =>
W_REG_1			EQU		0X74	;=>FOR CLEAR_LCD;FOR WRITE_ADC;		;-\
W_REG_2			EQU		0X75	;=> FOR SHOW_DATA; FOR WRITE ADC	; |-\FOR FIND
W_REG_3			EQU		0X76	;									; |-/Lg(2^N)
W_REG_4			EQU		0X77	;									;-/
NULL_HIGH		EQU		0X78
NULL_LOW		EQU		0X79
MAX_HIGH		EQU		0X7A
MAX_LOW			EQU		0X7B
DATA_HIGH		EQU		0X7C
DATA_LOW		EQU		0X7D
ADC_HIGH		EQU		0X7E	;-\DATA FROM READ_ADC
ADC_LOW			EQU		0X7F	;-/ => FOR WRITE DATA TO ADC: WRITE_ADC
;**********************************************************************
DELITEL_H		EQU		0X20	;-\
DELITEL_M		EQU		0X21	; |
DELITEL_L		EQU		0X22	; |
DELIMOE_H		EQU		0X23	; |
DELIMOE_M		EQU		0X24	; |
DELIMOE_L		EQU		0X25	; |
RESULT_H		EQU		0X26	; |
RESULT_M		EQU		0X27	; |
RESULT_L		EQU		0X28	; |
RES_DROB_0		EQU		0X29	; |
RES_DROB_1		EQU		0X2A	; |
RES_DROB_2		EQU		0X2B	; |-\FOR SUBBPROGRAMS
RES_DROB_3		EQU		0X2C	; |-/DIV
TIME			EQU		0X2D	; |
TMP_DEL_H		EQU		0X6F	; |
TMP_DEL_M		EQU		0X2E	; |
TMP_DEL_L		EQU		0X2F	; |
TMP_RES_H		EQU		0X30	; |
TMP_RES_L		EQU		0X31	; |
COUNT_H			EQU		0X32	; |
COUNT_M			EQU		0X33	; |
COUNT_L			EQU		0X34	; |
TEMP_H			EQU		0X35	; |
TEMP_M			EQU		0X36	; |
TEMP_L			EQU		0X37	;-/
TEMP			EQU		0X38	;=> FOR LCD; FOR SENSORS			;=>FOR LG
COUNT_LCD		EQU		0X39	;-\
W_H				EQU		0X3A	; |=>FOR CONVERT DATA TO DISPLAY	;-\FOR
W_L				EQU		0X3B	;-/									;-/LG
RES_CEL_LG		EQU		0X3C	;-\
RES_DROB_LG_H	EQU		0X3D	; |=> RESULT OF LOGARITHM
RES_DROB_LG_L	EQU		0X3E	;-/
TMP_CEL_LG		EQU		0X3F	;-\
TMP_DROB_LG_H	EQU		0X40	; |=> OF TEMP THE RESULT LOGARITHM
TMP_DROB_LG_L	EQU		0X41	;-/
;**********************************************************************
RA0				EQU		0X00	;-\
RA1				EQU		0X01	; |
RA2				EQU		0X02	; |=>FOR MUX (CONTROL AND READ DATA FROM SENSORS)
RA3				EQU		0X03	; |
RA4				EQU		0X04	;-/
E				EQU		0X07	;-\FOR CONTROL	;-\PORTD
RS				EQU		0X06	;-/DISPLAY		;-/
DRDY			EQU		0X00	;-\										;-\
SCLK			EQU		0X01	; |										; |
RESET			EQU		0X02	; |=>FOR ADC (DIN AND DOUT TO ADC LINE)	; |=>PORTD
OUT_ADC			EQU		0X03	; |										; |
IN_ADC			EQU		0X04	;-/										;-/
;**********************************************************************
