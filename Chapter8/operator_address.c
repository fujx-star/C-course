// variable_address.c
// ȡ��ַ�������ʹ��
#include <stdio.h>

int main() {

	int x;
	printf("Before assignment, the address of x : %p\n", &x);
	x = 3;
	printf("After assignment, the address of x : %p", &x);

	return 0;

}
// ���
// Before assignment, the address of x : 00000040122FFA04
// After assignment, the address of x : 00000040122FFA04