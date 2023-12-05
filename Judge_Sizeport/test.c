#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//判断当前内存储存模式（大小端）
int main()
{
	int x = 1;
	int y = *(char*)&x;
	if (y == 1)
	{
		printf("小端存储！\n");
	}
	else
	{
		printf("大端存储！\n");
	}
	return 0;
}