#include<stdio.h>
int main()
{
    int a,b,c,d,e,ave;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    ave=(a+b+c+d+e)/5;
    if(ave>=90)
    {
        printf("Grade A");
    }
    else if(ave>=80)
    {
        printf("Grade B");
    }
    else if(ave>=70)
    {
        printf("Grade C");
    }
    else if(ave>=60)
    {
        printf("Grade D");
    }
    else if(ave>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}