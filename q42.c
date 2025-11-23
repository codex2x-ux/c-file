#include <stdio.h>

struct add {
    int rollno;
    char name[20];
    struct add *next;   // self-referencing pointer
};

int main() {
    struct add v1 = {1, "hema", NULL};
    struct add v2 = {2, "rekha", NULL};
    v1.next = &v2;
    printf("%d %s\n", v1.rollno, v1.name);
    // Print second structure using self-referencing pointer
    printf("%d %s\n", v1.next->rollno, v1.next->name);
    return 0;
}
