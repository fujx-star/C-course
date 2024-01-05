// common_priority1.c
// 乘除大于加减
#include <stdio.h>

int main() {

	int a = 3;
	int b = 3;
	int c = 6;

	printf("a * c - b = %d\n", a * c - b);
	printf("b + c / a = %d", b + c / a);

	return 0;

}
// 输出
// a * c - b = 15
// b + c / a = 5