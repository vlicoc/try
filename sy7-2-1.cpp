#include<iostream>
#include<ctime>
#include<cstring>
#include<stdlib.h>
using namespace std;
struct card{
	string cardname;
	int flag=0;
};
card c[52];
string suit[4]={"Spades","Hearts","Culbs","Diamonds"};
string face[13]={"a","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};

void creatcard()
{
	int a=0;
	for(int i=0;i<4;i++)
		for(int j=0;j<13;j++)
		{
			c[a++].cardname=suit[i]+'-'+face[j];
			
	 	} 
}
int main()
{
	int b;
	srand((unsigned)time(NULL));
	creatcard();
	for(int i=1;i<=52;i++)
	{
		b=rand()%52;
		while(c[b].flag !=0) 
		{
			b=rand()%52;
		}
		cout<<c[b].cardname <<" ";
		c[b].flag =1;
		if(i%5==0)
		cout<<endl;
	}
}
