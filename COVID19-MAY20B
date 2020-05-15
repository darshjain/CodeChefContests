#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void) 
{
int t;
scanf("%d",&t);
while(t--)
{
int n,i,j,a[10000],max=0,min=10000,count=0;//count is infected
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
     //main program
    for(i=0;i<n;i++)
    {   count=1;
        for(j=i;j>0;j--)
          {
              if((a[j]-a[j-1]==1)||(a[j]-a[j-1]==2))
               count++;
               else
               break;
          }
         for(j=i;j<n;j++)
         {
             if((a[j+1]-a[j]==2)||(a[j+1]-a[j]==1))
               count++;
               else
               break;
         }
          if(count>max)
            max=count;
          if(count<min)
            min=count;
    }
    printf("%d %d\n",min,max);
}
return 0;
}


