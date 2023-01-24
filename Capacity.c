#include<stdio.h>
int main()
{
    int v,k,r,l;
    scanf("%d %d %d",&v,&k,&r);
    l=2*v*k*r*512;
    l=l/1024;
    printf("%d KB",l);
}
