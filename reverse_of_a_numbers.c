#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long long num,n,rem=0,rev=0;
    scanf("%lld",&num);
    n=num;
    while(n!=0)
    {
        rem=n%10;   
        rev=rev*10+rem;
        n=n/10;
    }
        printf("%d",rev);   
}
