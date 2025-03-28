#include<stdio.h>
void sorted(int *a,int n){
    int temp,is_sorted;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            if(temp=is_sorted){
                printf("Sorted");

            }
            else{
                printf("Not sorted");
            }
            }
        }
    }
}

int main(){
    int a[20],n;
    scanf("%d",&n);
    for(int b=0;b<n;b++){
        scanf("%d",a[b]);
    }
    return 0;

}