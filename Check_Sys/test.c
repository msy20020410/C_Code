#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//判断当前机器的内存存储方式（大端？小端？）
//返回1：小端
//返回0：大端
int Check_Sys()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//精简版
//int Check_Sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

int main()
{
	int ret = Check_Sys();
	if (ret == 1)
	{
		printf("小端模式\n");
	}
	else
	{
		printf("大端模式\n");
	}
	
	return 0;
}