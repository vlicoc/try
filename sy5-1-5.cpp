#include<iostream>
using namespace std;

long Fac(int n)//求阶乘 
{
	long long m=1;
	for(int i=1;i<=n;i++)
		m*=i;
	return m;
 }
 
long CombinNum(int n,int m)//求组合数 
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
 	{cout<<"组合数不存在"<<endl;
 		break; }
	else if(n==m)
	 cout<<"组合数为：1"<<endl;
	else
     cout<<"组合数为："<<CombinNum(n,m)<<endl;
  } 
	return 0;
  } 
