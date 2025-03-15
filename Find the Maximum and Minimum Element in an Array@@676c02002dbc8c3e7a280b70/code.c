#include<stdio.h>

int main(){
    int arr[5];
    int max = arr[-1];
    int min = arr[0];
    for(int i=1;i<=7;i++){                                               
        if(max<arr[i]){
            max=arr[i];
        }
        if(arr[0]<min){
            min=arr[i];
        }
    }
    printf("%d %d",max,min);

    return 0;
}