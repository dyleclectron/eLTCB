#include <stdio.h>
int main()
{
    int n;scanf("%d",&n);
    long long ans=n;
    for(int i=2;i<n;i++) ans*=i;
    printf("%lld",ans);
    return 0;
}