#include<stdio.h>
int main(void)
{
    int length;
    scanf("%d",&length);
    while(length--!=0){
    int a;
    scanf("%d",&a);
    int n[100];
    for(int i=0;i<a;i++) n[i]=0;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    int one=0;
    for(int i=0;i<a;i++){
        if(n[i]==1) one++;
    }
    if(one==0)printf("YES");
    else{
    int o[100];
    for(int i=0;i<one;i++) o[i]=0;
    
    int index=0;
    for(int i=0;i<one;i++)
    {
        for(int j=index+1;j<a;j++)
        {
            if(n[j]==1)
            {
               o[i]=j;
               index=j;
               break;
            }
        }
    }
  
    int temp=0;
    for(int i=0;i<=one-2;i++)
    {
        for(int j=0;j<=one-2;j++)
        {
            if(o[j]>o[j+1])
            {
                temp=o[j];
                o[j]=o[j+1];
                o[j+1]=temp;
            }
        }
    }
        int count=0;
               for(int i=1;i<one;i++)
               {
            	   if(o[i]-o[i-1]>=6) count++;
               }
               if(count==one-1)printf("YES\n");
               else printf("NO\n");
    }
    }
}
