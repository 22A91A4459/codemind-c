#include<stdio.h>
int main()
{
    int L,B,W,C,ar,tar,nar,nl,nb,cost;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    ar=L*B;
    nl=L+(2*W);
    nb=B+(2*W);
    nar=nl*nb;
    tar=nar-ar;
    cost=C*tar;
    printf("%d",cost);
}