#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
int My_Strlen(const char*arr)
{
	assert(arr != NULL);//保证指针的有效性
	int i = 0;
	int count = 0;
	while (*arr != '\0')
	{
		if (*arr != '\0')
		{
			count++;
			arr++;
		}
	}
	return count;
}
int main()
{
	int len = 0;
	char arr[] = "msy love pjj";
	len=My_Strlen(arr);
	printf("一共有%d个字符!\n",len);
}