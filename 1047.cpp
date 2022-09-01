#include<iostream>
using namespace std;
int a[1000001];
int main()
{
	int n,ap,q,x;
	scanf("%d %d",&n,&q) 
	for(int i=0;i<q;i++)
	{
		if(scanf("%d",&ap)&&ap==3)
		
			for(int j=0;j<n;j++)
			{
				if(a[j]==1)
				a[j]=0;
				else
				a[j]=1;
			}
		else
			{
				scanf("%d",&x);
				if(ap==1)
				a[x]=1;
				else
				a[x]=0;
			}	
	}
	for(int i=0;i<n;i++)
	    printf("%d",a[i]);
}
