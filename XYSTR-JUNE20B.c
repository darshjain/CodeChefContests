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
    char str[100001];
    long int i,j,count=0;
    scanf("%s",str);
    long int n=strlen(str);
    for(i=0;i<n-1;i++)
    {
        if((str[i]=='x'&&str[i+1]=='y')||(str[i]=='y'&&str[i+1]=='x'))
        {
            i++;
            count++;
        }
        
    }
printf("%ld\n",count);
}
return 0;
} 
