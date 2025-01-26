#include<stdio.h>
int main(){
    int light;
    scanf("%d",&light);
    switch(light){
        case"R": printf("Stop \n");
                break;
        case"G": printf("Go \n");
                break;
        case"Y":printf("Slow Down \n");
                break;
        default:printf("Invalid input");                            
        
    }
    return 0;
}