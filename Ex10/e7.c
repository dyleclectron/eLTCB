#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++)
    {
        //printf("Nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i++)
    for(int j = i+1;j < n;j++)
    if(a[i]>a[j])
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(int i = 0;i < n;i++)
    printf("%d ",a[i]);
    return 0;
}