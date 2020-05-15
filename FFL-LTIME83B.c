#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void) 
{
int t;
scanf("%d",&t);
while(t--)
{
     int n,s,remain,price[10000],pos[10000],min1=101,i,min2=101,sum;
     scanf("%d%d",&n,&s);
     remain=100-s;
     for(i=0;i<n;i++)
     scanf("%d",&price[i]);
     for(i=0;i<n;i++)
     scanf("%d",&pos[i]);
     for(i=0;i<n;i++)
    {
      if(pos[i]==1&&min1>price[i])
      {
        min1=price[i];
      }
    }
      for(i=0;i<n;i++)
    {
      if(pos[i]==0&&min2>price[i])
      {
        min2=price[i];
      }
    }
    sum=min1+min2;
    if(sum>remain)
    printf("no\n");
    else
    printf("yes\n");
}
return 0;
}

