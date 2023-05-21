#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("%d",a+b);
        }
        else
        {
            printf("%d",a+c);
        }
    }
    else if(a<b && b>c)
    {
        if(a>c)
        {
            printf("%d",b+a);
        }
        else
        {
            printf("%d",b+c);
        }
    }
    else
    {
        if(b>a)
        {
            printf("%d",c+b);
        }
        else
        {
            printf("%d",c+a);
        }
    }
}