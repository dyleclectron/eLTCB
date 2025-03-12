#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}
int main()
{
    int n;scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    int m,M;
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
        if (i==0) {M=*(a+0);m=*(a+0);} else
        {M=max(*(a+i),M); m=min(*(a+i),m);}
    }
    printf("Max = %d \nMin = %d",M,m);
    free(a);
    return 0;
}
