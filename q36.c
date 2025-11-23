#include<stdio.h>

void main(){
    int a[5]={1,2,3,4,5};
    int *p; int i;
    p=&a[0];
   // printf("%d\n",*p++);
   // printf("%d\n",*p++);
   // printf("%d\n",*p++);
   // printf("%d\n",*p++);
   // printf("%d\n\n",*p++);
 for(i=0;i<5;i++){
        printf("%d\n",*p++);
    }
}

   


