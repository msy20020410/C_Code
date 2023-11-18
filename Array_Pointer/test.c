#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print(int (*arr)[5],int row,int col)//(*arr):它是指针
{										//(*arr)[5]：首元素地址（第一行的名字）,每个里面有五个元素
	int i = 0;							//int (*arr)[5]:整型的数组指针
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ",arr[i][j]);
			//三种等价的写法
			//printf("%d ",*(arr[i]+j));
			//printf("%d ", *(*(arr+i)+j));
			//printf("%d ", (*(arr+i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };//二维数组
	print(arr, 3, 5);
	return 0;
}