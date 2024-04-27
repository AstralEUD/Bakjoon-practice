#include <stdio.h>
#include <stdlib.h>

int arr[10001] = {0};
/*
int compare(const void *a, const void *b) {
  int num1 = *(int *)a;
  int num2 = *(int *)b;
  if (num1 < num2)
    return -1;
  if (num1 > num2)
    return 1;
  return 0;
}*/

int main() {
  int n, i, p;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &p);
    arr[p]++;
  }
  // qsort(arr, n, sizeof(int), compare);
  for (i = 1; i < 10001; i++) {
    while (arr[i] > 0) {
      printf("%d\n", i);
      arr[i]--;
    }
  }
  return 0;
}