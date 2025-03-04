#include <stdio.h>
int to_2(int n)
{
    if (n==0) return 0;
    else 
    {
        to_2(n/2);
        printf("%d",n%2);
    }
    return 0;
}
int to_8(int n)
{
    if (n==0) return 0;
    else 
    {
        to_2(n/8);
        printf("%d",n%8);
    }
    return 0;
}
int to_16(int n)
{
    char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    if (n==0) return 0;
    else 
    {
        to_2(n/16);
        printf("%c",a[n%16]);
    }
    return 0;
}
int main()
{
    int n;scanf("%d",&n);
    printf("%d to BIN: ",n);to_2(n);printf("\n");
    printf("%d to OCT: ",n);to_8(n);printf("\n");
    printf("%d to HEX: ",n);to_16(n);printf("\n");
    return 0;        
}