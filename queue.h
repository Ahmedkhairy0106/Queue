#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define MAX 10

typedef int Type;
typedef struct queue {
    int front;
    int rear;
    int size;
    Type items[MAX];
} Queue;

void createQueue(Queue *q);
int isQueueEmpty(const Queue *q);
int isQueueFull(const Queue *q);
int QueueSize(const Queue *q);
void enqueue(Type item, Queue *q);
int dequeue(Queue *q, Type *item);
Type QueueFront(const Queue *q);
Type QueueRear(const Queue *q);
void PrintQueue(const Queue *q);
void destroyQueue(Queue *q);
void CopyQueue(const Queue *q, Queue *q2);

// it is better to pass it as const Queue* to avoid unnecessary copying and improve performance.

#endif // QUEUE_H_INCLUDED
