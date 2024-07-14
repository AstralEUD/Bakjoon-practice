#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int i, n, p, q, chk;
  char arr[1000];
  scanf("%d", &n);
  i = 0;
  p = 665;
  while (i != n) {
    p++;
    chk = 0;
    sprintf(arr, "%d", p);
    for (q = 0; q < strlen(arr) - 2; q++) {
      if (arr[q] == '6' && arr[q + 1] == '6' && arr[q + 2] == '6') {
        chk = 1;
        break;
      }
    }
    if (chk == 1)
      i++;
  }
  printf("%s", arr);
  return 0;
}