#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int age;
  char name[102];
  int idx;
} cordinate;

cordinate arr[100005];

int compare_age(const void *a, const void *b) {
  cordinate *structA = (cordinate *)a;
  cordinate *structB = (cordinate *)b;

  return (structA->age - structB->age);
}

int compare_idx(const void *a, const void *b) {
  cordinate *structA = (cordinate *)a;
  cordinate *structB = (cordinate *)b;

  return (structA->idx - structB->idx);
}

int main(void) {
  int n, i, p;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %s", &arr[i].age, arr[i].name);
    arr[i].idx = i;
  }
  qsort(arr, n, sizeof(cordinate), compare_idx);
  qsort(arr, n, sizeof(cordinate), compare_age);
  for (i = 0; i < n; i++) {
    printf("%d %s\n", arr[i].age, arr[i].name);
  }
  return 0;
}