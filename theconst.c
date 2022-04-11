#include <stdio.h>

int main(void) {
    const int vx = 10;
    const int vy = 10;
    int arr[vx] = {1, 2, 3}; // 有错，使用非常量表达式定义定长数组
    switch(vy) {
        case vx: { // 有错，非常量表达式用于case语句
            printf("Value matched!");
            break;
        }
    }
}
// 以上错误不影响编译执行