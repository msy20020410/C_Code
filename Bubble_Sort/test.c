#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NUM 8	//�������ֵĸ���
void Bubble_Sort(int*arr)
{
	int i = 0;
	for (i = 0; i < NUM ; i++)	//�����������
	{
		int j = 0;
		for (j = 0; j < NUM - 1 - i;j++)	//ÿ�˵Ĳ���
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[NUM] = { 0 };
	printf("������%d�������֣����ǽ�������������\n>",NUM);
	int i = 0;
	for (i = 0; i < NUM; i++)	//��������
	{
		scanf("%d", &arr[i]);
	}
	Bubble_Sort(arr);
	int j = 0;
	for (j = 0; j < NUM; j++)	//��ӡ
	{
		printf("%d ", arr[j]);
	}
	return 0;
}