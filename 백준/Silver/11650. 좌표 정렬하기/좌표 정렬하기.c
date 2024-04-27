#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int x;
  int y;
} cordinate;

cordinate arr[100005];

int compare_x(const void *a, const void *b) {
  cordinate *structA = (cordinate *)a;
  cordinate *structB = (cordinate *)b;

  return (structA->x - structB->x);
}

int compare_y(const void *a, const void *b) {
  cordinate *structA = (cordinate *)a;
  cordinate *structB = (cordinate *)b;

  return (structA->y - structB->y);
}

int main(void) {
  int n, i, p;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d", &arr[i].x, &arr[i].y);
  }
  qsort(arr, n, sizeof(cordinate), compare_y);
  qsort(arr, n, sizeof(cordinate), compare_x);
  for (i = 0; i < n; i++) {
    printf("%d %d \n", arr[i].x, arr[i].y);
  }
  return 0;
}