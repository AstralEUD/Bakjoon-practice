#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

int main(void) {
  int i, j, n, x, y, p, q, cnt = 0;
  long m, v = 0;
  int arr[10005] = {0};

  scanf("%d %ld", &n, &m);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  p = 0;
  q = 0;

  v += arr[0];

  while (q <= n) {
    //printf("check %d %d\n", p, q);
    if (v >= m) {
      if (v == m) {
        cnt++;
        //printf("ok \n");
      }
      v -= arr[p];
      p++;

    } else {
      q++;
      v += arr[q];
    }
  }

  printf("%d", cnt);

  return 0;
}