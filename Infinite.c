#include<stdio.h>
int main()
{
    for(int i=1;;i++)
    {
        int n;
    scanf("%d",&n);
        if(n!=-1)
        {
            printf("%d
",n*n);
        }
        else
        {
            break;
        }
    }
}