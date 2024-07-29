#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int n, m, i, j, p, q, r, s, aa, ab, ac;

  scanf("%d %d %d", &n, &m, &q);

  int arr_hang[500005] = {0};
  int arr_rul[500005] = {0};

  for (i = 0; i < q; i++) {
    scanf("%d %d %d", &aa, &ab, &ac);
    if (aa == 1) {
      arr_hang[ab - 1] += ac;
    } else {
      arr_rul[ab - 1] += ac;
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d ", arr_hang[i] + arr_rul[j]);
    }
    printf("\n");
  }

  return 0;
}