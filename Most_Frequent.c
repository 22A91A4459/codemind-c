#include<stdio.h>
int main()
{
    int n,i,arr[100],mf,m,c,j;
    scanf("%d",&n);//5
    for(i=0;i<n;i++)//i=0<5
    {
        scanf("%d",&arr[i]);//1 1 1 2 2
    }
    m=0;
    for(i=0;i<n;i++)//i=3<5
    {
        c=0;
        for(j=0;j<n;j++)//j=4<5
        {
            if(arr[i]==arr[j])//2==2
            {
                c++;//c=2
            }
        }
        if(m<c)//0<3
        {
            mf=arr[i];//mf=1
            m=c;//m=3
        }
        else if(m==c)
        {
            if(mf>arr[i])//1>2
            {
                mf=arr[i];
            }
        }
    }
    printf("%d",mf);
}
