// while.c
// while的用法
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
// 输入：
// 10
// 输出：
// sum = 55

// 输入：
// 0
// 输出：
// sum = 0