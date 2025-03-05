#include <stdio.h>
char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int toBase(int n,int base)
{
    if (n==0) return 0;
    toBase(n/base,base);
    printf("%c",a[n%base]);
}
int main()
{
    int n,base;scanf("%d %d",&n,&base);
    toBase(n,base);
    return 0;        
}