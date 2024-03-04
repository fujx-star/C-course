// nested_function.c
// 函数的嵌套
#include <stdio.h>

int add(int a, int b) {

    return a + b;

}

int multiply(int a, int b) {

    int res = 0;
    for (int i = 0; i < b; i++)
        res = add(res, a);

    return res;

}

int main() {

    int x = 2, y = 3;

    printf("%d", multiply(x, y));

    return 0;

}
// 输出
// 6