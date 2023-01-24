#include<stdio.h>
#include<math.h>
void dsbtwp(int x1,int y1,int x2,int y2)
{
    float d;
    d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("%0.4f",d);
}
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    dsbtwp(x1,y1,x2,y2);
}