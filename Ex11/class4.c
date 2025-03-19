#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; scanf("%d",&n);
    int a[n][n];
    int x=1,a_d=0,a_c=0,b_d=n-1,b_c=n-1;
    while(x<=n*n)
    {
        for(int i=a_c;i<=b_c;i++){
            a[a_d][i]=x;
            x++;
        }
        for(int i=a_d+1;i<=b_d;i++){
            a[i][b_c]=x;
            x++;
        }
        for(int i=b_c-1;i>=a_c;i--){
            a[b_d][i]=x;
            x++;
        }
        for(int i=b_d-1;i>a_d;i--){
            a[i][a_c]=x;
            x++;
        }
        a_d++;a_c++;b_d--;b_c--;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}