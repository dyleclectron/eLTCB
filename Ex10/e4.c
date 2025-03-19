#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int max[2],min[2],a[n];
    for(int i = 0;i < n;i++)
    {
        //printf("Nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
    max[0]=min[0]=a[0];
    max[1]=min[1]=0;
    for(int i = 1;i < n;i++)
    {
        if(a[i]>max[0]) {max[0]=a[i];max[1]=i;}
        if(a[i]<min[0]) {min[0]=a[i];min[1]=i;}
    }
    printf("Phan tu lon nhat la %d o vi tri %d\n",max[0],max[1]);
    printf("Phan tu nho nhat la %d o vi tri %d\n",min[0],min[1]);
    return 0;
}