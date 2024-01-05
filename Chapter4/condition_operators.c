// condition_operators.c
// C语言条件运算符的使用
#include <stdio.h>

int main() {

    int a = 5;
    int b = 10;
    int c = 11;

    printf("a = %d", (a == 5) ? b : c);

    return 0;

}
// 输出
// a = 10