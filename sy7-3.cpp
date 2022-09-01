#include<iostream>
using namespace std;
struct student{
	long long id;//学号 
	string name;//姓名 
	double score;//成绩 
	string others;//备注 
	student *next; 
};
student *p,*head,*b,*a;

student* found(student *p,double a)	//找出新节点应该插入的位置（由小到大） 
{									//并返回指向比新节点小的节点的上一个节点的指针 
	while(p->next !=NULL)
	{
		if(p->next ->score >a)
			p=p->next;
		else 
			break; 
	}
	return p;
}

void inputlist(student **a,student **b)//插入新节点 
{
	student *s=*a,*p=*b;
	s->next=p->next ;
	p->next =s; 
}

void input(int n){						//输入函数 
	head=NULL;
	for(int i=0;i<n;i++)
	{
		student *s=new student;
		cin>>s->id >>s->name>>s->score >>s->others;
		
		if(i==0) {		 		//处理第一个头节点 
		head=s;
		s->next =NULL;
		continue;	
		}
		
		if(head->score <s->score )	//当新节点比头节点还要大时，新节点做头节点 
		{							
			s->next =head;
			head=s;
			continue;
		}
		
		p=found(head,s->score );//找插入位置 
		inputlist(&s,&p); 
	 } 
} 

void output(student *head)			//从当前节点开始数出后面的数据 
{
	student *p=head;
	while(p!=NULL)
	{
		cout<<p->id <<" "<<p->name<<" "<<p->score<<" " <<p->others <<endl;
		p=p->next ; 
	}
}

void clear()						//空间释放 
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
	cout<<"请输入班级人数："<<endl;
	cin>>n;
	
	cout<<"请输入学生信息(学号，姓名，成绩，备注)："<<endl;
	input(n);
	
	cout<<endl<<"排序后的学生成绩为："<<endl; 
	output(head);
	
	cout<<"请输入要查询的分数："<<endl;
	cin>>m;
	
	cout<<endl<<m<<"分一下的有："<<endl; 
	student *q=found(head,m);
	output(q->next );
	cout<<endl<<m<<"分以上的有："<<endl;
	a=head;
	while(a!=q->next )
	{
		cout<<a->id <<" "<<a->name<<" "<<a->score<<" " <<a->others <<endl;
		a=a->next;
	}
	
	clear();
	return 0;
 } 
