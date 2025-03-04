#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res=13,j=1;
    for(int i=0;i!=13;i++)
    {
        if(i<7)
        {
            for(int k=0;k<res-j;k++)
                printf(" ");
            for(int k=0;k<((j*2)-1);k++)
                printf("*");
            printf("\n");
            if(i==0) j=j+1;
            else{
                if(i==3) j=j+3;
                else j=j+2;
            }
        }
        else
        {
            for(int k=0;k<res-5;k++)
                printf(" ");
            for(int k=0;k<9;k++)
                printf("*");
            printf("\n");
    }
    }
}