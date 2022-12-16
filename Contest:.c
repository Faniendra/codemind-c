#include<stdio.h>
int main()
{
    int x,e,h;
    scanf("%d%d%d",&x,&e,&h);
    if(x<=(e+h*2))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}