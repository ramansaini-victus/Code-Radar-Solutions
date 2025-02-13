#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,count=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count+=1;
        }
    }
    if(count==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}
