#include<stdio.h>
void printArray(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void bubbleSort(int* arr,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if( arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[12],n;
    printf("enter the number of array:");
    scanf("%d",&n);
    for(int b=0;b<n;b++){
        printf("enter elements:");
        scanf("%d",&arr[b]);
    }
    printArray(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}


