include emu8086.inc    
org 100h

.DATA
DEFINE_SCAN_NUM
DEFINE_PRINT_STRING
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS
DEFINE_PTHIS
DEFINE_CLEAR_SCREEN
A DW 2
B DW 10
H DW 4
Y DW 0
 
;Y=2X+3
.CODE
mov cx, A
mov dx, H


while:
        mov ax, cx
        mov bx, 2 
        mul bx 
        mov dx, H
        add ax, 3
        add Y, ax
        
        mov bx, B
        add cx, dx
        cmp cx,bx 
        jna while 


mov ax, Y  


CALL pthis
DB 13, 10, 'Otvet: ', 0
CALL print_num ; ???? ????? ? AX.
RET 
RET
