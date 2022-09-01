#include<iostream>
using namespace std;
struct student{
	long long id;//ѧ�� 
	string name;//���� 
	double score;//�ɼ� 
	string others;//��ע 
	student *next; 
};
student *p,*head,*b,*a;

student* found(student *p,double a)	//�ҳ��½ڵ�Ӧ�ò����λ�ã���С���� 
{									//������ָ����½ڵ�С�Ľڵ����һ���ڵ��ָ�� 
	while(p->next !=NULL)
	{
		if(p->next ->score >a)
			p=p->next;
		else 
			break; 
	}
	return p;
}

void inputlist(student **a,student **b)//�����½ڵ� 
{
	student *s=*a,*p=*b;
	s->next=p->next ;
	p->next =s; 
}

void input(int n){						//���뺯�� 
	head=NULL;
	for(int i=0;i<n;i++)
	{
		student *s=new student;
		cin>>s->id >>s->name>>s->score >>s->others;
		
		if(i==0) {		 		//�����һ��ͷ�ڵ� 
		head=s;
		s->next =NULL;
		continue;	
		}
		
		if(head->score <s->score )	//���½ڵ��ͷ�ڵ㻹Ҫ��ʱ���½ڵ���ͷ�ڵ� 
		{							
			s->next =head;
			head=s;
			continue;
		}
		
		p=found(head,s->score );//�Ҳ���λ�� 
		inputlist(&s,&p); 
	 } 
} 

void output(student *head)			//�ӵ�ǰ�ڵ㿪ʼ������������� 
{
	student *p=head;
	while(p!=NULL)
	{
		cout<<p->id <<" "<<p->name<<" "<<p->score<<" " <<p->others <<endl;
		p=p->next ; 
	}
}

void clear()						//�ռ��ͷ� 
{
	b=head;
	while(b!=NULL)
	{
		
		head=head->next;
		delete b;
		b=head;
	}
	head=NULL;
}

int main()
{
	int n,m;
	cout<<"������༶������"<<endl;
	cin>>n;
	
	cout<<"������ѧ����Ϣ(ѧ�ţ��������ɼ�����ע)��"<<endl;
	input(n);
	
	cout<<endl<<"������ѧ���ɼ�Ϊ��"<<endl; 
	output(head);
	
	cout<<"������Ҫ��ѯ�ķ�����"<<endl;
	cin>>m;
	
	cout<<endl<<m<<"��һ�µ��У�"<<endl; 
	student *q=found(head,m);
	output(q->next );
	cout<<endl<<m<<"�����ϵ��У�"<<endl;
	a=head;
	while(a!=q->next )
	{
		cout<<a->id <<" "<<a->name<<" "<<a->score<<" " <<a->others <<endl;
		a=a->next;
	}
	
	clear();
	return 0;
 } 
