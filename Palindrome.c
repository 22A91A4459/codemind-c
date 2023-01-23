#include<stdio.h>
#include<string.h>
int main()
{
    char name1[100],name2[100];
    int i,j=0;
    scanf("%[^
]s",name1);
    int l=strlen(name1);
    for(i=l-1;i>=0;i--)
    {
       name2[j++]=name1[i];
    }
    if(strcmp(name1,name2)==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}