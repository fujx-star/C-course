// local_variable_scope.c
// 块嵌套下的局部变量作用域
#include <stdio.h>

int main() {

    int a[3][3] = { 0 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = i + j;
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}
// 输出
// a[0][0] = 0
// a[0][1] = 1
// a[0][2] = 2
// a[1][0] = 1
// a[1][1] = 2
// a[1][2] = 3
// a[2][0] = 2
// a[2][1] = 3
// a[2][2] = 4
