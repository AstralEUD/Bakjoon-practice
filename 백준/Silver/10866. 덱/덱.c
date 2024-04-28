#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[20010] = {-1};
int front = 10000;
int back = 10000;
int cnt = 0;

void push_front(int x) {
  if (cnt != 0) {
    front--;
  }
  arr[front] = x;
  cnt++;
  return;
}

void push_back(int x) {
  if (cnt != 0) {
    back++;
  }
  arr[back] = x;
  cnt++;
  return;
}

void pop_front(void) {
  if (arr[front] <= 0) {
    printf("-1\n");
    return;
  }
  printf("%d\n", arr[front]);
  arr[front++] = -1;
  if (cnt == 1) {
    front--;
  }
  cnt--;
  return;
}

void pop_back(void) {
  if (arr[back] <= 0) {
    printf("-1\n");
    return;
  }
  printf("%d\n", arr[back]);
  arr[back--] = -1;
  if (cnt == 1) {
    back++;
  }
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
    if (strcmp(cmd, "push_front") == 0) {
      scanf("%d", &num);
      push_front(num);
    } else if (strcmp(cmd, "push_back") == 0) {
      scanf("%d", &num);
      push_back(num);
    } else if (strcmp(cmd, "pop_front") == 0) {
      pop_front();
    } else if (strcmp(cmd, "pop_back") == 0) {
      pop_back();
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