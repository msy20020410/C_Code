#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�жϵ�ǰ�ڴ洢��ģʽ����С�ˣ�
int main()
{
	int x = 1;
	int y = *(char*)&x;
	if (y == 1)
	{
		printf("С�˴洢��\n");
	}
	else
	{
		printf("��˴洢��\n");
	}
	return 0;
}