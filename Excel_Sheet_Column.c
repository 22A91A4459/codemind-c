#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char let[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',NULL};
    char arr[10];
    int i=0,c=0,r;
    while (a>0)
    {
        r=a%26;
        if (r==0)
        {
            arr[i]=let[25];
            a=a/26-1;
            c++;
            i++;
        }
        else
        {
            arr[i]=let[r-1];
            a/=26;
            c++;
            i++;
        }
    }
    for (i=c-1; i>=0; i--)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
