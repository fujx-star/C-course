// else_if.c
// else if��ʹ��
#include <stdio.h>

int main() {

    int x = 3;
    int y = 4;

    if (x > 0 && y > 0) {
        printf("The point is in the first quadrant.");
    }
    else if (x < 0 && y > 0) {
        printf("The point is in the second quadrant.");
    }
    else if (x < 0 && y < 0) {
        printf("The point is in the third quadrant.");
    }
    else {
        printf("The point is in the fourth quadrant.");
    }

    return 0;

}
// �����
// The point is in the first quadrant.