// logical_operators.c
// C语言逻辑运算符的使用
#include <stdio.h> 

int main()
{

	int a = 1, b = 0;

	// 进行逻辑运算时会把非0的操作数视为1（即true）
	printf("a && b : %d\n", a && b);
	printf("a || b : %d\n", a || b);
	printf("!a: %d", !a);

	return 0;

}
// 输出
// a && b : 0
// a || b : 1
// !a : 0