// arithmetic_operations.c
// C语言中的算术运算符
#include <stdio.h> 

int main()
{

    int a = 25, b = 5;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    // 当整数除法除不尽时，a/b返回结果的整数部分
    printf("a / b = %d\n", a / b);
    // %%的格式控制符表示打印一个%，类似转义字符
    printf("a %% b = %d\n", a % b);
    printf("+a = %d\n", +a);
    printf("-a = %d\n", -a);
    printf("a++ = %d\n", a++);
    printf("a-- = %d", a--);

    return 0;

}
// 输出
// a + b = 30
// a - b = 20
// a * b = 125
// a / b = 5
// a % b = 0
// + a = 25
// - a = -25
// a++ = 25
// a-- = 26