// continue_for.c
// continue��forѭ���е�ʹ��
#include <stdio.h>

int main()
{

    int i;

    for (i = 1; i < 6; i++) {
        if (i == 3) {
            continue;
        }
        printf("%d", i);
    }

    return 0;

}
// ���
// 1245

// ��forѭ����ʹ��continueֻ������ʣ���ѭ���壬�ڶ����ֺź������䲻������