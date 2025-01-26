#include<stdio.h>
int main(){
    int c,s;
    scanf("%d",&c);
    scanf("%d",&s);
    if (s>c){
        printf("Profit \n");
    }
    else if (c>s){
        printf("Loss \n");
    }
    else{
        printf("No Profit No Loss \n");
    }
    return 0;
}