#include<stdio.h>
int main()
{
    int L,N,i;
    scanf("%d%d",&L,&N);
    for(i=1;i<=N;i++)
    {
        int W,H;
        scanf("%d	%d",&W,&H);
        if(W<L || H<L)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if( W>=L && H==W)
        {
            printf("ACCEPTED
");
        }
        else
        {
            printf("CROP IT
");
        }
    }
    return 0;
}
