#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char arr[200005][55];

int compare_len(const void *a, const void *b) { return strlen(a) - strlen(b); }

int compare_name(const void *a, const void *b) { return strcmp(a, b); }

int main(void) {
  int n, i, p;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s", arr[i]);
  }
  qsort(arr, n, sizeof(arr[0]), compare_name);
  qsort(arr, n, sizeof(arr[0]), compare_len);
  for (i = 0; i < n; i++) {
    if (strcmp(arr[i], arr[i + 1]) != 0) {
      printf("%s\n", arr[i]);
    }
  }
  return 0;
}