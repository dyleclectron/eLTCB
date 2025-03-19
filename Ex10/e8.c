#include <stdio.h>
int main()
{
    printf("Array 1: \n");
    int n; scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array 2: \n");
    int m; scanf("%d",&m);int b[m];
    for(int i = 0;i < m;i++)
    {
        scanf("%d",&b[i]);
    }
    int i=0,j=0,c[m+n];
    for(int k=0;k<m+n;k++)
    {
        if(i==n) {c[k]=b[j];j++;}
        else if(j==m) {c[k]=a[i];i++;}
        else if(a[i]<b[j]) {c[k]=a[i];i++;}
        else {c[k]=b[j];j++;}
    }
    for(i=0;i<m+n;i++)
    printf("%d ",c[i]);
}