// continue_while.c
// continue��whileѭ���е�ʹ��
#include <stdio.h>

int main()
{

    int i = 1;

    while (i < 6) {
        if (i == 3) {
            continue;
        }
        printf("%d", i);
        i++;
    }

    return 0;

}
// �����һֱִ��

// continue��while��������ͬ�������ڱ���i�����������ѭ�����У�����Ҳ������