#include<stdio.h>
int main()
{
    int n,j,a;
    scanf("%d",&a);
    for(n=a;n>=1;n--)
    {
        for(j=a;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("
");
    }
    
}