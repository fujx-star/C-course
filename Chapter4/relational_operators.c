// relational_operators.c
// ��ϵ�����
#include <stdio.h> 

int main()
{

	int a = 25, b = 5;

	// C89��׼û�в������ͣ�C���԰�false��Ϊ0����true��Ϊ1
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b: %d\n", a >= b);
	printf("a <= b: %d\n", a <= b);
	printf("a == b: %d\n", a == b);
	printf("a != b : %d", a != b);

	return 0;

}
// ���
// a > b : 1
// a < b : 0
// a >= b : 1
// a <= b : 0
// a == b : 0
// a != b : 1