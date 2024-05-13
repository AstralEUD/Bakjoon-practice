#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

char arr[50][100005][10] = {};

int distance_len(int p, int x, int y) {
  int i, j, cnt = 0;

  for (i = 0; i <= 3; i++) {
    if (arr[p][x][i] != arr[p][y][i])
      cnt++;
  }

  // printf("[%d] %s %s -> %d\n", p, arr[p][x], arr[p][y], cnt);
  return cnt;
}

int main(void) {
  int i, j, k, p, q, r, s, n, t, cnt, maxc, a, b, c;
  scanf("%d", &t);
  for (i = 0; i < t; i++) {
    scanf("%d", &n);
    for (p = 0; p < n; p++) {
      scanf("%s", arr[i][p]);
    }
    if (n >= 33) {
      printf("0\n");
    } else {
      cnt = 0;
      maxc = 10000;
      for (a = 0; a < n - 2; a++) {
        for (b = a + 1; b < n - 1; b++) {
          for (c = b + 1; c < n; c++) {
            cnt += distance_len(i, a, b);
            cnt += distance_len(i, a, c);
            cnt += distance_len(i, b, c);
            maxc = min(maxc, cnt);
            cnt = 0;
          }
        }
      }

      printf("%d\n", maxc);
    }
  }
  return 0;
}