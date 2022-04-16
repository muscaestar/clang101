#!/bin/bash
nasm $1.asm -o $1.bin -l $1.lst
sudo dd if=$.bin of=$BOCHS_IMGS/debug.img bs=512 count=1 conv=notrunc
bochs -q -f ~/.bochsrc -rc debug.cfg
