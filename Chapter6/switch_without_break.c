// switch_without_break.c
// case�в�ʹ��break
#include <stdio.h>

int main() {

    int x = 0;

    switch (x) {
    case 0:
        printf("x = 0");
    case 1:
        printf("x = 1");
    }

    return 0;

}
// �����
// x = 0x = 1