start:
mov ax,0xb800
mov ds,ax

mov byte [0x00],'K'
mov byte [0x01],0x0e

mov byte [0x02],'E'
mov byte [0x03],0x0e

again:
    jmp again
current:
times 510-(current-start) db 0
db 0x55,0xaa
