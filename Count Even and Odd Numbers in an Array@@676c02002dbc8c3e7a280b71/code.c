#include<stdio.h>
int main(){
    int arr[5];
    int evencount=0;
    int oddcount=0;
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    scanf("%d",&arr[3]);
    scanf("%d",&arr[4]);
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