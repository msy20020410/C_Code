#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 5
#define COL 5
int sum_arr(int arr[][COL], int row)
{
	int r, c;
	int tot = 0;
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < COL; c++)
		{
			tot += arr[r][c];
		}
	}
	return tot;
}
int main()
{
	int arr[ROW][COL];
	printf("������%d*%d����:\n", ROW, COL);
	int row, col, i, j;
	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
			scanf("%d", &arr[row][col]);
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("���ڰ������Ŷ��\n");
	int ret = sum_arr(arr, ROW);
	printf("�˾���ĺ�Ϊ;:%d!\n", ret);
	return 0;
}