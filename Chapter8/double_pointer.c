// double_pointer.c
// 二级指针的使用
#include <stdio.h>

int main() {

	int x = 0;
	int* p = &x;
	int** q = &p;

	printf("Value of x : %d\n", x);
	printf("Value of x using single pointer: %d\n", *p);
	printf("Value of x using double pointer: %d\n", **q);

	printf("Address of x : %p\n", &x);
	printf("Address of x using single pointer: %p\n", p);
	printf("Address of x using double pointer: %p", *q);

	return 0;

}
// 输出
// Value of x : 0
// Value of x using single pointer : 0
// Value of x using double pointer : 0
// Address of x : 000000767F33F9F4
// Address of x using single pointer : 000000767F33F9F4
// Address of x using double pointer : 000000767F33F9F4
