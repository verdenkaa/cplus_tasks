.MODEL SMALL
.STACK 100H

.DATA
    message DB "Number: $"
    num DB 7  ; ���� ����� ��� ������

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    ; ������� ���������
    MOV AH, 09H
    LEA DX, message
    INT 21H

    ; ������� �����
    MOV DL, num
    ADD DL, 30H  ; ����������� ����� � ASCII-��� �����
    MOV AH, 02H
    INT 21H

    ; ��������� ���������
    MOV AH, 4CH
    INT 21H
MAIN ENDP

END MAIN
