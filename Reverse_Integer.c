#include<stdio.h>
int main()
{
    int n,b,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        r=r*10+b;
        n=n/10;
    }
    printf("%d",r);
}