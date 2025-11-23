#include<stdio.h>

void main(){
    int num,temp,newnum,a,num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,num7=0,num8=0,num9=0,num0=0;
    num=10122;
    temp=num;
    while(num!=0){
        newnum=num%10;
        if(newnum==1){
            num1++;
        }
        else if(newnum==2){
            num2++;
        }
        else if(newnum==3){
            num3++;
        }
        else if(newnum==4){
            num4++;
        }else if(newnum==5){
            num5++;
        }
        else if(newnum==6){
            num6++;
        }else if(newnum==7){
            num7++;
        }
        else if(newnum==8){
            num8++;}
        else if(newnum==9){
            num9++;
        }
        else if(newnum==0){
            num0++;
        }
        num=num/10;
    }
    printf("the repeated number of digit 1 is %d\n",num1);
    printf("the repeated number of digit 2 is %d\n",num2);
    printf("the repeated number of digit 3 is %d\n",num3);
    printf("the repeated number of digit 4 is %d\n",num4);
    printf("the repeated number of digit 5 is %d\n",num5);
    printf("the repeated number of digit 6 is %d\n",num6);
    printf("the repeated number of digit 7 is %d\n",num7);
    printf("the repeated number of digit 8 is %d\n",num8);
    printf("the repeated number of digit 9 is %d\n",num9);
    printf("the repeated number of digit 0 is %d\n",num0);
    }

