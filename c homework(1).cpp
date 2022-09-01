#include<iostream>
using namespace std;
int main()
{double aver,sum=0,num=0;
	int a[101]={0},b;
	cout<<"请输入成绩："; 
	while((cin>>b)&&b>0)
	a[b]++;//以成绩做下标统计每个成绩有多少人 
	for(int i=1;i<101;i++)	
	{	
		sum+=a[i]*i;
		num+=a[i];
	}	
	int lowaver=0,uppaver=0;
	aver=sum/num;//求平均成绩 
	for(int i=1;i<101;i++)
	{
		if(i<aver)
		lowaver+=a[i];
		else
		uppaver+=a[i];
	}
	cout<<"低于平均分的人数："<<lowaver<<endl;
	cout<<"高于平均分的人数："<<uppaver<<endl;
	return 0; 
}
