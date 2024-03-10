// struct_array.c
// 结构体数组

#include <stdio.h>

typedef struct student {
    int id;
    char name[20];
    float score;
} student;

int main() {

    student students[3];
	// 输入结构体数组
	for (int i = 0; i < 3; i++) {
		scanf("%d %s %f", &students[i].id, students[i].name, &students[i].score);
	}

    // 输出结构体数组
    for (int i = 0; i < 3; i++) {
        printf("第%d个学生的信息：\n", i + 1);
        printf("学号：%d\n", students[i].id);
        printf("姓名：%s\n", students[i].name);
        printf("成绩：%.2f\n", students[i].score);
    }

    return 0;

}
// 输入
// 10 Tom 95.0
// 11 Alex 90.5
// 12 Bob 86.9

// 输出
// 第1个学生的信息：
// 学号：10
// 姓名：Tom
// 成绩：95.00
// 第2个学生的信息：
// 学号：11
// 姓名：Alex
// 成绩：90.50
// 第3个学生的信息：
// 学号：12
// 姓名：Bob
// 成绩：86.90