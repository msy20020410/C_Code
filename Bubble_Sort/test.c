#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NUM 8	//输入数字的个数
void Bubble_Sort(int*arr)
{
	int i = 0;
	for (i = 0; i < NUM ; i++)	//总排序的趟数
	{
		int j = 0;
		for (j = 0; j < NUM - 1 - i;j++)	//每趟的操作
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
	printf("请输入%d数个数字，我们将它按升序排序：\n>",NUM);
	int i = 0;
	for (i = 0; i < NUM; i++)	//输入数字
	{
		scanf("%d", &arr[i]);
	}
	Bubble_Sort(arr);
	int j = 0;
	for (j = 0; j < NUM; j++)	//打印
	{
		printf("%d ", arr[j]);
	}
	return 0;
}