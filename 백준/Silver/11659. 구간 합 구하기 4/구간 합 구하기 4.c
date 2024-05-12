#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[100005];
int cal_arr[100005] = {0};

int main(void) {
  int i, j, k, n, m, cnt, num, temp, p, q;
  scanf("%d %d", &n, &m);
  cnt = 0;
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    cnt += arr[i];
    cal_arr[i] = cnt;
  }
  for (i = 0; i < m; i++) {
    scanf("%d %d", &p, &q);
    k = cal_arr[q - 1] - cal_arr[p - 2];
    printf("%d\n", k);
  }
}