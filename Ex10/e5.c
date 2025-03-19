#include <stdio.h>

int main()
{
    int n,x; scanf("%d %d",&n,&x);
    int a[n],ans=-1;
    for(int i = 0;i < n;i++)
    {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
        if(a[i]==x) ans=i;
    }
    if(ans==-1) printf("Khong tim thay %d trong mang\n",x);
    else printf("%d xuat hien dau tien o vi tri %d\n",x,ans);
    return 0;
}