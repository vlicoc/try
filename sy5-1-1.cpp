#include <iostream>
#include<cmath>
using namespace std;
bool PrimeNum(int num) 
{   if(num==0||num==1)return false;
	if(num==2)return true;
	for(int i=2;i<num;i++)
	if(num%i==0)return false; 
	return true;
}

int main()
{
	int num;
	while(cin>>num)
	{
		if(PrimeNum(num)) 
			cout<<num<<" is prime"<<endl;
		else
			cout<<num<<" is not prime"<<endl;
	}	
	return 0;
	
}
