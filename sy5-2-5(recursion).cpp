#include<iostream>
using namespace std; 
int H(int x,int n)
{
	if(n==0)
	return 1;
	else if(n==1)
	return 2*x;
    else
    return 2*x*H(x,n-1)-2*(n-1)*H(x,n-2);
}
int main()
{
	int n,x;
	while(cin>>x>>n)
	cout<<H(x,n)<<endl;
	return 0;	
}
