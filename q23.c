#include<stdio.h>
int bin(int);
int bin(int n){
    int rem, f=1, bnum=0;
    while(n>0){
    rem=n%2;
    bnum=bnum+(rem*f);
    f=f*10;
    n=n/2;}
    return(bnum);
    }
void main(){ int n1,n2,n3;
    printf("enter the number 1 ");
    scanf("%d",&n1);
    printf("enter the number 2 ");
    scanf("%d",&n2);
    printf("enter the number 3 ");
    scanf("%d",&n3);
    int res1= bin(n1);
    int res2= bin(n2);
    int res3= bin(n3);

    printf("%d\n",res1);
    printf("%d\n",res2);
    printf("%d\n",res3);
}
