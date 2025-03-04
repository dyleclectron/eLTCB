#include <stdio.h>
#include <math.h>
int fibonaci(int n)
{
    return n==1||n==2?1:fibonaci(n-1)+fibonaci(n-2);
}
int main()
{
    int n;scanf("%d",&n);
    printf("%d",fibonaci(n));
    return 0;
}