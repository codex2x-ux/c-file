#include<stdio.h>

void main(){ 
    int name[6]={'a','b','c','d','e','f'};
    int j=5, i=0;
    char temp;
    while(i<j){
        temp=name[i];
        name[i]=name[j];
        name[j]=temp;
        i++;
        j--;
}
for(i=0;i<6;i++){
printf("%c\t",name[i]);}
}