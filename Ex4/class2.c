#include <stdio.h>

int main()
{
    int month, year;
    submit:
    printf("Nhap thang va nam: ");
    scanf("%d %d",&month,&year);
    if(month < 1 || month > 12)
    {
        printf("Thang khong hop le\n");
        goto submit;
    }
    if(month == 2)
    {
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            printf("Thang %d nam %d co 29 ngay\n",month,year);
        else
            printf("Thang %d nam %d co 28 ngay\n",month,year);
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        printf("Thang %d nam %d co 30 ngay\n",month,year);
    else
        printf("Thang %d nam %d co 31 ngay\n",month,year);
    return 0;
}