#include "queue.h"
#include <stdio.h>

void createQueue(Queue *q) {
    q->front = 0;
    q->rear = MAX - 1;
    q->size = 0;
}

int isQueueEmpty(Queue q) {
    return q.size == 0;
}

int isQueueFull(Queue q) {
    return q.size == MAX;
}

void enqueue(Type item, Queue *q) {
    if (isQueueFull(*q)) {
        return;
    }
    q->rear = (q->rear + 1) % MAX; // To circulate the queue
    q->items[q->rear] = item;
    q->size++;
}

Type dequeue(Queue *q) {
    if (isQueueEmpty(*q)) {
        printf("Queue is Empty yasta\n");
        return -1;
    }
    Type item = q->items[q->front];
    q->front = (q->front + 1) % MAX;
    q->size--;
    printf("Element removed successfully!\n");
    return item;
}

int QueueSize(Queue q){
    return q.size;
}

int QueueFront(Queue q){
    return q.items[q.front];
}

int QueueRear(Queue q){
    return q.items[q.rear];
}

void destroyQueue(Queue *q){
    q->front = 0;
    q->rear = MAX - 1;
    q->size = 0;
}

void CopyQueue(Queue q, Queue *q2){
    createQueue(q2);
    for(int i = 0; i < q.size; i++){
        Type item = q.items[(q.front + i) % MAX];
        enqueue(item , q2);
    }
}

void PrintQueue(Queue q){
    if(isQueueEmpty(q)){
        printf("Queue is Empty yasta\n");
    }
    else{
        printf("Queue Elements: ");
        for(int i = 0; i < q.size; i++){
        Type item = q.items[(q.front + i) % MAX];
        printf("%d ", item);
        }
        printf("\n");
    }
}

