#include <bits/stdc++.h>
using namespace std;
int main()
{	int num=0,upper=0,lower=0,blank=0,other=0;
	string str;
	cout<<"ÇëÊäÈëÒ»´®×Ö·û:";	
	getline(cin,str);
	cout<<str<<endl;

	
		for(int i=0;i<str.length();i++)
		{
		if(str[i]<='9'&&str[i]>='0')
		num++;
		else if(str[i]<='Z'&&str[i]>='A')
		upper++;
		else if(str[i]<='z'&&str[i]>='a') 
		lower++;
		else if(str[i]=='\040')
		blank++;
		else
		other++;
	}
	cout<<"Êý×Ö£º"<<num<<endl;
	cout<<"´óÐ´×ÖÄ¸£º"<<upper<<endl;
	cout<<"Ð¡Ð´×ÖÄ¸£º"<<lower<<endl;
	cout<<"¿Õ¸ñ£º"<<blank<<endl;
	cout<<"ÆäËû×Ö·û£º"<<other<<endl; 
 } 
