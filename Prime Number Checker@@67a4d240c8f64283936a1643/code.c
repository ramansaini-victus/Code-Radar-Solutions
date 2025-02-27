#include<stdio.h>
void prime();
int main(){
    int n,count=1;
    scanf("%d",&n);
    prime();

    return 0;
}

void prime(){
    for(int i=1;i<=n;i++){
        if(n%i==0);
        count++;
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}