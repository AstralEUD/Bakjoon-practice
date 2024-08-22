#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int arr[10] = {0};
int pred[10] = {0};
int length = 0;

int checkIfNumInArr(int n) {
  for (int i = 0; i < length; i++) {
    if (arr[i] == n)
      return TRUE;
  }
  return FALSE;
}

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

void Backtracking(int n, int m) {
  if (length == m) {
    for (int i = 0; i < m; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
    return;
  }
  for (int i = 1; i <= n; i++) {
    if ((checkIfNumInArr(pred[i - 1]) == FALSE) &&
        ((length == 0) || (pred[i - 1] > arr[length - 1]))) {
      arr[length] = pred[i - 1];
      length++;
      Backtracking(n, m);
      arr[length] = 0;
      length--;
    }
  }
}

int main(void) {
  int n, m, i, j, p, q, r, s, aa, ab, ac;

  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++) {
    scanf("%d", &pred[i]);
  }

  qsort(pred, n, sizeof(int), compare);

  Backtracking(n, m);

  return 0;
}