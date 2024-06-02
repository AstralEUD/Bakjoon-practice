#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int i, j, p, q, r;
  char arr[10005];
  char grade[5000];

  double a, s, cnt = 0.0;
  s = 0.0;
  for (i = 0; i < 20; i++) {
    scanf("%s %lf %s", arr, &a, grade);
    if (strcmp(grade, "A+") == 0) {
      cnt += a * 4.5;
    } else if (strcmp(grade, "A0") == 0) {
      cnt += a * 4.0;
    } else if (strcmp(grade, "B+") == 0) {
      cnt += a * 3.5;
    } else if (strcmp(grade, "B0") == 0) {
      cnt += a * 3.0;
    } else if (strcmp(grade, "C+") == 0) {
      cnt += a * 2.5;
    } else if (strcmp(grade, "C0") == 0) {
      cnt += a * 2.0;
    } else if (strcmp(grade, "D+") == 0) {
      cnt += a * 1.5;
    } else if (strcmp(grade, "D0") == 0) {
      cnt += a * 1.0;
    } else if (strcmp(grade, "F") == 0) {
      cnt += a * 0.0;
    } else {
      s -= a;
    }
    s += a;
    // printf("[%d] %lf (%s/%lf)\n", i, cnt, grade, a);
  }
  // printf("%lf %lf %lf", cnt / (double)s, cnt, s);
  printf("%lf", cnt / s);
  return 0;
}