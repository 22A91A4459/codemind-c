#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int x;
    x=m*k;
    if(n<=x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}