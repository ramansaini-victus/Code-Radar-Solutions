#include<stdio.h>

void fibo(int n);
int main(){
    int n;
    scanf("%d",&n);
    fibo(n);

    return 0;
}

void fibo(int n){
    int a=0,b=1,c;
    for(int i=1;i<=n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;

    }

}
