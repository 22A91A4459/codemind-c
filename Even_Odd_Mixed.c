#include<stdio.h>
int main()
{
    int a,b,i,e=0,o=0,count=0;
    scanf("%d",&a);
    for (i=1; a>=1; i++)
    {
        b=a%10;
        if (b%2==0)
        {
            e+=1;
        }
        else
        {
            o+=1;
        }
        a=a/10;
        count+=1;
    }
    if (count==e)
    {
        printf("Even");
    }
    else if (count==o)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    return 0;
}

