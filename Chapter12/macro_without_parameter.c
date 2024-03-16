// macro_without_parameter.c
// 不带参数的宏定义
#include <stdio.h>

#define PRINT_MSG "Hello, World!"
#define PI 3.14159265359

int main() {

    printf("%s\n", PRINT_MSG);
    printf("PI = %f\n", PI);

    return 0;

}
// 输出
// Hello, World!
// PI = 3.141593