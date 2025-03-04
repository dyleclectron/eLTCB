//Ví dụ 2:
#include <stdio.h>

int main()
{
    int n; scanf("%d",&n);
    int tmp[n+1];
    for(int i=0;i<n;i++) scanf("%d",&tmp[i]);

    //1 in day
    for(int i=0;i<n;i++) printf("%d ",tmp[i]);
    printf("\n");

    //2 in số chẵn một dòng và số lẻ 1 dòng
    int d=0,a[n+2];
    for (int i=0;i<n;i++)
        if(tmp[i]%2==0) printf("%d ",tmp[i]);
        else a[d++]=tmp[i];
    printf("\n");
    for (int i=0;i<d;i++) printf("%d ",a[i]);
    printf("\n");

    //3 sắp xếp theo quy tắc: số âm đầu dãy, dương cuối dãy
    int b[n+2];d=0;
    for (int i=0;i<n;i++)
        if(tmp[i]<0) printf("%d ",tmp[i]);
        else b[d++]=tmp[i];
    for (int i=0;i<d;i++) printf("%d ",b[i]);
    printf("\n");

    //4. Mở rộng:
    int c_z=0,c_p=0,z[n],p[n];
    for(int i=0;i<n;i++)
    {
        if (tmp[i]<0) printf("%d ",tmp[i]);
        else if(tmp[i]==0) z[c_z++]=tmp[i];
        else p[c_p++]=tmp[i];
    }
    for(int i=0;i<c_z;i++) printf("%d ",z[i]);
    for(int i=0;i<c_p;i++) printf("%d ",p[i]);
    return 0;
}