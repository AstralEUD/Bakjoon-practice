/* init */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

#define MAX_SIZE 1000005
#define TRUE 1
#define FALSE 0
#define ERROR -1

int visited[10005] = {0};

int main(void) {
  int i, j, k;
  memset(visited, 0x00, sizeof(visited));
  for (i = 1; i <= 10000; i++) {
    j = i;
    k = j;
    while (j != 0) {
      k += j % 10;
      j = j / 10;
    }
    visited[k] = TRUE;
  }
  for (i = 1; i <= 10000; i++) {
    if (visited[i] != TRUE) {
      printf("%d\n", i);
    }
  }
}