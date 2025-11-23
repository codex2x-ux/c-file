#include <stdio.h>

void main(){
    int a;
    int b=8,c=5;
    printf("Enter the calculation sign that you want to perform: ");
    scanf("%c+", &a);

    switch(a){
        case '+':
            printf("%d",b+c);
            break;
        case '-':
            printf("%d",b-c);
            break;
        case '*':
            printf("%d",b*c);
            break;
        case '/':
            printf("%d",b/c);
            break;
        default:
            printf("Nothing matched");
    }
}