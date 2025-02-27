#include<stdio.h>
void prime(int n);
int main(){
    
    scanf("%d",&n);
    prime(n);

    return 0;
}

void prime(){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0);
        count++;
    }
    if(count==2){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}