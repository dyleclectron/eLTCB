#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi=3.14159265358979;
    float R; scanf("%f",&R);
    double s=4*pi*R*R,v=(1.333333)*pi*R*R*R;
    printf("S= %.2lf\n",s);
    printf("V= %.2lf\n",v);
}