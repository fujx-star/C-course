// escape_char.c
// 转义字符的使用
#include <stdio.h>

int main() {

   char c;

   // 使用退格符
   printf("backspace\b\b\b\b\b\n");
   c = 7;
   printf("backspace%c%c%c%c%c\n", c, c, c, c, c);

   // 使用换行符
   printf("I want to start a new line\nI succeed!\n");
   c = 10;
   printf("I want to start a new line%cI succeed!\n", c);

   // 输出双引号
   printf("fjx said: \"I love Ace!\"\n");
   c = 34;
   printf("fjx said: %cI love Ace!%c", c, c);

   return 0;

}
// 输出
// backspace
// backspace
// I want to start a new line
// I succeed!
// I want to start a new line
// I succeed!
// fjx said : "I love Ace!"
// fjx said : "I love Ace!"
