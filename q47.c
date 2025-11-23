#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
void main() {
    struct Node *head = NULL, *n1, *n2, *n3, *temp;
    n1 = (struct Node*)malloc(sizeof(struct Node));
    n2 = (struct Node*)malloc(sizeof(struct Node));
    n3 = (struct Node*)malloc(sizeof(struct Node));
    n1->data = 10;  
    n1->next = n2;
    n2->data = 20;  
    n2->next = n3;
    n3->data = 30;  
    n3->next = NULL;
    head = n1;
    // Traversing the linked list
    temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;      // move to next node
    }
}
