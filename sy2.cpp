#include<iostream>
using namespace std;
int main()
{	int i,j;
	for(i=1;i<11;i++)
		for(j=i;j<11;j++)
			if(i>j)
				cout<<"<"<<i<<","<<j<<"> ";
	return 0;
 } 
