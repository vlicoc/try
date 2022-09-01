#include<iostream>
using namespace std;
int main(){
	double a[10],*p,sum=0;
	p=a;
	for(int i=0;i<10;i++)
	{
		cin>>*(p+i);
		sum+=*(p+i);
	}
	printf("%.2f",sum*1.0/10);
	return 0;
} 
