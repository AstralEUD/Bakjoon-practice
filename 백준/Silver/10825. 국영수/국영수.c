#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[15];
  int x;
  int y;
  int z;
} cordinate;

cordinate arr[100005];

int compare_x(const void *a, const void *b) {
  int i;

  cordinate *structA = (cordinate *)a;
  cordinate *structB = (cordinate *)b;
  i = structB->x - structA->x;
  if (i == 0) {
    i = structA->y - structB->y;
    if (i == 0) {
      i = structB->z - structA->z;
      if (i == 0) {
        i = strcmp(structA->name, structB->name);
        return i;
      } else {
        return i;
      }
    } else {
      return i;
    }
  } else {
    return i;
  }

  return (structA->x - structB->x);
}

int compare_y(const void *a, const void *b) {
  cordinate *structA = (cordinate *)a;
  cordinate *structB = (cordinate *)b;

  return (structA->y - structB->y);
}

int compare_z(const void *a, const void *b) {
  cordinate *structA = (cordinate *)a;
  cordinate *structB = (cordinate *)b;

  return (structB->z - structA->z);
}

int compare_name(const void *a, const void *b) {
  cordinate *structA = (cordinate *)a;
  cordinate *structB = (cordinate *)b;

  return (strcmp(structA->name, structB->name));
}

int main(void) {
  int n, i, p;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s %d %d %d", arr[i].name, &arr[i].x, &arr[i].y, &arr[i].z);
  }
  qsort(arr, n, sizeof(cordinate), compare_x);

  for (i = 0; i < n; i++) {
    printf("%s \n", arr[i].name);
  }
  return 0;
}