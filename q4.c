#include<stdio.h>

void main(){
    int a=10,b=5,r=5;
    int circarea, sqarea, rectarea, circperi, sqperi, rectperi;
    circarea= 3.14*r*r;
    sqarea= r*r;
    rectarea= a*b;
    circperi= 2*3.14*r;
    sqperi= 4*r;
    rectperi= 2*(a+b);
    printf("the area of circle is %d\n",circarea);
    printf("the area of square is %d\n",sqarea);
    printf("the area of rectangle is %d\n",rectarea);
    printf("the perimeter of circle is %d\n",circperi);
    printf("the perimeter of square is %d\n",sqperi);
    printf("the perimeter of rectangle is %d\n",rectperi);
}
