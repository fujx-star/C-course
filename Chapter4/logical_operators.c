// logical_operators.c
// C�����߼��������ʹ��
#include <stdio.h> 

int main()
{

	int a = 1, b = 0;

	// �����߼�����ʱ��ѷ�0�Ĳ�������Ϊ1����true��
	printf("a && b : %d\n", a && b);
	printf("a || b : %d\n", a || b);
	printf("!a: %d", !a);

	return 0;

}
// ���
// a && b : 0
// a || b : 1
// !a : 0