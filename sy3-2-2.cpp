#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float pi=0,PI;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	pi+=1.0/(i*i);
	PI=sqrt(6*pi);
	cout<<PI;
	return 0;

	
 } 
