#include<iostream>
using namespace std;
int mulNum(int a,int b)
{
	if(a%b==0)
	return 1;
	else
	return 0;
}
int main()
{
	int a,b;
	while((cin>>a>>b)&&(a!=0&&b!=0))
	{	if(a<b)
			swap(a,b);
		if(mulNum(a,b))
			cout<<a<<" is multiple of  "<<b<<endl;
		else
			cout<<a<<" is not multiple of  "<<b<<endl;
	}
	return 0;
}
