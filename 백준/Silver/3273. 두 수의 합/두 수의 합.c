#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int compare(const int *a, const int *b) { return (*a - *b); }

int main(void) {
  int i, j, n, m, x, y, p, q, chk, cnt = 0;
  int arr[100005];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  scanf("%d", &x);

  qsort(arr, n, sizeof(int), compare);

  p = 0;
  q = n - 1;
  while (p < q) {
    //printf("check %d %d\n", p, q);
    if (arr[p] + arr[q] == x) {
      cnt++;
      p++;
     // printf("ok \n");
    } else if (arr[p] + arr[q] < x) {
      p++;
    } else {
      q--;
    }
  }

  printf("%d", cnt);

  return 0;
}