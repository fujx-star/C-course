// pre_post.c
// ǰ�����������ͺ�����������������
#include <stdio.h>

int main() {

    int a = 5;
    int b = 5;

    int prefix_incre = ++a;    // ǰ����
    printf("Prefix Increment: %d\n", prefix_incre);
    int postfix_incre = b++;    // ������
    printf("Postfix Increment: %d\n", postfix_incre);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    int prefix_decre = --a;    // ǰ�Լ�
    printf("Prefix Decrement: %d\n", prefix_decre);
    int postfix_decre = b--;    // ���Լ�
    printf("Postfix Decrement: %d", postfix_decre);

    return 0;

}
// ���
// Prefix Increment: 6
// Postfix Increment : 5
// a = 6
// b = 6
// Prefix Decrement : 5
// Postfix Decrement : 6