//// digits.c
//// ���ø�ʽ���Ʒ����Ƹ������͵��������λ��
//#include <stdio.h>
//
//int main(void)
//{
//
//    float number = 3852.99;
//    printf("The number: %f\n", number);
//
//    // %.nf���Ʊ�����С��λ�����������뷨
//    printf("The number with 1 decimal places:%.1f\n", number);
//    printf("The number with 4 decimal places:%.4f\n", number);
//
//    // %m.nf��������ܳ��Ⱥͱ�����С��λ��
//    // �ȱ����㹻��С��λ��������ܳ��ȳ���m����ԭ���������������
//    printf("The number with a total width of 3 and 1 decimal places:%3.1f\n", number);
//    printf("The number with a total width of 10 and 4 decimal places:%10.4f\n", number);
//    printf("The number with a total width of 3 and 4 decimal places:%3.4f\n", number);
//    printf("The number with a total width of 10 and 1 decimal places:%10.1f\n", number);
//
//    // %0m.nf��%m.nf�������ǰѲ������Ŀո��滻��0
//    printf("The number with a total width of 10 and 4 decimal places:%010.4f\n", number);
//    printf("The number with a total width of 10 and 1 decimal places:%010.1f", number);
//
//    return 0;
//
//}
//// ���
//// The number : 3852.989990
//// The number with 1 decimal places:3853.0
//// The number with 4 decimal places:3852.9900
//// The number with a total width of 3 and 1 decimal places:3853.0
//// The number with a total width of 10 and 4 decimal places: 3852.9900
//// The number with a total width of 3 and 4 decimal places:3852.9900
//// The number with a total width of 10 and 1 decimal places:    3853.0
//// The number with a total width of 10 and 4 decimal places:03852.9900
//// The number with a total width of 10 and 1 decimal places:00003853.0