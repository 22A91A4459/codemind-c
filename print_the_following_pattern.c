#include<stdio.h>
int main()
{
    int r,o,i1,i2;
    int n=1;
    scanf("%d",&r);
    for(o=0;o<r;o++)
    {
        for(i1=r-1;i1>o;i1--)
        {
            printf(" ");
        }
        for(i2=0;i2<n;i2++)
        {
            printf("%d",n-o);
        }
        n+=2;
        printf("
");
    }
}