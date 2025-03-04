#include <stdio.h>
int q[3]={0,0,0},iq=0,note[3]={' ','P','Q'};
int fx(int a[],int x,int n)
{
    int ans=a[0],res=1;
    for(int i=0;i<n;i++)
    {
        res*=x;;
        ans+=res*a[i+1];
    }
    return ans;
}
void slove(int n,int x)
{
    int a[n+2];
    for(int i=0;i<=n;i++) {
        printf("a%d: ",n-i);
        scanf("%d",&a[n-i]);
    }
    q[++iq]=fx(a,x,n);
    printf("%c =%d",note[iq],q[iq]);
}

int main()
{
    int n,m,x;scanf("%d %d %d",&n,&m,&x);
    printf("Status: dang su ly n = %d\n",n);
    slove(n,x);
    printf("\nStatus: dang su ly m = %d\n",m);
    slove(m,x);
    printf("\nT=%d \n",q[iq]+q[iq-1]);
    return 0;
}