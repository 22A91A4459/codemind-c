#include<stdio.h>
int main()
{
    int n,hours,minutes,seconds;
    scanf("%d",&n);
    hours=n/3600;
    minutes=(n%3600)/60;
    seconds=n%60;
    printf("H:M:S-%d:%d:%d",hours,minutes,seconds);
}
