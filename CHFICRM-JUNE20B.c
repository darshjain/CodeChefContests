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
    int n,a[10000],coin[3]={0,0,0},i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==10&&coin[0]==0)
        {
            flag=1;
            break;
        }
        else if(a[i]==10&&coin[0]!=0)
        coin[0]--;

        if(a[i]==15&&coin[0]<2&&coin[1]<1)
        {
            flag=1;
            break;
        }
        
        else if(a[i]==15&&coin[1]>=1)
             coin[1]--;
        else if(a[i]==15&&coin[0]>=2)
             coin[0]=coin[0]-2;
             
    
        if(a[i]==5)
        coin[0]+=1;
        if(a[i]==10)
        coin[1]+=1;
        if(a[i]==15)
        coin[2]+=1;
    }
if(flag==0)
printf("YES\n");
else
printf("NO\n");
}
return 0;
} 
