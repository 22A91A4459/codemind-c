#include<stdio.h>
int main()
{
    int n,i;
    float out=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        out+=(1.0/i);
    }
    printf("%.2f",out);
}