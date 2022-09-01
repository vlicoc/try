#include <bits/stdc++.h>
using namespace std;
int dec(string str)
{    
	int ans=0;
	int l=str.length();
	for(int i=0;i<l;i++)
	{
		if(str[i]<'A')
			ans+=(str[i]-'0')*pow(16,l-i-1);
		else
			ans+=(str[i]-'A'+10)*pow(16,l-i-1);
			cout<<str[i]<<endl; 
	} 
	return ans;
}

int main()
{
	string str;
	cin>>str;
	cout<<"转化为十进制为："<<dec(str) <<endl;
	return 0;
 } 
