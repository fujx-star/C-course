// malloc.c
// malloc()函数的使用
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int* p = (int*)malloc(n * sizeof(int)); // 申请n个int的内存

    if (p == NULL) {
        printf("Memory allocation failed.\n");
    }
    else {
        printf("Memory allocation successful.\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", p[i]);
        }
        free(p); // 释放内存
    }

    return 0;

}
// 输入
// 5

// 输出
// Memory allocation successful.
// -842150451 -842150451 -842150451 -842150451 -842150451
