#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
#include<assert.h>

void reverse(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left < right)
	{
		char tmp;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
//用函数实现字符串的逆序
int main()
{
	char arr[256] = { 0 };
	//scanf("%s", arr);	//有缺陷遇到空格就不读入了
	gets(arr);			//解决方法：用gets
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}