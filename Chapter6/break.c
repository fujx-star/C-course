// break.c
// break��ʹ��
#include <stdio.h>

int main()
{

    int i = 1;

    while (i < 6) {
        if (i == 3) {
            break;
        }
        printf("%d", i);
        i++;
    }

    return 0;

}
// ���
// 12 