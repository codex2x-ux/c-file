#include<stdio.h>

void main(){
    int marks;
    printf("enter the marks ");
    scanf("%d",&marks);
    if(marks<100 && marks>90){
        printf("grade is A");
    }
    else if(marks<90 && marks>80){
        printf("grade is B");
    }
    else if(marks<80 && marks>70){
        printf("grade is C");
    }
    else if(marks<70 && marks>60){
        printf("grade is D");
    }
    else{
        printf("grade is F");
    }
}