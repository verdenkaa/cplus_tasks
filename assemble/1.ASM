include emu8086.inc
ORG 100h

;X=6(A-2B+C/4)+10
.DATA
A DW 2
B DW 1
C DW 4
DEFINE_SCAN_NUM
DEFINE_PRINT_STRING
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS ; ????????? ??? print_num.
DEFINE_PTHIS
DEFINE_CLEAR_SCREEN 
            
       
.CODE       
MOV CX, C   ; declare C

mov AX, CX
mov BX, 4
div BX      ; c/4
mov CX, AX  ; save to cl

MOV AX, A   ; declare A 
MOV BX, B   ; declare B 


SUB AX, BX  ;AX=AX-BX
SUB AX, BX  ;AX=AX-BX

add AX, CX  ;A + C/4

mov BX, 6   ;add number 6

mul BX      ;6A

add AX, 10  ;+10

VAG: GOTOXY 10,8
CALL pthis
DB 13, 10, 'Otvet: ', 0
CALL print_num ; ???? ????? ? AX.
RET 






