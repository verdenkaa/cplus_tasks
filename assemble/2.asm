ORG 100h
;AX-3B if x>=6
;CX + D if x<6

.DATA
X DW 7
A DW 4
B DW 1
C DW 3
D DW 4

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
 

RET