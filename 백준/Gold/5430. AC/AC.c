#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input_cmd(void) {
  int cmdlen, arrlen, n, i, tmp, s;
  int front = 0;
  int back = 0;
  int cnt = 0;
  int reverse = 0;
  char cmd[1000000], arr[5000000];
  int intarr[100000];
  char *p;

  scanf("%s", cmd);
  cmdlen = strlen(cmd);
  scanf("%d", &n);
  scanf("%s", arr);

  
  arrlen = strlen(arr);
  p = strtok(&arr[1], ",");

  for (i = 0; i < n; i++) {
    intarr[i] = atoi(p);
    p = strtok(NULL, ",");
  }

  front = 0;
  back = n - 1;
  cnt = n;

  for (i = 0; i < cmdlen; i++) {
    if (cmd[i] == 'R') {
      if (reverse == 0) {
        reverse = 1;
      } else if (reverse == 1) {
        reverse = 0;
      }
    } else if (cmd[i] == 'D') {
      if (cnt == 0) {
        printf("error\n");
        return;
      }
      if (reverse == 0) {
        front++;
      } else {
        back--;
      }
      cnt--;
    }
  }

  if (cnt == 0) {
    printf("[]\n");
    return;
  }
  /*
      printf("\n[");
      for (s = front; s < back - 1; s++) {
        printf("%d,", intarr[s]);
      }
      printf("%d]\n", intarr[++s]);*/

  printf("[");

  if (reverse == 0) {
    for (i = front; i < back; i++) {
      printf("%d,", intarr[i]);
    }
    printf("%d]\n", intarr[back]);
  } else {
    for (i = back; i > front; i--) {
      printf("%d,", intarr[i]);
    }
    printf("%d]\n", intarr[front]);
  }

  return;
}

int main(void) {
  int n, i, p, num;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    input_cmd();
  }
}