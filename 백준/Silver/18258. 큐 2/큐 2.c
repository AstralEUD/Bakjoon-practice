#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[10000005] = {-1};
int front = 0;
int back = 0;
int cnt = 0;

void push(int x) {
  if (front == 0) {
    front++;
  }
  back++;
  arr[back] = x;
  cnt++;
  return;
}

void pop(void) {
  if (arr[front] <= 0) {
    printf("-1\n");
    return;
  }
  printf("%d\n", arr[front]);
  arr[front] = -1;
  front++;
  cnt--;
  return;
}

void size(void) {
  printf("%d\n", cnt);
  return;
}

void empty(void) {
  if (cnt == 0) {
    printf("1\n");
  } else {
    printf("0\n");
  }
  return;
}

void front_print(void) {
  if (arr[front] <= 0) {
    printf("-1\n");
    return;
  }
  printf("%d\n", arr[front]);
  return;
}

void back_print(void) {
  if (arr[back] <= 0) {
    printf("-1\n");
    return;
  }
  printf("%d\n", arr[back]);
  return;
}

int main(void) {
  int n, i, p, num;
  char cmd[1000000];
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
    } else if (strcmp(cmd, "front") == 0) {
      front_print();
    } else if (strcmp(cmd, "back") == 0) {
      back_print();
    }
  }
}