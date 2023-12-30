// int.c
// int的表示范围
#include <stdio.h>

int main() {

    // 将a的值赋为int类型能表示的最大值
    int a = 2147483647;
    printf("before: a = %d\n", a);
    a = a + 1;    // 将a的值加1
    printf("after: a = %d", a);
    return 0;

}
// 输出
// before: a = 2147483647
// after : a = -2147483648
