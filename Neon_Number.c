#include<stdio.h>
int main()
{
    int temp,n,b,r=0,s;
    scanf("%d",&n);
    temp=n;
    s=n*n;
    while(s!=0)
    {
        b=s%10;
        r=r+b;
        s=s/10;
    }
    if(temp==r)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}