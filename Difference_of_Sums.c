#include<stdio.h>
int main()
{
    int n,i,f=0,j,g=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f+(i*i);
    }
    for(j=1;j<=n;j++)
    {
        g=g+j;
    }
    printf("%d",(g*g)-f);
}