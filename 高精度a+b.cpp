#include <iostream>
#include<cstring>
using namespace std;
int a[510],b[510],len;
int main()
{
	string str1,str2;

	cin>>str1>>str2;
	a[0]=str1.length();
	b[0]=str2.length();
	for(int i=1;i<=a[0];i++)
	a[i]=str1[a[0]-i]-'0';
	for(int i=1;i<=b[0];i++)
	b[i]=str2[b[0]-i]-'0'; 
	len=a[0]>b[0]?a[0]:b[0];
	for(int i=1;i<=len;i++)
	{
		a[i]+=b[i];
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	len++;
	while(a[len]==0&&len>1)len--;
	for(int i=len;i>0;i--)
	{
		cout<<a[i];
	}
	return 0;
	
 } 
