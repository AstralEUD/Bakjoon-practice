#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibo_cnt_0_arr[45] = {0};
int fibo_cnt_1_arr[45] = {0};

int main(void) {
  int i, j, k, n, m, t;

  fibo_cnt_0_arr[0] = 1;
  fibo_cnt_1_arr[0] = 0;
  fibo_cnt_0_arr[1] = 0;
  fibo_cnt_1_arr[1] = 1;

  scanf("%d", &t);
  for (i = 2; i <= 40; i++) {
    fibo_cnt_0_arr[i] = fibo_cnt_1_arr[i - 1];
    fibo_cnt_1_arr[i] = fibo_cnt_0_arr[i - 1] + fibo_cnt_1_arr[i - 1];
  }


  for (i = 0; i < t; i++) {
    scanf("%d", &n);
    printf("%d %d\n", fibo_cnt_0_arr[n], fibo_cnt_1_arr[n]);
  }

  return 0;
}