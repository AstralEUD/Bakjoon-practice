#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

#define TRUE 1
#define FALSE 0

#define RED 0
#define GREEN 1
#define BLUE 2

int arr[1005][5] = {0};
int ColorPriceArr[1005][5] = {0};

int cal = 0;

int CheckIfExist(int fColor, int NowNumber, int N, int NowColor, int NowPrice);

// boj 1149

int DP(int NowNumber, int N, int NowColor, int NowPrice) {
  // Dynamic Programming 에 의한 분기 조건을 수행하는 함수
  int Result, i, p, q;

  // End단이면 값을 골라서 Return
  if (NowNumber == N) {
    return NowPrice + arr[NowNumber][NowColor];
  }

  cal++;
  //printf("연산 %d \n", cal);

  if (NowColor == RED) {
    p = CheckIfExist(RED, NowNumber + 1, N, BLUE, arr[NowNumber][RED]);
    q = CheckIfExist(RED, NowNumber + 1, N, GREEN, arr[NowNumber][RED]);

  } else if (NowColor == BLUE) {
    p = CheckIfExist(BLUE, NowNumber + 1, N, RED, arr[NowNumber][BLUE]);
    q = CheckIfExist(BLUE, NowNumber + 1, N, GREEN, arr[NowNumber][BLUE]);

  } else if (NowColor == GREEN) {
    p = CheckIfExist(GREEN, NowNumber + 1, N, RED, arr[NowNumber][GREEN]);
    q = CheckIfExist(GREEN, NowNumber + 1, N, BLUE, arr[NowNumber][GREEN]);
  }

  if (p < q) {
    if (ColorPriceArr[NowNumber + 1][NowColor] != 0) {
      ColorPriceArr[NowNumber + 1][NowColor] =
          min(p, ColorPriceArr[NowNumber + 1][NowColor]);
      // printf("저장..! %d %d\n", NowNumber, NowColor);
    } else {
      ColorPriceArr[NowNumber + 1][NowColor] = p;
    }
    return NowPrice + p;
  } else {
    if (ColorPriceArr[NowNumber + 1][NowColor] != 0) {
      ColorPriceArr[NowNumber + 1][NowColor] =
          min(q, ColorPriceArr[NowNumber + 1][NowColor]);
      // printf("저장..! %d %d\n", NowNumber, NowColor);
    } else {
      ColorPriceArr[NowNumber + 1][NowColor] = q;
    }
    return NowPrice + q;
  }
}

int CheckIfExist(int fColor, int NowNumber, int N, int NowColor, int NowPrice) {
  int i;
  // printf("없는데.. %d %d %d \n", NowNumber, fColor, NowColor);
  if (ColorPriceArr[NowNumber][fColor] != 0) {
    //printf("일치!\n");
    return ColorPriceArr[NowNumber][fColor];
  } else {
    return DP(NowNumber, N, NowColor, NowPrice);
  }
}

int main(void) {
  int n, m, i, p, q, r, tmp, cnt = 0;
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    scanf("%d %d %d", &arr[i][RED], &arr[i][GREEN], &arr[i][BLUE]);
  }

  p = DP(1, n, RED, 0);
  q = DP(1, n, GREEN, 0);
  r = DP(1, n, BLUE, 0);

  tmp = min(p, min(q, r));

  printf("%d", tmp);
}