ORG 100h

;X=6(A-2B+C/4)+10
.DATA
A DW 3
B DW 1
C DW 9
message DB "X=$"
            
       
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

mov     ah, 02h
int 10h 




RET             ;Stop the program




