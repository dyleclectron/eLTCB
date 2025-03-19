#include <stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int n; scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        //printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
        a[i]=max(a[i],0);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
