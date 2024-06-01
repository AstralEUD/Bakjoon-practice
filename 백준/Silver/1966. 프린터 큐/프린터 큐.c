/* init */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define min(x, y) (x) < (y) ? (x) : (y)
#define max(x, y) (x) > (y) ? (x) : (y)

#define MAX_SIZE 50000
#define TRUE 1
#define FALSE 0
#define ERROR -1

int cnt = 0;

typedef struct __vertexInfo {
  int pri;
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
  } else {
    q->rear = ((q->rear + 1) % MAX_SIZE);
    q->data[q->rear] = data;
  }
  return;
}

element dequeue(Queue *q) {
  if (is_empty(q)) {
    // printf("Queue is empty");
  } else {
    q->front = (q->front + 1) % (MAX_SIZE);
  }
  return q->data[q->front];
}

int find_pri(Queue *q) {
  int pointer = (q->front + 1) % MAX_SIZE;
  element data = q->data[(q->front + 1) % MAX_SIZE];
  element g, r, p;
  // printf("INIT %d %d\n", data.num, data.pri);
  while (pointer != q->rear + 1) {
    if (q->data[pointer].pri > data.pri) {
      // printf("return %d %d\n", q->data[pointer].num, q->data[pointer].pri);
      return 0;
    }
    // printf("%d POINTER \n", pointer);
    pointer = ((pointer + 1) % MAX_SIZE);
  }
  // printf("RETURN 1\n");
  return 1;
}

int front_num(Queue *q) { return q->data[(q->front + 1) % MAX_SIZE].num; }

// memset(A, 0, sizeof(A));
// A배열 1바이트 단위마다 0x00으로 초기화

Queue q;

// ---------------------------------- //

// element arr[100];

int main(void) {
  int n, m, i, j, p, s, k, t, cnt_first, cnt_minus;
  element r;
  // memset(arr, 0x00, sizeof(element));
  scanf("%d", &k);
  for (i = 0; i < k; i++) {
    scanf("%d %d", &n, &m);
    init_queue(&q);
    cnt = 0;
    for (j = 0; j < n; j++) {
      scanf("%d", &p);
      element g = {p, j};
      enqueue(&q, g);
    }
    while (!is_empty(&q)) {
      if (find_pri(&q) == 1) {
        if (front_num(&q) == m) {
          break;
        } else {
          r = dequeue(&q);
          // printf("%d %d %d DEQUEUE \n", r.num, r.pri, cnt);
          cnt++;
        }
      } else {
        r = dequeue(&q);
        enqueue(&q, r);
      }
      // printf("%d %d %d\n", r.num, r.pri, cnt);
    }
    printf("%d\n", ++cnt);
  }

  return 0;
}