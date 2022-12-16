#include<stdio.h>
int main()
{
    float bs,da,hra;
    scanf("%f",&bs);
    if(bs<=10000)
    {
        da=bs*80/100;
        hra=bs*20/100;
    }
    else if(bs<=20000)
    {
        da=bs*90/100;
        hra=bs*25/100;
    }
    else
    {
        da=bs*95/100;
        hra=bs*30/100;
    }
    printf("%.2f",bs+da+hra);
    
}