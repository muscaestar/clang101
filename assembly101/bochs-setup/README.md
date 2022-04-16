# bochs 在ubuntu下的环境搭建笔记
目标：可以跑自己编写的汇编代码，并且能够单步调试，同时查看寄存器值

## 1. 软件安装
`$ sudo apt install bochs bochs-x nasm`

## 2. 创建虚拟软盘
`$ bximage` 创建一个fd，1.44M，命名为debug.img

## 2.1 环境配置
`$ export BOCHS_IMGS=XXXX`

## 3. bochs配置文件
```
# ~/.bochsrc
megs: 32

romimage: file=/usr/share/bochs/BIOS-bochs-latest
vgaromimage: file=/usr/share/bochs/VGABIOS-lgpl-latest

floppya: 1_44="$BOCHS_IMGS/debug.img", status=inserted

boot: floppy

log: $BOCHS_IMGS/bochs.log

mouse: enabled=0

#keyboard: keymap=/usr/share/bochs/keymaps/x11-pc-be.map
display_library: x, options="gui_debug"

```

## 4. 编写脚本：编译汇编，写入软盘，装载入bochs启动，断点在第一行汇编
```shell
#!/bin/bash
nasm $1.asm -o $1.bin -l $1.lst
sudo dd if=$1.bin of=$BOCHS_IMGS/debug.img bs=512 count=1 conv=notrunc
bochs -q -f ~/.bochsrc -rc $BOCHS_IMGS/debug.cfg
```

## 5. 启动
`$ ./basm.sh demo`

- c continue 跑到下个断点
- n next 单步调试