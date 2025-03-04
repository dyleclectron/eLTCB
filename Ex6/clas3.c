//Bài 7
#include <stdio.h>

int main()
{
    int year=2014;float gdp[year+10];
    printf("GDP %d: ",year); scanf("%f",&gdp[0]);
    do 
    {
        year++;
        printf("GDP %d: ",year); scanf("%f",&gdp[year-2014]);
    }while (gdp[year-2014]<2*gdp[0]);
    printf(" Nam    GDP\n");
    for(int i=0;i<=year-2014;i++)
    printf("%d    %0.2f \n",2014+i,gdp[i]);
    return 0;
}