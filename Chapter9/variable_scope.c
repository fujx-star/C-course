// variable_scope.c
// 变量的作用域
#include <stdio.h>

int main() {

	for (int i = 0; i < 1; i++) {
		printf("%d\n", i); // 正确，在i的作用域内
	}

	//printf("%d\n", i); // 错误，i未定义

	return 0;

}