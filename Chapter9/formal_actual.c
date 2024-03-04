// formal_actual.c
// 形参与实参的关系
#include <stdio.h>

void swap(int a, int b) {

    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap : a = %d, b = %d\n", a, b);

}

int main() {

    int x = 10, y = 20;

    printf("Before swap : x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swap : x = %d, y = %d", x, y);

    return 0;

}
// 输出
// Before swap : x = 10, y = 20
// Inside swap : a = 20, b = 10
// After swap : x = 10, y = 20
