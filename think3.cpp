#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct student {
	int num;
	char name[50];
	int year;
	int mouth;
	int day;
	student *next;
}; 
int main()
{
	FILE *fp;
	if((fp=fopen("D:\\sy\\StudentDate1.txt","w+"))==NULL)//打开文件 
	{
		cout<<"File can not open！"<<endl;
		exit(0); 
	}
	student *head,*p,*q; 
	int n;
	cout<<"请输入学生人数："<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		p=new student;
		cin>>p->num >>p->name >>p->year >>p->year>>p->mouth >>p->day ;//信息输入 
		if(fwrite(p,sizeof(student),1,fp)!=1)//信息读入 
			cout<<"File write error!"<<endl;
		if(i==0)						//头节点 
		{
			head=p;
			q=head;	
			continue;
		}
		q->next =p;    
		q=p;
	}
	fclose(fp);
	p->next =NULL;
	q=head;
	while(q!=NULL)   //存储空间释放 
	{
		p=q->next ;
		delete q;
		q=p;
	return 0;
	}
}

