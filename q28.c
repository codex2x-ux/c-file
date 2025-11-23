#include<stdio.h>
#include<string.h>

void main(){
    char name[10];
    printf("enter name ");
    gets(name);
    int length=strlen(name);
    printf("the length of %s is %d",name, length);
}
