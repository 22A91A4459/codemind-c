#include<stdio.h>
int main()
{
    int n,s,temp;
    scanf("%d",&n);
    s=0;
    while(n)
    {
        temp=n%10;
        s=s*10+temp;
        n=n/10;
    }
printf("%d",s);
}