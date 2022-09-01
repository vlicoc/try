#include<iostream>
using namespace std;
bool prime(int n)
{	
	if(n==0&n==1)
		return false;
	for(int i=2;i<n;i++)
		if(n%i==0)
			return false;
	return true;
}
int main()
{	int flag=0,k=0;
	for(int i=0;i<2001;i++)
	{
		if(prime(i))//是素数flag为0（假） 
		{	
			flag=0; 
		}
	
		else//不是素数flag为1（真），k开始计数 
		{
			flag=1;
			k++;
		} 
		if((!flag)&&k>10)
		{	int m=i;
			while(!prime(m-1))//当是素数是进入跳出循环 
			{
			cout<<m<<" ";
			m--;	
			}
			cout<<endl;
			k=0;
		}
		if(!flag)
		k=0;	
	}
return 0;	
}
