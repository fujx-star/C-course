// swap1.c
// 两数交换方法1
#include <stdio.h>

int main() {

    int a, b, temp;
    scanf("a=%d b=%d", &a, &b);

    temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d", a, b);

    return 0;

}