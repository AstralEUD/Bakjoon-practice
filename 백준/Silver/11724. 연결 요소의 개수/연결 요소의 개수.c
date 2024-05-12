#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int VertexArr[1005][1005] = {0};

short int BFSvisited[1005] = {0};
int BFSqueue[1005] = {0};

int BFScnt = 0;
int BFSfront = 0;
int BFSback = 0;

void BFSpush(int x) {
  if (BFSvisited[x] == 1) {
    return;
  }
  if (BFSfront == 0) {
    BFSfront++;
  }
  // printf("BFS push %d \n", x);
  BFSback++;
  BFScnt++;
  BFSvisited[x] = 1;
  BFSqueue[BFSback] = x;
  return;
}

void BFSrelatedPush(int v) {
  int i, p, q;
  for (i = 1; i < 1001; i++) { // 얘는 큐니까 정상적으로
    if ((VertexArr[v][i] == 1) && (BFSvisited[i] == 0)) {
      BFSpush(i);
    }
  }
  return;
}

void BFSpop(void) {
  int n = BFSqueue[BFSfront];
  if (BFSqueue[BFSfront] <= 0) {
    return;
  }
  // printf("BFS pop %d \n", n);
  // printf("%d ", n);
  BFSqueue[BFSfront] = -1;
  BFSfront++;
  BFScnt--;
  BFSrelatedPush(n);
  return;
}

void BFS(int v) {
  BFSpush(v);
  while (BFScnt != 0) {
    BFSpop();
  }
}

int main(void) {
  int n, m, v, i, p, q, r, s, cocnt = 0;
  scanf("%d %d", &n, &m);
  for (i = 0; i < m; i++) {
    scanf("%d %d", &p, &q);
    VertexArr[p][q] = 1;
    VertexArr[q][p] = 1;
  }
  for (i = 1; i <= n; i++) {
    if (BFSvisited[i] == 0) {
      BFS(i);
      cocnt++;
    }
  }
  printf("%d", cocnt);
  return 0;
}