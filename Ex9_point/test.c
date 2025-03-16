#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a=(int*)malloc(4*sizeof(int));
    for(int i=0; i<4; i++){
        scanf("%d",a+i);
    }
    for(int i=0; i<4; i++){
        printf("%d ",*(a+i));
    }
    int s=*a+*(a+1)+*(a+2)+*(a+3);
    int s1=a[0]+a[1]+a[2]+a[3];   
    printf("\n%d",s);
    printf("\n%d",s1);
    free(a);
    return 0;
}
