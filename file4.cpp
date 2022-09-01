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
	FILE *fq,*fp;//fq指向source文件，fp指向target文件 
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
		}//读文件 
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
		filtercopy(fp, a, len);//写 
		printf("文件：target.txt成功复制！\n");

	}
	return 0; 
 }
