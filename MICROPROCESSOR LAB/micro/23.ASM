TITLE    F_n
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
        MOV CX,N-1
        MOV word ptr [SI],01H
        MOV word ptr [SI+2],02H
	MOV word ptr [SI+4],03H	 
        CALL FN
        RET
MAIN    ENDP
FN      PROC    NEAR
        DEC cx
	CMP CX,0
        JZ asd
        MOV AX,[SI]
        ADD AX,[SI+2]
	SUB AX,[SI+4]
        MOV DX,AX
        MOV BX,[SI+2]
        MOV [SI],BX
        MOV BX,[SI+4]
	MOV [SI+2],BX
	MOV [SI+4],AX
        CALL FN
asd:     RET
FN      ENDP
CODE_S  ENDS
END     MAIN

