#include<stdio.h>
int main()
{
    int n,sum=0,prod=1,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        prod=prod*r;
        sum=sum+r;
        n=n/10;
    }
    if(sum>prod)
    printf("%d",sum-prod);
    else
    printf("%d",prod-sum);
    return 0;
}