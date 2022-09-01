#include<iostream>//全局变量实现 
using namespace std;
int a,b,n,m,Mul;

void gcd()//求最大公因数 
{	int c=1;//余数 
	while(c!=0)
	{	if(n<m)
			swap(n,m);
		c=n%m;
		n=m;
		m=c;
	}
}

void mul()//求小公倍数 
{
	Mul=a*b/n;
}
int main()
{
	cin>>a>>b;
	n=a;//将输入的数据复制一份 
	m=b;
	gcd();
	mul();
	cout<<"最大公因数："<<n<<endl;
	cout<<"最小公倍数："<<Mul<<endl;
	return 0; 
 } 

