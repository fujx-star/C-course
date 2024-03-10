// struct_self_reference.c
// 自引用结构体
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node n1, n2, n3;
    n1.data = 1;
    n1.next = &n2;
    n2.data = 2;
    n2.next = &n3;
    n3.data = 3;
    n3.next = &n1; // 循环链表

    // 打印链表
    struct Node* p = &n1;
    do {
        printf("%d ", p->data);
        p = p->next;
    } while (p!= &n1);

    return 0;

}
// 输出
// 1 2 3