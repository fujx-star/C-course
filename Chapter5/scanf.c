// scanf.c
// scanf()的功能
#include <stdio.h>

int main() {

    int a = 0;
    double b = 0.0;
    char c = 'a';

    int d = scanf("%d %lf %c", &a, &b, &c);
    
    printf("%d%.0lf%c\n", a, b, c);
    printf("%d + %.0lf = %c\n", a, b, c);
    printf("%d", d);
    
    return 0;

}
// 输入
// 1 2 3
// 输出
// 123
// 1 + 2 = 3
// 3
