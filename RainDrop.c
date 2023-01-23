#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("Pling");
        c++;
    }
    if(n%5==0)
    {
        printf("Plang");
        c++;
    }
    if(n%7==0)
    {
        printf("Plong");
        c++;
    }
    if(c==0)
    {
        printf("%d",n);
    }
}
