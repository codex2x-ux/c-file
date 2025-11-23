#include<stdio.h>
void swap(int*, int*);
void swap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("after swap a and b are %d and %d.",*x,*y);

}

void main(){
    int a, b;
    a=10; b=5;
    swap(&a,&b);

}
