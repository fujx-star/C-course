// struct_pointer.c
// 结构体指针
#include <stdio.h>

typedef struct student {
    int id;
    char name[20];
    float score;
} student;

int main() {

	student stu = {1001, "Tom", 85.5};
	student *p = &stu;

	printf("stu.id = %d\n", stu.id);
	printf("stu.name = %s\n", stu.name);
	printf("stu.score = %.2f\n", stu.score);

	printf("p->id = %d\n", p->id);
	printf("p->name = %s\n", p->name);
	printf("p->score = %.2f\n", p->score);

	printf("address1 : %p\n", &stu);
	printf("address2 : %p\n", &stu.id);
	printf("address3 : %p", p);

	return 0;

}
// 输出
// stu.id = 1001
// stu.name = Tom
// stu.score = 85.50
// p->id = 1001
// p->name = Tom
// p->score = 85.50
// address1 : 000000080A77F808
// address2 : 000000080A77F808
// address3 : 000000080A77F808