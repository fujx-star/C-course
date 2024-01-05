// relational_operators.c
// 关系运算符
#include <stdio.h> 

int main()
{

	int a = 25, b = 5;

	// C89标准没有布尔类型，C语言把false视为0，把true视为1
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b: %d\n", a >= b);
	printf("a <= b: %d\n", a <= b);
	printf("a == b: %d\n", a == b);
	printf("a != b : %d", a != b);

	return 0;

}
// 输出
// a > b : 1
// a < b : 0
// a >= b : 1
// a <= b : 0
// a == b : 0
// a != b : 1