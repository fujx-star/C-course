// swap2.c
// 两数交换方法2
#include <stdio.h>

int main() {

    int a, b;
    scanf("a=%d b=%d", &a, &b);

    a += b;
    b = a - b;
    a = a - b;
    printf("a=%d b=%d", a, b);

    return 0;

}