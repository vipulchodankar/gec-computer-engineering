; 8086 ALP to add n numbers and find average, average.asm
; In this program, we will initialise
; n numbers in memory location, add them and find average
; Registers used: AX. CX, DX
; Ports used:

DATA SEGMENT
    N   DW ?    ;NUMBER OF NUMBERS
    SUM DW 0    ;SUM OF N NUMBERS
    AVG DB ?    ;AVERAGE OF N NUMBERS
DATA ENDS

CODE SEGMENT
    ASSUME CS:CODE, DS:DATA
    
    NEWLINE MACRO       ;MACRO TO PRINT A NEW LINE
        MOV ah, 02h     ;PRINT
        MOV dl, 10      ;NEW LINE ASCII
        INT 21h         ;PRINT INTERRUPT
        MOV dl, 13      ;CARRIAGE RETURN ASCII
        INT 21h         ;PRINT INTERRUPT
    ENDM

    START:  MOV AX, @DATA   ;LOAD DAYA SEGMENT
            MOV DS, AX      ;INITIALISE DATA SEGMENT

            MOV AH, 01H     ;INPUT
            INT 21H         ;INPUT INTERRUPT
            AND AL, 0FH     ;BCD FORM
            MOV AH, 0       ;SET  AH TO 0
            MOV N, AX       ;STORE VALUE OF N

            MOV CX, N       ;COUNTER TILL N NUMBERS

    INPUT:
            MOV AH, 01H     ;INPUT
            INT 21H         ;INPUT INTERRUPT
            AND AL, 0FH     ;BCD FORM
            MOV AH, 0       ;SET  AH TO 0
            ADD SUM, AX     ;KEEP ADDING INPUTS
            LOOP INPUT      ;LOOP TILL N

            MOV AX, SUM     ;MOVE SUM TO AX
            DIV N           ;DIVIDE SUM BY N
            MOV AVG, AL     ;MOV VALUE OF AVERAGE TO AVG

            ;NEWLINE
            MOV AH, 02H     ;OUTPUT
            MOV DX, SUM     ;STORE SUM IN DL FOR PRINTING
            ADD DL, 48      ;CONVERT TO ASCII
            INT 21H         ;OUTPUT INTERRUPT

            ;NEWLINE
            MOV DL, AVG     ;STORE AVG IN DL FOR PRINTING
            ADD DL, 48      ;CONVERT TO ASCII
            INT 21H         ;OUTPUT INTERRUPT
CODE ENDS
END START