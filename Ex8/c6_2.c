#include <stdio.h>
#include <math.h>
int perfect(int n)
{
    int res=1;
    for(int i=2;i*i<=n;i++)
    if(n%i==0) res+=i+(int)n/i;
    int tmp=(int)(sqrt(n));
    if(tmp*tmp==n) res-=tmp;
    if (n==(res)) return 1; 
    return 0;
}
int main()
{
    int n;scanf("%d",&n);
    if(perfect(n)) printf("la so hoan hao");
    else printf("khong la so hoan hao");
    return 0;
}