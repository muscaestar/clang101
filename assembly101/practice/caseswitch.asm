xor eax,eax
mov eax,10
cmp eax,1
jne endone
jmp endswitch
endone:
cmp eax,10
jne endtwo
inc eax
jmp endswitch
endtwo:
dec eax
endswitch: