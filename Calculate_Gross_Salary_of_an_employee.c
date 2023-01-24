#include<stdio.h>
int main()
{
    float basic,hra,da;
    scanf("%f%f%f",&basic,&hra,&da);
    float pf,gs;
    pf=(basic*12)/100;
    printf("%.2f
",pf);
    gs=basic+hra+da+pf;
    printf("%.2f
",gs);
}
