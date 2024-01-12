// for.c
// for的用法
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
// 输入：
// 10
// 输出：
// sum = 55

// 输入：
// 0
// 输出：
// sum = 0