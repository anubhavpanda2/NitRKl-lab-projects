TITLE    4bin_BCD
PAGE     50,100
NOFF=	100H
DYOFF=	0H
RESOFF=	200H	
ASSUME  CS:CODE_S,SS:STACK_S
STACK_S	SEGMENT	STACK 'STACK'
DB	64	DUP(?)
STACK_S	ENDS
CODE_S	SEGMENT	'CODE'
MAIN	PROC	FAR
	PUSH DS
	MOV AX,0
	PUSH AX
	mov SI,NOFF
	MOV DI,DYOFF
	MOV AX,[SI]
	MOV [DI],AX
	MOV AX,[SI+2]
	MOV [DI+2],AX
	MOV CH,0AH
	MOV SI,RESOFF
	MOV DI,DYOFF+3
LOP:	MOV AH,00H
	CALL DIV_4
	CLC
	MOV BL,CH
	RCR BL,1
	JC ODD
	MOV [SI],AH
	JMP NEXT
ODD:	MOV CL,04H
	SHL AH,CL
	ADD [SI],AH
	INC SI
NEXT:	DEC CH
	JNZ LOP
	RET
MAIN	ENDP	
DIV_4	PROC	
	PUSH DI
	MOV CL,04H
STEP:	MOV AL,[DI]
	MOV DL,0AH
	DIV DL
	MOV [DI],AL
	DEC DI
	DEC CL
	JNZ STEP
	POP DI
	RET
DIV_4	ENDP		
CODE_S	ENDS
END 	MAIN