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
	printf("---ͼ�����ϵͳ---\n");
	printf("------------------\n");
	printf("-0.�˳�----1.¼��-\n");
	printf("-2.����----3.ɾ��-\n");
	printf("-4.�޸�----5.��ѯ-\n");
	printf("------6.չʾ------\n");
}
void InitList(SqList* L) {
	(L->data) = (BOOK*)malloc(sizeof(BOOK) * MAXSIZE);
	if (L->data != NULL)
	{
		L->len = 0;
		printf("��ʼ���ɹ�!\n");
	}
	else
		printf("��ʼ��ʧ��!\n");
}
void ListEnter(SqList*L) {
	int n,i;
	BOOK e;
	printf(">>��Ҫ¼�뼸���飿\n");
	scanf("%d", &n);
	getchar();
	if (L->len == 0)
	{
		for (i = 0; i < n; i++)
		{
			printf(">>�������%d�������Ϣ:\n", i + 1);
			printf(">>����:\n");
			scanf("%s", e.name);
			getchar();
			printf(">>����:\n");
			scanf("%s", e.type);
			getchar();
			printf(">>�۸�:\n");
			scanf("%d", &(e.price));
			getchar();
			L->data[i] = e;

			L->len++;
		}
		printf(">>¼��ɹ�!\n");
	}
	else
	{
		printf(">>���Ѿ�¼��һ���ˣ��޷��ٴ�¼�룡\n");
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
		printf(">>������Ԫ�أ���¼��Ԫ��Ŷ!\n");
		ListEnter(L);
	}
	else
	{
		do
		{
			printf(">>��ѡ����Ҫ�����λ��:\n");
			scanf("%d", &locate);
			getchar();
			if (locate<1 || locate>L->len + 1)
			{
				printf(">>λ�ò��Ϸ�������������!\n");
				flag = 1;
			}
			else
			{
				printf(">>�����������Ϣ:\n");
				printf(">>����:\n");
				scanf("%s", e.name);
				getchar();
				printf(">>����:\n");
				scanf("%s", e.type);
				getchar();
				printf(">>�۸�:\n");
				scanf("%d", &(e.price));
				getchar();
				for (j = L->len - 1; j >= locate - 1; j--)
				{
					L->data[j+1] = L->data[j];
				}
				L->data[locate - 1] = e;
				L->len++;
				printf(">>����ɹ�!\n");
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
		printf(">>û��Ԫ�ؿ���ɾ��,����¼��Ŷ!\n");
		ListEnter(L);
	}
	else
	{
		do
		{
			ShowList(L);
			printf(">>��Ҫɾ���ڼ���Ԫ��?\n");
			scanf("%d", &locate);
			getchar();
			if (locate<1 || locate>L->len)
			{
				printf(">>�����������������룡\n");
				flag = 1;
			}
			else
			{
				for (j = locate; j <= L->len - 1; j++)
				{
					L->data[j - 1] = L->data[j];
				}
				L->len-=1;
				printf(">>ɾ���ɹ�!\n");
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
		printf(">>û��Ԫ�ؿ����޸�,����¼��Ŷ!\n");
		ListEnter(L);
	}
	else
	{
		do
		{
			ShowList(L);
			printf(">>��Ҫ�޸ĵڼ���Ԫ��?\n");
			scanf("%d", &locate);
			getchar();
			if (locate<1 || locate>L->len)
			{
				printf(">>�����������������룡\n");
				flag = 1;
			}
			else
			{
				do
				{
					printf(">>��Ҫ����ʲô?(����name,type,price����)\n");
					scanf("%s", in);
					getchar();
					if (0 == strcmp("name", in))
					{
						printf(">>����Ҫ�޸�Ϊ��\n");
						scanf("%s", L->data[locate - 1].name);
						getchar();
						printf(">>�޸ĳɹ���\n");
						flag2 = 0;
					}
					else if (0 == strcmp("type", in))
					{
						printf(">>����Ҫ�޸�Ϊ��\n");
						scanf("%s", L->data[locate - 1].type);
						getchar();
						printf(">>�޸ĳɹ���\n");
						flag2 = 0;
					}
					else if (0 == strcmp("price", in))
					{
						printf(">>�۸�Ҫ�޸�Ϊ��\n");
						scanf("%d",&(L->data[locate - 1].price));
						getchar();
						printf(">>�޸ĳɹ���\n");
						flag2 = 0;
					}
					else
					{
						printf(">>������������������:name, type or price\n");
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
		printf(">>û��Ԫ�ؿ����޸�,����¼��Ŷ!\n");
		ListEnter(L);
	}
	else
	{
		do
		{
			printf(">>��Ҫ����ʲô?(����name,type,price����)\n");
			scanf("%s", in);
			getchar();
			if (0 == strcmp("name", in))
			{
				printf(">>�õ�,��������Ҫ�ҵ��������;\n");
				scanf("%s", in2);
				getchar();
				for (i = 0; i <L->len; i++)
				{
					if (0 == strcmp(L->data[i].name, in2))
					{
						printf(">>�ҵ��ˣ�����λ���ڵ�%dλ�ã�\n", i + 1);
						flag2++;
					}
				}
				if (flag2 == 0)
				{
					printf(">>ϵͳû���Ȿ�飡\n");
				}
				flag = 0;
			}
			else if (0==strcmp("type",in))
			{
				printf(">>�õ�,��������Ҫ�ҵ��������;\n");
				scanf("%s", in2);
				getchar();
				for (i = 0; i < L->len; i++)
				{
					if (0 == strcmp(L->data[i].type, in2))
					{
						printf(">>�ҵ��ˣ�����λ���ڵ�%dλ�ã�\n", i + 1);
						flag2++;
					}
				}
				if (flag2 == 0)
				{
					printf(">>ϵͳû���Ȿ�飡\n");
				}
				flag = 0;
			}
			else if (0 == strcmp("price", in))
			{
				printf(">>�õ�,��������Ҫ�ҵ���ļ۸�;\n");
				scanf("%d", &price);
				getchar();
				for (i = 0; i < L->len; i++)
				{
					if (L->data[i].price==price)
					{
						printf(">>�ҵ��ˣ�����λ���ڵ�%dλ�ã�\n", i + 1);
						flag2++;
					}
				}
				if (flag2 == 0)
				{
					printf(">>ϵͳû���Ȿ�飡\n");
				}
				flag = 0;
			}
			else
			{
				printf(">>�����������������룡\n");
				flag = 1;
			}

		} while (flag);
	}
}
void UserIn(SqList* L) {
	int in;
	do {
		printf(">>��ѡ����:\n");
		scanf("%d", &in);
		getchar();
		if (in < 0 || in>6)
		{
			printf(">>��������!����������!\n");
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
	//�˵�
	Menu();
	//��ʼ��
	InitList(&L);
	//�û�ѡ��
	UserIn(&L);
	return 0;
}
