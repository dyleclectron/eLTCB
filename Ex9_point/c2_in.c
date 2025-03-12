#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a=(int*)malloc(10*sizeof(int));
    for(int i=0; i<10; i++){
        scanf("%d",a+i);
    }
    for(int i=0; i<10; i++){
        printf("%d ",*(a+i));
    }
    free(a);
    return 0;
}