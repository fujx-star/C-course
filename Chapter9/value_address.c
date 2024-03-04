// value_address.c
// 传值与传址
#include <stdio.h>

void swap(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap: a = %d, b = %d\n", *a, *b);

}

int main() {

    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;

}
// 输出
// Before swap: x = 5, y = 10
// Inside swap: a = 10, b = 5
// After swap: x = 10, y = 5