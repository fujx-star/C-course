// array_pointer.c
// 数组中的指针运算
#include <stdio.h>

int main() {

	int array[] = { 10,8,9,1,5,3,2,4 };
	int* p = array;
	int* q = &array[5];

	printf("p : %p\n", p);
	printf("q : %p\n", q);
	printf("array[3] : %d\n", *(p + 3));
	printf("Elements between array[0] and array[5] : %d\n", q - p);
	printf("array[0] in front of array[5] : %d\n", p < q);
	printf("Is equal : %d", p + 5 == q);

	return 0;

}
// 输出
// p : 000000F2EDD9F628
// q : 000000F2EDD9F63C
// array[3] : 1
// Elements between array[0] and array[5] : 5
// array[0] in front of array[5] : 1
// Is equal : 1
