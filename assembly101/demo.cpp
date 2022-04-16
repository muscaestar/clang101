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

//    (gdb) info register
//    rax            0x4004d6	4195542
//    rbx            0x0	0
//    rcx            0x0	0
//    rdx            0x7fffffffdc48	140737488346184
//    rsi            0x7fffffffdc38	140737488346168
//    rdi            0x1	1
//    rbp            0x7fffffffdb50	0x7fffffffdb50
//    rsp            0x7fffffffdb50	0x7fffffffdb50
//    r8             0x400570	4195696
//    r9             0x7ffff7de7ac0	140737351940800
//    r10            0x846	2118
//    r11            0x7ffff7a2d740	140737348032320
//    r12            0x4003e0	4195296
//    r13            0x7fffffffdc30	140737488346160
//    r14            0x0	0
//    r15            0x0	0
//    rip            0x4004da	0x4004da <main()+4>
//    eflags         0x246	[ PF ZF IF ]
//    cs             0x33	51
//    ss             0x2b	43
//    ds             0x0	0
//    es             0x0	0
//    fs             0x0	0
//    gs             0x0	0