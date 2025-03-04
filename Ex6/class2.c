//Bài 6
#include <stdio.h>

int main()
{
    int x,eps;
    scanf("%d %d",&x,&eps);
    double tmp = 1.0; 
    double ans = 1.0;
    int n = 1;

    while (tmp > eps || tmp < -eps) {
        tmp *= x / n; 
        ans += tmp;
        n++;
    }
    printf("e mu %d=%.2lf",x,ans);
    return 0;
}