// do_while.c
// do...while���÷�
#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    int sum = 0;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= x);
    printf("sum = %d", sum);

    return 0;

}
// ���룺
// 10
// �����
// sum = 55

// ���룺
// 0
// �����
// sum = 1