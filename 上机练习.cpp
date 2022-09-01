#include<iostream>
using namespace std;
void DrawLine(char a,int n)
{
	for(int i=0;i<n;i++)
		cout<<a;
	cout<<endl;
}
void DrawLine3()
{
	char a[4]={'*','#','@','&'};
	for(int i=0;i<4;i++)
	    {for(int j=0;j<i+4;j++)
	    {   if(3-j>i)
	    	cout<<" ";
			else
			cout<<a[i]; 
		}
		cout<<endl;
		}
}
int main()
{
	int id;
	cout<<"Please input ID of Shape: ";
	while(cin>>id)
{	switch(id)
	{
		case 1:for(int i=1;i<=5;i++)
					DrawLine('*',i);break;
		case 2:for(int i=0;i<4;i++)
					DrawLine('*',6);break;
		case 3:DrawLine3();break; 
		default:cout<<"Error!"<<endl;
	}
	}
 } 
