#include <stdio.h>
int main()
{   
    int n; 
    scanf("%d",&n); 
    double ans=1; 
    for(int i=2;i<=n;i++) ans+=(double)(1/n); 
    printf("%.2lf",ans);
    return 0;
}