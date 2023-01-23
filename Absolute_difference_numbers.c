#include<stdio.h>
int main()
{
    int n,rev,zero=1;
    long long number,last=0,r=0,first=0;
    scanf("%lld%d",&number,&n);//12345 2
    rev=n;//rev=n=2
    while(rev)//n=2
    {
        zero=zero*10;//zero=1*10
        rev--;//1
    }
    last=number%zero;//last=12345%10=5
    while(number)//12345
    {
        r=(r*10)+(number%10);//r=
        number/=10;
    }
    while(n)
    {
        first=(first*10)+(r%10);
        r/=10;
        n--;
    }
    if(first<last)
    printf("%lld",last-first);
    else
    printf("%lld",first-last);
}