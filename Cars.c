#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    if(n<=4)
    {
        printf("1");
    }
    else
    {
        if(n%4!=0)
        {
            printf("%d",(n/4)+1);
        }
        else
        {
            printf("%d",(n/4));
        }
    }
}