// struct_nest.c
// 结构体嵌套
#include <stdio.h>

struct outer {
    int a;
    struct inner {
        int b;
        char c;
    } i;
};

int main() {

    struct outer o = {10, 20, 'x'};
    printf("a = %d, b = %d, c = %c", o.a, o.i.b, o.i.c);

    return 0;

}
// 输出
// a = 10, b = 20, c = x