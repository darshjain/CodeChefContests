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
    int i,j,n,k=1,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            printf("%d ",k++);
            printf("\n");
        }
        else
        {
            p=k;
        for(j=n;j>0;j--)
        {
            printf("%d ",p+j-1);
            k++;
        }
        printf("\n");
        }
    }
}
return 0;
} 
