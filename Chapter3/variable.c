// variable.c
// 使用一个变量
#include <stdio.h>

int main() {

    int a;    // 定义变量
    a = 1;    // 给变量a赋初始值
    printf("the value of a: %d\n", a);    // 打印出a的值

    int b = 2;    // 定义变量b的同时给变量b赋值为2
    b = 1;    //改变变量b的值
    printf("the value of b: %d", b);    // 打印出b的值

    return 0;

}
// 输出
// the value of a: 1
// the value of b: 1