#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	//�ļ���д��
	FILE* pfWrite = fopen("text.txt", "w");
	if (pfWrite == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	fputc('M', pfWrite);
	fputc('&', pfWrite);
	fputc('P', pfWrite);
	fclose(pfWrite);
	pfWrite = NULL;

	//�ļ��Ķ�ȡ
	FILE* pfRead = fopen("text.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));
	fclose(pfRead);
	pfRead = NULL;
	return 0;
}