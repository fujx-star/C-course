// macro_parameter.c
// 带参数的宏定义
#include <stdio.h>

#define MACRO1(a,b) a * 2 + b
#define MACRO2(a,b) (a * 2 + b)
#define MACRO3(a,b) (((a) * 2) + (b))

int function(int a, int b) {
    return a * 2 + b;
}

int main() {

    int x = 10, y = 5;

    int z1 = MACRO1(x + 1, y) * 3;
    int z2 = MACRO2(x + 1, y) * 3;
    int z3 = MACRO3(x + 1, y) * 3;

    printf("MACRO1(%d, %d) * 3 = %d\n", x, y, z1);
    printf("MACRO2(%d, %d) * 3 = %d\n", x, y, z2);
    printf("MACRO3(%d, %d) * 3 = %d\n", x, y, z3);
    printf("function(%d, %d) * 3 = %d", x, y, function(x + 1, y) * 3);

    return 0;

}
// 输出
// MACRO1(10, 5) * 3 = 27
// MACRO2(10, 5) * 3 = 51
// MACRO3(10, 5) * 3 = 81
// function(10, 5) * 3 = 81