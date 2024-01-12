// if_else.c
// if...else的用法：判断变量是奇数还是偶数
#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("The number is even.");
    }
    else {
        printf("The number is odd.");
    }

    return 0;

}
// 输入：
// 4
// 输出：
// The number is even.

// 输入：
// 3
// 输出：
// The number is odd.