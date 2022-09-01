#include<iostream>//递归实现 
using namespace std;
int gcd(int a,int b) 
{
	if(a<b)
		swap(a,b);
	if(a%b==0)
		return b;
	 else 
	 	return gcd(b,a%b);	
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
