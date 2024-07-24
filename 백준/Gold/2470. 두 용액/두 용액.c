#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

int compare(const int *a, const int *b) { return (*a - *b); }

int main(void) {
  int i, j, n, m, x, y, p, q, chk, cnt = 0;
  int arr[100005];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, n, sizeof(int), compare);

  p = 0;
  q = n - 1;
  cnt = 2000000005;
  /*for (i = 0; i < n; i++) {
    printf("%d : %d\n", i, arr[i]);
  }*/

  while (p < q) {
    //printf("check %d %d %d || %d %d\n", p, q, arr[p] + arr[q], arr[p], arr[q]);
    if ((abs(arr[p] + arr[q]) < cnt) && (p != q)) {
      cnt = abs(arr[p] + arr[q]);
      x = arr[p];
      y = arr[q];
      if ((abs(arr[p + 1] + arr[q]) > abs(arr[p] + arr[q - 1]))) {
        q--;
      } else {
        p++;
      }
      // printf("ok \n");
    } else if (arr[p] + arr[q] > cnt) {
      q--;
    } else {
      p++;
    }
  }

  printf("%d %d", x, y);

  return 0;
}