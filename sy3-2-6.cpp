#include<iostream>
using namespace std;
int main()
{
	int n,a[10],k=0;
	cin>>n;
	for(int i=n;i>1;i--)
	{	if(i%2==0) continue;//ż������ѭ�� 
		int flag=1;//�����ж� 
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0) flag=0;
		}
		 
		if(flag) 
		{
		a[k]=i;//��¼ǰʮ������
		k++;	
		}
		if(k>=10)//�ҳ�ǰʮ��������ͽ���ѭ�� 
		break;
    } 
	int sum=0;//��������������� 
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
