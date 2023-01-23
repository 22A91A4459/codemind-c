#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t;
    scanf("%lf%lf%lf",&p,&r,&t);
    double ci=p*1.0*pow(1+(r/100.0),t);
    printf("%.2lf",ci);
    return 0;
}