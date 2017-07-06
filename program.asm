.MODEL Tiny

.DATA
mensaje1    db "Desea Continuar (s/n) =>$"
mensaje2    db 13,10,"Selecciono la opcion SI $"
mensaje3    db 13,10,"Selecciono la opcion NO $"

.CODE
org 100h

inicio:
mov dx,OFFSET mensaje1
mov ah,9
int 21h

leer:
mov ah,8
int 21h

cmp al,115
je opcionsi
cmp al,110
je opcionno
jmp leer

opcionsi:
mov dx,OFFSET mensaje2
mov ah,9
int 21h
mov dl,al
mov ah,02
int 21h
jmp salir

opcionno:
mov dx,OFFSET mensaje3
mov ah,9
int 21h
mov dl,al
mov ah,02
int 21h

salir:
mov ax,4c00h
int 21h
end inicio
