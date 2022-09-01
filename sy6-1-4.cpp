#include<iostream>
using namespace std;
void intsort(int *p1,int *p2,int *p3)
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
	int num1,num2,num3;
	int *p1,*p2,*p3;
	p1=&num1;
	p2=&num2;
	p3=&num3;
	cin>>num1>>num2>>num3;
	intsort(p1,p2,p3); 
	cout<<*p1<<" "<<*p2<<" "<<*p3<<endl;
	return 0;
 } 
