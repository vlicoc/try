#include<iostream>
using namespace std;
int main()
{
	int n;
	//ÐÐÊý 
	cin>>n;
	for(int j=1;j<=n;j++)
		{
		for(int i=n-1;i>0;i--)
		cout<<' ';
		for(int i=(2*n-1)/2+1;i<=2*n-1;i++)
			cout<<"1";
		cout<<endl;
		}
	return 0; 
}
