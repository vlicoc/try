#include<iostream>
#include<cstring>
using namespace std;
bool ans(int i)
{
	int k;
	k=i%10;
	i/=10;
	while(i>0)
	{
		if(k<=i%10) return false;
		k=i%10;
		i/=10;	
	}
	return true;	
}
int main()
{	bool j;
    int num=1;
	for(int i=0;i<=6789;i++)
	{
		if(ans(i))
		{cout<<i<<" ";
		num++;
		if(num%10==0)
		cout<<endl;
		}
	}
	return 0;
 } 
