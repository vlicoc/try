#include <iostream>
using namespace std;
int SUM(int num)
{
	int digit[10]={0},i=0,sum=0;
	while(num>0)//���������λ�ϵ����� 
	{
		digit[i]=num%10;
		num/=10;
		i++;
	}
	for(int j=0;j<i;j++)
	sum+=digit[j];
	return sum;
 } 
 
 int main()
 {
 	int num,ans;
 	cin>>num;
 	ans=SUM(num);
 	cout<<"����λ��֮��Ϊ��"<<ans<<endl;
	return 0; 
 }
