TITLE    HAMMING
PAGE     50,100
NOFF=	100H
RESOFF=	200H
ASSUME  CS:CODE_S,SS:STACK_S
STACK_S	SEGMENT	'STACK'
DB	64	DUP(?)
STACK_S	ENDS
CODE_S	SEGMENT	'CODE'
MAIN	PROC	FAR
	PUSH DS
	MOV AX,0
	PUSH AX
	MOV SI,NOFF
	MOV AX,[SI]
	MOV CL,04H
	SHL AX,CL
	SHR AL,1
	MOV BL,AL
	AND AL,0F0H
	AND BL,0FH
	SHR BL,1
	ADD AL,BL
	MOV DI,AX
	MOV SI,AX
	SHL DI,1
	MOV DL,0FH
	XOR BX,BX
	XOR CX,CX
LOP:	MOV DH,DL
	CLC
	XOR AL,AL
	RCL DI,1
	ADC AL,00H
	RCR DH,1
	JNC ASD
	ADD BH,AL
ASD:	RCR DH,1
	JNC WER
	ADD BL,AL
WER:	RCR DH,1
	JNC ZXC
	ADD CH,AL
ZXC:	RCR DH,1
	JNC EN
	ADD CL,AL
EN:	DEC DL
	JNZ LOP
	MOV AX,SI
	AND BH,01H
	AND BL,01H
	AND CH,01H
	AND CL,01H
	ADD AL,BH
	SHL BL,1			
	ADD AL,BL
	ROR CL,1
	ADD AL,CL
	MOV CL,4
	SHL CH,CL
	ADD AL,CH
	MOV SI,RESOFF
	MOV [SI],AX
	RET
MAIN	ENDP
CODE_S	ENDS
END 	MAIN		