#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if((X>0 || Y%2==0) && X%2==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}

