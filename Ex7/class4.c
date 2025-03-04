//Cau4.
#include <stdio.h>
void prime(int n)
{
    int a[n+3];
    for(int i=0;i<=n;i++) a[i]=1;
    a[0]=a[1]=0;
    for(int i=2;i<=n;i++)
    {
        if (a[i]==0) continue;
        printf("%d ",i);
        for(int j=2;i*j<=n;j++) a[i*j]=0;
    }
    if (a[n]) printf("\n%d la so nguyen to",n);  else
    printf("\n%d khong phai la so nguyen to",n); 
}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}