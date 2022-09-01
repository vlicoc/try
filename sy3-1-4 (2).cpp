#include<iostream>
using namespace std;
int main()
{	int num;
	double sum,price,mouth;
	cin>>mouth>>num>>price;
	if (mouth<=9&&mouth>=7)
		if(num>=20)
			sum=price*num*(1-0.1);
		else
			sum=price*num*(1-0.05);	
	else
		if(num>=20)
			sum=price*num*(1-0.2);
		else
			sum=price *num*(1-0.1);
	cout<<sum<<endl;
	return 0;
 } 
