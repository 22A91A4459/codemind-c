#include<stdio.h>
int main()
{
    int n,k=0,p,c=0,arr[100],i,l=0,max=0,x=0,j;
    scanf("%d%d",&n,&k);
    while(n)
    {
      p=n%k;
      arr[c++]=p;//0 0 1 0 0 0 1
      n=n/k;
    }
   /* for(i=0;i<c;i++)
    printf("%d",arr[i]);*/
    for(i=0;i<c;i++)
    {
        l=0;
        if(arr[i]==0)//0 0 1 0 0 0 1
        {
        x=1;
        l=1;
        }
        else
        continue;
        for(j=i+1;j<c;j++)//0 0 1 0 0 0 1
        {
            if(arr[j]==0)
            {
            l++;
            }
            else
            {
            //i=j;
            break;
            }
           // printf("%d",l);
        }
        //printf("%d",l);
        if(max<l)
        max=l;
    }
    if(x==1)
    printf("%d",max);
    else
    printf("-1");
}