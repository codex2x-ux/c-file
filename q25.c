#include<stdio.h>
/*types of storage classes:
    we will be discussing the default value, location, scope and validity
    1. auto-> garbage value, RAM, block, end of block*/
void fun();
    void fun(){
        auto int a=5;
        printf("a is %d\t",a+=2);
    }
void fun1();
    void fun1(){
        static int b=5;
        printf("b is %d\t",b+=2);
        }
void main(){
            fun();
            fun();
            fun();
    printf("\n");
    /*2. static-> '0', RAM, block, end of block
    now if we create a similar function like fun, but change the storage class to static instead of auto, 
    the results will be*/
        fun1();
        fun1();
        fun1();

    /*3. register-> garbage value, register, block, end of block
    it is almost like auto but it stores value in register (a small space of bits to save time 
    instead of saving in RAM)*/

    /*4. extern-> '0', RAM, block, end of all files
    it is used to use a variable created in different files without the need to create a same variable in different files,
    for collaboration works.*/
    }




    
    
    
    
    

