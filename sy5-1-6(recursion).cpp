#include<iostream>//�ݹ�ʵ�� 
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
	cout<<"����������������";
	cin>>a>>b;
	cout<<"�������Ϊ��"<<gcd(a,b)<<endl;
	cout<<"��С������Ϊ��"<<mul(a,b,gcd(a,b))<<endl;
	return 0;	
}
