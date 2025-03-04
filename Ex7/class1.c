//Cau 1.

#include <stdio.h>

int find_max(int a,int b)
{
    return a>b?a:b;

}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("MAX = %d",find_max(a,b));
    return 0;
}