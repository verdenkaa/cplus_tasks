include emu8086.inc
ORG 100h
;AX-3B if x>=6
;CX + D if x<6

.DATA
X DW 7
A DW 4
B DW 1
C DW 3
D DW 4
DEFINE_SCAN_NUM
DEFINE_PRINT_STRING
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS ; ????????? ??? print_num.
DEFINE_PTHIS
DEFINE_CLEAR_SCREEN

.CODE
MOV AX, X
MOV BX, 6

CMP AX, BX  ;if
JL lower    ; if <
  
JMP upper  ; else (>=)
 
lower:      
MOV AX, X
MOV CX, C

MUL CX 
MOV DX, D
ADD AX, DX 
RET

upper:       
MOV AX, A
MOV BX, X
MUL BX

MOV BX, B
sub AX, BX
sub AX, BX
sub AX, BX
 

VAG: GOTOXY 10,8
CALL pthis
DB 13, 10, 'Otvet: ', 0
CALL print_num ; ???? ????? ? AX.
RET 