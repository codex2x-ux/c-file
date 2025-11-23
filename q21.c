#include<stdio.h>

void main(){
    int arr[]={20,21,12,3,4,11};
    // bubble sort
    int i,j,temp,swap=0;
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
            if(swap!=1)
    break;
            }
        }
    }
    
for(i=0;i<5;i++){ 
        printf("%d\t",arr[i]);
    }
    printf("\n");

    // selection sort
    int imin, a[]={2,1,3,4,8,5};
    for(i=0;i<=5;i++){
        imin=i;
        for(j=i;j<6;j++){
            if(a[j]<a[imin]){
                imin=j;
                temp=a[i];
                a[i]=a[imin];
                a[imin]=temp; }              
        }}
    for(i=0;i<=5;i++){ 
        printf("%d\t",a[i]);
    }
    printf("\n");

    //insertion sort
    int b[]={5,2,4,6,1,3};
    int key;
    for(i=1; i<6; i++){         // start from 2nd element
        key = b[i];             // store current element
        j = i - 1;              // index of previous element

        // shift elements that are greater than key
        while(j >= 0 && b[j] > key){
            b[j + 1] = b[j];    // move the element one position ahead
            j--;                // move left
        }

        // place key at its correct position
        b[j + 1] = key;
    }

    // print sorted array
    for(i=0; i<6; i++){
        printf("%d\t", b[i]);
    }
    printf("\n");
}
 


