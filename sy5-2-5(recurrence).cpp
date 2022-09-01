#include<iostream>
using namespace std;
int H(int h[],int i,int x)
{
	return 2*x*h[i-1]-2*(i-1)*h[i-2];
}

int main()
{
	int n,x,h[1000];
	while(cin>>x>>n)
	{
		h[0]=1;
		h[1]=2*x;
	  	for(int i=2;i<=n;i++)
			h[i]=H(h,i,x);
		cout<<h[n]<<endl; 
	}
return 0;
 } 
