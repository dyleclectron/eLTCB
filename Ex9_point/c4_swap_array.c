#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n;scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d",a+i);
    }
    for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
    if(a[i]>a[j])
    swap(a+i,a+j);
    for(int i=0; i<n; i++){
        printf("%d ",*(a+i));
    }
    free(a);
    return 0;
}
