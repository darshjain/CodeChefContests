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
    int i,n,k,item[10000],sum=0,total=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&item[i]);
    for(i=0;i<n;i++)
    {
        if(item[i]>k)
        sum+=item[i]-k;
    }
    printf("%d\n",sum);
}
return 0;
} 
