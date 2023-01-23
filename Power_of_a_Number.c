#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,res;
    scanf("%d%d%d",&a,&b,&c);
    res=pow(a,b);
    res=res%c;
    printf("%d",res);
    
}