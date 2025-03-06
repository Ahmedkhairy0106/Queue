#include <stdio.h>
#include "queue.h"

void menu() {
    Queue q, cQueue; // Two queues: one for operations, one for copy
    createQueue(&q);
    createQueue(&cQueue);

    int choice, value;

    do {
        printf("\n===== Queue Menu =====\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Queue Size\n");
        printf("4. First Element (Front)\n");
        printf("5. Last Element (Rear)\n");
        printf("6. Copy Queue\n");
        printf("7. Destroy Queue\n");
        printf("8. Print Queue\n");
        printf("9. Print Copy Queue\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                if(isQueueFull(q)){
                    printf("Queue is full yasta\n");
                    break;
                }
                else{
                    enqueue(value, &q);
                    printf("Element Added successfully!\n");
                }
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                printf("Queue size: %d\n", QueueSize(q));
                break;
            case 4:
                if(isQueueEmpty(q)){
                    printf("Queue is Empty yasta\n");
                }
                else{
                    printf("The front element is: %d\n", QueueFront(q));
                }
                break;
            case 5:
                if(isQueueEmpty(q)){
                    printf("Queue is Empty yasta\n");
                }
                else{
                    printf("The last element is: %d\n", QueueRear(q));
                }
                break;
            case 6:
                if(isQueueEmpty(q)){
                    printf("Queue is Empty yasta\n");
                }
                else{
                    CopyQueue(q, &cQueue);
                    printf("Queue Copied Successfully\n");
                }
                break;
            case 7:
                printf("Are you sure you want to destroy the queue? (1 = Yes, 0 = No): ");
                int confirm;
                scanf("%d", &confirm);
                if (confirm == 1) {
                    destroyQueue(&q);
                    printf("Queue is Destroyed\n");
                } else {
                    printf("Operation cancelled.\n");
                }
                break;
            case 8:
                PrintQueue(q);
                break;
            case 9:
                PrintQueue(cQueue);
                break;
            case 10:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again!\n");
        }
    } while (choice != 10);
}

int main() {
    menu();  // Run the queue menu
    return 0;
}
