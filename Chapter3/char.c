// char.c
// char类型变量的两种输出方式
#include <stdio.h>

int main() {

   char a = '1';
   char b = '$';
   char c = ' ';

   // 方式一：使用putchar函数输出
   putchar(a);
   putchar(c);
   putchar(b);
   putchar('\n');

   // 方式二：使用printf函数输出
   printf("%c%c%c", a, c, b);

   return 0;

}
// 输出
// 1 $ 
// 1 $
