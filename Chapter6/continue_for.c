// continue_for.c
// continue在for循环中的使用
#include <stdio.h>

int main()
{

    int i;

    for (i = 1; i < 6; i++) {
        if (i == 3) {
            continue;
        }
        printf("%d", i);
    }

    return 0;

}
// 输出
// 1245

// 在for循环中使用continue只会跳过剩余的循环体，第二个分号后面的语句不会跳过