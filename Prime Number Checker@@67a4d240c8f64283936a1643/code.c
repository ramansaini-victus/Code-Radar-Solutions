
int isPrime(int n)
{
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count+=1;
        }
    }
    if(count==0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}

