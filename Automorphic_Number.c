#include<stdio.h>
int main()
{
     
      int temp,square,count=1,number;
      scanf("%d",&number);

       temp=number;
     square=number*number;
      while (number!=0)
     {
          count=count*10;
          number=number/10;
     }
      if(square%count==temp) 
      {
           printf("Automorphic Number");
      }
      else
      {
           printf("Not an Automorphic Number");
      }
}
     