#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NMAX 100
#define TMAX 100
#define MAXSIZE 100
typedef struct {
	char name[NMAX];
	char type[TMAX];
	int price;
}BOOK;
typedef struct {
	BOOK* data;
	int len;
}SqList;
void Menu()
{
	printf("---图书管理系统---\n");
	printf("------------------\n");
	printf("-0.退出----1.录入-\n");
	printf("-2.插入----3.删除-\n");
	printf("-4.修改----5.查询-\n");
	printf("------6.展示------\n");
}
void InitList(SqList* L) {
	(L->data) = (BOOK*)malloc(sizeof(BOOK) * MAXSIZE);
	if (L->data != NULL)
	{
		L->len = 0;
		printf("初始化成功!\n");
	}
	else
		printf("初始化失败!\n");
}
void ListEnter(SqList*L) {
	int n,i;
	BOOK e;
	printf(">>您要录入几本书？\n");
	scanf("%d", &n);
	getchar();
	if (L->len == 0)
	{
		for (i = 0; i < n; i++)
		{
			printf(">>请输入第%d本书的信息:\n", i + 1);
			printf(">>书名:\n");
			scanf("%s", e.name);
			getchar();
			printf(">>种类:\n");
			scanf("%s", e.type);
			getchar();
			printf(">>价格:\n");
			scanf("%d", &(e.price));
			getchar();
			L->data[i] = e;

			L->len++;
		}
		printf(">>录入成功!\n");
	}
	else
	{
		printf(">>您已经录入一次了，无法再次录入！\n");
	}
}
void ShowList(SqList* L) {
	int i;
	printf("---------------------------------------------------------------------\n");
	for (i = 0; i < L->len; i++)
	{
		printf("%-20s%-10s%-10d\n", L->data[i].name, L->data[i].type, L->data[i].price);
	}
	printf("---------------------------------------------------------------------\n");
}
void ListInsert(SqList*L) {
	int locate,j,flag;
	BOOK e;
	if (L->len == 0)
	{
		printf(">>表中无元素，先录入元素哦!\n");
		ListEnter(L);
	}
	else
	{
		do
		{
			printf(">>请选择您要插入的位置:\n");
			scanf("%d", &locate);
			getchar();
			if (locate<1 || locate>L->len + 1)
			{
				printf(">>位置不合法，请重新输入!\n");
				flag = 1;
			}
			else
			{
				printf(">>请输入书的信息:\n");
				printf(">>书名:\n");
				scanf("%s", e.name);
				getchar();
				printf(">>种类:\n");
				scanf("%s", e.type);
				getchar();
				printf(">>价格:\n");
				scanf("%d", &(e.price));
				getchar();
				for (j = L->len - 1; j >= locate - 1; j--)
				{
					L->data[j+1] = L->data[j];
				}
				L->data[locate - 1] = e;
				L->len++;
				printf(">>插入成功!\n");
				flag = 0;
			}
		} while (flag);
	}
}
void ListDel(SqList* L) {
	int locate;
	int flag,j;
	if (L->len == 0)
	{
		printf(">>没有元素可以删除,请先录入哦!\n");
		ListEnter(L);
	}
	else
	{
		do
		{
			ShowList(L);
			printf(">>您要删除第几个元素?\n");
			scanf("%d", &locate);
			getchar();
			if (locate<1 || locate>L->len)
			{
				printf(">>输入有误，请重新输入！\n");
				flag = 1;
			}
			else
			{
				for (j = locate; j <= L->len - 1; j++)
				{
					L->data[j - 1] = L->data[j];
				}
				L->len-=1;
				printf(">>删除成功!\n");
				flag = 0;
			}
		} while (flag);

	}
}
void ElemAlter(SqList* L)
{
	int locate;
	int flag, j,flag2;
	char in[NMAX];
	if (L->len == 0)
	{
		printf(">>没有元素可以修改,请先录入哦!\n");
		ListEnter(L);
	}
	else
	{
		do
		{
			ShowList(L);
			printf(">>您要修改第几个元素?\n");
			scanf("%d", &locate);
			getchar();
			if (locate<1 || locate>L->len)
			{
				printf(">>输入有误，请重新输入！\n");
				flag = 1;
			}
			else
			{
				do
				{
					printf(">>您要更改什么?(请用name,type,price输入)\n");
					scanf("%s", in);
					getchar();
					if (0 == strcmp("name", in))
					{
						printf(">>名字要修改为？\n");
						scanf("%s", L->data[locate - 1].name);
						getchar();
						printf(">>修改成功！\n");
						flag2 = 0;
					}
					else if (0 == strcmp("type", in))
					{
						printf(">>种类要修改为？\n");
						scanf("%s", L->data[locate - 1].type);
						getchar();
						printf(">>修改成功！\n");
						flag2 = 0;
					}
					else if (0 == strcmp("price", in))
					{
						printf(">>价格要修改为？\n");
						scanf("%d",&(L->data[locate - 1].price));
						getchar();
						printf(">>修改成功！\n");
						flag2 = 0;
					}
					else
					{
						printf(">>输入有误，请重新输入:name, type or price\n");
						flag2 = 1;
					}
				} while (flag2);
				flag = 0;
			}
		} while (flag);
	}
}
void ElemSearch(SqList*L) {
	char in[NMAX];
	char in2[NMAX];
	int i,price,flag,flag2=0;
	if (L->len == 0)
	{
		printf(">>没有元素可以修改,请先录入哦!\n");
		ListEnter(L);
	}
	else
	{
		do
		{
			printf(">>您要依据什么?(请用name,type,price输入)\n");
			scanf("%s", in);
			getchar();
			if (0 == strcmp("name", in))
			{
				printf(">>好的,请输入您要找的书的名字;\n");
				scanf("%s", in2);
				getchar();
				for (i = 0; i <L->len; i++)
				{
					if (0 == strcmp(L->data[i].name, in2))
					{
						printf(">>找到了，它的位置在第%d位置！\n", i + 1);
						flag2++;
					}
				}
				if (flag2 == 0)
				{
					printf(">>系统没有这本书！\n");
				}
				flag = 0;
			}
			else if (0==strcmp("type",in))
			{
				printf(">>好的,请输入您要找的书的种类;\n");
				scanf("%s", in2);
				getchar();
				for (i = 0; i < L->len; i++)
				{
					if (0 == strcmp(L->data[i].type, in2))
					{
						printf(">>找到了，它的位置在第%d位置！\n", i + 1);
						flag2++;
					}
				}
				if (flag2 == 0)
				{
					printf(">>系统没有这本书！\n");
				}
				flag = 0;
			}
			else if (0 == strcmp("price", in))
			{
				printf(">>好的,请输入您要找的书的价格;\n");
				scanf("%d", &price);
				getchar();
				for (i = 0; i < L->len; i++)
				{
					if (L->data[i].price==price)
					{
						printf(">>找到了，它的位置在第%d位置！\n", i + 1);
						flag2++;
					}
				}
				if (flag2 == 0)
				{
					printf(">>系统没有这本书！\n");
				}
				flag = 0;
			}
			else
			{
				printf(">>输入有误，请重新输入！\n");
				flag = 1;
			}

		} while (flag);
	}
}
void UserIn(SqList* L) {
	int in;
	do {
		printf(">>请选择功能:\n");
		scanf("%d", &in);
		getchar();
		if (in < 0 || in>6)
		{
			printf(">>输入有误!请重新输入!\n");
			Menu();
		}
		else
		{
			switch (in)
			{
			case 0:
				break;
			case 1:
				ListEnter(L);
				Menu();
				break;
			case 2:
				ListInsert(L);
				Menu();
				break;
			case 3:
				ListDel(L);
				Menu();
				break;
			case 4:
				ElemAlter(L);
				Menu();
				break;
			case 5:
				ElemSearch(L);
				Menu();
				break;
			case 6:
				ShowList(L);
				Menu();
				break;
			default:
				break;
			}
		}
	} while (in);
}
int main()
{
	SqList L;
	//菜单
	Menu();
	//初始化
	InitList(&L);
	//用户选择
	UserIn(&L);
	return 0;
}
