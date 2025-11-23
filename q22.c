#include<stdio.h>
int fun(); //function declaration
void main(){
    int fun(int a){  //function definition
        int result = a*a;
        return(result);
    }
    int multiply;
    multiply= fun(5);  //function calling
    printf("%d",multiply);

    /* 
    types of functions:
    1. no argument no return
    2. no argument with return
    3. with argument no return
    with argument with return
    */
}
