#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j=j+2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}