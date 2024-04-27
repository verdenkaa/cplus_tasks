.MODEL SMALL
.STACK 100H

.DATA
    message DB "Number: $"
    num DB 7  ; Ваше число для вывода

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    ; Выводим сообщение
    MOV AH, 09H
    LEA DX, message
    INT 21H

    ; Выводим число
    MOV DL, num
    ADD DL, 30H  ; Преобразуем число в ASCII-код цифры
    MOV AH, 02H
    INT 21H

    ; Завершаем программу
    MOV AH, 4CH
    INT 21H
MAIN ENDP

END MAIN
