// for.c
// for���÷�
#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    int sum = 0;
    for (int i = 1; i <= x; i++) {
        sum += i;
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