#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int i;
  system("clear");
  printf("%*s \033[36m欢迎使用学生信息管理系统 by:James Hopbourn\033[0m \n", 30,
         "");
  printf("\n");
  printf("%*s 1. 添加学生信息 \n", 30, "");
  printf("%*s 2. 修改学生信息 \n", 30, "");
  printf("%*s 3. 删除学生信息 \n", 30, "");
  printf("%*s 4. 查询学生信息 \n", 30, "");
  printf("%*s 5. 学生成绩导入 \n", 30, "");
  printf("\n");
  printf("%*s 请输入数字选择功能：", 30, "");
  scanf("%d", &i);
  system("clear");
  switch (i) {
  case 1:
    printf("1\n");
    break;

  case 2:
    printf("2\n");
    break;

  case 3:
    printf("3\n");
    break;

  case 4:
    printf("4\n");
    break;

  case 5:
    printf("5\n");
    break;

  default:
    printf("error\n");
    break;
  }
  return 0;
}