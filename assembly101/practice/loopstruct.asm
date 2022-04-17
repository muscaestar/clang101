xor eax,eax
mov eax,10
jmp cmpa
inwhile: sub eax,1
cmpa: cmp eax,0
jg inwhile

xor ebx,ebx
mov ebx,5
whileb: sub ebx,1
cmp ebx,0
jg whileb

xor ecx,ecx
jmp cmpc
inloop: add ebx,1
add ecx,1
cmpc: cmp ecx,8
jl inloop
