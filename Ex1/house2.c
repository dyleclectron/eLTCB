#include <stdio.h>
#include <stdlib.h>

void sieve_of_enatosthenes(int n)
{
    int *arr=(int*)malloc(sizeof(int)*(n+1));
    for(int i=0;i<=n;i++)
    {
        arr[i]=1;
    }
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==1)
        {
            printf("%d ",i);
        }
    }
    free(arr);
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}