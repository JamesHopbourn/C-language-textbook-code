#include <stdio.h>

// 例子来源 https://www.runoob.com/cprogramming/c-multi-dimensional-arrays.html
int main( ) {
  /* 一个带有 5 行 2 列的数组 */
  int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
  int i, j;

  /* 输出数组中每个元素的值 */
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 2; j++) {
      printf("a[%d][%d]=%d  ", i, j, a[i][j]);
    }
    printf("\n");
  }
  return 0;
}