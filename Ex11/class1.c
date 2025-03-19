#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    printf("Truong hop 1: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Nhap a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Truong hop 2: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}