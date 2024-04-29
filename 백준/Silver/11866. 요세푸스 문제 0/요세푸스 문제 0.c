#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[10000000] = {-1};
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
  printf("%d, ", arr[front]);
  front++;
  cnt--;
  return;
}

void pop_w(void) {
  printf("%d>", arr[front]);
  front++;
  cnt--;
  return;
}

void goback(void) {
  push(arr[front]);
  front++;
  cnt--;
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

int main(void) {
  int n, k, i, p, num;
  scanf("%d %d", &n, &k);
  for (i = 1; i <= n; i++) {
    push(i);
  }
  printf("<");
  for (i = 1; i < n; i++) {
    for (p = 0; p < k - 1; p++) {
      goback();
    }
    pop();
  }
  pop_w();
  return 0;
}