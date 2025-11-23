#include <stdio.h>

struct add {
    int rollno;
    char name[20];
};
void main() {
    struct add v1 = {1, "hema"};
    struct add v2 = {2, "rekha"};
    printf("%d %s\n", v1.rollno, v1.name);
    printf("%d %s\n", v2.rollno, v2.name);
}
