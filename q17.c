#include<stdio.h>

void main(){
    int num, temp,pali=0;
    num=1331331;
    temp=num;
    while(num!=0){
        pali*=10;
        pali+=num%10;
        num=num/10;}
        if(pali==temp)
            printf("number is a palindrome");
        else
        printf("number is not a palindrome");
        }
    

