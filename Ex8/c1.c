#include <stdio.h>
int main()
{
    int s=0,n=10;
    while(n--)
    {
        int a;scanf("%d",&a);
        s+=a;
    }
    printf("Sum = %d",s);
    return 0;
}