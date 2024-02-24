// variable_address.c
// 取地址运算符的使用
#include <stdio.h>

int main() {

	int x;
	printf("Before assignment, the address of x : %p\n", &x);
	x = 3;
	printf("After assignment, the address of x : %p", &x);

	return 0;

}
// 输出
// Before assignment, the address of x : 00000040122FFA04
// After assignment, the address of x : 00000040122FFA04