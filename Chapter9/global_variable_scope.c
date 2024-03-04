// global_variable_scope.c
// 全局变量作用域
#include <stdio.h>

int gvar = 10; // 全局变量

int main() {

	int lvar = 20; // 局部变量
	printf("lvar = %d\n", lvar); // 输出局部变量

	gvar = 30; // 修改全局变量
	printf("gvar = %d", gvar); // 输出全局变量

	return 0;

}
// 输出
// lvar = 20
// gvar = 30