#include<stdio.h>
int prime(int n)
{
    int x=0;
    while(n)
    {
        int c=0;
        for(int i=2;i<n/2;i++)
        {
            if(n%i==0)
            c++;
        }
        if(c==0)
        {
            return n;
        }
        n++;
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",prime(a+b+1)-(a+b));
}