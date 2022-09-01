#include<iostream>
#include <cmath>
using namespace std;
int k;
void equ(int a,int b,int c)//两个相同的实数根 
{
	cout<<"x1=x2="<<-b/(2*a)<<endl; 
}
void upp(int a,int b,int c)//两个不同的实数根 
{
	cout<<"x1="<<(-b+sqrt(k))/(2*a)<<endl;
	cout<<"x2="<<(-b-sqrt(k))/(2*a)<<endl;
}

void dow(int a,int b,int c)//两个虚根 
{	
	if(a>=0)
	{
		cout<<"x1="<<-b/(2*a)<<"+"<<sqrt(-k)/(2*a)<<"i"<<endl;	
		cout<<"x2="<<-b/(2*a)<<"-"<<sqrt(-k)/(2*a)<<"i"<<endl;
	}
	else
	{
		cout<<"x1="<<-b/(2*a)<<sqrt(-k)/(2*a)<<"i"<<endl;	
		cout<<"x2="<<-b/(2*a)<<"+"<<-sqrt(-k)/(2*a)<<"i"<<endl;
	}
	
}
int main()
{	int a,b,c;
	while(cin>>a>>b>>c)
	{
	k=b*b-4*a*c;
	if(k==0)
		equ(a,b,c);
	else if(k>0)
	    upp(a,b,c);
	else 
		dow(a,b,c);
	}	
	
	return 0;
}
