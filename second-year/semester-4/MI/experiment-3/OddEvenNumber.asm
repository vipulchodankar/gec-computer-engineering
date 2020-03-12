;; 8086 ALP to find odd even number, OddEvenNumber.asm
; In this program, we will initialise
; 1 number in memory location, and check if it is odd or even
; Registers used: AX. CX
; Ports used:

DATA SEGMENT
    ITEMS_MSG DB 13, 10, "ENTER NUMBER OF ELEMENTS", '$'
    ITEMS DB    ?       ;NUMBER OF ELEMENTS
    NUM   DB    ?       ;NUMBER OF NUMBERS
    EVEN  DB    13, 10, "EVEN", '$'  ;EVEN OUTPUT
    ODD   DB    13, 10, "ODD", '$'   ;ODD OUTPUT
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
    
    START:      MOV AX, @DATA   ;LOAD DAYA SEGMENT
                MOV DS, AX      ;INITIALISE DATA SEGMENT

                LEA DX, ITEMS_MSG;LOAD OFFSET TO PRINT
                MOV AH, 09H     ;OUTPUT
                INT 21H         ;OUTPUT INTERRUPT

                MOV AH, 01H     ;INPUT
                INT 21H         ;INPUT INTERRUPT
                AND AL, 0FH     ;BCD FORM
                MOV ITEMS, AL   ;STORE VALUE OF ITEMS
                MOV CX, ITEMS   ;STORE ITEMS INTO CX, FOR LOOPING   

                NEWLINE

    LOOP1:      MOV AH, 01H     ;INPUT
                INT 21H         ;INPUT INTERRUPT
                AND AL, 0FH     ;BCD FORM
                MOV NUM, AL     ;STORE VALUE OF N
                AND AL, 01H     ;GET LEAST SIGNIFICANT BIT

                CMP AL, 01      ;COMPARE LAST DIGIT TO 1
                JE EQUAL        ;IF EQUAL
                JMP NEQUAL      ;IF NOT EQUAL

    EQUAL:      LEA DX, ODD     ;IS ODD
                JMP PROGEND     ;JUMP TO PROGEND

    NEQUAL:     LEA DX, EVEN    ;IS EVEN
                JMP PROGEND     ;JUMP TO PROGEND

    PROGEND:    MOV AH, 09H
                INT 21H
                NEWLINE
                LOOP LOOP1
            
CODE ENDS
END START