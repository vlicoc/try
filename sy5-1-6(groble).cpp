#include<iostream>//ȫ�ֱ���ʵ�� 
using namespace std;
int a,b,n,m,Mul;

void gcd()//��������� 
{	int c=1;//���� 
	while(c!=0)
	{	if(n<m)
			swap(n,m);
		c=n%m;
		n=m;
		m=c;
	}
}

void mul()//��С������ 
{
	Mul=a*b/n;
}
int main()
{
	cin>>a>>b;
	n=a;//����������ݸ���һ�� 
	m=b;
	gcd();
	mul();
	cout<<"���������"<<n<<endl;
	cout<<"��С��������"<<Mul<<endl;
	return 0; 
 } 

