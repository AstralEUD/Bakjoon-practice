#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[1005];

int compare(const void *a, const void *b) {
  int numa = *(int *)a;
  int numb = *(int *)b;
  return (numa - numb);
}

int main(void) {
  int i, j, k, n, m, cnt = 0, nowmax = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, n, sizeof(int), compare);

  for (i = 0; i < n; i++) {
    nowmax += arr[i];
    cnt += nowmax;
  }

  printf("%d", cnt);

  return 0;
}