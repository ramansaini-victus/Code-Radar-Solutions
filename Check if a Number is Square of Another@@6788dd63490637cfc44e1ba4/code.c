#include<stdio.h>
int main(){
    int a,b;
    b=2*a;
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}