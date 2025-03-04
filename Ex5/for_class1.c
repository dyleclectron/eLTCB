//Bài 1
#include <stdio.h>

int main()
{
    int n=10;
    for (int i=1;i<=n;i++)
    printf("%d ",i);
    printf("\n");n=50;
    for(int i=3;i<=n;i=i+3)
    printf("%d ",i);
    return 0;
}