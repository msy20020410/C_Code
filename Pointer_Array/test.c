#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };//存放数组
	int i = 0;
	for (i = 0; i < 3; i++)			//三个数组
	{
		int j = 0;
		for (j = 0; j < 5; j++)		//每个数组里有5个元素
		{
			printf("%d ", *(parr[i] + j));	//打印第一个数组的每个元素	
		}
		printf("\n");
	}
	return 0;
}