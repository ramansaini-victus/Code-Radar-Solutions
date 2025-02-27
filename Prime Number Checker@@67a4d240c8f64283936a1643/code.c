#include<stdio.h>
void prime(int n);
int main(){
    int n,count=1;
    scanf("%d",&n);
    prime(n);

    return 0;
}

void prime(){
    for(int i=1;i<=n;i++){
        if(n%i==0);
        count=count+1;
    }
    if(count==2){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}