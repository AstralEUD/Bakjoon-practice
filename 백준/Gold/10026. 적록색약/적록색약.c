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

typedef struct __vertexInfo {
  int x;
  int y;
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

char graph[105][105];
int visited[105][105];

int dx[5] = {0, 1, 0, -1};
int dy[5] = {1, 0, -1, 0};

int BFS_cnt = 0;
int n = 0;

char nowcolor;

int strong = 0;
int weak = 0;

// RED : 0, BLUE : 1, GREEN 2
// RED , GREEN : 0, BLUE : 1 (for weak)

void BFS_init() {
  int e, i, nx, ny;
  element g;
  while (!is_empty(&q)) {
    g = dequeue(&q);
    // printf("pop: %d %d %d \n", g.x, g.y, g.num);
    for (i = 0; i < 4; i++) {
      nx = g.x + dx[i];
      ny = g.y + dy[i];
      if ((graph[nx][ny] == nowcolor) && (nx >= 0) && (nx < n) && (ny >= 0) &&
          (ny < n) && (visited[nx][ny] != 1)) {
        visited[nx][ny] = 1;
        element h = {nx, ny};
        enqueue(&q, h);
        // printf("push: %d %d %d \n", nx, ny, g.num + 1);
        BFS_cnt++;
      }
    }
  }
  return;
}

int main(void) {
  int i, j, p, r, s, cnt_first, cnt_minus;
  element g;
  init_queue(&q);
  memset(graph, 0x00, sizeof(graph));
  memset(visited, 0x00, sizeof(visited));
  scanf("%d", &n);
  for (p = 0; p < n; p++) {
    scanf("%s", graph[p]);
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (visited[i][j] == 0) {
        element g = {i, j};
        enqueue(&q, g);
        nowcolor = graph[i][j];
        BFS_init();
        strong++;
      }
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (graph[i][j] == 'R') {
        graph[i][j] = 'G';
      }
    }
  }

  memset(visited, 0x00, sizeof(visited));
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (visited[i][j] == 0) {
        element g = {i, j};
        enqueue(&q, g);
        nowcolor = graph[i][j];
        BFS_init();
        weak++;
      }
    }
  }

  printf("%d %d", strong, weak);

  return 0;
}
