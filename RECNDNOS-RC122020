#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void) 
{
int t;
scanf("%d",&t);
while(t--)
{
    int n,i,j,k,a[10000],arr2[10000],ma;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int max=0;
    for(i=0;i<n;i++)
    {
        k=a[i];int count=0;
        for(j=0;j<n;j++)
       { if(a[j]==k)
      {   count++;
         j++;} }
         
         if(max<count)
         { 
             max=count;
             ma=a[i];
         }
       else if(max==count)
          {  if(ma>a[i])
              ma=a[i];}
    }
    printf("%d\n",ma);
    
    
}
return 0;
}

