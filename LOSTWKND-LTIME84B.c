#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int i,a[5],p,sum=0;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    scanf("%d",&p);
    for(i=0;i<5;i++)
    {
     a[i]=a[i]*p;
     sum=sum+a[i];
    }
    if(sum>(24*5))
    printf("Yes\n");
    else
    printf("No\n");
    
    
    

}
return 0;
} 
