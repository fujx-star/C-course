// pointer_compare.c
// 指针之间的比较
#include <stdio.h>

int main() {

	int x;
	double y;

	int* p = &x;
	double* q = &y;
	int* r = &x;

	printf("p : %p\n", p);
	printf("q : %p\n", q);
	printf("r : %p\n", r);
	printf("p < q : %d\n", p < q);
	printf("p = q : %d\n", p == q);
	printf("p != q : %d\n", p != q);
	printf("p = r : %d", p == r);

	return 0;

}
// 输出
// p : 0000008BF899F5E4
// q : 0000008BF899F608
// r : 0000008BF899F5E4
// p < q : 1
// p = q : 0
// p != q : 1
// p = r : 1
