#include<iostream>
#include<cmath>
using namespace std;
double sh(double t)
{
	double Sh;
	Sh=(exp(t)-exp(-t))/2;
	return Sh;
 } 
void test(double x)
{
	double y;
	y=sinh(1+sinh(x))/(sinh(2*x)+sinh(3*x));
	cout<<"��֤���Ϊ��"<<y<<endl;	
 } 

  int main()
 {
 	double y,x;
 	cin>>x;
	 y=sh(1+sh(x))/(sh(2*x)+sh(3*x));
	 cout<<"���Ϊ��"<<y<<endl;
	 test(x); 
	 return 0;
 }

