#include<stdio.h>
int main(){
    int num[5];
    int evencount=0;
    int oddcount=0;
    scanf("%d",&num[0]);
    scanf("%d",&num[1]);
    scanf("%d",&num[2]);
    scanf("%d",&num[3]);
    scanf("%d",&num[4]);
    for(int i=0;i<=4;i++){
        if(i%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("%d %d",evencount,oddcount);

    return 0;
}