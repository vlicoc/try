#include<iostream>

using namespace std;
struct student {
	int id;
	char name[20];
	int score1,score2,score3;
	double score;
};
student stu[10];

void input(int i)
{
	cin>>stu[i].id >>stu[i].name >>stu[i].score1 >>stu[i].score2 >>stu[i].score3 ;
}

void average()
{
	
	for(int i=0;i<10;i++)
	{
		int sum=0;
		sum+=stu[i].score1 +stu[i].score2 +stu[i].score3 ;
		stu[i].score =sum*1.0/3;
	}
}

int max()
{
	int max=0;
	for(int i=1;i<10;i++)
		if(stu[i].score>stu[max].score )
			max=i ;
	return max; 
}
int main()
{
	for(int i=0;i<10;i++)
	{
		input(i);
	}
	average();
	cout<<endl<<"每位学生的平均成绩为："<<endl;
	for(int i=0;i<10;i++)
	{
		printf("%d %s %.2f\n",stu[i].id,stu[i].name,stu[i].score);
	 } 
	cout<<endl<<"最高分的同学："<<endl; 
	int j=max();
	printf("%d %s %d %d %d %.2f\n",stu[j].id,stu[j].name,stu[j].score1,stu[j].score2,stu[j].score3,stu[j].score)	;
	return 0;
}
