#include<stdio.h>

void main(){
    // there is two type of type conversions:
    // IMPLICIT- 
    // EXPLICIT-
    int a=10;
    char c='5';
    int res;
    res=a+c;
    printf("the value is %d",res); // will give output as a integer
    //output is integer because it follows a heirarchy, i.e., char->short->int->float->double
}
