#include <iostream>
using namespace std;
int SUM(int num)
{
	int digit[10]={0},i=0,sum=0;
	while(num>0)//分理出各个位上的数字 
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
 	cout<<"各个位数之和为："<<ans<<endl;
	return 0; 
 }
