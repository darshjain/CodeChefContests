#include<stdio.h>

#include<math.h>
#include<string.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
 	int k,n,i,f,q,arr[26],center;char s[100001];
 	for(i=0;i<26;i++)
 	 arr[i]=0;
 	scanf("%d%d",&n,&q);
 	
 	scanf("%s",s);
 	for(i=0;i<n;i++)
 	    {
 	  f=s[i]-97;
 	  arr[f]++;
	     }
	
  while(q--)
  {
  	scanf("%d",&center);
  	int sum=0;
  	for(i=0;i<26;i++)
  	    {
  		k=arr[i]-center;
  		if(k<0)
  		k=0;
  		sum+=k;
			    }
  	printf("%d\n",sum);
		}
	}
 return 0;
}
