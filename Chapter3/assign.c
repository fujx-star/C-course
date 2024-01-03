// assign.c
// 不同数据类型变量之间的赋值
#include <stdio.h>

int main() {

   int a = 65536;

   int b = 0;
   // 将变量a的值赋给同是int类型的变量b
   b = a;
   printf("b = %d\n", b);

   short c = 0;
   // 将变量a的值赋给short类型的变量c
   c = a;
   printf("c = %hd", c);

   return 0;

}
// 输出
// b = 65536
// c = 0

// 变量a的值是short类型的变量存储不下的，因此c的值与我们的预期不一致
// 大数赋给表示范围小的数据类型的变量超出其表示范围时，只会存数据的低位
