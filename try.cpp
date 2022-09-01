#include <iostream>
#include<cstring>
using namespace std;
int num(string str)
{  	int snum;
	switch(str[0])
	{
		case 'z':snum=0;break;
		case 'o':snum=1;break;
		case 't':if(str[1]=='w')snum=2;
				else
					snum=3;break;
		case 'f':if(str[1]=='o')snum=4;
				else 
					snum=5;break;
		case 's':if(str[1]=='i')snum=6;
				else 
					snum=7;break;
		case 'e':snum=8;break;
		case 'n':snum=9;break;
	}
	return snum;
}
int main()
{   
	string str;
	
	while(1)
	{
	cin>>str;
	int t1=0,t2=0;
	while(str[0]!='+')	
	{
		t1=t1*10+num(str);
		cin>>str;
	}
	cin>>str;
	while(str[0]!='=')
	{
		t2=t2*10+num(str);
		cin>>str;
	}
	if((t1==0)&&(t2==0))
	continue;
	else
	cout<<t1+t2<<endl;
	}
	return 0;
 } 
