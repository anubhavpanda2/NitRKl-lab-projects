TITLE    FN2
PAGE     50,100
ASSUME  CS:CODE_S      
N=      12D
ST_OFF= 0H
CODE_S  SEGMENT 'CODE'
MAIN    PROC    FAR
        PUSH DS
        MOV AX,0
        PUSH AX
        MOV SI,ST_OFF
        MOV CX,N
	MOV DI,01H
        MOV word ptr [SI],02H
        CALL FN2
        RET
MAIN    ENDP
FN2     PROC    NEAR
        CMP CX,0
        JZ asd
        MOV AX,[SI]
	DEC AX
	MUL DI
        MOV DX,AX
        MOV [SI],AX
        DEC CX
	INC DI
	CALL FN2
asd:     RET
FN2     ENDP
CODE_S  ENDS
END     MAIN

