#include<stdio.h>
int main(){
    int arr[n];
    int evencount=0;
    int oddcount=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        arr[i]=scanf("%d",&i);
    }
  
    for(int i=0;i<=n;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("%d %d",evencount,oddcount);

    return 0;
}