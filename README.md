# Clang 101

## 汇编相关
- CPU字的角度：32位的机器用x86汇编， intel x86; 64位的机器用x64汇编，AMD x64
- 从指令集的角度： 复杂指令集CISC，pc用；极简指令集RISC，物联设备，手持设备用
  - 指令集就这两种: CISC, RISC
- 从风格的角度： windows上是MASM(CISC); Unix系用NASM风格(CISC)，新的Mac M1用ARM汇编风格(RISC)
  - MASM和NASM底层硬编码是一样的，汇编不一样

### 寄存器
范式：r开头是64位汇编，e开头是32位
#### 常用寄存器
- rax 作为函数返回值
- rcx 1. 循环次数 2.this指针
- rsp 栈顶指针, 函数的活动返回
- rbp 栈底指针
- rip 程序计数器
- rdi 数据拷贝, 目标
- rsi 数据拷贝，源

### 内存
#### 全局变量
- 数据宽度：byte、word(2字节)、dword(4字节)、qword(8字节)
- 基本操作: mov

#### 局部变量
- 基本操作： mov, push, pop

#### 栈
- 特殊寄存器： esp栈顶、ebp栈底
- push本质： sub esp, 4; mov dword ptr [esp], eax
- pop本质： mov eax, [esp]; add esp, 4