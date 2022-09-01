#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	float pi,PI;
	int n=1;
    for(;;n++)
    {   
    	if(1.0/(n*n)<0.0001)
    	{cout<<n<<endl;
		break;
		}
		
    	pi+=1.0/(n*n);
	}
	PI=sqrt(6*pi);
	cout<<PI;
	return 0;
}
