#include<stdio.h>
int main(){
    Char light; 
    scanf("%d",&light);
    switch(light){
        case "R": printf("Stop \n");
                break;
        case "G": printf("Go \n");
                break;
        case "Y":printf("Slow Down \n");
                break;
        default:printf("Invalid input");                            
        
    }
    return 0;
}