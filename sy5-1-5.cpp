#include<iostream>
using namespace std;

long Fac(int n)//��׳� 
{
	long long m=1;
	for(int i=1;i<=n;i++)
		m*=i;
	return m;
 }
 
long CombinNum(int n,int m)//������� 
 {
 	return Fac(n)/(Fac(m)*Fac(n-m));
  } 
  
 int main()
 {  long long c;
 while(1)
 {
    int n,m;
 	cout<<"n=";
 	cin>>n;
 	cout<<"m=";
 	cin>>m;
 	if(n<m)
 	{cout<<"�����������"<<endl;
 		break; }
	else if(n==m)
	 cout<<"�����Ϊ��1"<<endl;
	else
     cout<<"�����Ϊ��"<<CombinNum(n,m)<<endl;
  } 
	return 0;
  } 
