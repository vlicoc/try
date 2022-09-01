#include<iostream>
using  namespace std;
int main()
{
	int n,i=1;
	cout<<"Input:";
	cin>>n;
	cout<<"Output:";
	while(i<n)
	{
		if(n%i==0)
		cout<<i<<",";
		i++;
	}
	cout<<n;
	return 0;
	
}
