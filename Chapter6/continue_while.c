// continue_while.c
// continue在while循环中的使用
#include <stdio.h>

int main()
{

    int i = 1;

    while (i < 6) {
        if (i == 3) {
            continue;
        }
        printf("%d", i);
        i++;
    }

    return 0;

}
// 程序会一直执行

// continue在while中作用相同，但由于变量i的自增语句在循环体中，所以也被跳过