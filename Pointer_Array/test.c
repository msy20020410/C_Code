#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };//�������
	int i = 0;
	for (i = 0; i < 3; i++)			//��������
	{
		int j = 0;
		for (j = 0; j < 5; j++)		//ÿ����������5��Ԫ��
		{
			printf("%d ", *(parr[i] + j));	//��ӡ��һ�������ÿ��Ԫ��	
		}
		printf("\n");
	}
	return 0;
}