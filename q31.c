#include<stdio.h>

void main(){
    float x,y=1,e,n;
    e=0.001;
    printf("enter the number you want to get square root of: ");
    scanf("%f",&n);
    x=n;
    while((x-y)>e){
        x=(x+y)/2;
        y=n/x;
    }
    printf("the square root of the number is %.3f",y);

}
