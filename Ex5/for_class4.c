//Bài 4:
#include <stdio.h>
int main()
{
    long long s=0;
    double avg_1,avg_2;
    for(int i=1;i<=50;i++)
    {
        s+=i;
        if(i<=10 && i%2==0) avg_1+=i;
        if(i<=15 && i%2==1) avg_2+=i;
    }
    printf("Tong 50 so dau tien: %lld\n",s);
    printf("Trung binh cong cua 10 so chan dau tien: %.2lf\n",(double)avg_1/5);
    printf("Trung binh cong cua 15 so le dau tien: %.2lf\n",(double)avg_2/5);
    return 0;
}