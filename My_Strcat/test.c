#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//找到斜杠0
	while (*dest != '\0')
	{
		dest++;
	}
	//strcpy
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "msy";
	char arr2[] = " love pjj";
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
