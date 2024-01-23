#include <stdio.h>

int main() {
  int H, W, N, T, i, x, y;
  // p -> H, q -> W
  scanf("%d", &T);
  for (i = 0; i < T; i++) {
    scanf("%d %d %d", &H, &W, &N);
    x = N % H;
    y = N / H + 1;
    if (x == 0) {
      y = N / H;
      x = H;
    }
    printf("%d%02d\n", x, y);
  }
}