#include <iostream>//循环实现 
using namespace std;
int gcd(int a,int b)
{	int c;
	while(b!=0)
	{	if(a<b)
			swap(a,b);
		c=a%b;
		a=b;
		b=c;
	}	
	return a;
}

int mul(int a,int b,int Max)
{
	return a*b/Max;
 } 

int main()
{
	int a,b;
	cout<<"请输入两个整数：";
	cin>>a>>b;
	cout<<"最大公因数为："<<gcd(a,b)<<endl;
	cout<<"最小公倍数为："<<mul(a,b,gcd(a,b))<<endl;
	return 0;	
}
