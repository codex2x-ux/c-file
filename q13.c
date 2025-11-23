#include<stdio.h>

void main(){
    int i,num;
    printf("enter the number you want table of ");
    scanf("%d",&num);
    for(i=1;i<11;i++){
        printf("%d X %d = %d\n", num,i,i*num);
    }
}
