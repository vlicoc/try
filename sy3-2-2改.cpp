#include<iostream> 
using namespace std;
int main()
{
	int n=1;
	float pi=0,PI;
	while(1.0/n/n<0.0001)
	{
	pi+=1.0/n/n;
	n++;	
	}
	PI=sqrt(pi*6);
	cout<<"pi="<<PI<<";";
	cout<<"n="<<n-1;
	return 0;
}
