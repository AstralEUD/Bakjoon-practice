#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

int arr[305] = {0};
int arr_jump[305] = {0};
int arr_default[305] = {0};

int DP_jump(int n);

int DP_default(int n) {
  // printf("visited %d \n", n);
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return arr[1];
  } else if (arr_default[n] != 0) {
    return arr_default[n];
  }

  int k = DP_jump(n - 2);
  arr_default[n] = k + arr[n];

  return arr_default[n];
}

int DP_jump(int n) {
  // printf("visited %d \n", n);
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return arr[1];
  } else if (arr_jump[n] != 0) {
    return arr_jump[n];
  }

  int k = max(DP_default(n - 1), DP_jump(n - 2));
  arr_jump[n] = k + arr[n];

  return arr_jump[n];
}

int main(void) {
  int n, m, i, j, k, tmp, cnt = 0;
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
  }

  k = DP_jump(n);

  printf("%d", k);
}