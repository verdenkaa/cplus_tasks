org 100h

.DATA
MASS DW 01100110b, 0001100b, 00000000b, 00000000b, 00000000b, 00000000b, 00000000b, 00000000b 
LEN DW 8




.CODE
MOV CX, LEN
MOV si, 0
   
mov ax, MASS[si]


RET 

