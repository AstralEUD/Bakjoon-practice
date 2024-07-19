#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void) {
  int i, j, n, m, x1, x2, y1, y2, p, q, chk;
  scanf("%d %d", &m, &n);
  int arr[1000005];
  memset(arr, 0, sizeof(int));
  arr[0] = 1;
  arr[1] = 1;
  for (i = 2; i <= n; i++) {
    if (arr[i] == 0) {
      for (j = i + i; j <= n; j += i) {
        arr[j] = 1;
      }
    }
  }

  for (i = m; i <= n; i++) {
    if (arr[i] == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}