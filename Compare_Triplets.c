#include<stdio.h>
int main()
{
    int a[3],b[3];
    int i,alice=0,bob=0;
    for (i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<3; i++)
    {
        scanf("%d",&b[i]);
    }
    for (i=0; i<3; i++)
    {
        if (a[i]>b[i])
        {
            alice+=1;
        }
        else if (a[i]<b[i])
        {
            bob+=1;
        }
        else if (a[i]==b[i])
        {
            continue;
        }
    }
    printf("%d %d",alice,bob);
    return 0;
}
