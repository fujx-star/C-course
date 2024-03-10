//// struct_typedef.c
//// typedef在struct中使用
//#include <stdio.h>
//
//struct struct1 {
//	int member1;
//	int member2;
//};
//
//typedef struct struct1 str1;
//
//typedef struct struct2 {
//	int member1;
//	int member2;
//} str2;
//
//int main() {
//
//	str1 var1 = { 10, 20 };
//	str2 var2 = { 1, 2 };
//
//	printf("var1.member1 = %d\n", var1.member1);
//	printf("var1.member2 = %d\n", var1.member2);
//	printf("var2.member1 = %d\n", var2.member1);
//	printf("var2.member2 = %d", var2.member2);
//
//	return 0;
//}
//// 输出
//// var1.member1 = 10
//// var1.member2 = 20
//// var2.member1 = 1
//// var2.member2 = 2