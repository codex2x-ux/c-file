#include<stdio.h>
int *findmid(int a[],int len){
    return(&a[len/2]);
}
void main(){
    int a[]={1,2,3,4,5};
    int len= sizeof(a)/sizeof(a[0]);
    int *mid=findmid(a,len);
    printf("the mid value is %d",*mid);
}
