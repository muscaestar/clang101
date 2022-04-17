start:
mov eax,10
mov ebx,10
cmp eax,ebx
jne noeq
mov eax,100
noeq:
mov eax,11

again:
    jmp again
current:
times 510-(current-start) db 0
db 0x55,0xaa
