// priority.c
// C语言运算符优先级
#include <stdio.h>

int main() {

	// 赋值运算符肯定优先级最低，算术运算符和关系运算符都大于条件运算符
	// 若关系运算符>算术运算符，a = 3
	// 若算术运算符>关系运算符，a = 0
	int a = 1 ? 3 > 1 + 2 : 2;

	printf("a = %d", a);

	return 0;

}
// 输出
// a = 0
