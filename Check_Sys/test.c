#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�жϵ�ǰ�������ڴ�洢��ʽ����ˣ�С�ˣ���
//����1��С��
//����0�����
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
//�����
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
		printf("С��ģʽ\n");
	}
	else
	{
		printf("���ģʽ\n");
	}
	
	return 0;
}