#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("Nhap ma tran a: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Nhap a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Nhap ma tran b: \n");  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Nhap b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Tong cua 2 ma tran: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
