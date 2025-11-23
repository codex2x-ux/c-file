#include<stdio.h>

void main(){
    int a,b,temp;
    a=5,b=10;
    temp=a;
    a=b;
    b=temp;
    printf("the value of a is %d\nthe value of b is %d",a,b);
}
