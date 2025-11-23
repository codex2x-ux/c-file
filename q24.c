#include<stdio.h>
int fact(int);
int fact(int n){
    if(n==1){
        return(1);}
    else{
    int result= n*fact(n-1);
    return(result);
}}
void main(){ int n;
    printf("enter the number ");
    scanf("%d",&n);
    int final=fact(n);
    printf("the factorial is %d",final);
}
