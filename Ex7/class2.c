//Cau2.
#include <stdio.h>

long long run(int n)
{
    if(n==1) return 1;
    return n*run(n-1);
}

int main()
{
    int n;scanf("%d",&n);
    printf("n!= %d",run(n));
    return 0;
}