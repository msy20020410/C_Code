#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void to_binary(input)
{
	int r;
	r = input % 2;
	if (input >= 2)
	{
		to_binary(input / 2);
	}
	putchar(r == 0 ? '0' : '1');
	return 0;
}
int main()
{
	int input;
	printf("请输入一个十进制的数！\n");
	while (scanf("%d", &input) == 1)
	{
		to_binary(input);
		printf("\n");
	}
	return 0;
}