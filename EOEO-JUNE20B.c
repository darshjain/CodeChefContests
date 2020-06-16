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
    long int ts,js=1,count=0,i;
    scanf("%ld",&ts);
    
        if(ts%2==0)
        {
        while(ts%2==0)
            ts/=2;
        count=ts/2;
        }
        else
        count=ts/2;
    
    printf("%ld\n",count);
}
return 0;
} 
