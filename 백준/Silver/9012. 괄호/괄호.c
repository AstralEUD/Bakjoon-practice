#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int i, j, n, p, q, chk;
  char arr[100][100];
  scanf("%d", &n);

  for (j = 0; j < n; j++) {
    chk = 1;
    p = 0;
    scanf("%s", arr[j]);
    for (i = 0; i < strlen(arr[j]); i++) {
      // printf("p: %d, now string : %c, i = %d\n", p, arr[j][i], i);
      if (arr[j][i] == '(') {
        p++;
      } else if (arr[j][i] == ')') {
        p--;
        if (p < 0) {
          chk = 0;
        }
      }
    }
    if ((chk == 1) && (p == 0)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}