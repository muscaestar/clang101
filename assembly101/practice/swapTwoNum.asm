xor eax,eax
mov eax,10

xor ebx,ebx
mov ebx,100

xor ecx,ecx

cmp eax,ebx
jng retb
mov ecx,eax
retb:
mov ecx,ebx