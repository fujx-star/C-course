// format.c
// 利用格式控制符控制浮点类型的输出形式
#include <stdio.h>

int main() {

   float a = 0.302;
   float b = 128.101;
   double c = 123;
   float d = 112.64E3;
   double e = 0.7623e-2;
   float f = 1.23002398;

   printf("a = %e\n", a);
   printf("b = %f\n", b);
   printf("c = %lf\n", c);
   printf("d = %lE\n", d);
   printf("e = %lf\n", e);
   printf("f = %f\n", f);

   return 0;

}
// 输出
// a = 3.020000e-001
// b = 128.100998
// c = 123.000000
// d = 1.126400E+005
// e = 0.007623
// f = 1.230024

// 按指数形式输出时，底数规则类似数学中的科学计数法
// 十进制形式和指数形式的底数都默认保留6位小数，不足6位补0，超出6位四舍五入
