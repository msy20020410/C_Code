#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<stdlib.h>

int cmp_int(const void* e1, const void* e2)
{
	return(*(int*)e1 - *(int*)e2);
}

int cmp_float(const void* e1, const void* e2)
{
	return ((int)(*(float*)e1 - *(float*)e2));
}
void test1()//整型排序
{
	int arr[] = { 3,8,9,4,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}

void test2()//浮点排序
{
	float arr[] = { 1.0, 8.0, 4.0, 9.0, 6.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
}

typedef struct Stu
{
	char name[10];
	char sex[10];
	int age;
}Stu;
cmp_by_age(const void* e1, const void* e2)
{
	return ((Stu*)e1)->age - ((Stu*)e2)->age;
}
test3()//结构体排序
{
	Stu s1 = { "裴佳佳","女",21 };
	Stu s2 = { "马士玉","男",22 };
	Stu s[] = { s1,s2 };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_by_age);
}
int main()
{
	test1();
	printf("\n");
	printf("\n");
	printf("\n");
	test2();
	printf("\n");
	printf("\n");
	printf("\n");
	test3();
	return 0;
}