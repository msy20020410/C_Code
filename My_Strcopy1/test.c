#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void my_strcpy(char* des, char* src)
{
	while (*src != '\0')
	{
		*des = *src;
		src++;
		des++;
	}
	*des = *src;				//对\0的打印
}
//模拟实现strcpy
int main()
{
	char arr1[10] = "masy";		//m a s y \0
	char arr2[10] = "pjj";		//p j j \0
	my_strcpy(arr1, arr2);		//字符串中\0也会复制，并且是结束标志
	printf("%s\n", arr1);
	return 0;
}



//完美版
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* des, const char* src)
//{
//	char* ret = des;
//	assert(des != NULL);//断言
//	assert(src != NULL);//断言
//	while (*des++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[10] = "masy";		
//	char arr2[10] = "pjj";	
//	my_strcpy(arr1, arr2);		
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}