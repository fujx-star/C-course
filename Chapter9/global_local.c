// global_local.c
// 全局变量和局部变量
#include <stdio.h>

int var = 10;

int main() {

	printf("var = %d\n", var);

	int var = 20;

	printf("var = %d", var);

	return 0;

}
// 输出
// var = 10
// var = 20