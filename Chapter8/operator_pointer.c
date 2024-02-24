// operator_pointer.c
// 取值运算符的使用
#include <stdio.h>

int main() {

	int x = 0;
	printf("The value of x : %d\n", x);
	printf("The address of x : %p\n", &x);

	*(&x) = 10;
	printf("The value of x : %d\n", x);
	printf("The address of x : %p", &x);

	return 0;

}
// 输出
// The value of x : 0
// The address of x : 00000061B690F7D4
// The value of x : 10
// The address of x : 00000061B690F7D4