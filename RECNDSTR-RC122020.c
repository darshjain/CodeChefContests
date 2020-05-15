#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void) 
{
int t;
scanf("%d",&t);
while(t--)
{
    int n,i,j,k;
    char s[1000001],temp,sl[1000001],sr[1000001],original[1000001];
    scanf("%s",s);
    strcpy(original,s);
    n=strlen(s);
    
    temp=s[0];
    for(i=0;i<n-1;i++)
    {
        s[i]=s[i+1];
    }
    s[n-1]=temp;
    strcpy(sl,s);//left shift is in sl
    
    strcpy(s,original);
    
    temp=s[n-1];
    for(i=n-1;i>0;i--)
    {
        s[i]=s[i-1];
    }
    s[0]=temp;
    strcpy(sr,s);
    
    if (strcmp(sl,sr) == 0)
      printf("YES\n");
   else
      printf("NO\n");
    
    
}
return 0;
}

