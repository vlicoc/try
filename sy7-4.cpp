#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void filtercopy(FILE *fp,char *q,int len)
{
	
	
	for(int i=0;i<len;i++)
	{
		if(q[i]>='0'&&q[i]<='9'||q[i]>='a'&&q[i]<='z'||q[i]>='A'&&q[i]<='Z')
		{
			fputc(q[i],fp);
		}
	}
}

int main()
{
	FILE *fq,*fp;//fqָ��source�ļ���fpָ��target�ļ� 
	char a[100];
	int len;
	if((fq=fopen("D:\\sy\\source.txt","r"))==NULL)
	{
		printf("File can not open!\n");
		exit(0);
	}
	if(fgets(a,15,fq)!=NULL)
	{
		len=strlen(a); 
		printf("%d%s\n",len,a);
    }
    if((fp=fopen("D:\\sy\\target.txt","w+"))==NULL)
	{
		printf("File can not open!\n");
		exit(0);
	}
	filtercopy(fp,a,len);
	printf("�ļ���target.txt�ɹ����ƣ�\n");
	fclose(fp);
	fclose(fq);
	return 0; 
 } 
