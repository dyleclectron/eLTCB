#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int a=1;
    double ans=1;
    for(int i=2;i<=n;i++){
        a*=i;
        ans+=(double)(1/a);
    }
    printf("%llf",ans);
    return 0;
}