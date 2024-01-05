// pre_post.c
// 前自增（减）和后自增（减）的区别
#include <stdio.h>

int main() {

    int a = 5;
    int b = 5;

    int prefix_incre = ++a;    // 前自增
    printf("Prefix Increment: %d\n", prefix_incre);
    int postfix_incre = b++;    // 后自增
    printf("Postfix Increment: %d\n", postfix_incre);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    int prefix_decre = --a;    // 前自减
    printf("Prefix Decrement: %d\n", prefix_decre);
    int postfix_decre = b--;    // 后自减
    printf("Postfix Decrement: %d", postfix_decre);

    return 0;

}
// 输出
// Prefix Increment: 6
// Postfix Increment : 5
// a = 6
// b = 6
// Prefix Decrement : 5
// Postfix Decrement : 6