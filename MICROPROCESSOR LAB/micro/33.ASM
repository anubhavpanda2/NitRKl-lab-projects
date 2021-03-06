TITLE    REM_DIV11
PAGE     50,100
N1OFF=	100H
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
	MOV SI,N1OFF
	MOV DI,RESOFF
	MOV DX,[SI]
	MOV CX,0010H
	XOR BX,BX
	CALL SUM
	MOV DX,[SI+2]
	MOV CX,0010H
	CALL SUM
	CMP BH,BL
	JB XCH
	JMP OPER
XCH:	XCHG BH,BL
OPER:	SUB BH,BL
	MOV AL,BH
	MOV AH,0
	MOV BL,11H
	DIV BL
	MOV BYTE PTR [DI],AH
	RET
MAIN	ENDP	
SUM	PROC
LOP:	SUB CL,4
	INC CH
	MOV AX,DX
	SHR AX,CL
	AND AL,0FH	
	MOV AH,CH
	RCR AH,1
	JC GBH
	ADD BL,AL
	JMP NEX
GBH:	ADD BH,AL
NEX:	CMP CL,0
	JNZ LOP
	RET
SUM	ENDP
CODE_S	ENDS
END	MAIN
	
