/* init */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

#define MAX_SIZE 100000005
#define TRUE 1
#define FALSE 0
#define ERROR -1

int arr[10005];

int compare(const int *a, const int *b) { return (*b - *a); }

int main(void) {
  int i, j, k;
  scanf("%d", &k);
  i = 0;
  while (k != 0) {
    arr[i] = k % 10;
    i++;
    k /= 10;
  }
  j = i;

  qsort(arr, j, sizeof(int), compare);

  for (i = 0; i < j; i++) {
    printf("%d", arr[i]);
  }
  return 0;
}