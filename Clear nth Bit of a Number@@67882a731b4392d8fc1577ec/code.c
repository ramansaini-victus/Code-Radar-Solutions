#include<stdio.h>
int main(){
    int a,b,after_shift;
    scanf("%d %d",&a,&b);
    after_shift= a & ~(1<<b);
    printf("%d",after_shift);
    return 0;
}