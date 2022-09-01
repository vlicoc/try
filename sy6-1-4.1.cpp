#include<iostream>
using namespace std;
void sortchar(char *p1,char *p2,char *p3)
{
	if(*p1<*p2)
	swap(*p1,*p2);
	if(*p2<*p3)
	swap(*p1,*p2);
	if(*p1<*p3)
	swap(*p1,*p3);
	if(*p1<*p2)
	swap(*p1,*p2);
}

int main()
{
	char ch1,ch2,ch3;
	char *p1,*p2,*p3;
	p1=&ch1;
	p2=&ch2;
	p3=&ch3;
	cin>>ch1>>ch2>>ch3;
	sortchar(p1,p2,p3);
	cout<<*p1<<" "<<*p2<<" "<<*p3<<endl; 
	return 0;
}
