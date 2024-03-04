// parameter.c
// 形参和实参的一一对应
#include <stdio.h>

int sum(int a, int b) {
	
	printf("a = %d, b = %d\n", a, b);

	return a + b;

}

int main() {

	int a = 10, b = 20, c;

	c = sum(a, b);
	printf("The sum of %d and %d is %d\n", a, b, c);

	c = sum(b, a);
	printf("The sum of %d and %d is %d\n", b, a, c);

	return 0;

}
// 输出
// a = 10, b = 20
// a = 20, b = 10
// The sum of 10 and 20 is 30
// The sum of 20 and 10 is 30