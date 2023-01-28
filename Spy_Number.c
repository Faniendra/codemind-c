#include<stdio.h>
int main()
{
    int pro=1,n,sum=0,b,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        b=n%10;
        sum=sum+b;
        pro=pro*b;
        n=n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}