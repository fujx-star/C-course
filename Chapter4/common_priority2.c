// common_priority2.c
// �߼�������߼���
#include <stdio.h>

int main() {

	int a = 0;
	int b = 0;
	int c = 1;

	// ���||>&&�����Ϊ0�����&&>||�����Ϊ1
	printf("a && b || c = %d\n", a && b || c);

	return 0;

}
// ���
// a && b || c = 1