// switch_default.c
// switch��default��ʹ��
#include <stdio.h>

int main() {

    int x = 2;

    switch (x) {
    case 0:
        printf("x = 0");
        break;
    case 1:
        printf("x = 1");
        break;
    default:
        printf("x is neither 1 nor 0");
        break;
    }

    return 0;

}
// �����
// x is neither 1 nor 0