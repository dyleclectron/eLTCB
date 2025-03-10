#include <stdio.h>

int main()
{
    int n;scanf("%d",&n);
    for(int i=2;i*i<n;i++)
    if (n%i==0)
    {
        printf("Khong la so nguyen to");
        return 0;
    }
    printf("La so nguyen to");
    return 0;
}