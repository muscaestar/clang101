int main() {
    int a = 10;
    if (a <= 10) {
        int b = 10;
    }

    a = 11;

    return 0;
}

//    (gdb) disass /r
//            Dump of assembler code for function main():
//    0x00000000004004d6 <+0>:	55	push   %rbp
//    0x00000000004004d7 <+1>:	48 89 e5	mov    %rsp,%rbp
//    => 0x00000000004004da <+4>:	c7 45 f8 0a 00 00 00	movl   $0xa,-0x8(%rbp)
//    0x00000000004004e1 <+11>:	83 7d f8 0a	cmpl   $0xa,-0x8(%rbp)
//    0x00000000004004e5 <+15>:	7f 07	jg     0x4004ee <main()+24>
//    0x00000000004004e7 <+17>:	c7 45 fc 0a 00 00 00	movl   $0xa,-0x4(%rbp)
//    0x00000000004004ee <+24>:	c7 45 f8 0b 00 00 00	movl   $0xb,-0x8(%rbp)
//    0x00000000004004f5 <+31>:	b8 00 00 00 00	mov    $0x0,%eax
//    0x00000000004004fa <+36>:	5d	pop    %rbp
//    0x00000000004004fb <+37>:	c3	retq
//    End of assembler dump.