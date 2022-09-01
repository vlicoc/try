#include<iostream>
using namespace std;
struct date{
	int year ;
	int mouth;
	int day;
};
date d;
int judgeyear(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0))
	return 1;
	else
	return 0;
 } 
 
 int judgemouth(int mouth)
 {
 	if((mouth<8&&mouth%2!=0)||(mouth>7&&mouth%2==0))
 	return 31;
 	else 
 	  	if(mouth==2)
		   if(judgeyear(d.year))
 	  		return 29;
 	  		else 
 	  		return 28;
 	  	else 
 	  	return 30;
 }
int main()
{
	int ans=0;
	scanf("%d%d%d",&d.year ,&d.mouth ,&d.day );
	for(int i=1;i<=d.mouth-1;i++)
	ans+=judgemouth(i);
	cout<<"The day is the "<<ans+d.day <<" day"<<endl;
	return 0;
 } 
