// with_headfile.c
// 使用头文件
#include <stdio.h>
#include "score.h"
#include "student.h"

int main() {

    score tmpScore = { 85.1, 90.4, 95.5 };
	student stu = { 20, tmpScore };

    printf("The score of student %d is %.2f, %.2f, %.2f\n", stu.id, stu.s.chinese, stu.s.math, stu.s.english);

    return 0;

}
// 输出
// The score of student 20 is 85.10, 90.40, 95.50