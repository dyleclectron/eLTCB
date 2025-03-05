#include <stdio.h>
#include <math.h>
// int fibonaci(int n)
// {
//     return n==1||n==2? 1 : fibonaci(n-1)+fibonaci(n-2);
// }
int main()
{
    int n;scanf("%d",&n);
    // printf("%d",fibonaci(n));
    int a[n+2];a[1]=a[2]=1;
    for(int i=3;i<=n;i++) a[i]=a[i-1]+a[i-2]; 
    printf("%d",a[n]);
    return 0;
}
