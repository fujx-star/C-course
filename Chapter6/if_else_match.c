// if_else_match.c
// if和else的匹配规则
#include <stdio.h>

int main() {

    int x = 5;

    if (x < 6) {
        printf("x is less than 6.\n");
    }
    if (x < 4) {
        printf("x is less than 4.\n");
    }
    else {
        printf("x is larger than or equal to 4.");
    }

    return 0;

}
// 输出：
// x is less than 6
// x is larger than or equal to 4

// 只有匹配到一起的if和else的条件才是互斥的