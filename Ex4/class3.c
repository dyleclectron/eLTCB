#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b > c && a+c > b && b+c > a){
        if(a == b && b == c)
            printf("Tam giac deu\n");
        else if(a == b || b == c || a == c)
            printf("Tam giac can\n");
        else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            printf("Tam giac vuong\n");
        else
            printf("Tam giac thuong\n");
    } else
        printf("Khong phai tam giac\n");
    return 0;
}