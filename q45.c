#include <stdio.h>

int main() {
    int MAX = 5;           // queue size
    int queue[5];          // array
    int front = -1, rear = -1;

    // Function: check if queue is full
    int Is_full() {
        return (rear == MAX - 1);
    }
    // Function: check if queue is empty
    int Is_empty() {
        return (front == -1 || front > rear);
    }
    // Function: insert element (enqueue)
    void enqueue(int value) {
        if (Is_full()) {
            printf("Queue is Full! Cannot enqueue %d\n", value);
        } else {
            if (front == -1) front = 0;    // first element
            rear++;
            queue[rear] = value;
            printf("%d enqueued to queue\n", value);
        }
    }
    // Function: delete element (dequeue)
    int dequeue() {
        if (Is_empty()) {
            printf("Queue is Empty! Cannot dequeue.\n");
            return -1;
        } else {
            int val = queue[front];
            front++;
            return val;
        }
    }
    // Testing the queue
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);   // will show queue full
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue()); // will show empty
    return 0;
}
