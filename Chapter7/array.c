// array.c
// 数组的使用
#include <stdio.h>

int main() {

	// 数组定义和初始化
	int a[3] = { 1 };

	// 更改数组元素
	a[2] = 4;

	// 查看数组元素
	for (int i = 0; i < 3; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
 
}
// 输出
// a[0] = 1
// a[1] = 2
// a[2] = 4
