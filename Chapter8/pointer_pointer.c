// pointer_pointer.c
// 指针之间的减法
#include <stdio.h>

int main() {

	int x, y;
	int* p = &x;
	int* q = &y;

	printf("p : %p\n", p);
	printf("q : %p\n", q);
	printf("q - p : %d", q - p);

	return 0;

}
// 输出
// p : 00000001000FF584
// q : 00000001000FF5A4
// q - p : 8
