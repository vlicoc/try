#include<iostream>
#include<cstring>
using namespace std;
int a[2010],b[2010],len,c[4010];
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	a[0]=str1.length();
	b[0]=str2.length();
	for(int i=1;i<=a[0];i++)
	{
		a[i]=str1[a[0]-i]-'0';
	}
	for(int i=1;i<=b[0];i++)
	{
		b[i]=str2[b[0]-i]-'0';
	}
	for(int i=1;i<=a[0];i++)
		for(int j=1;j<=b[0];j++)
		{
			c[i+j-1]+=a[i]*b[j];
			c[i+j]+=c[i+j-1]/10;
			c[i+j-1]%=10;
		}
	len=a[0]+b[0]+1;
	while(c[len]==0&&len>1)len--;
	for(int i=len;i>0;i--)
		cout<<c[i];
	return 0;
}
