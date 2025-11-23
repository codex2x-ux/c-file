#include <stdio.h>

void showPointers() {
    int a = 10;
    int *p1 = &a;
    int **pp1 = &p1;

    float f = 3.14;
    float *p2 = &f;
    float **pp2 = &p2;

    char c = 'X';
    char *p3 = &c;
    char **pp3 = &p3;

    char str[] = "Hello";
    char *p4 = &str[0];     // points to first element
    char **pp4 = &p4;

    printf("Integer value = %d\n", **pp1);
    printf("Float value = %.2f\n", **pp2);
    printf("Character value = %c\n", **pp3);
    printf("String value = %s\n", *pp4);
}

int main() {
    showPointers();
    return 0;
}
