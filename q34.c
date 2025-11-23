#include<stdio.h>

void main(){
    int *ptr;
    int a=10;
    ptr=&a;
    printf("the pointer's value is %d\n", *ptr);
    printf("the pointer's address is %x\n", &ptr);
    printf("the pointer's value is %d", a);
}
