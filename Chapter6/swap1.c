// swap1.c
// ������������1
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