#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

int arr[25] = {0};

void add(int x) {
  arr[x] = 1;
  return;
}

void s_remove(int x) {
  arr[x] = 0;
  return;
}

void check(int x) {
  printf("%d\n", arr[x]);
  return;
}

void toggle(int x) {
  if (arr[x] == 0)
    arr[x] = 1;
  else
    arr[x] = 0;
  return;
}

void all(void) {
  int i;
  for (i = 1; i <= 20; i++) {
    arr[i] = 1;
  }
  return;
}

void empty(void) {
  int i;
  for (i = 1; i <= 20; i++) {
    arr[i] = 0;
  }
}

int main(void) {
  int n, m, i, j, k, x, tmp, cnt = 0;
  char cmd[1000];
  scanf("%d", &m);
  for (i = 0; i < m; i++) {
    scanf("%s", cmd);
    if (strcmp(cmd, "add") == 0) {
      scanf("%d", &x);
      add(x);
    } else if (strcmp(cmd, "remove") == 0) {
      scanf("%d", &x);
      s_remove(x);
    } else if (strcmp(cmd, "check") == 0) {
      scanf("%d", &x);
      check(x);
    } else if (strcmp(cmd, "toggle") == 0) {
      scanf("%d", &x);
      toggle(x);
    } else if (strcmp(cmd, "all") == 0) {
      all();
    } else if (strcmp(cmd, "empty") == 0) {
      empty();
    }
  }
}