#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

long long int arr[105] = {1};

int main(void) {
  int i, j, k, p, q, r, s, n;
  scanf("%d", &k);
  arr[2] = 1;
  for (i = 3; i <= 105; i++) {
    arr[i] = arr[i - 2] + arr[i - 3];
    // printf("%.f ", arr[i]);
  }

  for (i = 0; i < k; i++) {
    scanf("%d", &n);
    printf("%lld\n", arr[++n]);
  }

  return 0;
}