#include<stdio.h>

void main(){
    int a,b,c;
    a=45,b=6,c=55;
    if(a>b&&a>c){
        printf("the greatest number is a, that is %d",a);
    }
    if(b>a&&b>c){
        printf("the greatest number is b, that is %d",b);
    }
    if(c>b&&c>a){
        printf("the greatest number is c, that it %d",c);
    }
}
