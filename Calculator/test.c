#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("****1.Sum*******\n");
	printf("****2.Sub*******\n");
	printf("****3.Mul*******\n");
	printf("****4.Div*******\n");
	printf("****5.Exit******\n");
}
int Sum(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//���ú���ָ�����飬ʵ�ּ��������ܣ�ת�Ʊ�
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*pfArr[])(int, int) = { 0,Sum,Sub,Mul,Div };//������һ������ָ������
	do
	{
		int ret = 0;
		menu();
		printf("��ѡ��>\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������������������>\n");
			scanf("%d%d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳���\n");
		}
		else
		{
			printf("��������\n");
		}
		
	} while (input);
	return 0;
}

