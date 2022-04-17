xor eax,eax
mov eax,10
cmp eax,0
jng whilea
sub eax,1
whilea:

xor ebx,ebx
mov ebx,5
whileb:
sub ebx,1
cmp ebx,0
jg whileb

xor ecx,ecx
startfor:
cmp ecx,8
jl endfor
add ebx,1
add ecx,1
jmp startfor
endfor:
