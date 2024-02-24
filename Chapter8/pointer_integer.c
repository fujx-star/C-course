// pointer_add-subtract.c
// 指针与整数的加减运算
#include <stdio.h>

int main() {

	int x = 1;
	int* p = &x;

	printf("p : %p\n", p);
	p += 3;
	printf("p : %p\n", p);
	p++;
	printf("p : %p\n", p);
	p--;
	printf("p : %p\n", p);

	double y = 2.0;
	double* q = &y;
	printf("q : %p\n", q);
	q += 3;
	printf("q : %p\n", q);
	q++;
	printf("q : %p\n", q);
	q--;
	printf("q : %p", q);

	return 0;

}
// 输出
// p : 000000BBBC5FF654
// p : 000000BBBC5FF660
// p : 000000BBBC5FF664
// p : 000000BBBC5FF660
// q : 000000BBBC5FF698
// q : 000000BBBC5FF6B0
// q : 000000BBBC5FF6B8
// q : 000000BBBC5FF6B0