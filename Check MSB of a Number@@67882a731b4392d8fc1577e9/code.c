#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int msb= 1 <<(sizeof(int)*8-1);
    if(num&msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}