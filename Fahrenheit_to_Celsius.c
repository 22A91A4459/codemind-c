#include<stdio.h>
int main()
{
    float f, c;
    scanf("%f", &f);
    c = (f-32)*5;
    c = c/9.0;
    printf("%.2f",c);
}
