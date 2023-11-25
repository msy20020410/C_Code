#include<stdio.h>
int My_Strcmp(const char*p1,const char*p2)
{
	while (*p1 == *p2)//相等
	{
		if (*p1== '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	if (*p1 > *p2)//比较大小
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
//VS环境下
//p1>p2返回1
//p1<p2返回-1
//p1=p2返回0
int main()
{
	//两个常量字符指针——即不可修改
	char* p1 = "msy";
	char* p2 = "pjj";
	int ret=My_Strcmp(p1, p2);
	printf("ret=%d\n", ret);
	return 0;
}