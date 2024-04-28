#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[10005] = {-1};
int top = 0;

void push(int x) {
  top++;
  arr[top] = x;
  return;
}

void pop(void) {
  if (top == 0) {
    printf("-1\n");
    return;
  }
  printf("%d\n", arr[top]);
  arr[top] = -1;
  top--;
  return;
}

void size(void) { printf("%d\n", top); }

void empty(void) {
  if (top == 0) {
    printf("1\n");
  } else {
    printf("0\n");
  }
  return;
}

void topprint(void) {
  printf("%d\n", arr[top]);
  return;
}

int main(void) {
  int n, i, p, num;
  char cmd[100000];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s", cmd);
    if (strcmp(cmd, "push") == 0) {
      scanf("%d", &num);
      push(num);
    } else if (strcmp(cmd, "pop") == 0) {
      pop();
    } else if (strcmp(cmd, "size") == 0) {
      size();
    } else if (strcmp(cmd, "empty") == 0) {
      empty();
    } else if (strcmp(cmd, "top") == 0) {
      topprint();
    }
  }
}