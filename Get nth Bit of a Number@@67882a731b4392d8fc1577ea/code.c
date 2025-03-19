#include<stdio.h>
int main(){
    int a,b,after_shift;
    scanf("%d %d",&a,&b);
    after_shift=(a>>b) & 1;
    printf("%d",after_shift);
    return 0;
}