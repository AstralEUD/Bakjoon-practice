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

int graph[1005][1005];

int dx[5] = {0, 1, 0, -1};

int dy[5] = {1, 0, -1, 0};

int BFS_cnt = 0;

int BFS_init(void) {

  int e, i, nx, ny;

  element g;

  while (!is_empty(&q)) {

    g = dequeue(&q);

    // printf("pop: %d %d %d \n", g.x, g.y, g.num);

    for (i = 0; i < 4; i++) {

      nx = g.x + dx[i];

      ny = g.y + dy[i];

      if (graph[nx][ny] == 0) {

        graph[nx][ny] = g.num + 1;

        element h = {nx, ny, g.num + 1};

        enqueue(&q, h);

        // printf("push: %d %d %d \n", nx, ny, g.num + 1);

        BFS_cnt++;

      }

    }

  }

  return g.num;

}

int main(void) {

  int n, m, i, p, r, s, cnt_first, cnt_minus;

  cnt_first = 0;

  cnt_minus = 0;

  init_queue(&q);

  memset(graph, 0xFF, sizeof(graph));

  scanf("%d %d", &m, &n);

  for (p = 1; p <= n; p++) {

    for (r = 1; r <= m; r++) {

      scanf("%d", &graph[p][r]);

      if (graph[p][r] == 1) {

        element g = {p, r, 1};

        enqueue(&q, g);

        cnt_first++;

        BFS_cnt++;

      } else if (graph[p][r] == -1) {

        cnt_minus++;

      }

    }

  }

  s = BFS_init();

  if (cnt_first == (n * m)) {

    printf("0"); // 모두가 이미 익어있는 상태

    return 0;

  } else if (cnt_first == 0) {

    printf("-1"); // 모두가 익지 못하는 상태

    return 0;

  }

  if ((BFS_cnt + cnt_minus) == (n * m)) {

    printf("%d", --s);

    return 0;

  } else {

    printf("-1");

    return 0;

  }

}