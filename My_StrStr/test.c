#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<assert.h>
char* My_StrStr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	if (*p2 == '\0')
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//�ҵ��Ӵ�
		}
		if (*s1 == '\0')
		{
			return NULL;//��ǰ����
		}
		cur++;
	}
	return NULL;//�Ҳ����Ӵ�

}
//�����ַ������Ӵ���
int main()
{
	char* p1 = "msypjjmylove";
	char* p2 = "pjj";
	char* ret = My_StrStr(p1, p2);
	if (ret == NULL)
	{
		printf("û���ҵ��Ӵ���\n");
	}
	else
	{
		printf("�ҵ���->:%s\n", ret);
	}
	return 0;
}