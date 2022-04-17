# 一些练习

## 寄存器专题
### 实现两个数字的交换 swapTwoNum
```c
int a = 10, b = 100, ret;
if (a > b) {
	ret = a;
}

ret = b;
```

### 循环结构 loopstruct
```c
int a = 10;
while(a > 0) {
	a--;
}

int b = 5;
do {
    b--;
} while(b > 0);
    
for (int c = 0; c < 8; c++) {
    b++;
}
```
#### 总结
最佳实践：循环类do...while结构只要一个jump；while for结构在do...while的基础结构上多加一个jump
do...while结构：
```
start: add xx #循环体内逻辑
# cmp+jump循环判断条件
cmp xx 
jne start
```

while和for结构:
```
jump thecmp #jump到循环判断
start: add xx #循环体内逻辑
# cmp+jump循环判断条件
thecmp: cmp xx 
jne start
```

### CaseSwitch caseswitch
```c
int a = 10;
switch(a) {
    case 1: break;
    case 10: a++;
}
```
