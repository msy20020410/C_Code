#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print(int (*arr)[5],int row,int col)//(*arr):����ָ��
{										//(*arr)[5]����Ԫ�ص�ַ����һ�е����֣�,ÿ�����������Ԫ��
	int i = 0;							//int (*arr)[5]:���͵�����ָ��
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ",arr[i][j]);
			//���ֵȼ۵�д��
			//printf("%d ",*(arr[i]+j));
			//printf("%d ", *(*(arr+i)+j));
			//printf("%d ", (*(arr+i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };//��ά����
	print(arr, 3, 5);
	return 0;
}