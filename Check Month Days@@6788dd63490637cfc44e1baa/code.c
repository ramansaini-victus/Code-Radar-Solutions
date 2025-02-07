#include<stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    switch(month){
        case January:printf("31");
                     break;
        case February:printf("28");
                     break;
        case March:printf("31");
                     break;
        case April:printf("30");
                     break;
        case May:printf("31");
                     break;
        case June:printf("30");
                     break;
        case July:printf("31");
                     break;
        case August:printf("31");
                     break;
        case September:printf("30");
                     break;
        case October:printf("31");
                     break;
        case November:printf("30");
                     break;
        case December:printf("31");
                     break;
        Default:printf("Invalid month");             
    }
    return 0;           
}