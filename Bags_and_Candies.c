#include<stdio.h>
int main()
{
    int n,k,m,c;
    scanf("%d%d%d",&n,&k,&m);
    c=k*m;
    if(n%c!=0)
    {
        printf("%d",(n/c)+1);
    }
    else
    {
        printf("%d",n/c);
    }
}