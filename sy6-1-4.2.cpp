#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[100],str2[100],str3[100],*p1,*p2,*p3,*temp;
	p1=str1;
	p2=str2;
	p3=str3;
	cin>>p1>>p2>>p3;
		if(strcmp(str1,str2)<0)
	{
		temp=p1;
		p1=p2;
		p2=temp;
	 } 
	if(strcmp(str1,str3)<0)
	{
		temp=p1;
		p1=p3;
		p3=temp;
	}
	if(strcmp(str2,str3)<0)
	{
		temp=p2;
		p2=p3;
		p3=temp;
	}
	cout<<p1<<endl<<p2<<endl<<p3<<endl;
	
	
	return 0;
}
