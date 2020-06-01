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
    long int i,n,a[100001],b[100001],sum=0,speeda=0,speedb=0;
    long int x=0,y=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<n;i++)
    scanf("%ld",&b[i]);
    
    for(i=0;i<n;i++)
    {
     if(a[i]==b[i]&&x==y)
     {
         sum=sum+a[i];
     }
     x+=a[i];
     y+=b[i];
    }
    printf("%ld\n",sum);
}
return 0;
} 
