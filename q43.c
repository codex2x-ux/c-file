#include <stdio.h>

struct Student {
    unsigned int rollno;     // normal field
    unsigned int age : 5;    // bit-field (5 bits can store 0–31)
    unsigned int isPresent : 1;  // bit-field (1 bit → 0 or 1)
};

int main() {
    struct Student s1;

    s1.rollno = 101;
    s1.age = 18;         // fits within 5 bits
    s1.isPresent = 1;    // 1 bit – represents TRUE
    printf("Roll No : %u\n", s1.rollno);
    printf("Age     : %u\n", s1.age);
    printf("Present : %u\n", s1.isPresent);
    return 0;
}
