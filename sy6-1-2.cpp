#include<iostream>
using namespace std;
int main()
{
	int a[6]={1,3,5,8,10},*p,inputnum;
	cout<<"原数组为："<<endl; 
	for(p=a;p<a+5;p++)
	cout<<*p<<" ";
	cout<<endl<<"要插入的数为："; 
	p=a+4; 
	cin>> inputnum;
	cout<<"插入后的数组为：" ; 
	for(int i=4;p>=a;i--,p--)
	{
		if(*p>inputnum)
		a[i+1]=a[i];
		else
		{
			*(p+1)=inputnum;
			break;
		}
	}
	p=a;
	for(;p<a+6;p++)
	cout<<*p<<" ";
	return 0;
 } 
