#include <iostream>//ѭ��ʵ�� 
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
	cout<<"����������������";
	cin>>a>>b;
	cout<<"�������Ϊ��"<<gcd(a,b)<<endl;
	cout<<"��С������Ϊ��"<<mul(a,b,gcd(a,b))<<endl;
	return 0;	
}
