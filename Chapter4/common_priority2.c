// common_priority2.c
// 逻辑与大于逻辑或
#include <stdio.h>

int main() {

	int a = 0;
	int b = 0;
	int c = 1;

	// 如果||>&&，结果为0；如果&&>||，结果为1
	printf("a && b || c = %d\n", a && b || c);

	return 0;

}
// 输出
// a && b || c = 1