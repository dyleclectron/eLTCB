//Bài 2:
#include <stdio.h>

int main()
{
    int n;scanf("%d", &n);
    int a[n+2];
    for (int i=0;i<n;i++)
    scanf("%d", &a[i]);
    for(int i=0;i<n;i++) print("a[%d]:=%d \n", i,a[i]);   
    return 0;
}