#include <iostream>
using namespace std;
int main()
{
	int num,ge,shi,bai,qian,wang;
	cout<<"请输入一个正整数："; 
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
					{cout<<"1位的正整数"<<endl;
					cout<<"顺序："<<ge<<endl;
					cout<<"逆序："<<ge<<endl;
					}
					else
					{cout<<"2位的正整数"<<endl;
					cout<<"顺序："<<shi<<" "<<ge<<endl;
					cout<<"逆序："<<ge<<" "<<shi<<endl;
					}
				else
				{cout<<"3位的正整数"<<endl;
				cout<<"顺序："<<bai<<" "<<shi<<" "<<ge<<endl;
				cout<<"逆序："<<ge<<" "<<shi<<" "<<bai<<endl;
				}
			else
			{cout<<"4位的正整数"<<endl;
			cout<<"顺序："<<qian<<" "<<bai<<" "<<shi<<" "<<ge<<endl;
			cout<<"逆序："<<ge<<" "<<shi<<" "<<bai<<" "<<qian<<endl;
			}
		else
		{
		cout<<"5位的正整数"<<endl;
		cout<<"顺序："<<wang<<" "<<qian<<" "<<bai<<" "<<shi<<" "<<ge<<endl;
		cout<<"逆序："<<ge<<" "<<shi<<" "<<bai<<" "<<qian<<" "<<wang<<endl;}	
	}
	cout<<"请输入一个不小于5位数的正整数！"<<endl;
	return 0; 
}
