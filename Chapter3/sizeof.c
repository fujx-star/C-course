// sizeof.c
// sizeof关键字的基础使用：判断数据类型占用的字节数
#include <stdio.h>

int main() {

   printf("size of short: %llu\n", sizeof(short));
   printf("size of int: %llu\n", sizeof(int));
   printf("size of long: %llu\n", sizeof(long));
   printf("size of long long: %llu", sizeof(long long));

   return 0;

}
// 输出
// size of short: 2
// size of int: 4
// size of long: 4
// size of long long: 8

// sizeof关键字得到的类型实际上是无符号整数，具体类型编译时VS会提示
