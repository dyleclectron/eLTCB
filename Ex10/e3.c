#include <stdio.h>

int main()
{
    int n; scanf("%d",&n);
    int a[n],sum=0,sum_d=0,d=0;
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        if(a[i]>=0) {sum_d+=a[i];d++;}
    }
    printf("Tong cac phan tu: %d\n",sum);
    printf("Tong cac phan tu duong: %d\n",sum_d);
    printf("Tong cac phan tu am: %d\n",sum-sum_d);
    printf("Trung binh cong cac phan tu: %.2f\n",(float)sum/n);
    printf("Trung binh cong cac phan tu duong: %.2f\n",(float)sum_d/d);
    printf("Trung binh cong cac phan tu am: %.2f\n",(float)(sum-sum_d)/(n-d));
    return 0;
}