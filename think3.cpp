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
	if((fp=fopen("D:\\sy\\StudentDate1.txt","w+"))==NULL)//���ļ� 
	{
		cout<<"File can not open��"<<endl;
		exit(0); 
	}
	student *head,*p,*q; 
	int n;
	cout<<"������ѧ��������"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		p=new student;
		cin>>p->num >>p->name >>p->year >>p->year>>p->mouth >>p->day ;//��Ϣ���� 
		if(fwrite(p,sizeof(student),1,fp)!=1)//��Ϣ���� 
			cout<<"File write error!"<<endl;
		if(i==0)						//ͷ�ڵ� 
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
	while(q!=NULL)   //�洢�ռ��ͷ� 
	{
		p=q->next ;
		delete q;
		q=p;
	return 0;
	}
}

