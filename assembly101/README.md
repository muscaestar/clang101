# Note

## GDB Command

``` 
# 查看汇编码
disas
disass

# 查看汇编码, 显示硬编码
disass /r 
disass /sr
disass /mr

# 单步调试时显示汇编指令
display /i $pc

# 切换显示方式
set disassembly-flavor intel
set disassembly-flavor att

# 查看寄存器
info register
i r
```