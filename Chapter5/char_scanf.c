//// char_scanf.c
//// 输入数据的类型是字符类型时的意外情况
//#include <stdio.h>
//
//int main() {
//
//    int a = 0;
//    double b = 0.0;
//    char c = 'a';
//
//    // 格式控制字符串中的格式控制符之间没有空格间隔开，此时字符变量c的输入出现问题
//    scanf("%d%lf%c", &a, &b, &c);
//
//    printf("%d%.0lf%c\n", a, b, c);
//    printf("%d + %.0lf = %c", a, b, c);
//
//    return 0;
//
//}
//// 输入（此时变量c的值被赋成空格）
//// 1 2 3
//// 输出
//// 12
//// 1 + 2 =