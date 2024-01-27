// string_wrong.c
// 字符串长度注意事项
#include <stdio.h>

int main() {

	// 错误方式1：char str[3] = {'A','c','e'};
	// 错误方式2：char str[] = {'A','c','e'};
	// 错误方式3：char str[3] = "Ace";
	char str[4] = { 'A', 'c', 'e' };

	printf("%s", str);

	return 0;

}
// 输出
// Ace