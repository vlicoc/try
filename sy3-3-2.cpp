#include<iostream>
using namespace std;
int main()
{int k=0;
	for(int i=1;i<11;i++)
	for(int j=1;j<11;j++)
	if(i>j)
	{
	cout<<"<"<<i<<","<<j<<">  ";
	k++;
	if(k%5==0)
	cout<<endl;
	}
	return 0;
}
