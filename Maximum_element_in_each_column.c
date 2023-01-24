#include<stdio.h>
int main()
{
    int rs,cs;
    scanf("%d%d",&rs,&cs);
    int i,j,a[rs][cs],max;
    for(i=0;i<rs;i++)
    {
        for(j=0;j<cs;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<cs;j++)
    {
        max=a[0][j];
        for(i=1;i<rs;i++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
        printf("%d
",max);
    }
}