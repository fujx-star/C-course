// while.c
// while���÷�
#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    int sum = 0;
    int i = 1;
    while (i <= x) {
        sum += i;
        i++;
    }
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
// sum = 0