;; 8086 ALP to find odd even number, OddEvenNumber.asm
; In this program, we will initialise
; 1 number in memory location, and check if it is odd or even
; Registers used: AX. CX
; Ports used:

DATA SEGMENT
    NUM   DB ?    ;NUMBER OF NUMBERS
DATA ENDS

CODE SEGMENT
    ASSUME CS:CODE, DS:DATA
    
    START:  MOV AX, @DATA   ;LOAD DAYA SEGMENT
            MOV DS, AX      ;INITIALISE DATA SEGMENT

            MOV AH, 01H     ;INPUT
            INT 21H         ;INPUT INTERRUPT
            AND AL, 0FH     ;BCD FORM

            MOV N, AL       ;STORE VALUE OF N
            AND AL, 01H     ;GET LEAST SIGNIFICANT BIT

            CMP AL, 01      ;COMPARE LAST DIGIT TO 1
            JE EQUAL        ;IF EQUAL
            JMP NEQUAL    ;IF NOT EQUAL

    EQUAL:  MOV DL, 1       ;IS ODD
            JMP PROGEND     ;

    NEQUAL: MOV DL, 0       ;IS ODD
            JMP PROGEND     ;

    PROGEND:ADD DL, 48      ;ASCII FORM
            MOV AH, 02H     ;
            INT 21H         ;
            
CODE ENDS
END START