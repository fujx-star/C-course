// switch_break.c
// case中使用break
#include <stdio.h>

int main() {

    int x = 0;

    switch (x) {
    case 0:
        printf("x = 0");
        break;
    case 1:
        printf("x = 1");
        break;
    }

    return 0;

}
// 输出：
// x = 0

// 通常情况下，为了使程序表达的含义清晰明确，我们需要使用break使得不同情况下的处理不同