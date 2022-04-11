#include <stdio.h>

int main(void) {
    signed char x = -10; // 0b1111_0110
    unsigned char y = (unsigned char) x; // 0b1111_0110
    // 类型强转不会影响底层数据的实际存储方式
    printf("x=%d,y=%d\n", x, y);
    
    int a = -10;
    unsigned int b = 1;
    if (a < b) {
        printf("a < b");
    } else {
        printf("a >= b"); // a发生隐式转换，来到这个分支
    }

    return 0;
}