#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int a,n;
	while(1)
	{
	cout<<"ÇëÊäÈëÃÜÂëÎ»Êý£º"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a=rand()%95+32;
		cout<<char(a);
	 } 
	 cout<<endl;
	}
	return 0;

 } 
