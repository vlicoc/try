#include<iostream>
using namespace std;
int main()
{
	int a[101]={0},b;
	cout<<"Enter the integers between 1 and 100:";
	while((cin>>b)&&b!=0)
	a[b]++;//以成绩做下标 
	for(int i=1;i<=100;i++)
	{
		if(a[i]!=0)
			if(a[i]>1)
				cout<<i<<" occurs "<<a[i]<<" times"<<endl;		
			else 
				cout<<i<<" occurs "<<a[i]<<" time"<<endl;
	}
	return 0;
 } 
