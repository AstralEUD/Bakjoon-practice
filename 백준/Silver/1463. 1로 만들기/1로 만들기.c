#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

int arr[1000005] = {0};

int DP(int n) {
  if (n == 1) {
    return 0;
  }
  if (n % 3 != 0 && n % 2 != 0)
    return arr[n - 1] + 1;
  if (n % 3 != 0) {
    return min(arr[n - 1] + 1, arr[n / 2] + 1);
  } else if (n % 2 != 0) {
    return min(arr[n - 1] + 1, arr[n / 3] + 1);
  }
  return min(min(arr[n / 3] + 1, arr[n / 2] + 1), arr[n - 1] + 1);
}

int main(void) {
  int n, m, i, j, k, tmp, cnt = 0;
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    arr[i] = DP(i);
  }

  printf("%d", arr[n]);
}