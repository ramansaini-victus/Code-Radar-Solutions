#include<stdio.h>
printArray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}
bubblesort(int* a,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int a[20],n;
    scanf("%d",&n);
    for(int b=0;b<n;b++){
        scanf("%d",&a[b]);
    }
    bubblesort(a,n);
    printArray(a,n);
    return 0;

}