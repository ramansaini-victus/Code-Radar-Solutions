#include<stdio.h>

int main(){
    int arr[7]={1,4,2,7,19,5,12};
    int max = arr[0];
    int min = arr[0];
    for(int i=1;i<=7;i++){                                               
        if(max<arr[i]){
            max=arr[i];
        }
        if(arr[0]<min){
            min=arr[i];
        }
    }
    printf("%d and %d",max,min);

    return 0;
}