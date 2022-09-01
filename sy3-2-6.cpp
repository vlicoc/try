#include<iostream>
using namespace std;
int main()
{
	int n,a[10],k=0;
	cin>>n;
	for(int i=n;i>1;i--)
	{	if(i%2==0) continue;//偶数继续循环 
		int flag=1;//素数判断 
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0) flag=0;
		}
		 
		if(flag) 
		{
		a[k]=i;//记录前十的素数
		k++;	
		}
		if(k>=10)//找出前十大的素数就结束循环 
		break;
    } 
	int sum=0;//输出素数和素数和 
	for(int i=0;i<k;i++)
	{if(i==k-1)
	cout<<a[i]<<"=";
	else 
	cout<<a[i]<<"+"; 
	sum+=a[i];
    }
    cout<<sum;
    return 0;
}
