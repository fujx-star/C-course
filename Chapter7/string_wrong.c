// string_wrong.c
// �ַ�������ע������
#include <stdio.h>

int main() {

	// ����ʽ1��char str[3] = {'A','c','e'};
	// ����ʽ2��char str[] = {'A','c','e'};
	// ����ʽ3��char str[3] = "Ace";
	char str[4] = { 'A', 'c', 'e' };

	printf("%s", str);

	return 0;

}
// ���
// Ace