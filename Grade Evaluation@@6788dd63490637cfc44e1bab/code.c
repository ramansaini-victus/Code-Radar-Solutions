#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x=='A'){

        printf("Excellent \n");
    }    
    if(x=='B'){
        printf("Good \n");
    }    
    else if(x=='C'){
        printf("Average \n");
    }    
    else if(x=='D'){
        printf("Below Average \n");
    }
    else if (x=='F'){
        printf("Fail \n");
    }
    else {
        printf("Inavlid grade \n");
    }
    return 0;

}