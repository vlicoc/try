#include<iostream>
using namespace std;
int main()
{double aver,sum=0,num=0;
	int a[101]={0},b;
	cout<<"������ɼ���"; 
	while((cin>>b)&&b>0)
	a[b]++;//�Գɼ����±�ͳ��ÿ���ɼ��ж����� 
	for(int i=1;i<101;i++)	
	{	
		sum+=a[i]*i;
		num+=a[i];
	}	
	int lowaver=0,uppaver=0;
	aver=sum/num;//��ƽ���ɼ� 
	for(int i=1;i<101;i++)
	{
		if(i<aver)
		lowaver+=a[i];
		else
		uppaver+=a[i];
	}
	cout<<"����ƽ���ֵ�������"<<lowaver<<endl;
	cout<<"����ƽ���ֵ�������"<<uppaver<<endl;
	return 0; 
}
