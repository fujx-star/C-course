// assignment_operators.c
// C语言赋值运算符的使用
#include <stdio.h> 

int main()
{

	int a = 25, b = 5;

	a = b;
	printf("a = %d\n", a);
	a += b;
	printf("a = %d\n", a);
	a -= b;
	printf("a = %d\n", a);
	a *= b;
	printf("a = %d\n", a);
	a /= b;
	printf("a = %d\n", a);
	a %= b;
	printf("a = %d\n", a);
	a &= b;
	printf("a = %d\n", a);
	a ^= b;
	printf("a = %d\n", a);
	a |= b;
	printf("a = %d\n", a);
	a <<= b;
	printf("a = %d\n", a);
	a >>= b;
	printf("a = %d\n", a);

	return 0;

}
// 输出
// a = 5
// a = 10
// a = 5
// a = 25
// a = 5
// a = 0
// a = 0
// a = 5
// a = 5
// a = 160
// a = 5
