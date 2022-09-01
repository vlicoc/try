// Circle.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <graphics.h>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
	int i;
	int newCircleCenterX[100];
	int newCircleCenterY[100];
	int newCircleRadius[100];
	int radiusMax = 50;
	int radiusMin = 8;

	initgraph(600, 600);  //width = 600, height = 600
	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++)
	{
		newCircleCenterX[i] = rand() % 600;
		newCircleCenterY[i] = rand() % 600;
		newCircleRadius[i] = rand() % (radiusMax - radiusMin + 1) + radiusMin;

		setlinestyle(PS_SOLID, 3);
		setlinecolor(RGB(255, 255, 255));
		setfillcolor(GREEN);
		fillcircle(newCircleCenterX[i], newCircleCenterY[i], newCircleRadius[i]);
		Sleep(100);
	}
	
	_getch();
	closegraph();
	return 0;

}