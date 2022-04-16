start:
xor eax,eax
mov eax,1
mov ecx,2
add eax,ecx

again:
    jmp again
current:
times 510-(current-start) db 0
db 0x55,0xaa
