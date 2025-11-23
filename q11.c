#include<stdio.h>

void main(){
    for(int i=0;i<5;i++){
        printf("%d\t",i);
    }
    {int i=0;
        printf("\n");
    while(i<5){
        printf("%d\t",i);
        i++;
    }}
    int i=0;
    printf("\n");
    do{
        printf("%d\t",i);
        i++;
    }
    while(i<5);
}
