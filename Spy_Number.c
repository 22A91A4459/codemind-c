#include<stdio.h>
int main()
{
    int n,i,sum=0,pdt=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        sum+=i;
        pdt=pdt*i;
    }
    if(sum==pdt)
    {
    	printf("Spy Number");
	}
	else
	{
	    printf("Not Spy Number");
	}

    
    
}