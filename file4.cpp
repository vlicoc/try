#include<cstring>
#include <iostream>

void filtercopy(FILE *fp,char *q,int len)
{
	//FILE *p=*fp;
	
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
	char a[100] = { 0 };
	int len=0;
	if((fopen_s(&fq,"D:\\abc\\source.txt","r"))!=0)
	{
		printf("File can not open!\n");
		exit(0);
	}
	else
	{
		if (fgets(a, sizeof(a), fq) != 0)
		{
			len = strlen(a);
			printf("%d%s\n", len, a);
		}//���ļ� 
		else
		{
			exit(0);
		}
	}

	if ( (fopen_s(&fp, "D:\\abc\\target.txt", "w+")) != 0)
	{
		printf("File can not open!\n");
		exit(0);
	}
	else {
		filtercopy(fp, a, len);//д 
		printf("�ļ���target.txt�ɹ����ƣ�\n");

	}
	return 0; 
 }
