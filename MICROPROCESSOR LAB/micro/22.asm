TITLE    GAMA_n
PAGE     50,100
ASSUME  CS:CODE_S      
N=      5D
ST_OFF= 0H
CODE_S  SEGMENT 'CODE'
MAIN    PROC    FAR
        PUSH DS
        MOV AX,0
        PUSH AX
        MOV SI,ST_OFF
        MOV CX,N-2
        MOV word ptr [SI],01H
        MOV word ptr [SI+2],01H
        CALL GAMA
        RET
MAIN    ENDP
GAMA    PROC    NEAR
        CMP CX,0
        JZ asd
        MOV AX,[SI]
        ADD AX,[SI+2]
        MOV DX,AX
        MOV BX,[SI+2]
        MOV [SI],BX
        MOV [SI+2],AX
        DEC CX
	CALL GAMA
asd:     RET
GAMA    ENDP
CODE_S  ENDS
END     MAIN

