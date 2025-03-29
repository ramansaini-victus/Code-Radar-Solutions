#include<stdio.h>
int main(){
    int a[20],n,max1,max2;
    scanf("%d",&n);
    for(int b=0;b<n;b++){
        scanf("%d",&a[b]);
    }
    max1=a[0];
    for(int i=0;i<n;i++){
        if(max1>a[0]){
            max2=max1-1;
        }
    }
    printf("%d",max2);
    return 0;
}