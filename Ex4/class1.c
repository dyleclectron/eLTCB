#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double delta = b*b - 4*a*c;
    if (delta<0)
    {
        printf("Phuong trinh vo nghiem");
        return 0;
    }
    double x1 = (double)(-b + sqrt(delta))/(2*a), x2 = (double)(-b - sqrt(delta))/(2*a);
    if (delta == 0)
        printf("Phuong trinh co nghiem kep x = %lf",x1);
    else
        printf("Phuong trinh co 2 nghiem: \n x1 = %lf \n x2 = %lf",x1,x2);
    return 0;    
}