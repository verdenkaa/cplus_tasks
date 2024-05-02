include emu8086.inc
org 100h

.DATA
MASS DW 12, 2, 3, 7, 12
LEN DW 5
DEFINE_SCAN_NUM
DEFINE_PRINT_STRING
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS
DEFINE_PTHIS
DEFINE_CLEAR_SCREEN



.CODE
LEA BX, MASS
MOV CX, LEN
MOV AX, 0
MOV si, 0
mov dx, 12


BEG: 
    CMP MASS[si], dx
    JE YES
    JMP NO
YES: 
    ADD AX, 1
    INC si
    INC si
    LOOP BEG
    JMP END
NO:  
    INC si
    INC si
    LOOP BEG
    JMP END

END:
CALL pthis
DB 13, 10, 'Otvet: ', 0
CALL print_num ; ???? ????? ? AX.
RET 


