#include<stdio.h>
int My_Strcmp(const char*p1,const char*p2)
{
	while (*p1 == *p2)//���
	{
		if (*p1== '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	if (*p1 > *p2)//�Ƚϴ�С
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
//VS������
//p1>p2����1
//p1<p2����-1
//p1=p2����0
int main()
{
	//���������ַ�ָ�롪���������޸�
	char* p1 = "msy";
	char* p2 = "pjj";
	int ret=My_Strcmp(p1, p2);
	printf("ret=%d\n", ret);
	return 0;
}