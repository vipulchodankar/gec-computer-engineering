; 8086 ALP to evaluate an expression, expression.asm
; let expression be 'X+X+Y-Z'
; In this program, we will initialise
; 2 numbers in memory location & add them
; Store sum of numbers in memory
; Registers used: AX. BX
; Ports used:

DATA SEGMENT
    X   db ?    ;variable X
    Y   db ?    ;variable Y
    Z   db ?    ;variable Z
    SUM db 0    ;result variable
DATA ENDS
    
CODE SEGMENT
    ASSUME CS:CODE, DS:DATA

    START:  MOV AX, @DATA   ;Initialise
            MOV DS, AX      ;Initialise Data segment
            MOV AH, 01H     ;Set input for INT21H
            
            INT 21H         ;will take user input and store value in AL
            AND AL, 0FH     ;convert AL to BCD form
            MOV X, AL       ;will move value from AL to X
            ; value of X successfully stored
            
            INT 21H         ;will take user input and store value in AL
            AND AL, 0FH     ;convert AL to BCD form
            MOV Y, AL       ;will move value from AL to Y
            ; value of Y successfully stored

            INT 21H         ;will take user input and store value in AL
            AND AL, 0FH     ;convert AL to BCD form
            MOV Z, AL       ;will move value from AL to Z
            ; value of Z successfully stored
                                  
            ; x + x + y - z                                  
            MOV AL,  X      ;  move x into AL
            MOV SUM, AL      ; sum = x
            ADD SUM, AL      ; sum = x + x
            MOV AL, Y       ; move y into AL
            ADD SUM, AL      ; sum = x + x + y
            MOV AL, Z       ; move Z into AL
            SUB SUM, AL      ; sum = x + x + y - z
            MOV DL, SUM     ; move sum to DL for printing
            ADD DL, 48      ; Convert to ASCII Number

            MOV AH, 02H     ; For output
            INT 21H         ; IO Interrupt
CODE ENDS

END START
