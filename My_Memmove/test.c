#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<assert.h>

void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest < src)
	{
		//前->后
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//后->前
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main()
{

	int arr[] = { 1,2,3,4,5,6,7,8, };
	my_memmove(arr, arr + 2, 12);
	return 0;
}
