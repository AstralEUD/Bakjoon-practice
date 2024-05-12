#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int n, m, i, j, k, tmp, cnt = 0;
  int arr[15];

  scanf("%d %d", &n, &k);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (i = n - 1; i >= 0; i--) {
    while (k - arr[i] >= 0) {
      k = k - arr[i];
      cnt++;
    }
  }

  printf("%d", cnt);
}