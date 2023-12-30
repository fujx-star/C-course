//// digits.c
//// 利用格式控制符控制浮点类型的输出数字位数
//#include <stdio.h>
//
//int main(void)
//{
//
//    float number = 3852.99;
//    printf("The number: %f\n", number);
//
//    // %.nf限制保留的小数位数，四舍五入法
//    printf("The number with 1 decimal places:%.1f\n", number);
//    printf("The number with 4 decimal places:%.4f\n", number);
//
//    // %m.nf限制输出总长度和保留的小数位数
//    // 先保留足够的小数位数，如果总长度超出m则按照原来的整数部分输出
//    printf("The number with a total width of 3 and 1 decimal places:%3.1f\n", number);
//    printf("The number with a total width of 10 and 4 decimal places:%10.4f\n", number);
//    printf("The number with a total width of 3 and 4 decimal places:%3.4f\n", number);
//    printf("The number with a total width of 10 and 1 decimal places:%10.1f\n", number);
//
//    // %0m.nf与%m.nf的区别是把不够补的空格替换成0
//    printf("The number with a total width of 10 and 4 decimal places:%010.4f\n", number);
//    printf("The number with a total width of 10 and 1 decimal places:%010.1f", number);
//
//    return 0;
//
//}
//// 输出
//// The number : 3852.989990
//// The number with 1 decimal places:3853.0
//// The number with 4 decimal places:3852.9900
//// The number with a total width of 3 and 1 decimal places:3853.0
//// The number with a total width of 10 and 4 decimal places: 3852.9900
//// The number with a total width of 3 and 4 decimal places:3852.9900
//// The number with a total width of 10 and 1 decimal places:    3853.0
//// The number with a total width of 10 and 4 decimal places:03852.9900
//// The number with a total width of 10 and 1 decimal places:00003853.0