#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[2000010] = {-1};
int front = 1000000;
int back = 1000000;
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
  char cmd[1000005];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s", cmd);
    if (strcmp(cmd, "1") == 0) {
      scanf("%d", &num);
      push_front(num);
    } else if (strcmp(cmd, "2") == 0) {
      scanf("%d", &num);
      push_back(num);
    } else if (strcmp(cmd, "3") == 0) {
      pop_front();
    } else if (strcmp(cmd, "4") == 0) {
      pop_back();
    } else if (strcmp(cmd, "5") == 0) {
      size();
    } else if (strcmp(cmd, "6") == 0) {
      empty();
    } else if (strcmp(cmd, "7") == 0) {
      front_print();
    } else if (strcmp(cmd, "8") == 0) {
      back_print();
    }
  }
}