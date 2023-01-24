#include<stdio.h>
int main()
{
    int v[2004],k,l=0,n,r,j;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<n;k++)
    {
        l=0;
        for(j=0;j<n;j++)
        {
            if(v[k]==v[j])
            {
                l++;
            }
        }
        if(l>n/2)
        {
            r=v[k];
        }
    }
    printf("%d",r);
}
