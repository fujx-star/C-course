// arrayname.c
// 数组名的意义
#include <stdio.h>

int main() {

	int array[] = { 10,8,9,1,5,3,2,4 };
	int* p = &array[0];

	printf("address : %p\n", p);
	printf("address : %p\n", array);

	printf("value : %d\n", array[0]);
	printf("value : %d\n", *p);
	printf("value : %d", *array);

	return 0;

}
// 输出
// address : 0000001497D7F858
// address : 0000001497D7F858
// value : 10
// value : 10
// value : 10
