#include <iostream>
using namespace std;
int main()
{
	int num,ge,shi,bai,qian,wang;
	cout<<"������һ����������"; 
	while (cin>>num&&(num>0&&num<100000))
	{
		wang=num/10000;
		qian=num/1000%10;
		bai=num/100%10;
		shi=num/10%10;
		ge=num%10;
		if (wang==0)
			if(qian==0)
				if(bai==0)
					if(shi==0)
					{cout<<"1λ��������"<<endl;
					cout<<"˳��"<<ge<<endl;
					cout<<"����"<<ge<<endl;
					}
					else
					{cout<<"2λ��������"<<endl;
					cout<<"˳��"<<shi<<" "<<ge<<endl;
					cout<<"����"<<ge<<" "<<shi<<endl;
					}
				else
				{cout<<"3λ��������"<<endl;
				cout<<"˳��"<<bai<<" "<<shi<<" "<<ge<<endl;
				cout<<"����"<<ge<<" "<<shi<<" "<<bai<<endl;
				}
			else
			{cout<<"4λ��������"<<endl;
			cout<<"˳��"<<qian<<" "<<bai<<" "<<shi<<" "<<ge<<endl;
			cout<<"����"<<ge<<" "<<shi<<" "<<bai<<" "<<qian<<endl;
			}
		else
		{
		cout<<"5λ��������"<<endl;
		cout<<"˳��"<<wang<<" "<<qian<<" "<<bai<<" "<<shi<<" "<<ge<<endl;
		cout<<"����"<<ge<<" "<<shi<<" "<<bai<<" "<<qian<<" "<<wang<<endl;}	
	}
	cout<<"������һ����С��5λ������������"<<endl;
	return 0; 
}
