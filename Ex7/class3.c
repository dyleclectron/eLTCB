//Cau 3.
#include <stdio.h>

long long pow_e(int x,int y)
{
    long long res=1;
    for(int i=0;i<y;i++) res*=(long long)x;
    return res;
}


int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("x^y = %d",pow_e(x,y));
    return 0;
}