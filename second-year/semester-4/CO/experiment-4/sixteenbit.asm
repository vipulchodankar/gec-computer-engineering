;TASM program to add 2 16-bit numbers
.model Small
.data
;s1 dw 13, 10, "Enter 1st no", '$'
;s2 dw 13, 10, "Enter 2nd no", '$'
s1 dw 0111h
s2 dw 0234h
s3 db 13, 10, "Answer", '$'
num dw ?

.code
mov ax, @data
mov ds, ax
main proc
extrn readsint :near, writesint :near   ;io.asm

; lea dx, s1
; mov ah, 09h
; int 21h
; call readsint
; mov num, ax

; lea dx, s2
; mov ah, 09h
; int 21h
; call readsint

mov ax, 0
add ax, s1
add ax, s2

mov bx, ax

mov dx, offset s3
mov ah, 09
int 21h
mov ax, bx
call writesint

mov ah, 4ch
int 21h
endp
end
