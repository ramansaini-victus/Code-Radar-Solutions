#include<stdio.h>
int main(){
    int arr[6];
    int count=0;
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    scanf("%d",&arr[3]);
    scanf("%d",&arr[4]);
    scanf("%d",&arr[5]);
    for(int i=0;i<=5;i++){
        if(arr[i]%i==0){
            count++;
        }
        printf("%d ",arr[i]);
    }
    return 0;
}