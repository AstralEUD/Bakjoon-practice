#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int VertexArr[1005][1005] = {0};

int DFSvisited[1005] = {0};
int DFSstack[1005] = {0};

int DFStop = 0;
int DFScnt = 0;

int BFSvisited[1005] = {0};
int BFSqueue[1005] = {0};

int BFScnt = 0;
int BFSfront = 0;
int BFSback = 0;

void DFSrelatedPush(int v);

void DFSpush(int x) {
  // printf("push %d / top : %d \n", x, DFStop);
  if (DFSvisited[x] == 1) {
    return;
  }
  DFStop++;
  DFScnt++;
  DFSvisited[x] = 1; // 중복으로 들가면 안되니까... push에서 방문 처리하자.
  DFSstack[DFStop] = x;
  return;
}

void DFSpop(void) {
  int n = DFSstack[DFStop];
  if (DFStop == 0) {
    return;
  }
  // printf("pop %d / top : %d \n", n, DFStop);
  //   DFSvisited[n] = 1;
  printf("%d ", n);
  DFSstack[DFStop] = -1;
  DFStop--;
  DFScnt--;
  DFSrelatedPush(n);
  return;
}

void DFSrelatedPush(int v) {
  int i, p, q;
  for (i = 1; i < 1001; i++) { // 숫자가 작은 놈이 먼저 빠질려면 역순처리
                               // 해줘야 한다 (스택이니까)
    if ((VertexArr[i][v] == 1) && (DFSvisited[i] == 0)) {
      DFSpush(i);
      DFSpop();
    }
  }
  return;
}

void DFS(int n, int v) {
  DFSpush(v);
  DFSpop();
}

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
  printf("%d ", n);
  BFSqueue[BFSfront] = -1;
  BFSfront++;
  BFScnt--;
  BFSrelatedPush(n);
  return;
}

void BFS(int n, int v) {
  BFSpush(v);
  while (BFScnt != 0) {
    BFSpop();
  }
}

int main(void) {
  int n, m, v, i, p, q, r, s;
  scanf("%d %d %d", &n, &m, &v);
  for (i = 0; i < m; i++) {
    scanf("%d %d", &p, &q);
    VertexArr[p][q] = 1;
    VertexArr[q][p] = 1;
  }
  DFS(n, v);
  printf("\n");
  BFS(n, v);
  return 0;
}
