/* init */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

#define MAX_SIZE 10000000
#define TRUE 1
#define FALSE 0
#define ERROR -1

typedef struct __vertexInfo {
  int x;
  int y;
  int z;
  int num;
} element;

typedef int boolean;

typedef struct __circleQueue {
  int rear;
  int front;
  element *data;
} Queue;

void init_queue(Queue *q) {
  q->front = 0;
  q->rear = 0;
  q->data = (element *)malloc(sizeof(element) * MAX_SIZE);
}

boolean is_empty(Queue *q) {
  if (q->front == q->rear)
    return TRUE;
  else
    return FALSE;
}

boolean is_full(Queue *q) {
  if (((q->rear + 1) % MAX_SIZE) == q->front)
    return TRUE;
  else
    return FALSE;
}

void enqueue(Queue *q, element data) {
  if (is_full(q)) {
    // printf("Queue is full");
  } else {
    q->rear = (q->rear + 1 % MAX_SIZE);
    q->data[q->rear] = data;
  }
  return;
}

element dequeue(Queue *q) {
  if (is_empty(q)) {
    // printf("Queue is empty");
  }
  q->front = (q->front + 1) % (MAX_SIZE);
  return q->data[q->front];
}

// memset(A, 0, sizeof(A));
// A배열 1바이트 단위마다 0x00으로 초기화

Queue q;

// ---------------------------------- //

int graph[105][105][105];

int dx[5] = {0, 1, 0, -1};
int dy[5] = {1, 0, -1, 0};

int BFS_cnt = 0;
int maxnum = 0;

int BFS_init(void) {
  int e, i, nx, ny, nz, v;
  element g;
  while (!is_empty(&q)) {
    g = dequeue(&q);
    //printf("pop: %d %d %d %d \n", g.x, g.y, g.z, g.num);
    for (i = 0; i < 6; i++) {
      if (i == 5) {
        nx = g.x;
        ny = g.y;
        nz = g.z + 1;
      } else if (i == 4) {
        nx = g.x;
        ny = g.y;
        nz = g.z - 1;
      } else {
        nx = g.x + dx[i];
        ny = g.y + dy[i];
        nz = g.z;
      }
      // printf("검사 : %d %d %d %d\n", nx, ny, nz, graph[nz][ny][nx]);
      if (graph[nz][ny][nx] == 0) {
        graph[nz][ny][nx] = g.num + 1;
        element h = {nx, ny, nz, g.num + 1};
        enqueue(&q, h);
        // printf("push A: %d %d %d %d \n", nx, ny, nz, g.num + 1);
        BFS_cnt++;
      } else if ((graph[nz][ny][nx] > 0) && (graph[nz][ny][nx] > g.num + 1)) {
        graph[nz][ny][nx] = g.num + 1;
        element h = {nx, ny, nz, g.num + 1};
        enqueue(&q, h);
        // printf("push B: %d %d %d %d \n", nx, ny, nz, g.num + 1);
      }
    }
  }
  return maxnum = max(maxnum, g.num);
}

int main(void) {
  int n, m, h, i, p, r, s, t, cnt_first, cnt_minus;
  cnt_first = 0;
  cnt_minus = 0;
  init_queue(&q);
  memset(graph, 0xFF, sizeof(graph));
  scanf("%d %d %d", &m, &n, &h);
  for (p = 1; p <= h; p++) {
    for (r = 1; r <= n; r++) {
      for (t = 1; t <= m; t++) {
        scanf("%d", &graph[p][r][t]);
        if (graph[p][r][t] == 1) {
          element g = {t, r, p, 1};
          enqueue(&q, g);
          cnt_first++;
          BFS_cnt++;
        } else if (graph[p][r][t] == -1) {
          cnt_minus++;
        }
      }
    }
  }

  s = BFS_init();

  if (cnt_first == (n * m * h)) {
    printf("0"); // 모두가 이미 익어있는 상태
    return 0;
  } else if (cnt_first == 0) {
    printf("-1"); // 모두가 익지 못하는 상태
    return 0;
  }

  if ((BFS_cnt + cnt_minus) == (n * m * h)) {
    printf("%d", --s);
    return 0;
  } else {
    printf("-1");
    return 0;
  }
}
