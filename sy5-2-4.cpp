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
		if(prime(i))//������flagΪ0���٣� 
		{	
			flag=0; 
		}
	
		else//��������flagΪ1���棩��k��ʼ���� 
		{
			flag=1;
			k++;
		} 
		if((!flag)&&k>10)
		{	int m=i;
			while(!prime(m-1))//���������ǽ�������ѭ�� 
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
