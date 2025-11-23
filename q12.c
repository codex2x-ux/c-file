#include<stdio.h>

void main(){
    int i,j;
    for(i=1;i<10;i++){
        if(i==4){
            break;
        }
        printf("%d\t",i);
    }
    printf("\n");
    for(i=1;i<10;i++){
        if(i==4){
            continue;
        }
        printf("%d\t",i);
    }
    printf("\n");
    i=1;
    start:
    if(i<5){
    printf("%d\t",i);
    i++;
    goto start;}
    

}
