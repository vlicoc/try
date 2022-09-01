#include<iostream>
using namespace std;
void newcopy(char *OLD,char *NEW);
int oldlength;

int main()
{
	char oldarray[]="I Am A Student!";
	char newarray[20];
	oldlength=sizeof(oldarray);
	newcopy(oldarray,newarray);
	int i=0;
	while(newarray[i++]!='\0')
	i++;
	for(int j=0;j<i;j++)
	cout<<newarray[j];
	return 0;
}

void newcopy(char *OLD,char *NEW)
{
	int j=0;
	for(int i=0;i<oldlength;i++) 
	{
		if(*(OLD+i)<='z'&&*(OLD+i)>='a')
		;
		else
		{
			*(NEW+j)=*(OLD+i);
			j++;
		}
	}
	*(NEW+j)='\0';
}
