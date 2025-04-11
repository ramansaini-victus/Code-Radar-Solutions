#include<stdio.h>
int main(){
    int arr[20],n;
    scanf("%d",&n);
    for(int b=0;b<n;b++){
        scanf("%d",&arr[b]);
    }
    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
        printf("%d",arr[i]);
    }
    return 0;
}