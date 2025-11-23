#include<stdio.h>
#include<string.h>
void main(){
    char name1[20], name2[20];
    int l1,l2,i;
    printf("enter name1 ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';  // remove newline

    printf("enter name2 ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';  // remove newline

    l1= strlen(name1);
    l2= strlen(name2);
    name1[l1]=' ';
    for(i=0;i<l2;i++){
        name1[(l1+1)+i]=name2[i];
    }
    printf("combined name is %s",name1);
}
