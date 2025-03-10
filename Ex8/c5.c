#include <stdio.h>

int UC(int i,int n)
{
    if(i*i>n) return 0;
    if (n%i==0)
    {
        printf("%d ",i);int tmp=i;
        UC(++i,n);
        if ((tmp*tmp)!=n) printf("%d ",(int)n/tmp);
        printf("\n");
    }
    else UC(++i,n);
}
int main()
{
    int n;scanf("%d",&n);
    while (n--)
    {
        int tmp;scanf("%d",&tmp);
        UC(1,tmp);
    }
    return 0;
}