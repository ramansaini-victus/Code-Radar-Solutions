#include<stdio.h>

void fibo(int n);
int main(){
    int n,a=0,b=1,c;
    scanf("%d",&n);
    fibo(n);

    return 0;
}

void fibo(int n){
    for(int i=1;i<=n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;

    }

}