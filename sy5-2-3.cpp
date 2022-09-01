#include<iostream>
using namespace std;
void HEX(int n);
int main()
{
	int n;
	cin>>n;
	HEX(n);
	return 0;	
}

void HEX(int n)
{	int i=0,m;
	char a[100],c;
	if(n==0)
	a[i++]='0';
	while(n!=0)
	{
		m=n/16;
		if(n%16<10)
		{
			c=n%16+'0';
			a[i++]=c;
		}
		else
		{
			c=n%16-10+'A';
			a[i++]=c; 
		}
		n=m;
	}
	for(int j=i-1;j>=0;j--)
	cout<<a[j];
}
