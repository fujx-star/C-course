// struct.c
// 结构体的基础使用
#include <stdio.h>

struct student {
	int id;
	char name[20];
	float score;
};

int main() {

	struct student stu1 = { 10, "fjx", 90.5 };

	printf("stu1: id = %d\n", stu1.id);
	printf("stu1: name = %s\n", stu1.name);
	printf("stu1: score = %.1f\n", stu1.score);

	stu1.score = 85.0;
	printf("stu1: score = %.1f\n", stu1.score);

	struct student stu2 = stu1;
	printf("stu2: id = %d\n", stu2.id);
	printf("stu2: name = %s\n", stu2.name);
	printf("stu2: score = %.1f", stu2.score);

	return 0;

}
// 输出
// stu1: id = 10
// stu1: name = fjx
// stu1: score = 90.5
// stu1: score = 85.0
// stu2: id = 10
// stu2: name = fjx
// stu2: score = 85.0
