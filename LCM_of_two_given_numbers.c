#include<stdio.h>
int main()
{
    int m,n,i,min;
    scanf("%d%d",&m,&n);
    min=n>m?m:n;
    for(i=min;;i++)
    {
        if(i%m==0 && i%n==0)
        {
            printf("%d",i);
            break;
        }
        
        
    }
}
