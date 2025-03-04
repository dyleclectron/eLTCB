#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&d,&e,&f);
    if(a*e == b*d)
    {
        if(a*f == c*d){
            printf("He phuong trinh vo so nghiem\n");
            return 0;
        }
        printf("He phuong trinh vo nghiem\n");
    }
    else
    {
        double y=(double)(f*d-a*c)/(b*d-a*e);
        double x=(double)(c-b*y)/a;
        printf("He phuong trinh co nghiem: \n x = %.2lf,\n y = %.2lf\n",x,y);
    }
    return 0;
}