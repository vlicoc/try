#include<iostream>
#include<stdlib.h>
using namespace std;
void print();
struct student {
	int num;
	char name[20];
	int year;
	int mouth;
	int day;
};
student stu[10];
int n;

int main()
{
	
	FILE *fp;
	cout<<"请输入学生人数："<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].num >>stu[i].name>>stu[i].year >>stu[i].mouth >>stu[i].day ; 
	}
	if((fp=fopen("D:\\sy\\studentdate.txt","w+"))==NULL)
	{
		cout<<"File can not open!\n"<<endl;
		exit(0);
	}
	for(int i=0;i<n;i++)
		if(fwrite(&stu[i],sizeof(student),1,fp)!=1)
			cout<<"File write error!\n"<<endl;	
	fclose(fp);
	fp=NULL;
	print();
	return 0;
 } 
 void print ()
 {
 	cout<<endl<<"num\tname\tbirthday";
 	for(int i=0;i<n;i++)
 	{
 		cout<<endl<<stu[i].num <<"\t"<<stu[i].name<<"\t"<<stu[i].year <<"-"<<stu[i].mouth <<"-"<<stu[i].day ;
	 }
 }
