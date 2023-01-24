#include<stdio.h>
int main(){
    long long int t,k;
    scanf("%lld",&t);
    for (k=0; k<t; k++){
        long long int D,d,p,q;
        scanf("%lld%lld%lld%lld",&D,&d,&p,&q);
        long long int n1=D/d,n2=D%d;
        long long int s=0;
        for (long long int i=0; i<n1; i++){
            s+=(p+i*q)*d;
        }
        s+=(p+n1*q)*n2;
        printf("%lld
",s);
    }
    return 0;
}