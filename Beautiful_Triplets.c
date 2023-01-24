#include<stdio.h>
int count(int *ar,int a)
{
    int i,j,arr[a];
    for (i=0; i<a; i++)
    {
        arr[i]=ar[i];
    }
    for (i=0; i<a; i++)
    {
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j])
                {
                    arr[j]=-1;
                }
            }
        }
    }
    int c=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]!=-1)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int d=count(arr,n);
    while(d--)
    {
        int c=0,m=1000;
        for (i=0; i<n; i++)
        {
            if (m>arr[i] && arr[i]>0)
            {
                m=arr[i];
            }
        }
        for (i=0; i<n; i++)
        {
            if (arr[i]>=m)
            {
                c++;
            }
        }
        for (i=0; i<n; i++)
        {
            if (arr[i]==m)
            {
                arr[i]=-100;
            }
        }
        printf("%d
",c);
    }
}