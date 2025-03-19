#include <stdio.h>
int main()
{
    int a[11];
    for(int i = 0;i < 10;i++)
    {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
    for(int i=10;i-->0;)
    printf("%d ",a[i]);
    return 0;
}