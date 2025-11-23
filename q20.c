#include<stdio.h>

void main(){
    int arr[6]={10,20,30,40,50}; int i;
    // for display:
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
    // for reverse:
    for(i=4;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    printf("\n");

    // for insert:
    int position= 3;
    for(i=5;i>=position-1;i--){
        arr[i]=arr[i-1];
    }
    arr[2]=25;
    for(i=0;i<6;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");

    // for delete:
    for(i=position;i<=6;i++){
        arr[i-1]=arr[i];
    }
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");

    // for unary search:
    {int found=0, key=20;
    for(i=0;i<=4;i++){
        if(arr[i]==key){
            found=1;
            break;}
        else{
            found=0;
        }}
    if(found==1){
        printf("key is found at %d\n",i+1);}
    if(found!=1){
        printf("key is not found ");
    }}
    
    printf("\n");

    //for binary search:
    int low, high, mid, key=20;
    low=0; high=4;
    while(low<=high){
        mid=(low+high)/2;
    if(arr[i]==key){
        printf("the key is found at %d", i+1);
        break;
        }
        if(arr[mid]<key){
            low=mid+1;}
        else{
           high=mid-1;}}
    if(low>high){
        printf("key is not found");
    }

}
