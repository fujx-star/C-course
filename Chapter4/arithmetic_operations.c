// arithmetic_operations.c
// C�����е����������
#include <stdio.h> 

int main()
{

    int a = 25, b = 5;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    // ����������������ʱ��a/b���ؽ������������
    printf("a / b = %d\n", a / b);
    // %%�ĸ�ʽ���Ʒ���ʾ��ӡһ��%������ת���ַ�
    printf("a %% b = %d\n", a % b);
    printf("+a = %d\n", +a);
    printf("-a = %d\n", -a);
    printf("a++ = %d\n", a++);
    printf("a-- = %d", a--);

    return 0;

}
// ���
// a + b = 30
// a - b = 20
// a * b = 125
// a / b = 5
// a % b = 0
// + a = 25
// - a = -25
// a++ = 25
// a-- = 26