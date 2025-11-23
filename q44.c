#include <stdio.h>

int main() {
    int MAX = 5;         
    int stack[5];          // array size fixed
    int top = -1;          // starting position

    // Function definitions inside main (using prototypes above main is also allowed)

    // isFull function
    int isFull() {
        return (top == MAX - 1);
    }
    // isEmpty function
    int isEmpty() {
        return (top == -1);
    }
    // push function
    void push(int value) {
        if (isFull()) {
            printf("Stack is Full! Cannot push %d\n", value);
        } else {
            top++;
            stack[top] = value;
            printf("%d pushed to stack\n", value);
        }
    }
    // pop function
    int pop() {
        if (isEmpty()) {
            printf("Stack is Empty! Cannot pop.\n");
            return -1;
        } else {
            int value = stack[top];
            top--;
            return value;
        }
    }
    // Testing the stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);   // will show full
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop()); // will show empty
    return 0;
}
