; 8086 ALP to add 2 numbers, addition.asm
; In this program, we will initialise
; 2 numbers in memory location & add them
; Store sum of numbers in memory
; Registers used: AX. BX
; Ports used:

DATA SEGMENT
    N1  db 05H   ;number 1
    N2  db 07H   ;number 2
    SUM db ?     ;sum to store number 1 & 2
DATA ENDS
    
CODE SEGMENT
    ASSUME CS:CODE, DS:DATA

    START:  MOV AX, @DATA   ;Initialise
            MOV DS, AX      ;Data segment initialised
            MOV AL, N1      ;Load N1 into AL
            ADD AL, N2      ;Add N2 to AL
            MOV SUM, AL     ;Move AL value to SUM
CODE ENDS

END START
