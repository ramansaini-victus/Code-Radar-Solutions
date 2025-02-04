#include<stdio.h>
int main(){
    int a,b;
    b=a*a;
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}